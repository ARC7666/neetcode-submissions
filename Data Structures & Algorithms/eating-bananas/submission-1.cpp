class Solution {
public:
    int speedchek(vector<int>& piles, int s){
        long long totalh = 0;
        for(auto ban : piles){
            totalh += ceil((double)ban/s);
        }
        return totalh;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = *max_element(piles.begin() , piles.end());

        int low = 1;
        int high = maxi ;
        int ans  = maxi;

        while(low <= high){
            int mid = (low + high )/2;

            int k = speedchek(piles , mid);

            if(k <= h){
                ans = mid;
                high = mid -1;
            }else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
