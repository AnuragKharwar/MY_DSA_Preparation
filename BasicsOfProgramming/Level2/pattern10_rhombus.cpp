		*	
	*		*	
*				*	
	*		*	
		*	
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    // write your code here
    int nos = n / 2;
    ;
    int nis = -1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < nos; j++)
        {
            cout << "\t";
            // cout<<nos<<endl;
        }
        cout << "*\t";
        for (int j = 0; j < nis; j++)
        {
            cout << "\t";
            ;
        }
        if (i > 1 && i < n)
        {
            cout << "*\t";
        }

        if (i <= n / 2)
        {
            nos--;
            nis += 2;
        }
        else
        {
            nos++;
            nis -= 2;
        }
        cout << endl;
    }
}
