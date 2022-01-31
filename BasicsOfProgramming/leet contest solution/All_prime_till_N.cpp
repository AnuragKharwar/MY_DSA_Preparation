#include<iostream>
using namespace std;
int main(int argc, char **argv)
{
    int low, high;
    cin >> low >> high;

    // write your code here
    int i = 0;
    for (i = low; i <= high; i++)
    {
        int count = 0;
        for (int div = 2; div * div <= i; div++)
        {
            if (i % div == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)

        {
            cout << i << endl;
        }
    }
}