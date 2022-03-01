// *	*	*		*	*	*	
// *	*				*	*	
// *						*	
// *	*				*	*	
// *	*	*		*	*	*	
// wrong
#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    int n1=(n+1);
    int st=n1;
    int sp=1;
    int i,j;
    for(i=0;i<n;i++)
    {
        cout<<sp<<","<<st<<endl;
    
    if(i<=n1)
    {
        st--;;
        sp+=2;
    }
    else
    {
        st++;
        sp-=2;
    }
    }
}