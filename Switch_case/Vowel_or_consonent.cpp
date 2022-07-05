#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    char vowel;
    cin >> vowel;

    switch (vowel)
    {
    case 'a':
        cout<<"Vowel";
        break;
    case 'e':
        cout<<"Vowel";
        break;
    case 'i':
        cout<<"Vowel";
        break;
    case 'o':
        cout<<"Vowel";
        break;
    case 'u':
        cout<<"Vowel";
        break;
    case 'A':
        cout<<"Vowel";
        break;
    case 'E':
        cout<<"Vowel";
        break;
    case 'I':
        cout<<"Vowel";
        break;
    case 'O':
        cout<<"Vowel";
        break;
    case 'U':
        cout<<"Vowel";
        break;
    
    default:
        cout<<"Consonent";
        break;
    }
    
    return 0;
}