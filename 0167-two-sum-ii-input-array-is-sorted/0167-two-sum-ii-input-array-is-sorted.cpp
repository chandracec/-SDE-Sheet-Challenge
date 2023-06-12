class Solution {
public:
     vector<int> twoSum(vector<int>& numbers, int target) {
    int n = numbers.size();
    vector<int> v(2, 0);

    int l = 0;
    int r = n - 1;

    while (l < r) {
        int sum = numbers[l] + numbers[r];

        if (sum == target) {
            v[0] = l + 1;
            v[1] = r + 1;
            return v;
        } else if (sum < target) {
            l++;
        } else {
            r--;
        }
    }

    return {};
}
};