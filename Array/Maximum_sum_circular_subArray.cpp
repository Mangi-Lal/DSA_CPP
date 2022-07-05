#include<bits/stdc++.h>
using namespace std;
int cadane(int, int);

int cadane(int arr[], int n)
    {
        int currSum = 0;
        int mxSum = INT_MIN;
        for(int i=0;i<n;i++){
            currSum += arr[i];
            if (currSum<0)
            {
                currSum = 0;
            }
            mxSum = max(mxSum, currSum);
        }
        return mxSum;
    }

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int Wrapsum;
    int sum = 0;
    int Nonwrapsum = cadane(arr, n);
    for(int i=0;i<n;i++){
        sum += arr[i];
        arr[i] = -arr[i];
    }
    Wrapsum = cadane(arr, n) + sum;
    cout<< max(Wrapsum, Nonwrapsum) << endl;
    return 0;
}