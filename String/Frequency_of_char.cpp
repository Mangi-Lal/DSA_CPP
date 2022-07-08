#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s1 = "mississipi";

    int freq[26];
    for(int i=0;i<26;i++){
        freq[i] = 0;
    }
    
    for(int i=0;i<s1.length();i++){
        freq[s1[i]-'a']++;
    }

    char ans = 'a';
    int maxFq = 0;

    for(int i=0;i<26;i++){
        if (maxFq<freq[i])
        {
            maxFq = freq[i];
            ans = i+'a';
        }
        
    }

    cout<<maxFq<<"\n";
    cout<<ans<<"\n";
    return 0;
}