#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    // brute force approach..
    /*
    int maxsum = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum = 0;
            for(int k=i;k<=j;k++){
                sum += arr[k];
                //cout<<arr[k]<<" ";
            }
            maxsum = max(maxsum,sum);
        }
    }
    cout << maxsum << endl;
    */

    // comulative sum approach.. OR Prefix Sum Technique..
    int cumSum[n+1];
    cumSum[0] = 0;
    for(int i=1;i<=n;i++){
        cumSum[i] = cumSum[i-1] + arr[i-1];
    }

    int maxSum = INT_MIN;
    for(int i=1;i<=n;i++){
        int sum = 0;
        maxSum = max(maxSum, cumSum[i]);
        for(int j=1;j<=i;j++){
            sum = cumSum[i] - cumSum[j-1];
            maxSum = max(maxSum, sum);
        }
    }
    cout<< maxSum << endl;
    // Kadane’s Algorithm..
    /*
    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i=0;i<n;i++){
        currSum += arr[i];
        if (currSum<0)
        {
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }
    cout << maxSum << endl;
    */
   return 0;
}