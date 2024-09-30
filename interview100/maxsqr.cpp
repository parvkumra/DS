class Solution {
public:
    int helper(int i, int j, vector<vector<char>>& matrix, vector<vector<int>>& memo) {
       
        if (i < 0 || j < 0 || i >= matrix.size() || j >= matrix[0].size() || matrix[i][j] == '0') {
            return 0;
        }

       
        if (memo[i][j] != -1) {
            return memo[i][j];
        }

        
        int size = min({helper(i - 1, j, matrix, memo), 
                        helper(i, j - 1, matrix, memo), 
                        helper(i - 1, j - 1, matrix, memo)}) + 1;

        
        memo[i][j] = size;
        return size;
    }

    int maximalSquare(vector<vector<char>>& matrix) {
        if (matrix.empty()) return 0;

        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> memo(n, vector<int>(m, -1));
        int maxSquareLength = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == '1') {
                    int size = helper(i, j, matrix, memo);
                    maxSquareLength = max(maxSquareLength, size);
                }
            }
        }

        return maxSquareLength * maxSquareLength;  
    }
};
