class Solution {
public:
    int maxValueAfterReverse(vector<int>& nums) {
    int total = 0, n = nums.size();
    for (int i = 0; i < n - 1; i++)
        total += abs(nums[i] - nums[i + 1]);

    int result = total;

    for (int i = 1; i < n - 1; i++) {
        result = max(result, total - abs(nums[i] - nums[i + 1]) + abs(nums[i + 1] - nums[0]));
        result = max(result, total - abs(nums[i] - nums[i - 1]) + abs(nums[i - 1] - nums[n - 1]));
    }

    int minVal = INT_MAX, maxVal = INT_MIN;
    for (int i = 0; i < n - 1; i++) {
        int left = min(nums[i], nums[i + 1]); 
        int right = max(nums[i], nums[i + 1]); 
        if (minVal < left)
            result = max(result, total + (left - minVal) * 2);
        if (right < maxVal)
            result = max(result, total + (maxVal - right) * 2);
        minVal = min(minVal, right);
        maxVal = max(maxVal, left);
    }

    return result;
}
};