class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int n = nums.size();

        int highest = 0;
        int current = 0;

        for(int i =0; i<n; i++){

            if(nums[i] == 1){
                current = current +1;

            }
            else{
                current = 0;
            }
            if(current>highest){
                highest = current;
            }
                
            

        }

        return highest;
        
    }
};