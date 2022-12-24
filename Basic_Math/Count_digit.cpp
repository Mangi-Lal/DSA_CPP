// count the number of digit which can divide N evenly 
#include<iostream>
using namespace std;

    int evenlyDivides(int N){
        int counter = 0;
        int num = N;
        while(N){
            int digit = N % 10;
            if(digit == 0){
                N=N/10;
                continue;
            }
            if((num%digit) == 0)
                counter++;
            N=N/10;
        }
        cout<<counter;
    }

    int main(){
        int N;
        cin>>N;
       evenlyDivides(N);
    
    }