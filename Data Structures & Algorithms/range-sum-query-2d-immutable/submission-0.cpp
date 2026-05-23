class NumMatrix {
public:
    vector<vector<int>> prefix;

    NumMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        prefix = matrix;
        for(int i = 0; i < m; i++) {
            for(int j = 1; j < n; j++) {
                prefix[i][j] += prefix[i][j - 1];
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum = 0;
        for(int i = row1; i <= row2; i++) {
            if(col1 == 0)
                sum += prefix[i][col2];
            else
                sum += prefix[i][col2] - prefix[i][col1 - 1];
        }
        return sum;
    }
};