class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int tr = matrix.size();
        int tc = matrix[0].size();

        for(int i = 0 ; i< tr ; i++){
            for(int j = i+1 ; j< tc ; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for(int i = 0 ; i< tr ; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
        
    }
};