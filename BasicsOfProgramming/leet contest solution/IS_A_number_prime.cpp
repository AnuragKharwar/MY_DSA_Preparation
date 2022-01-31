#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int t;
    cin >> t;
    // write your code here
    int i = 0;
    int n;

    while (t--)
    {
        int count = 0;
        cin >> n;
        for (i = 2; i * i <= n; i++)
        {

            if ((n % i) == 0)
            {
                count++;
            }
        }
        if (count < 1)
        {
            cout << "prime" << endl;
        }
        else
        {
            cout << "not prime" << endl;
        }
    }
}
