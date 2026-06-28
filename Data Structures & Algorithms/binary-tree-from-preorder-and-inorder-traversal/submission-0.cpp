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
int ind=0;
TreeNode *find(vector<int>&pre,unordered_map<int,int>&mp,int l,int r)
{
          if(l>r)
           return NULL;
          int val=pre[ind++];
          int mid=mp[val];
          TreeNode *root=new TreeNode(val);
          root->left =find(pre,mp,l,mid-1);
          root->right=find(pre,mp,mid+1,r);

          return root;
}
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        unordered_map<int,int>mp;
        for(int i=0;i<in.size();i++)
        mp[in[i]]=i;
        TreeNode *root;
        int k=0;
        int l=0;
        int r=in.size()-1;

        root=find(pre,mp,l,r);

        return root;
        
    }
};
