#include <bits/stdc++.h>
using namespace std;
    
int main() {
    int t; cin>>t;
    while(t--) {
        int n, tmp; cin>>n;
        vector<int> nums; while(n--) {cin>>tmp; nums.push_back(tmp);}
        int same;
        if(nums[0]==nums[1] || nums[1]==nums[2]) same = nums[1];
        else if(nums[0]==nums[1] || nums[0]==nums[2]) same = nums[0];
        else if(nums[0]==nums[2] || nums[1]==nums[2]) same = nums[2];
        for(int i=0; i!=nums.size(); i++) {
            if(nums[i]!=same) {cout<<i+1<<endl; break;}
        }
    }
}