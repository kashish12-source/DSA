#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,-5};
    int n=5;
    
    int maxsum=INT_MIN;

    for(int i=0;i<n;i++)
    {
        int cursum=0;
        for(int j=i;j<n;j++)
        {
            cursum+=arr[j];
            maxsum=max(maxsum,cursum);
        }
        
        
    }
    cout<<maxsum;

    // in this whole code we have printed the all subarrays 
}