class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    int n = nums.size();

    int count =0;
    int local=0;
    for(int i=0;i<n;i++){

    if(nums[i]==1){
    ++local;
    count=max(count,local);}
    else local=0;
    }
    return count;
    }
};