#include<bits/stdc++.h>
using namespace std; 
int main()
{
    // Initializing array
    int n;
    cin>>n;
    cin.ignore();

    char arr[n+1];
    
    cin.getline(arr, n);
    cin.ignore();

    int i=0, currlen = 0, maxlen = 0;
    int st=0,maxst=0;
    while (true)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currlen > maxlen)
            {
                maxlen = currlen;
                maxst = st;
            }
            currlen = 0;
            st = i+1;
        }
        else
            currlen++;

        if (arr[i] == '\0')
        {
            break;
        }
        i++;  
    }
    cout<<maxlen<<endl;
    for(int i=0;i<maxlen;i++){
        cout<<arr[i+maxst];
    }

  return 0;
}