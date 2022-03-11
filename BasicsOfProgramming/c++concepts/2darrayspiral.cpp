#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "enter the size n and m of 2d arryy" << endl;

    cin >> n >> m;

    int a[n][m];
    cout << "enter elemetns of " << n << "," << m << "array" << endl;
    // taking input of 2d array from user.
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
        // cout<<endl;
    }
    // display the 2d array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    // spiral display
    int row_start = 0;
    int col_start = 0;
    int row_end = n - 1;
    int col_end = m - 1;
    while (row_start <= row_end && col_start <= col_end) // terminating condition
    {
        // printing 1st row
        for (int col = col_start; col <= col_end; col++)
        {
            cout << a[row_start][col];
        }
        row_start++;
        // printing last column
        for (int row = row_start; row <= row_end; row++)
        {
            cout<<a[row][col_end];
        }
       
        col_end--;
        // printing last row
        for (int col = col_end; col >= col_start; col--)
        {
            cout << a[row_end][col];
        }
         
        row_end--;
        // printing 1st row till row_start;
        for (int row = row_end; row >= row_start; row--)
        {
            cout << a[row][col_start];
        }
      
        col_start++;
    }
    return 0; 
}