class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n= nums.size();
        int count = 0;
        int index = 0;
        for(auto i : nums){
            if(i == 0) count++;
            else{
                nums[index] = i;
                index++;
            }
        }
        for(int i = index; i < n; i++){
            nums[i] = 0;
        }

        
    }
};


        
