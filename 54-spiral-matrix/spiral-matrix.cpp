class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        vector<int> spiralOrder;

        int left = 0, right = col - 1, top = 0, bottom = row - 1;
        while (left <= right && top <= bottom) {
            for(int i = left; i <= right; i++) {
                spiralOrder.push_back(matrix[top][i]);
            }
            top++;

            for (int i = top; i <= bottom; i++) {
                spiralOrder.push_back(matrix[i][right]);
            }
            right--;

            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    spiralOrder.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    spiralOrder.push_back(matrix[i][left]);
                }
                left++;
            }

        }

        return spiralOrder;
    }
};