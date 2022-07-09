#include<iostream>
using namespace std;

int subset(int arr[], int n){
    for(int i;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if (i & (1<<j))
            {
                cout<<arr[j]<<" ";
            }
        }cout<< endl;
    }
}
int main()
{
int arr[5] = {2, 4, 6, 9, 7};
subset(arr, 5);

return 0;
}