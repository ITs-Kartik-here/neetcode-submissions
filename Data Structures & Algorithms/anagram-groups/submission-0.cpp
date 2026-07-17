class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(string word : strs){
            string sorted_word =word;
            sort (sorted_word.begin() , sorted_word.end());
            mp[sorted_word].push_back(word);
        }
        vector<vector<string>> ans;
        for(auto x : mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};
