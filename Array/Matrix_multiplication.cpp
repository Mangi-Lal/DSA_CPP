#include<bits/stdc++.h>
using namespace std; 
int main()
{
    // taking input matrix from user
    int n1, n2, n3;
    cin>>n1>>n2>>n3;
    int m1[n1][n2];
    int m2[n2][n3];
    int mul[n1][n3];

    for(int i=0; i<n1;i++){
        for(int j=0;j<n2;j++){
            cin>>m1[i][j];
        }
    }
    for(int i=0; i<n2;i++){
        for(int j=0;j<n3;j++){
            cin>>m2[i][j];
        }
    }
    for(int i=0; i<n1;i++){
        for(int j=0;j<n3;j++){
            mul[i][j] = 0;
        }
    }   
    // multiplication of matrices..
    for(int i=0;i<n1;i++)
        for(int j=0;j<n3;j++)
            for(int k=0;k<n2;k++){
                mul[i][j] += m1[i][k]*m2[k][j];
            }
    // printing resultant matrix..
    for(int i=0; i<n1;i++){
        for(int j=0;j<n3;j++){
            cout << mul[i][j] << " ";
        }
        cout<<endl;
    }      
    return 0;
}