class Solution
{
public:
  TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
  {

    int rootIDX = 0;
    return build(preorder, inorder, rootIDX, 0, inorder.size() - 1);
  }

  TreeNode *build(vector<int> &preorder, vector<int> &inorder, int &rootIDX, int left, int right)
  {
    //         BASE condition
    if (left > right)
      return NULL;
    int pivot = left;
    while (inorder[pivot] != preorder[rootIDX])
      pivot++;

    rootIDX++;

    TreeNode *newNode = new TreeNode(inorder[pivot]); // creating a new Node;
                                                      //         now creating left and right subTree
    newNode->left = build(preorder, inorder, rootIDX, left, pivot - 1);
    newNode->right = build(preorder, inorder, rootIDX, pivot + 1, right);

    return newNode;
  }
};