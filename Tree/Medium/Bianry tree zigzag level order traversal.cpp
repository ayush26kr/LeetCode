class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root) return {};
        queue<TreeNode*>q;
        vector<vector<int>>output;
        q.push(root);
        int level=0;
        
        while(!q.empty()){
            int s=q.size();
            vector<int>curr(s);
            for(int i=0;i<s;i++){
                TreeNode* temp=q.front();
                q.pop();
                if(level==0){
                    curr[i]=temp->val; //odd level: insert like 0,1,2,3
                }else{
                    curr[s-i-1]=temp->val; //even level: insert like 3,2,1,0
                }
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            output.push_back(curr); //now push the level traversed to output vector
            level=!level; //toggle the level using negation or level==0? level=1:level=0;
        }
        return output;
        
    }
};
