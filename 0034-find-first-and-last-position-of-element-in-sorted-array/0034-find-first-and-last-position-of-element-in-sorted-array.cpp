class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
    int l = 0, h = n - 1;

    vector<int> arr(2, -1);
    while (l <= h) {
        int mid = l + (h - l) / 2;

        if (target == nums[mid]) {
            arr[0] = mid;
            arr[1] = mid;

            while (arr[0] > 0 && nums[arr[0] - 1] == target) {
                arr[0]--;
            }

            while (arr[1] < n - 1 && nums[arr[1] + 1] == target) {
                arr[1]++;
            }

            return arr;
        } else if (target < nums[mid]) {
            h = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    return arr;}
};