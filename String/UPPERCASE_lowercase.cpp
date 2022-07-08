#include<iostream>
#include<String>
#include<algorithm>
using namespace std;

int main()
{
    string s1 = "Team Daksh";

    // Convert into UPPERCASE
    for(int i=0;i<s1.length();i++){
        if (s1[i]>='a' && s1[i]<='z')
        {
            s1[i]-=32;
        }
    }
    cout<<s1<<"\n";

    // Convert into lowercase
    for(int i=0;i<s1.length();i++){
        if (s1[i]>='A' && s1[i]<='Z')
        {
            s1[i]+=32;
        }
    }
    cout<<s1<<"\n";

    // Using transform function
    // UPPERCASE
    transform(s1.begin(),s1.end(),s1.begin(), ::toupper);
    cout<<s1<<"\n";

    // lowercase
    transform(s1.begin(),s1.end(),s1.begin(), ::tolower);
    cout<<s1<<"\n";
    
    return 0;
}