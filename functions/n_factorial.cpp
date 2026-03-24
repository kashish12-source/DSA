#include<iostream>
using namespace std;
int fact(int n)
{
    int x;
    if(n>1){
    x=n*fact(n-1);
    return x;
    }
   
}
int main()
{
    int n=5;
    cout<<fact(n);
}