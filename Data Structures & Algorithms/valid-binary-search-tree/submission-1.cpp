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
private:
    bool bfs(TreeNode* root , long long low , long long high){
        if(root == nullptr){
            return true ;
        }

        if(root->val <= low || root->val >= high){
            return false ;
        }

        return bfs(root->left , low , root->val) && bfs(root->right , root->val , high);
    }
public:
    bool isValidBST(TreeNode* root) {
        return bfs(root , LLONG_MIN, LLONG_MAX);
    }
};
