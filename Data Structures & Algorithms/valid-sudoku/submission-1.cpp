class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rowSeen[9][9] = {false}, 
        colSeen[9][9] = {false},
        boxSeen[9][9] = {false};
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.')
                    continue;
                int num = board[i][j] - '1';
                int boxIdx = (i / 3) * 3 + (j / 3);
                if (rowSeen[i][num] || colSeen[j][num] || boxSeen[boxIdx][num])
                    return false;
                rowSeen[i][num] = colSeen[j][num] = boxSeen[boxIdx][num] = true;
            }
        }
        return true;
    }
};