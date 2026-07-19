class Solution {
public:

    string encode(vector<string>& strs) {
        string ans ="";
        for (string s:strs){
            ans += to_string(s.length()) +"#" + s;
        }
        return ans;
        

    }

    vector<string> decode(string s) {
       vector<string> ans ;
       int i =0;
       while (i < s.length() ){
        int j=i;
        while (s[j] != '#'){
            j++;
        }
        string len = s.substr(i,j-i);
        int length = stoi( len );
          // Extract the actual word
        string word= s.substr(j+1 , length );
        ans.push_back(word);
        i=j+1 + length;      }
        return ans;
    }
};
