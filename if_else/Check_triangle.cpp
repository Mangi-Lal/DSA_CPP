#include <iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int side_a,side_b,side_c;
    cin>>side_a>>side_b>>side_c;

    if (side_a==side_b && side_b==side_c){
        cout <<" Triangle is an equilateral "<<endl;
    }
    else if(side_a==side_b || side_b==side_c || side_b==side_c){
        cout <<" Triangle is an isosceles "<<endl;
    }
    else{
        cout <<" Triangle is a scalene "<<endl;
    }
}