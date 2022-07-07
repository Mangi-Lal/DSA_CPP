#include<iostream>
using namespace std;

int main(){
    int a;
    a = 36;
    cout<<"size of integer a:"<<sizeof(a)<<endl;

    float b;
    b = 29.36;
    cout<<"size of float b:"<<sizeof(b)<<endl;

    char c;
    c = 'j';
    cout<<"size of character c:"<<sizeof(c)<<endl;

    bool d;
    d = true;
    cout<<"size of boolean d:"<<sizeof(d)<<endl;

    double e;
    e = 36;

    short f;
    f = 29;

    cout<<"size of double e:"<<sizeof(e)<<endl;
    cout<<"size of short f:"<<sizeof(f)<<endl;

    return 0;
}