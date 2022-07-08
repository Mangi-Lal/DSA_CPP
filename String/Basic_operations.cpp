#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s1 = "Hello";
    cout << s1<<endl;
    // Repeating same character
    string s2(4,'H');
    cout<< s2<<endl;
    string s3;
    // Input string by user
    getline(cin, s3);
    cout << s3 << endl;
    cout<<s1[1]<<"\n";
    string s4 = " Guys";
    // Append s4 with s1
    cout<<s1+s4<<endl;
    cout<<s1.append(s4)<<endl;
    // Clear string 
    s2.clear();
    cout<<s2<<endl;
    //Compare String
    if (!s4.compare(s1))
    {
        cout<<"strings are equal "<<"\n";
    }
    cout<<s4.compare(s1)<<"\n";
    // Empty string
    cout<<s3.empty()<<"\n";
    // Erase string 
    cout<<s1.erase(0,2)<<"\n";
    // Find any string in string
    cout<<s1.find("Guys")<<"\n";
    // Insert any string in string
    cout<<s1.insert(0,"He")<<"\n";
    // length of any string
    cout<<s1.length()<<"\n";
    // Substring of any string
    cout<<s1.substr(0,5)<<"\n";
    // String to integer
    string s5 = "36";
    int x = stoi(s5);
    cout<<x+4<<"\n";
    // Integer to string
    cout<<to_string(x)<<"\n";
    // Sort string
    sort(s1.begin(),s1.end());
    cout<<s1<<"\n";
    return 0;
}