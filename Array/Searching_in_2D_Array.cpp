#include<bits/stdc++.h>
using namespace std; 
int main()
{
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

    bool flag = true;
    for(int i=0; i<n;i++){
        for(int j=0;j<m;j++){
            if (arr[i][j] == key)
            {
                cout<<i<<"  "<<j<<endl;
                flag = false;
            }
        }
    }
    if (flag == false)
    {
        cout<<"Element found in array"<<endl;
    }
    else
        cout<<"Element Not found "<<endl;
    
    return 0;
}