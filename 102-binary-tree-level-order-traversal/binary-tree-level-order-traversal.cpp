/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;

        if(!root) return {};
        if(root->left==nullptr && root->right==nullptr) return {{root->val}};

        q.push(root);

        while(!q.empty()){
            int q_size = q.size();
            vector<int> temp;

            for(int i=0 ; i<q_size ; i++){
                TreeNode*t = q.front();
                q.pop();
                temp.push_back(t->val);

                if(t->left!=nullptr) q.push(t->left);
                if(t->right!=nullptr) q.push(t->right);
            }
            ans.push_back(temp);
        }

        return ans;


    }
};