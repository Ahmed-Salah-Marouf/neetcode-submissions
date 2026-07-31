class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int top = 0, down = matrix.size() - 1;
        int row = -1;
        while(top <= down) {
            int mid = (top + down) / 2;
            if (target >= matrix[mid][0]) {
                top = mid + 1;
                if (target <= matrix[mid].back()) {
                    row = mid;
                    break;
                }
            } else {
                down = mid - 1;
            }
        }
        if (row == -1)
            return false;
        int l = 0, r = matrix[row].size() - 1;
        
        while (l <= r) {
            int mid = (l + r) / 2;

            if (target >= matrix[row][mid]) {
                l = mid + 1;
                if (target == matrix[row][mid]) {
                    return true;
                }
            } else {
                r = mid - 1;
            }

        }

        return false;
    }
};
