// calculating digits number 


#include<iostream>
using namespace std ;
int main(){
 int n, digits=0;
 cout<<"enter n : ";
 cin>>n;
 int m = n;
 while(m != 0){
  m/=10;
  digits++;
 }
 if(digits == 3) cout<<"yes";
 else cout<<"no";

 cout<<endl<<digits;
}