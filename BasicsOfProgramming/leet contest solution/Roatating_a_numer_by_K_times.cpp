#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int k = 0;
    cout << "enter n" << endl;
    cin >> n;
    cout << "enter k" << endl;
    cin >> k;
    int nod = 0;
    int temp = n;

    // getiing number of digits
    while (temp != 0)
    {
        temp = temp / 10;
        nod++;
    }

    // for large value of k

    while (k > nod)
    {
        k = k % nod;
    }

    // for negative value of k
    while (k < 0)
    {
        k = nod + k;
        k = k % nod;
    }
    int div = 1;
    int mult = 1;
    int r = 0;
    int q = 0;
    // int inv = 0;
    for (int i = 0; i < nod; i++)
    {

        if (i < k)
        {
            div = div * 10;
        }
        else
        {
            mult = mult * 10;
        }
    }
    q = n / div;
    r = n % div;
    int inv = r * mult + q;
    cout << inv;
    return 0;
}
