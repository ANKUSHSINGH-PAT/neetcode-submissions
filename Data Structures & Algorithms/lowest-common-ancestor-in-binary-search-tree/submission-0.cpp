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
TreeNode *find(TreeNode *root,TreeNode *p,TreeNode *q)
{
    if(root==NULL)
    return root;

    if(p->val==root->val||q->val==root->val)
    return root;

    TreeNode *left=find(root,p->left,q->right);
    TreeNode *right=find(root,p->left,q->right);
    return find(root,left,right);
}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

       if(root==NULL||root==p||root==q)
       return root;

       TreeNode *left=lowestCommonAncestor(root->left,p,q);
       TreeNode *right=lowestCommonAncestor(root->right,p,q);

       if(left!=NULL&&right!=NULL)
       return root;

       if(left==NULL)
       return right;
       if(right==NULL)
       return left;

       
        
    }
};
