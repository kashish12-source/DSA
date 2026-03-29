#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n=5;
    int arr[n]={1,2,-3,4,6};
    int maxsum=INT_MIN;
    int cursum=0;
    for(int i=0;i<n;i++)
    {
        
        cursum+=arr[i];
        maxsum=max(cursum,maxsum);
        if(cursum<0)
        {
            cursum=0;
        }
        

    }
    cout<<maxsum;
// here we use the kadan's algorithms 
}