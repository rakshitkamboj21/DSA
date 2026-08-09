#include<iostream>
#include<vector>
using namespace std;

int kadane(vector<int>& a) {
    int max_sum = a[0];
    int current_sum = a[0];
    for (int i = 1; i < a.size(); i++) {
        current_sum = max(a[i], current_sum + a[i]);
        max_sum = max(max_sum, current_sum);
    }
    return max_sum;
}

int main() {
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(k==0)
    {
        cout<<kadane(a);
        return 0;
    }
    int ans=kadane(a);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            swap(a[i],a[j]);
        }
        ans=max(ans,kadane(a));
    }
    cout<<ans;
    return 0;
}