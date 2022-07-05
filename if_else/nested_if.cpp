#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int x,y;
    cin >> x >> y;

    if (x==y)
        {
            cout<<" Both the numbers are equal "<< endl;
        }
    else if(x > y)
            {
                cout<<"x is greater than y "<< endl;
            }
            else
                {
                    cout<<" y is greater than x "<< endl;
                }

        return 0;
}