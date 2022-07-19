class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>pasTri(numRows);
        for(int i=0;i<numRows;i++){
            pasTri[i].resize(i+1);  // as in Pascal tri no. of rows=no. of col
            pasTri[i][0]=pasTri[i][i]=1;  //as first & last element of a row is 1
            
            for(int j=1;j<i;j++)
                pasTri[i][j]=pasTri[i-1][j-1]+pasTri[i-1][j];
        }
        return pasTri;  
    }
};

/*the element at pas[r][c]=r-1
                              C     = (r-1)!/(c-1)!(c-2)!
                                c-1
*/
