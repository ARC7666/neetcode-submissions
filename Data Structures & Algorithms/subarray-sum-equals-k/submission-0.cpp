class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int, int> prefixsumcnt;

        int prefixsum = 0 ;
        int cnt = 0;
        prefixsumcnt[0] = 1;

        for(int i= 0 ; i < n ;i++){
            prefixsum += nums[i];

            int remove = prefixsum - k;

            if(prefixsumcnt.find(remove) != prefixsumcnt.end()){
                cnt += prefixsumcnt[remove];
            }
            prefixsumcnt[prefixsum]++;
        }

        return cnt ;
    }
};