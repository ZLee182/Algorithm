/*
104. Maximum Depth of Binary Tree

Given a binary tree, find its maximum depth. 

The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
60% 
*/
/***
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    int i,j;
    if(root==NULL)
	    return 0;
    i = maxDepth(root->left);
    j = maxDepth(root->right);
    return i>j?i+1:j+1;
}
