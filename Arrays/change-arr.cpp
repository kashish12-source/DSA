#include<bits/stdc++.h>
using namespace std;
void change(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        arr[i]=2*arr[i];
    }
}
int main(){
    int arr[]={1,2,4,5,6};
    int n=5;
    change(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;

    }

}
// arrays name is implicitly a pointer 