class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row = board.size();
        int col = board[0].size();
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (board[i][j] == '.') {
                    continue;
                } else {
                    int m = 0;
                    char cc = board[i][j];
                    for (int m = 0; m < row; m++) {
                        if (board[i][m] == cc) {
                            if (m == j) {
                                continue;
                            }
                            return false;
                        } else if (board[m][j] == cc) {
                            if (m == i) {
                                continue;
                            }
                            return false;
                        }
                    }
                    int boxRowStart = (i / 3) * 3;
                    int boxColStart = (j / 3) * 3;
                    for (int r = boxRowStart; r < boxRowStart + 3; r++) {
                        for (int c = boxColStart; c < boxColStart + 3; c++) {
                            if (board[r][c] == cc) {
                                if (r == i && c == j) {
                                    continue;
                                }
                                return false;
                            }
                        }
                    }
                }
            }
        }
        return true;
    }
};