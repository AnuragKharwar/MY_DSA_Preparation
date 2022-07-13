// class Solution {
//     // TreeNode *ans;
// public:
//     TreeNode* searchBST(TreeNode* root, int val) {

//         if(root==NULL)
//             return 0;
//         if(root->val==val)
//         {
//             traverse(root,val);
//         }
//         else if(root->val>val)
//             return searchBST(root->left,val);
//         else if(root->val<val)
//             return searchBST(root->right,val);
//         return
//     }

//     void traverse(TreeNode *root,int val)
//     {
//         if(root==NULL)
//             return ;
//         else
//              root->val;
//             traverse(root->left,val);
//             traverse(root->right,val);
//     }
// };
class Solution
{
public:
  TreeNode *searchBST(TreeNode *root, int val)
  {
    if (root == NULL)
      return NULL;
    else if (root->val == val)
      return root; // returning pointer to the node
    if (root->val > val)
      return searchBST(root->left, val);
    return searchBST(root->right, val);
  }
};