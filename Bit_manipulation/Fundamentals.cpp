#include<iostream>
using namespace std;
// Get bit
int get_bit(int n, int pos){
    return(!(n & (1<<pos)));
}
// Set bit
int set_bit(int n, int pos){
    return(n | (1<<pos));
}
// Clear bit
int clear_bit(int n, int pos){
    int mask = ~(1<<pos);
    return(n & mask);
}
// Update bit
int update_bit(int n, int pos, int val){
    int mask = ~(1<<pos);
    n = n & mask;
    return(n | (val<<pos));
}

int main()
{
    int n,pos;
    cin>>n>>pos;
    // cout<<get_bit(n,pos)<<"\n";
    // cout<<set_bit(n,pos)<<"\n";
    // cout<<clear_bit(n,pos)<<"\n";
    cout<<update_bit(n,pos,0)<<"\n";
    return 0;
}