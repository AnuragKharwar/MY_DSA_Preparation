// 1. You are given as input marks of a student.
// 2. Display an appropriate message based on the following rules:
//   	  2.1 for marks above 90, print excellent.
//   	  2.2 for marks above 80 and less than equal to 90, print good.
//   	  2.3 for marks above 70 and less than equal to 80, print fair.
//   	  2.4 for marks above 60 and less than equal to 70, print meets expectations.
//   	  2.5 for marks less than equal to 60, print below par.

// Note -> Only change the code in area after - // code here

// solution
#include <iostream>
using namespace std;
void gradingSystem(int m)
{
    // write your code here
    if (m > 90)
    {
        cout << "excellent";
    }
    if (m > 80 && m <= 90)
    {
        cout << "good";
    }
    if (m > 70 && m <= 80)
    {
        cout << "fair";
    }
    if (m > 60 && m <= 70)
    {
        cout << "meets expectations";
    }
    if (m < 60)
    {
        cout << "below par";
    }
}
int main()
{
    int marks;
    cin >> marks;
    gradingSystem(marks);
    return 0;
}