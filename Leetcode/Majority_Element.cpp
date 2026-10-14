class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int ans =0;
        int freq =0;


        for(int i = 0;i<n;i++){
            if(freq==0){
                ans = nums[i];
            }
            if(ans==nums[i]){
                freq++;
            }else{
                freq--;
            }
        }
        return ans;
    }
};