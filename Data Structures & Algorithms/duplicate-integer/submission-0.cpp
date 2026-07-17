class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int left = 0;
        int right = 1;
        while ( right < n){
            if(nums[left]==nums[right]){
                return true;
            }  
            left++;
            right++;
        }
        return false;

    }
};