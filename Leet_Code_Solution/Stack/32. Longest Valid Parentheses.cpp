// using two stacks.
// Runtime: 3 ms, faster than 90.25% of C++ online submissions for Longest Valid Parentheses.
// Memory Usage: 7.7 MB, less than 8.47% of C++ online submissions for Longest Valid Parentheses.

https://leetcode.com/problems/longest-valid-parentheses/submissions/

class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        stack<int> idx;
        idx.push(-1);
        int maxvalid=0;
        st.push(0);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push('(');
                idx.push(i);
                
            }
            else if(s[i]==')' && st.top()=='(')
            {
                st.pop();
                idx.pop();
                maxvalid=max(maxvalid,i-idx.top());
            }
            else
                idx.push(i);
        }
       return maxvalid; 
    }
};
