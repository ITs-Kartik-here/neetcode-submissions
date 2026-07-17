class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char , int > mp;
        if( s.length()!=t.length()){
        return false;}
        int freq =0 ;
        while (freq < s.length ()){
            mp[s[freq]]++;
            mp[t[freq]]--;
            freq++;
        }
        for (auto x :mp){
           if ( x.second !=0){
            return false;
           }
        }
        
        return true;
    }
};
