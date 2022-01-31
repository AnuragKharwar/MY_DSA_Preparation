// 1. You've to display the digits of a number.
// 2. Take as input "n", the number for which digits have to be displayed.
// 3. Print the digits of the number line-wise.
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    // write your code here
    int A[10];
    int i = 0;
    int j = 0;
    while (n != 0)
    {
        A[i] = n % 10;
        i++;
        n = n / 10;
    }
    for (j = i - 1; j > -1; j--)
    {
        cout << A[j] << endl;
    }
}
