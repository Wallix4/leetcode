class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();
        int middle = (right + left) / 2;
        while(left < right) {
            if(nums[middle] == target)
                return middle;
            else{
                if(nums[middle] > target)
                    right = middle -1;
                else
                    left = middle + 1;
            }
            middle = (right + left) / 2;
        }
       for(int i = 0; i < nums.size();i++){
        if(target <= nums[i])
            return i;
       }
       return nums.size();
    }
};
