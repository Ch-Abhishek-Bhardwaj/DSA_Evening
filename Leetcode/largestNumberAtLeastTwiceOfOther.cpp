class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int ans =0;
        int lar = INT_MIN;
        int sec =INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=lar){
                sec = lar;
                lar = nums[i];
                
                ans =i;
            }
            if(nums[i]>=sec && nums[i]<lar){
                sec = nums[i];
            }
        }
        int m = 2LL*sec;
        if(lar>=m){
            return ans;
        }
        return -1;
    }
};