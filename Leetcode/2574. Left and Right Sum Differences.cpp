class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int left =0;
        int right =0;
        int diff;
        
        vector<int> ans;

        vector<int> leftSum ;
        leftSum.push_back(left);

        vector<int> rightSum;
        rightSum.push_back(right);

        for(int i=0;i<nums.size()-1;i++){
            left = left+nums[i];
            leftSum.push_back(left);
        }
        // RightSum Array 
        for(int i=nums.size()-1;i>0;i--){
            right = right+nums[i];
            rightSum.push_back(right);
        }
        reverse(rightSum.begin(),rightSum.end());

        // diff
        for(int i=0;i<nums.size();i++){
            int diff = abs(leftSum[i]-rightSum[i]); 
            ans.push_back(diff);
        }
        return ans;
    }
};