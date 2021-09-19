class Solution {
public:
    void treeToString(TreeNode* root,string &str){
        if(root==NULL)
            return;
        //push root data as character
        str.push_back(root->val+'0');
        
        //if leaf node , then return
        if(!root->left && !root->right)
            return;
         
        //for the left subtree
        str.push_back('(');
        treeToString(root->left,str);
        str.push_back(')');
        
        //only if right child is present to
        //avoid extra parenthesis
        
        if(root->right){
            str.push_back('(');
            treeToString(root->right,str);
            str.push_back(')');
        }
        
    }
    string tree2str(TreeNode* root) {
        if(root==NULL)
            return NULL;
        string str;
        treeToString(root,str);
        return str;
    } 
};
