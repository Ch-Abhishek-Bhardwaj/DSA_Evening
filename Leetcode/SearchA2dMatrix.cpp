class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       if (matrix.empty() || matrix[0].empty()) return false;
        int m = matrix.size();
        int n = matrix[0].size();
        int low = 0, high = m * n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int midVal = matrix[mid / n][mid % n];
            if (midVal == target) {
                return true;
            } else if (midVal > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return false;
    
    }
};