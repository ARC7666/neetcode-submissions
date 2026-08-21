class Solution {
public:
    int characterReplacement(string s, int k) {

        vector<int> freq(128 , 0);

        int n = s.size();

        int l = 0;
        int maxlen = 0;
        int maxi = INT_MIN ;

        for(int i = 0 ; i < n ; i++){
            freq[s[i]]++;

            maxi = max(maxi , freq[s[i]]);

            while((i - l + 1) - maxi > k){
                freq[s[l]]--;
                l++;
            }

            maxlen = max(maxlen , i - l + 1);
        }
        return maxlen ;
    }
};
