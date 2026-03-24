#include<iostream>
using namespace std;
int sum(int a,int b){
    cout<<a+b;

}
int minOf(int a,int b)
{
    if(a>b){
        return b;
    }
    else 
    return a;

}
int main()
{
    int a=2;
    int b=5;
    cout<<minOf(a,b);
}