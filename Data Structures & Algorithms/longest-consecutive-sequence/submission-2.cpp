class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
          unordered_set<int> st;

        // Store all numbers in the hash set
        for (int num : nums) {
            st.insert(num);
        }

        int longest = 0;

        // Traverse the original array
        for (int num : nums) {

            // Check if this is the start of a sequence
            if (st.count(num - 1) == 0) {

                int current = num;
                int length = 1;

                // Count consecutive numbers
                while (st.count(current + 1)) {
                    current++;
                    length++;
                }

                longest = max(longest, length);
            }
        }

        return longest;
    }
};
