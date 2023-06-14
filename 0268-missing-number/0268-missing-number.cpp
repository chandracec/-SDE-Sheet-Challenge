class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int i=0;
    int xorVal =0;
    for(int num:nums)
   {
        xorVal^=num;
        xorVal^=i+1;
     i++;
   }
    return xorVal;
    }
};