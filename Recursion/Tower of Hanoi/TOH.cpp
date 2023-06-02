#include<bits/stdc++.h>
using namespace std;
void solveTOH(int N,int source,int dest,int helper,long long &step);
void solveTOH(int N,int source,int dest,int helper,long long &step){
        step++;
        if(N==1){
            cout<<"move disk "<<N<<" from rod "<<source<<" to rod "<<dest<<endl;
            return;
        }
        solveTOH(N-1,source,helper,dest,step);
        cout<<"move disk "<<N<<" from rod "<<source<<" to rod "<<dest<<endl;
        solveTOH(N-1,helper,dest,source,step);
        return;
    }
int main(){
    long long steps=0;
    int N;
    cin>>N;
    solveTOH(N,1,3,2,steps);
    cout<<steps<<endl;
    return 0;
}