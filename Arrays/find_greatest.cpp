#include<bits/stdc++.h>
using namespace std;
int greatest(int arr[], int n){
    int max=INT_MIN;
    for (int i=0;i<n;i++)
    { 
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
     cout<<max;
   
    }
    


int smallest(int arr[],int n)
{
    int min = INT_MAX ;

    for(int i=0;i<n;i++)
    {
        if (arr[i]<min)
        {
           min=arr[i];

        }
        
    }
    cout<<min;
}
int main()
{
    int n=5;
    int arr[n]={-3,55,23,64,8};
    greatest(arr,n);
    cout<<endl;
    smallest(arr,n);

}