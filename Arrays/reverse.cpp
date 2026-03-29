#include<bits/stdc++.h>
using namespace std;
// here we use the two pointer approach
int reverse(int arr[],int n)
{
    int start=0, end=n-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int n=5;
    int arr[n]={23,52,623,124,53};
    int target=12;
    reverse(arr,n);
    
    
    for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}

}