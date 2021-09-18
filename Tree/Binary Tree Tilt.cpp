class Solution {
public:
    int findSum(TreeNode* root,int &tilt){
        if(!root)
            return 0;
        int l=findSum(root->left,tilt); 
        int r=findSum(root->right,tilt);
        tilt+=abs(l-r);
        return l+r+(root->val);   //total sum of all the nodes
            
        
    }
    int findTilt(TreeNode* root) {
        int tilt=0;
        findSum(root,tilt);
        return tilt;       
    }
};
