// *	
// *	*	
// *	*	*	
// *	*	*	*	
// *	*	*	*	*	


#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
   //write your code here
   for(int j=0;j<n;j++)
   {
       int i=0;
       while(i<=j)
       {
           cout<<"*\t";
           i++;
       }
       cout<<endl;
   }
   

   
}
