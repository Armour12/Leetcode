class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;
        int len = s.length(), pos = numRows - 1, k = 0, col;
        if (len == 1)
            return s;
        char A[numRows][len];
        string r;
        for (int j = 0; j < len; j++)
        {
            if (k >= len) {
                col = j;
                break;
            }
            if (pos == 0)
            {
                pos = numRows - 1;
            }
            if (pos == numRows - 1) {
                for (int i = 0; i < numRows; i++) {
                    if (k < len) {
                        A[i][j] = s[k++];
                    }
                    else
                        A[i][j] = '0';

                }
            }
            else {
                for (int i = 0; i < numRows; i++) {
                    if (pos == i && k < len)
                        A[i][j] = s[k++];
                    else
                        A[i][j] = '0';
                }
            }
            pos--;
        }
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j < col; j++) {
                if (A[i][j] != '0')
                    r = r + A[i][j];
            }

        }
        return r;
    }
};