//189. Rotate Array


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ans ;
        
        int n = nums.size();
        if(n==0) return ;
        k = k % n;

        
        int m = n-k;

        for(int i=m;i<n;i++){
            ans.push_back(nums[i]);

        }
        int l=n-k;
        for(int i=0;i<l;i++){
            ans.push_back(nums[i]);
        }

        for(int i=0;i<n;i++){
            nums[i]=ans[i];
        }

    }
};