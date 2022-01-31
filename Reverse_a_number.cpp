// 1. You've to display the digits of a number in reverse.
// 2. Take as input "n", the number for which digits have to be display in reverse.
// 3. Print the digits of the number line-wise, but in reverse order.
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    // write your code here
    int i = 0;
    int A[10];

    while (n != 0)
    {
        A[i] = n % 10;
        cout << A[i] << endl;
        i++;
        n = n / 10;
    }
}