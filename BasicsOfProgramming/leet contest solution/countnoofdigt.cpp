#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    int count = 0;
    int i = 0;
    // write your code here
    for (i = 0; i < n; i++)
    {
        if (n > 10)
        {
            n = n / 10;
            count++;
        }
    }
    if (n < 10)
    {
        cout << count + 1;
    }
}