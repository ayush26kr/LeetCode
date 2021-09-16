class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        vector<int>ans;
        if(root==NULL)
            return ans;
         st.push(root);
        while(!st.empty())
        {
            auto a=st.top();
            st.pop();
            ans.push_back(a->val);
            if(a->right)
                st.push(a->right);
            if(a->left)
                st.push(a->left);
            
        }
        return ans;    
    }
};
