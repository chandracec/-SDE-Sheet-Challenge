class Solution {
public:
int maxProduct(vector<int>& nums) {
        int  ans=nums[0],ma=nums[0],mi=nums[0];
     for(int i=1;i<nums.size();i++)
     {
         if(nums[i]<0)swap(ma,mi); 
         ma=max(nums[i],nums[i]*ma);
         mi=min(nums[i],nums[i]*mi);
         ans=max(ma,ans);
     }
     return ans;
  }
     
};