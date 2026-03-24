// binomial coefficient
// nCr=n!/r!(n-1)!
#include<iostream>
using namespace std;
int factn(int n)
{
    
    if(n>1)
    {
        n=n*factn(n-1);

    }
    return n;
}

float binomial(int n ,int r)
{
    // int x=factn(n);
    // int y=factn(r);
    // int z=factn(n-r);
    // int bino=x/(y*z);
    // return bino;
    float bino;
    bino=factn(n)/(factn(r)*factn(n-r));
    return bino;

}
int main()
{
    int n=6;
    int r=3;
    cout<<binomial(n,r);
}