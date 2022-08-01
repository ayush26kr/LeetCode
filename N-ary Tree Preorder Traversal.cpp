/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int>ans;
    void func(Node* root){
        if(root!=NULL){
            ans.push_back(root->val);
            int n=root->children.size();
            for(int i=0;i<n;i++)
                func(root->children[i]);
        }  
    }
    vector<int> preorder(Node* root) {
        if(root==NULL)
            return ans;
        func(root);
        return ans;
    }
};
