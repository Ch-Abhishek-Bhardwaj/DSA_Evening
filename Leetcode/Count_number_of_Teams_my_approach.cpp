// 1395. Count Number of Teams
//  This approach fails on leetcode as time limit exceeds 

class Solution {
public:

    void countT(int idx,int size,vector<int> &arr,vector<int> &ds ,int &ans){
       
        if(ds.size()==3){
            if(ds[0]<ds[1] && ds[1] <ds[2] || ds[0]>ds[1] && ds[1]>ds[2]){
                    ans++;
            }
            
            return ;
        }
        if(idx == size){
            return ;
        }
        
        // pick condition
        if(ds.size()<3){
            ds.push_back(arr[idx]);
            countT(idx+1,size , arr,ds ,ans );
            ds.pop_back();
        }
        // dont pick conditions 
        countT(idx+1,size ,arr,ds , ans);
    }
    int numTeams(vector<int>& rating) {
        int ans  =0;
        int n= rating.size();
        vector<int> ds;
        if(n<3){
            return 0;
        }
        countT( 0, n,rating,ds ,ans);
        return ans;
        
    }
};