#include <iostream>
#include <vector>
#include <omp.h>

using namespace std;

class Graph {
    int V;
    vector<vector<int>> adj;

public:
    Graph(int V) {
        this->V = V;
        adj.resize(V);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void parallelBFS(int start) {
        vector<bool> visited(V, false);
        vector<int> frontier, next_frontier;

        frontier.push_back(start);
        visited[start] = true;

        cout << "Parallel BFS Traversal: ";

        while (!frontier.empty()) {
            next_frontier.clear();

#pragma omp parallel
            {
                vector<int> local_next;

#pragma omp for nowait
                for (int i = 0; i < frontier.size(); i++) {
                    int node = frontier[i];

#pragma omp critical
                    cout << node << " ";

                    for (int neighbor : adj[node]) {
                        if (!visited[neighbor]) {
                            bool added = false;

#pragma omp critical
                            {
                                if (!visited[neighbor]) {
                                    visited[neighbor] = true;
                                    added = true;
                                }
                            }

                            if (added) {
                                local_next.push_back(neighbor);
                            }
                        }
                    }
                }

#pragma omp critical
                next_frontier.insert(next_frontier.end(),
                                     local_next.begin(),
                                     local_next.end());
            }

            frontier = next_frontier;
        }

        cout << endl;
    }
};

int main() {
    Graph g(7);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 5);
    g.addEdge(2, 6);

    g.parallelBFS(0);

    return 0;
}