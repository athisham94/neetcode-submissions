class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n = nums.size();
        int low = 0;
        int high = n-1;

        while(low<=high){

            int middle = low + (high-low)/2;

            if(target > nums[middle]){

                low = middle + 1;

            }
            if(target < nums[middle]){
                high = middle - 1;

            }

            if(target == nums[middle]){
                return middle;
            }
        }
        return -1;


        
    }
};
