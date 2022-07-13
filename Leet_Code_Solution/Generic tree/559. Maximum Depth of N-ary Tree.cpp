class Solution
{
public:
  int maxDepth(Node *root)
  {
    //         if(root==NULL) return 0;
    //         int size=0;
    //         for(auto child:root->children)
    //         {

    //            size = max(size,maxDepth(child));
    //            cout<<size<<endl;
    //         }
    //      return  1+size;

    //         using BFS
    queue<Node *> q;
    if (root == NULL)
      return 0;
    q.push(root);
    int maxdepth = 0;

    while (!q.empty())
    {
      maxdepth++;
      int size = q.size();
      while (size--)
      {
        Node *curr = q.front();
        q.pop();
        for (auto child : curr->children)
        {
          if (child != NULL)
            q.push(child);
        }
      }
    }

    return maxdepth;
  }
};