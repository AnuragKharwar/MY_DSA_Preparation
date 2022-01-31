#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    // write your code here
    int a = 0, b = 1, c = 0;
    int i = 0;
    cout << a << endl
         << b << endl;
    for (i = 0; i < n - 2; i++)
    {

        c = a + b;
        cout << c << endl;
        a = b;
        b = c;
    }
}
// Method using ARRAY
//     int n;
//     cin >> n;
//     int A[n];
//     int i=0;

//     for(i=2;i<n;i++)
//     {  A[0]=0;
//         A[1]=1;
//         A[i]=A[i-1]+A[i-2];

//     }
//     for(i=0;i<n;i++)
//     {
//         cout<<A[i]<<endl;
//     }

// }