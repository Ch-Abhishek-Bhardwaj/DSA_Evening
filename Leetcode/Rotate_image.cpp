class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m= matrix.size();
        int n= matrix[0].size();

        // Transpose it so its easy
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        // Now you should just reverse it to get the Rotated Image
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};