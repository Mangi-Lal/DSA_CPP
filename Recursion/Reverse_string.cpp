#include<iostream>
using namespace std;

void rev(int arr[], int s, int e){
    if(s>=e)
        return;
    swap(arr[s],arr[e]);
    rev(arr, s+1, e-1);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    rev(arr, 0, n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

}