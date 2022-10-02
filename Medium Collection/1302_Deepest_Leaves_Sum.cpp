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
    /***
    cur_sum: sum of leaves at the same level/height
    cur_level: current height
    
    ***/
    int cur_sum = 0;
    int cur_level = 1;
    
    void DFS(TreeNode* root, int level){
        
        if(root == NULL) return ;
        
        // 同一個level/height 相加
        if(level == cur_level){
            cur_sum += root->val;
        }
        
        // 進到下一個level/height
        if(level > cur_level){
            cur_level = level;
            cur_sum = root->val;
        }
        
        // left/right child
        DFS(root->left, level+1);
        DFS(root->right, level+1);
    }
    
    int deepestLeavesSum(TreeNode* root) {
        DFS(root, 1);
        return cur_sum;
        
    }
};