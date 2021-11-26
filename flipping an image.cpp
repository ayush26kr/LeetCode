class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=image.size();  //count number of rows
        for(int i=0;i<n;i++){
            reverse(image[i].begin(),image[i].end());
        for(int j=0;j<n;j++){
            image[i][j]=(image[i][j]==1?0:1);
        }
        }
               
        return image;
        
    }
};
