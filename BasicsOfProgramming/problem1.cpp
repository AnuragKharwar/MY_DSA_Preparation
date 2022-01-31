class Solution
{
public:
    int findFinalValue(vector<int> &nums, int original)
    {
        bool b = true;
        while (b)
        {

            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] == original)
                {
                    original = 2 * original;
                    break;
                }
                if (i == nums.size())
                    b = false;
            }
            return original;
        }
    }
};
