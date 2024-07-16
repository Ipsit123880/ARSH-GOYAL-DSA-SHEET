class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    int n = nums.size();
    int c;
    for(int i = 0; i < n; i++){
        c = abs(nums[i]);
        if(nums[c] < 0) return c;
        nums[c] = -nums[c];

    }
    return -1;
        
    }
};