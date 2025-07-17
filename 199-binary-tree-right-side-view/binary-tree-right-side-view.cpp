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

 /* using approach LRV (reverse of in order)*/
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        int level=0;
        traversal(root,level,ans);
        return ans;
    }

    void traversal(TreeNode* root , int level , vector<int>&ans){
        if(!root) return;

        if(level==ans.size()) ans.push_back(root->val);

        traversal(root->right , level+1 , ans);
        traversal(root->left , level+1 , ans);
    }
};