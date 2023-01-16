#include<unordered_set>
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set<int>ans;
        for(auto i=0;i<nums.size();i++)
        {
            ans.insert(nums[i]);
        }
        for(auto i:ans)
        {
            if(ans.find(original)!=ans.end())
            {
                 original=original*2;
            }
            else
            {
               return original;
            }
        }
        return original;
    } 
};
