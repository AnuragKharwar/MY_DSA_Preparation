class Solution
{
public:
  int minInsertions(string s)
  {
    int open = 0, addition = 0;
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] == '(')
        open++;
      else if (s[i] == ')')
      {
        if (open > 0)
          open--; // if we get one closing and opening>0 then open-- ,  then check if i+1 is also closing then skip i+1 element else add one more closing required in additon
        else
          addition++; // if opening is not thr
        if (i + 1 < s.size() && s[i + 1] == ')')
          i++;
        else
          addition++;
      }
    }
    return addition + 2 * open;
  }
};