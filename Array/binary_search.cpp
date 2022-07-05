#include <bits/stdc++.h>
using namespace std;

int Binarysearch(int array[], int n, int key){
    int s=0;
    int e=n;
    while (s<=e)
    {
        int mid=(s+e)/2;
        if(key==array[mid])
            return mid;
        else if(key>array[mid])
            s=mid+1;
        else
            e=mid-1;
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int array[n];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int key;
    cin>>key;
    cout<<Binarysearch(array,n,key);
}