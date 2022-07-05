#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=0;i<n;i++){
        maxNo = max(maxNo,array[i]);
        minNo = min(minNo,array[i]);
    }
    cout<<"Maximum is :"<<maxNo<<endl;
    cout<<"Minimum is :"<<minNo;
    return 0;
}