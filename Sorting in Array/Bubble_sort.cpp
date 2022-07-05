#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int counter = 1;
    while(counter < n){
        for(int i=0;i<counter;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    } 
    // Using for loop
    /*   
        for(int j=0;j<n;j++){
            for(int i=0;i<j;i++){
                if(arr[i]>arr[i+1]){
                    int temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
                }
            }
        } 
    */
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}