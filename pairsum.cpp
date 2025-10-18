//pairsum problem 

#include<iostream>
#include<vector>
#include<climits>
using namespace std;
// mores voting algorithm 
int majorityElement(vector<int>& nums) {
    int freq = 0;
    int ans = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (freq == 0) {
            ans = nums[i];
        }

        if (nums[i] == ans) {
            freq++;
        } else {
            freq--;
        }

    }
    return ans;
}

int main()

{
    vector<int>nums={ 1,1,1,2,2};

    int target=13;
    cout<<"maximum occuring element is :"<<majorityElement(nums);
    return 0;
}