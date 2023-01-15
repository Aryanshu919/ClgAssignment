#include<iostream>
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

int goodPair(vector<int>& nums){

  
    
  int cnt = 0;
    unordered_map<int, int> ele;
    for (int i: nums) 
    {
       cnt += ele[i]++;
    }
  
    return cnt;
    
}
int main(){
    vector<int> arr{1,2,3,1,1,3};
    int ans = goodPair(arr);
    cout << ans;

    return 0;
}
