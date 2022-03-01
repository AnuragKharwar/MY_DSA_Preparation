#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    // write your code here
    while (n >= 0)
    {
        for (int i = 1; i <= n; i++)
        {

            {
                cout << "*\t";
            }
        }
        n--;
        cout << endl;
    }
}