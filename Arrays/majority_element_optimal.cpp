#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> vec = {1,2,3,3,2,3};

    sort(vec.begin(), vec.end());

    int n = vec.size();
    int count = 1;          // FIXED
    int ans = vec[0];

    for(int i = 1; i < n; i++)
    {
        if(vec[i] == vec[i-1])
        {
            count++;
        }
        else
        {
            count = 1;
        }

        if(count > n/2)
        {
            ans = vec[i];
            break;         // stop early (optional but better)
        }
    }

    cout << ans;
    return 0;
}
