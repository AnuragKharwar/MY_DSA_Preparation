// 1	
// 2	3	
// 4	5	6
// 7	8	9	10	
// 11	12	13	14	15	
#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    int num=1;
    int d=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<num;j++)
        {
            cout<<d<<"\t";
            d++;
        }
        cout<<endl;
        num++;
    }
    
}
