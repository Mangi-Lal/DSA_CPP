#include<bits/stdc++.h>
using namespace std;

// swapping using pointers
void swap(int *a, int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
}
// Increment function
int Increment(int *c){
    ++*c;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int *aptr=&a;
    int *bptr=&b;
    int *cptr=&c;

    swap(aptr, bptr);
    Increment(cptr);
    cout<<a<<"  "<<b<<endl<<c<<endl;

    return 0;
}