class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        int minr = 0;
        int minc = 0;
        int maxr = matrix.size() - 1;
        int maxc = matrix[0].size() - 1;

        while (minr <= maxr && minc <= maxc) {

            // Left to right
            for (int j = minc; j <= maxc; j++) {
                ans.push_back(matrix[minr][j]);
            }
            minr++;

            if (minr > maxr || minc > maxc)
                break;

            // Top to bottom
            for (int i = minr; i <= maxr; i++) {
                ans.push_back(matrix[i][maxc]);
            }
            maxc--;

            if (minr > maxr || minc > maxc)
                break;

            // Right to left
            for (int j = maxc; j >= minc; j--) {
                ans.push_back(matrix[maxr][j]);
            }
            maxr--;

            if (minr > maxr || minc > maxc)
                break;

            // Bottom to top
            for (int i = maxr; i >= minr; i--) {
                ans.push_back(matrix[i][minc]);
            }
            minc++;
        }

        return ans;
    }
};