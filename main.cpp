#include <bits/stdc++.h>

using namespace std;

vector<int> sum;

int rob(vector<int> A, int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return A[0];
    }
    if (n == 2)
    {
        return max(A[0],A[1]);
    }
    else
    {
        if(sum[n-1]!=0)
        {
            return sum[n-1];
        }
        else
        {
            sum[n-1] = max(rob(A,n-2)+A[n-1] , rob(A,n-1));
            return sum[n-1];
        }
    }
}

int main()
{
    vector<int> nums={1,7,9,5,1,3,4};
    int arrSize = nums.size();
    cout<<arrSize<<"\n";
    for (int i=0 ; i<arrSize ; i++)
    {
        sum.push_back(0);
    }
    cout<<rob(nums,arrSize)<<"\n\n";
    for (int i=0 ; i<arrSize ; i++)
    {
        cout<<sum[i]<<"\n";
    }
    return 0;
}