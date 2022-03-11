#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int data;
    cin >> data;

    // write your code here
    int mid = 0;
    int low = 0;
    int high = n;
    // binary serch itterative form
    while (low <= high)
    {
        mid = low + high / 2;
        if (data == arr[mid])
        {
            cout << mid << endl;
            return 0;
        }
        else if (data < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}