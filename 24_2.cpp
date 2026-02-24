class Solution {
public:
    int solve(TreeNode* root, int current)
    {
        if(root==NULL) return 0;

        current=current*2+root->val;

        if(root->left==NULL && root->right==NULL)
        return current;

        return solve(root->left,current)+solve(root->right,current);
    }

    int sumRootToLeaf(TreeNode* root)
    {
        return solve(root,0);
    }
};
