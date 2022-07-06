#include<bits/stdc++.h>
using namespace std; 
int main()
{
    // Initializing array
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;

    // Check if number is palindrome.
    bool flag = true;
    for(int i=0;i<n;i++){
        if (arr[i] != arr[n-1-i]) //If single character is not equal then word is not palindrome 
       {
            flag = false;
            break;
        }
    }

    if(flag == true)
        cout<<"Word is palindrome";
    else
        cout<<"Not a palindrome";
    
  return 0;
}