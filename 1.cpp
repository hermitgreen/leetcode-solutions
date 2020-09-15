// 构造map记录之前已经存在的数
//每次查询是否有已经满足要求的数，找到了直接返回
#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            if (mp.count(target - nums[i]) > 0) {
                ans.push_back(mp[target - nums[i]]);
                ans.push_back(i);
                return ans;
            } else {
                mp[nums[i]] = i;
            }
        }
        return ans;
    }
};
