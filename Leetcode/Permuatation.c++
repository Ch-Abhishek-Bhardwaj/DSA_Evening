// 46 permuatation

class Solution {
public:
    void totPermutation(vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans,int freq[]){
        if(ds.size()== nums.size()){
            ans.push_back(ds);
            return ;
        }
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i] = 1;
                totPermutation(nums, ds, ans, freq);
                ds.pop_back();
                freq[i]= 0;

            }
        }
    }


    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++) freq[i]=0;
        totPermutation(nums,ds , ans ,freq);
        return ans;
        
    }
};