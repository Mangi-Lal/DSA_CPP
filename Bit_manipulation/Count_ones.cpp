#include<iostream>
using namespace std;

int count_ones(int n){
    int count = 0;
    while (n)
    {
        n = n & n-1;
        count++;
    }
  return count;   
}
int main()
{
    int n;
    cin>>n;
    cout<<count_ones(n)<<"\n";
    return 0;
}