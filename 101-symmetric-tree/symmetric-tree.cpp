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
    bool solve(TreeNode* t1 , TreeNode* t2){
        if(t1 == NULL && t2 == NULL){
            return true;
        }
        if(t1 == NULL || t2 == NULL){
            return false;
        }
        if(t1 -> val != t2 -> val){
            return false;
        }

        bool r1 = solve(t1 -> left, t2 -> right);
        bool r2 = solve(t1 -> right, t2 -> left);
        return r1 && r2;
    }

    bool isSymmetric(TreeNode* root) {
        return solve(root -> left, root -> right);
    }
};