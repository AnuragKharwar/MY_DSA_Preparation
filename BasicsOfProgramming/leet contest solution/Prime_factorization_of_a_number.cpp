//   1. You are required to display the prime factorization of a number.
//   2. Take as input a number n.
//   3. Print all its prime factors from smallest to largest.

#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    int n;
    cin >> n;

    int j = 0;
    // write your code here
    for (j = 2; j * j <= n; j++)

    {
        while (n % j == 0)
        {
            cout << j << " ";
            n = n / j;
        }
    }
    if (n != 1)
    {
        cout << n;
    }
}
