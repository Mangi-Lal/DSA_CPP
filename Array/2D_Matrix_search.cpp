#include<bits/stdc++.h>
using namespace std; 
int main()
{
    // taking input array from user
    int n,m;
    int key;
    cin>>n>>m;
    cin>>key;
    int arr[n][m];
    for(int i=0; i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    
    // Searching element..
    // brute force approach
    /*
    bool flag = false;
    for(int i=0; i<n;i++){
        for(int j=0;j<m;j++){
            if (arr[i][j] == key)
            {
                cout<<i<<" "<<j<<endl;
                flag = true;
            }
        }
    }
    if (flag)
        cout << "Element found";    
    else
        cout << "Element Not found";
    */
    // Optimised Approach for sorted matrix
    int r=0, c=n-1;
    bool check=false;
    while (r<m && c>=0)
    {
        if (arr[r][c] == key){
            check = true;
            cout<<r<<" "<<c<<endl;
        }
        arr[r][c]>key ? c-- : r++ ;
    }
    if (check)
        cout<<"Element found"<<endl;
    else
        cout<<"Element Not found"<<endl;
    

  return 0;
}