class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int , int> freq1;
        unordered_map<int, int> freq2 ;

        for(auto i : s){
            freq1[i]++;
        }

        for(auto i : t){
            freq2[i]++;
        }

        if(freq1 == freq2){
            return true ;
        }

        return false ;
    }
};
