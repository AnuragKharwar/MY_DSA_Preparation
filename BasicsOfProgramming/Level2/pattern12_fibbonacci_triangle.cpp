#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    // write your code here
    int a = 0;
    int b = 1;
    int c = 2;
    int nod = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < nod; j++)
        {
            cout << a << "\t";
            c = a + b;
            a = b; // b value swap in a
            b = c; // c value which is previous value of sums stored in b;
        }
        cout << "\n";
        nod++;
    }
}
