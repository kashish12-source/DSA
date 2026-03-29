#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec={2,5,6,6,7,28};
    int target=11;
    // since it is given that the array is sorted array
    int n=vec.size();
    int start=0;
    int end=n-1;

    while(start<end)
    {
        int pairsum=vec[start]+vec[end];
        if(pairsum>target)
        {
            end--;

        }
        else if(pairsum<target){
            start++;
        }
        else if(pairsum==target)
        {
            cout<<start <<","<<end;
            break;
        }

    }

    
    
}