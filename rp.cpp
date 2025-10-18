#include<iostream>
#include<vector>
#include<climits>
using namespace std;

pair<int, int> findTwoSum(vector<int> &ans, int target) {
    for(int i = 0; i < ans.size(); i++) {
        for(int j=i+1 ; j < ans.size(); j++) {
            if(ans[i] + ans[j] == target) {
                return {i, j};  // Return indices as a pair
            }
        }
    }
    return {-1, -1};  // Not found
}
int maximumarray(int arr[],int size)
{
    int maximum=INT_MIN;
    for (int i=0;i<size;i++)
    {
        if(arr[i]>maximum)
        {
            maximum=arr[i];
        }
    }
    return maximum;
}

int main() {
    vector<int> ans = {1, 2, 3, 4, 5};
    int target = 9;
   int arr[] = {5, 12, 7, 3, 9};
    int size=5;
    cout<<"maximum of an array is : "<<maximumarray(arr,size)<<endl;
    pair<int, int> result = findTwoSum(ans, target);
    cout << "answer is: " << result.first << " and " << result.second << endl;
    return 0;
}
