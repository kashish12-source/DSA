#include<iostream>
using namespace std;
int main(){
   int a ;
   cout<<"enter the value "<<endl;
   cin>>a;
   
   for (int i=1;i<=a;i++)
   { char ch='A';
    for (int j=1;j<=a;j++)
    {
        cout<<ch;
        ch=ch+1;
    }
    cout<<endl;
   }
   
}
// pattern
// 1234
// 1234
// 1234
// 1234