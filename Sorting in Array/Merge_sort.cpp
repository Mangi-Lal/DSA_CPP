#include <bits/stdc++.h>
using namespace std;
void merge(int*, int, int, int);


void mergeSort(int *arr, int lb, int ub)
    {
        if (lb<ub)
        {
            int mid = (lb+ub)/2;
            mergeSort(arr, lb, mid);
            mergeSort(arr, mid+1, ub);
            merge(arr, lb, mid, ub);
        }
    }
    
    void merge(int *arr, int lb, int mid, int ub)
    {
        int B[50];
        int i = lb;
        int j = mid+1;
        int k = lb;
        while(i<=mid && j<=ub){
            if (arr[i]<=arr[j])
            {
                B[k] = arr[i];
                i++;
            }
            else
            {
                B[k] = arr[j];
                j++;
            }
            k++;
        }
        if (i>ub)
        {
            while (j<=ub)
            {
                B[k] = arr[j];
                j++;
                k++;
            }
        }
        else
        {
            while (i<=mid)
            {
                B[k] = arr[i];
                i++;
                k++;
            }
        } 
        for (int i = lb; i<k; i++)
        {
            arr[i] = B[i];
        }  
    }

    int main()
    {
        int n;
        cin>>n;
        int arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int lb = 0;
        int ub = n-1;

    mergeSort(arr, lb, ub);  
        for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<"  ";
            } 
    }