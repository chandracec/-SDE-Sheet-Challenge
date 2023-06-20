class Solution {
public:
    int maxVowels(string s, int k) {
    int count = 0;
    unordered_set<char> st;
    st.insert('a');
    st.insert('e');
    st.insert('i');
    st.insert('o');
    st.insert('u');

    int l = 0, r = 0;
    int maxCount = 0;
    while (r < s.length()) {
        if (st.find(s[r]) != st.end()) {
            count++;
        }
        r++;

        if (r - l > k) {
            if (st.find(s[l]) != st.end()) {
                count--;
            }
            l++;
        }

        maxCount =max(maxCount, count);
    }

    return maxCount;
}
};