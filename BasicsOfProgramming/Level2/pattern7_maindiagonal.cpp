//*	
// 	 *	
// 		*	
// 			*	
// 				*	

#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    

{   for(int j=0;j<n;j++)
    {
    for(int i=0;i<=n;i++)
    {
        if(i>j||i<j)
        {
            cout<<"\t";
        }
        else
        {
            cout<<"*\t";
        }
    }cout<<endl;
    }
    
    
}
}