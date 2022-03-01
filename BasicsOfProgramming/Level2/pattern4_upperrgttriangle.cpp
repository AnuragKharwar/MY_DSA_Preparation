#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    // write your code here
    int n2 = 1;

    while (n != 0)
    {
        for (int i = 1; i < n2; i++)
        {
            cout << "\t";
        }
        for (int j = 0; j < n; j++)
        {
            cout << "*\t";
        }
        cout << endl;
        n--;
        n2++;
    }
}