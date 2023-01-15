#include<iostream>
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

int firstFR(vector<int>& nums){

  
    unordered_map<int,int> ele;
    for(int i =0; i<nums.size(); i++){
            ele[nums[i]]++;  
    }
    for(int i =0 ; i< nums.size(); i++){
        if(ele[nums[i]] > 1) return nums[i];
    }
    return -1;
}
int main(){
    vector<int> arr{10, 5, 3, 4, 3, 5, 6};
    int ans = firstFR(arr);
    cout << ans;

    return 0;
}
