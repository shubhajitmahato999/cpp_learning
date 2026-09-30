#include<iostream>
using namespace std;
// calculating higest factore
int main(){
    int n; cout<<"n : "; cin>>n;
    int x=0;
    int m = n;
    while(m!=0){
        m/=10;
        x++;
    }
    cout<<"Digits of Your number : "<<x;

    
}