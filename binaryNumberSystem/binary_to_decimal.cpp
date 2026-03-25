#include <iostream>
using namespace std;
int main()
{
    int n=101;
    int pow=1;
    int ans=0;
    while(n>0)
    {
        int rem=n%10;
        ans+=rem*pow;
        n=n/10;
        pow=pow*2;
    }
    cout<<ans;
    
   
}