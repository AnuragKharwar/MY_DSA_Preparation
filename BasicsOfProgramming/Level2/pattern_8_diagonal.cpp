#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    // write your code here
    int sp = n - 1;
    int st = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < sp; j++)
        {
            cout << "\t";
        }
        for (int j = 0; j < st; j++)
        {
            cout << "*\t";
        }
        cout << "\n";
        sp--;
    }
}