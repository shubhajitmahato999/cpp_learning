#include<iostream>
using namespace std;
// calculating higest factore
int main(){
    int n; cout<<"n : "; cin>>n;
    for(int i=n/2; i>=1  // (amar mistake je >= sign take thikthak bhabe na lekhano)
                       ; i--){
        if(n%i == 0){
            cout<<i; // nhul je amar hayechilo tahalo je cout ta ami baire diyechilam,nbreak na dile ta print haye jabe 1 parjanto
            break;}
        
    }
}