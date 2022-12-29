class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans = nums;
        unordered_map<int, int> mp;
        sort(ans.begin(), ans.end());
        for(int i = 0; i < ans.size(); i++) if(mp.find(ans[i]) == mp.end()) mp[ans[i]] = i;
        for(int i = 0; i < ans.size(); i++) ans[i] = mp[nums[i]];
        return ans;
    }
};
