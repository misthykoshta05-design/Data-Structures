class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        vector<int> ans;

        for(int i = 0; i < n; i++) {
            int minVal = matrix[i][0];
            int colIndex = 0;

            // find minimum in row
            for(int j = 1; j < m; j++) {
                if(matrix[i][j] < minVal) {
                    minVal = matrix[i][j];
                    colIndex = j;
                }
            }

            // check if it's maximum in column
            bool isLucky = true;
            for(int k = 0; k < n; k++) {
                if(matrix[k][colIndex] > minVal) {
                    isLucky = false;
                    break;
                }
            }

            if(isLucky) {
                ans.push_back(minVal);
            }
        }

        return ans;
    }
};
