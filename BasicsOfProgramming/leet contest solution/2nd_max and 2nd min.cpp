#include <bits/stdc++.h>
using namespace std;

void curiousCase(int n)
{
    // 	write your code here
    int i = 0;
    vector<int> v;
    for (i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    cout << v[v.size() - 2] << " " << v[1];
}
//   tring using array also
int main()
{
    int n;
    cin >> n;
    curiousCase(n);
    return 0;
}
