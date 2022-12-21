#include <bits/stdc++.h>
using namespace std;

/* void fibonacci(int n){
    int t1=0;
    int t2=1;
    for (int i=1;i<=n;i++){
        cout<<t1<<"  ";
        int nextterm = t1+t2;
        t1=t2;
        t2=nextterm;
    }
    return ;
    
}
*/
// Using vector 
    vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long> v(n);
        v[0]=v[1]=1;
        for(int i=2;i<n;i++){
            v[i]=v[i-1]+v[i-2];
        }

        for(int i=0;i<n;i++){
            cout<<v.at(i)<<" ";
        }
        return v;
    }
int main()
{
    int n;
    cin>>n;
    printFibb(n); 
    return 0;
}