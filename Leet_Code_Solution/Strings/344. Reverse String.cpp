void reverseString(vector<char> &s)
{

  int i = s.size() - 1;
  int j = 0;
  while (j < i)
  {
    swap(s[j++], s[i--]);
  }