class Solution
{
public:
  string reverseWords(string s)
  {

    int j = s.length();
    int start = 0;
    int end = 0;
    for (int i = 0; i <= j; i++)
    {
      if (s[i] == ' ' || i == j)
      {
        end = i - 1;
        while (start < end)
        {
          swap(s[start], s[end]);
          start++;
          end--;
        }
        start = i + 1;
      }
    }

    return s;
  }
};