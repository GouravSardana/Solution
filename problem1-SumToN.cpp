#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int>result;
    unordered_map<int,int>m;
    for(int i=0;i<nums.size();i++){
        int diff = target - nums[i];
        if(m.find(diff)!=m.end()){
            result.push_back(i);
            result.push_back(m[diff]);
        }
        m[nums[i]] = i;
    }
    return result;
}
int main() {

    /*
    input format -
    first line contain the size of the array. Next line contain n seperated int and last line contain target 
    5
    1 2 3 4 5
    3
    */

    //size of the vector
	int n;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        int samp;
        cin>>samp;
        nums.push_back(samp);
    }
    //target
    int target;
    cin>>target;
    vector<int>result = twoSum(nums, target);
    for(int x:result){
        cout<<x<<" ";
    }
	return 0;
}
