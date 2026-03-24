#include<iostream>
using namespace std;
int sum(int n)
{
    int x= (n*(n+1))/2;
    return x;
}
int main()
{
    int n=10;
    cout<<sum(n);
}