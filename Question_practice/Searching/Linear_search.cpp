// Linear search in an array 
#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    int key = 10;
    // Flag initializing 
    bool flag = 0;
    // Input array by user
    for(int i = 0;i < 5; i++)
    {
        cin>>arr[i];
    }
    // Algo for linear search
    for(int i = 0;i < 5; i++)
    {
        if(arr[i] == key)
        { 
            cout<< i << "\n";
            flag = 1;
        }
    }

    if(flag)
        cout<<"Key found"<<"\n";
    else
        cout<< "Key not found"<< "\n";
}