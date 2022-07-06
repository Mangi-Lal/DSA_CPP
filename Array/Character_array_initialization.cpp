#include<bits/stdc++.h>
using namespace std; 
int main()
{
    // taking input array
    char arr[100] = "MangiLal";
    int i = 0;
    while (arr[i] != '\0')
    {
        cout<<arr[i]<<"  ";
        i++;
    }
    cout<<endl;
    // taking input array from user
    cin>>arr;
    cout<<arr<<endl;
    
  return 0;
}