class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans =1;
        int n = nums.size();
        vector<int> temp;
        temp.push_back(nums[0]);


        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]){
                temp.push_back(nums[i]);
                ans++;
            }
        }
        for(int j=0;j<ans;j++){
            nums[j]= temp[j];
        }
        
        return ans;
    }
};