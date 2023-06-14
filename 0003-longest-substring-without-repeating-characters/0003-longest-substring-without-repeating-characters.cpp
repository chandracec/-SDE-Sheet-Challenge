class Solution {
public:
       int lengthOfLongestSubstring(string s) {
    unordered_set<char> st;
    int l = 0;
    int r = 0;
    int max1 = 0;

    while (r < s.size()) {
        if (st.find(s[r]) != st.end()) {
            st.erase(s[l]);
            l++;
        } else {
            st.insert(s[r]);
            max1 = max(max1, r - l + 1);
            r++;
        }
    }
    return max1;
}
};