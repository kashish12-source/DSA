#include<iostream>
using namespace std;
int print(int n)
{
    int sum=0;
    while(n>0)
    {
        int last_n=n%10;
        n=n/10;
        sum+=last_n;
 
       
    }
    return sum;

   
   
    

}
int main()
{
    int n=123;
    cout<<print(n);
}