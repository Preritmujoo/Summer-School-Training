
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int a = 0, b = 0;
        for(; a < nums.size(); a++){
            if(nums[a]){
                nums[b++] = nums[a];
            }
        }
        for(; b < nums.size(); b++){
            nums[b] = 0;
           
        }
    }
};




