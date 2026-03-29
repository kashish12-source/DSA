#include<iostream>
#include<climits>

#include<vector>
using namespace std;
int main()
{
    vector<int>vec={1,2,3,3,2,3};
    for(int i:vec)
    {
        int freq=0;
        for(int j:vec)
        {
            if(i==j)
            {
                freq++;

            }
        }
        if(freq>vec.size()/2)
        {
            cout<<i;
            return 0;
            
        }
    }
}
