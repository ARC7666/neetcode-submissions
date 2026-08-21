class Solution {
public:
    int firstoc(vector<int>& nums, int k){
        int n = nums.size();

        int low = 0 ;
        int high = n -1 ;
        int first = -1;

        while(low <= high){
            int mid = (low + high)/2;

            if(k == nums[mid]){
                first = mid ;
                high = mid - 1;
            }
            else if(k > nums[mid]){
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return first ;
    }

    int lastoc(vector<int>& nums , int k ){
        int n = nums.size();

        int low = 0 ;
        int high = n -1 ;
        int last = -1 ;

        while(low <= high){
            int mid = (low + high)/2;

            if(k == nums[mid]){
                last = mid ;
                low = mid + 1;
            }
            else if( nums[mid] < k){
                low = mid + 1;
            } else{
                high = mid - 1;
            }
        }
        return last ;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int k = target;
        int first = firstoc(nums , k);
        int last = lastoc(nums, k);

        return {first , last};

    }
};