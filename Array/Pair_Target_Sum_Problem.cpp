#include<bits/stdc++.h>
using namespace std;

// brute force approach..
/*
bool pairsum(int arr[], int n, int key){
    int sum = 0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            sum = arr[i]+arr[j];
            if (sum == key)
            {
                return true;
            }
        }
    }
    return false;
}
*/

// Pair Target sum approach..
bool pairsum(int arr[], int n, int key){
    int st=0;
    int en = n-1;
    while (st<en)
    {
        if (arr[st]+arr[en] == key)
        {
            cout<<st<<"  "<<en<<endl;
            return true;
        }
        else if (arr[st]+arr[en] > key)
            en--;
        else
            st++;    
    }
    return false;
 }
    
int main()
{
    int n,key;
    cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<< pairsum(arr, n, key) << endl;
   return 0;
}