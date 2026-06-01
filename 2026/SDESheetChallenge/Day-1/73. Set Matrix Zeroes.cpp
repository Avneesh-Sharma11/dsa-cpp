//----------------------------------------------------Brute force

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> zero;

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {
                    zero.push_back({i, j});
                }
            }
        }
        for (int k = 0; k < zero.size(); k++) {
            int i = zero[k][0];
            int j = zero[k][1];

            for (int p = 0; p < matrix[0].size(); p++) {
                matrix[i][p] = 0;
            }
            for (int p = 0; p < matrix.size(); p++) {
                matrix[p][j] = 0;
            }
        }
    }
};

//-----------------------------------------------------Better Approch

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        vector<bool> rf(row, false);
        vector<bool> cf(row, false);

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (matrix[i][j] == 0) {
                    rf[i] = true;
                    cf[j] = true;
                }
            }
        }
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (rf[i] || cf[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};

//------------------------------------------------------Optimal Approch

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        bool firstRowZero = false;
        bool firstColZero = false;

        // check if zero exist in first row or first col..
        for (int i = 0; i < col; i++) {
            if (matrix[0][i] == 0)
                firstRowZero = true;
        }
        for (int i = 0; i < row; i++) {
            if (matrix[i][0] == 0)
                firstColZero = true;
        }
        //Mark the first row and first col element if mat[i][j] = 0
        for (int i = 1; i < row; i++) {
            for (int j = 1; j < col; j++) {
                if (matrix[i][j] == 0) {
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }
        //marks mat[i][0] = 0 if irst row or first col element is 0.
        for (int i = 1; i < row; i++) {
            for (int j = 1; j < col; j++) {
                if (matrix[0][j] == 0 || matrix[i][0] == 0)
                    matrix[i][j] = 0;
            }
        }
        // make the all element zero of first row and col if true
        if (firstRowZero) {
            for (int i = 0; i < col; i++)
                matrix[0][i] = 0;
        }
        if (firstColZero) {
            for (int i = 0; i < row; i++)
                matrix[i][0] = 0;
        }
    }
};