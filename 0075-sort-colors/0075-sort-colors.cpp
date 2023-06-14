 //DNF SIMPLE
class Solution {
public:
     void sortColors(vector<int>& nums) {
     int low=0, mid=0, high=nums.size()-1;

        while(mid<=high){
            if(nums[mid]==0)
                swap(nums[low++], nums[mid++]);
            else if(nums[mid]==1)
                mid++;
            else
                swap(nums[mid], nums[high--]);
        }
     }
};
//another approach with counting freq
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
