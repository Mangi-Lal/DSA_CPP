#include <bits/stdc++.h>
using namespace std;
int partition(int*, int, int);

void quickSort(int *arr, int lb, int ub)
{
    if (lb<ub)
    {
        int loc = partition(arr, lb, ub);
        quickSort(arr, lb, loc-1);
        quickSort(arr, loc+1, ub);
    }
}
int partition(int *arr, int lb, int ub)
{
    int pivot = arr[lb];
    int start = lb;
    int end = ub;
    while (start<end)
    {
        while (arr[start]<=pivot)
        {
            start++;
        }
        while (arr[end]>pivot)
        {
            end--;
        }
        if (start<end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }
    int temp = arr[lb];
    arr[lb] = arr[end];
    arr[end] = temp;
    return end;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int lb=0;
    int ub=n-1;

    quickSort(arr, lb, ub);    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}