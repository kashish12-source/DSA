#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n=5;
    int arr[n]={1,3,5,6,7};
    int target=8;
    bool f=false;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (arr[i]+arr[j]==target)
            {
               
                cout<<arr[i]<<" " <<arr[j]<<endl;
                 
                 f=true;
                break;
            }
            
        }

    }
    if(f)
    {
        cout<<"target found";
    
    }
    else{
        cout<<"target not found";
    }
}