#include<bits/stdc++.h>
using namespace std;
int linear(int arr[],int n,int target)
{
    bool f=false;
    for(int i=0;i<n;i++)
    {
        if (arr[i]==target)
        {
            f=true;
        }
       
    }
    if (f)
    {
        cout<<"element found";

    }
    else{
        cout<<"element not found";
    }
}
int main(){
    int n=5;
    int arr[n]={23,52,623,124,53};
    int target=12;
    linear(arr,n,target);


}