// pass by vlaue ka matlab hai ki hum jab main function me koi variable ki value define krte hai 
// and then usse pass karte hai toh usse pass by value kehte hai
#include<iostream>
using namespace std;        
void change(int a)
{
    a=10;
}  
int main()
{
    int a=5;
    change(a);
    cout<<a; // output will be 5 because we are passing the value of a to the function and not the reference of a
}