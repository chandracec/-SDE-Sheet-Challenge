  class Solution {
public:
     void sortColors(vector<int>& nums) {
    int n = nums.size();
    int freq0 = 0, freq1 = 0, freq2 = 0;

    for (int i = 0; i < n; i++)
        nums[i] == 0 ? freq0++ : nums[i] == 1 ? freq1++ : freq2++;

    for (int i = 0; i < n; i++)
        nums[i] = i < freq0 ? 0 : i < freq0 + freq1 ? 1 : 2;
}
};
