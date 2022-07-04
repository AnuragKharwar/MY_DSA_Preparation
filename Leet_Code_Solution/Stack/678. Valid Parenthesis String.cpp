class Solution
{
public:
  bool checkValidString(string s)
  {
    stack<int> open;
    stack<int> star;
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] == '*')
        star.push(i);
      else if (s[i] == '(')
        open.push(i);
      else
      {
        if (open.size() > 0)
          open.pop();
        else if (star.size() > 0) // convert start to opening
          star.pop();
        else
          return false; // unbalaned closing
      }
    }
    if (open.size() > star.size())
      return false;
    else
    {
      while (open.size() > 0)
      {
        int openidx = open.top();
        open.pop();
        int closeidx = star.top();
        star.pop();
        if (openidx > closeidx)
          return false;
      }
    }

    return true;
  }
};