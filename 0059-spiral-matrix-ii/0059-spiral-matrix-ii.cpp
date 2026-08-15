class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        vector<vector<int>> matrix(n, vector<int>(n));

        int c = 1;

        int minr = 0;
        int minc = 0;
        int maxr = n - 1;
        int maxc = n - 1;

        while (minr <= maxr && minc <= maxc) {
            for (int j = minc; j <= maxc; j++) {
                matrix[minr][j] = c++;
            }
            minr++;

            if (minr > maxr || minc > maxc)
                break;

            
            for (int i = minr; i <= maxr; i++) {
                matrix[i][maxc] = c++;
            }
            maxc--;

            if (minr > maxr || minc > maxc)
                break;


            for (int j = maxc; j >= minc; j--) {
                matrix[maxr][j] = c++;
            }
            maxr--;

            if (minr > maxr || minc > maxc)
                break;

        
            for (int i = maxr; i >= minr; i--) {
                matrix[i][minc] = c++;
            }
            minc++;
        }

        return matrix;
    }
};