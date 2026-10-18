class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      unordered_map <string , vector<string > > mp;
      //original elements ko chedo mat new sorted word name ki string banao usko sort karo and then using map pushback word string to sorted words
      for(string word : strs ){
        string sorted_words=word;
        sort(sorted_words.begin(), sorted_words.end());
        mp[sorted_words].push_back(word);
      }  
      vector<vector<string>>ans;
      for(auto x :mp){
        ans.push_back(x.second );
    
      }
      return ans;

    }
};
