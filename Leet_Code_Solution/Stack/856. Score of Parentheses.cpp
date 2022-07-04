class Solution
{
public:
  int scoreOfParentheses(string s)
  {
    stack<int> st;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] == '(')
        st.push(-1);
      else
      {
        ans = 0;
        while (st.top() != -1)
        {
          ans += st.top();
          st.pop();
        }
        st.pop();
        if (ans == 0)
          st.push(1);
        else
          st.push(ans * 2);
      }
    }
    ans = 0;
    while (!st.empty())
    {
      ans += st.top();
      st.pop();
    }
    return ans;
  }
};