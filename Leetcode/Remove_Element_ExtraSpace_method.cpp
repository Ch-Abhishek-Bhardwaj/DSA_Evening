class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n= nums.size();
        int ans=0;
        vector<int> anss;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                anss.push_back(nums[i]);
                ans++;
            }
        }
        for(int i=0;i<anss.size();i++){
            nums[i]=anss[i];
        }
        return ans;
    }
};