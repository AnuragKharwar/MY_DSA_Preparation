#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    int nst = 1;

    // write your code here
    while (n != 0)
    {
        for (int i = 0; i < n - 1; i++)

        {
            cout << "\t";
        }
        for (int j = 0; j < nst; j++)

        {
            cout << "*\t";
        }

        nst++;
        n--;
        cout << endl;
    }
}