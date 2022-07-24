class Solution {
    void mark_island(vector<vector<char>>& grid,int x,int y,int rows,int cols){
        //boundary condition
        if(x<0||x>=rows ||y<0 || y>=cols || grid[x][y]!='1')
            return;
        
        //mark current cell as visited
        grid[x][y]='2';
        
        //Make recursive call in all four directions
        mark_island(grid,x+1,y,rows,cols); //down
        mark_island(grid,x,y+1,rows,cols);  //right
        mark_island(grid,x-1,y,rows,cols);  //up
        mark_island(grid,x,y-1,rows,cols);  //left
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int rows=grid.size();
        int no_of_islands=0;
        if(rows==0)
            return 0;
        int cols=grid[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]=='1')   //It is a piece of land that is not visited
                {
                    mark_island(grid,i,j,rows,cols);
                    no_of_islands+=1;
                }
            }
        }
        return no_of_islands;
    }
};
