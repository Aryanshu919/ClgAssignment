#include <bits/stdc++.h>
#include<unordered_map>
#include<vector>
using namespace std;

claa

vector<int> twoSum(vector<int>& nums, int target) {

    vector<int> res;
    unordered_map<int, int> ele;

    for (int i = 0; i < nums.size(); ++i) {

   	 if (ele.find(target - nums[i]) != ele.end()) {

   		 
   		 res.emplace_back(ele[target - nums[i]]);
          
   		 res.emplace_back(i);
   		 return res;
   	 }

   	 ele[nums[i]] = i;
    }

    return {-1,-1};
}




int main()
{
  vector<int> nums{2,7,11,15};
vector<int>res=twoSum(nums,9);
for(int i=0;i<res.size();i++)
{
    cout<<res[i]<<endl;
}
return 0;

}
