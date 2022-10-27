class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
            if(i == 0){
                result.push_back(nums[i]);
            }
            else{
                result.push_back(result[i-1]+nums[i]);
            }
        }
        return result;
    }
};
