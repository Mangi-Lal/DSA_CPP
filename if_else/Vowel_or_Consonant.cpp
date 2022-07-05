#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    char c;
    cin>>c;

    int isUppercaseVowel = (c=='A' ||c=='E' ||c=='I' ||c=='O' || c=='U');
    int isLowercaseVowel = (c=='a' ||c=='e' ||c=='i' ||c=='o' || c=='u');

    if (isUppercaseVowel || isLowercaseVowel){
        cout << "The character is a Vowel"<< endl;
    }
    else{
         cout << "The character is a Consonant"<< endl;
    }

    return 0;
}