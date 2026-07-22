class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map< string, vector<string>> res;

        for(auto& s : strs){
            string sr = s;
            sort(sr.begin() , sr.end());
            res[sr].push_back(s);

        }

        for(auto& pair : res){
            ans.push_back(pair.second);
        }
        return ans ;
    }
};
