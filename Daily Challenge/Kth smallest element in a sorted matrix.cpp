class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int r=matrix.size();
        int c=matrix[0].size();
        int low=matrix[0][0];
        int high=matrix[r-1][c-1];
        while(low<high){
            int mid = low + (high - low) / 2;
            int count = 0,  j = c - 1;
            for(int i = 0; i < r; i++) {
                while(j >= 0 && matrix[i][j] > mid) 
                    j--;
                count += (j + 1);
            }
            if(count < k) 
                low = mid + 1;
            else high = mid;
        }
        return low;
    }
};
