public:
vector<int> plusOne(vector<int> &digits)
{
  int idx = digits.size() - 1;
  while (idx >= 0)
  {
    if (digits[idx] < 9)
    {
      digits[idx] += 1;
      return digits;
    }
    else
      digits[idx] = 0;

    idx--;
  }

  // digits.resize(digits.size()+1);
  // digits[0]=1;
  digits.insert(digits.begin(), 1);

  return digits;
}
}
;