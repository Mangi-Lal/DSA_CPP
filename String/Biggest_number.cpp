#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s1;
    getline(cin, s1);
    cout<<s1<<"\n";
    sort(s1.begin(),s1.end(), greater<int>());
    cout<<s1<<"\n";

    return 0;
}