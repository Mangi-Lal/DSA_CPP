#include<iostream>
using namespace std;
// using two parameters
/* void rev(int arr[], int s, int e){
    if(s>=e)
        return;
    swap(arr[s],arr[e]);
    rev(arr, s+1, e-1);
}
*/

// using single parameters
void rev(int arr[], int i, int n){
    if(i>=n/2)
        return;
    swap(arr[i],arr[n-i-1]);
    rev(arr, i+1, n);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    // rev(arr, 0, n-1);
    rev(arr, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

}