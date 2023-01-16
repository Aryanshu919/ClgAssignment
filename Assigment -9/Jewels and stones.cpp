#include<unordered_set>
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
     unordered_set<int>ans;
     int sum=0;
     for(auto i=0;i<jewels.size();i++)
     {
         ans.insert(jewels[i]);
     }   
     for(auto i=0;i<stones.size();i++)
     {
         if(ans.find(stones[i])!=ans.end())sum++;
     }
     return sum;
    }
};
