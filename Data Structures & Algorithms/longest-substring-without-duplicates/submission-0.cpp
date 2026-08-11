class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set <char> st;
        int left=0;
        int maxlen=0;
        for (int right =0 ; right <s.size() ; right++){
            while ( st.find(s[right ]) != st.end()){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            int len = right -left +1;
            maxlen=max(maxlen , len );
        }
        return maxlen;

    }
};
