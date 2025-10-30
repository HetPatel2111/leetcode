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
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        vector<int> ans;
        if(n<2) ans;
        int low=0;
        int high=n-1;

        while(low<high){
            if(numbers[low]+numbers[high]==target){
                ans.push_back(low+1);
                ans.push_back(high+1);
                return ans;
            }

            if(numbers[low]+numbers[high] > target) high--;
            else low++;
        }

        return ans;
    }

    void element(TreeNode*root,vector<int>&v){
        if(root==nullptr) return;
        element(root->left,v);
        v.push_back(root->val);
        element(root->right,v);
    }

    bool findTarget(TreeNode* root, int k) {
        if(root==nullptr) return false;
        vector<int> v;

        element(root,v);
        vector<int> n = twoSum(v,k);

        if(n.size()==2) return true;
        return false;
    }
};