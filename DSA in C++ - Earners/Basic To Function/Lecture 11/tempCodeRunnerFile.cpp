#include<iostream>
using namespace std;
int main (){
    int side ; cout<<"Side-Length of Diamond : "; cin>>side;
    int n = (2*side -1);
    int m = ( n/2 + 1);
    for(int i=1; i<=n; i++){
    if( i <= side){
          for(int j=1; j<=n; j++){
                  if(j == m - (i-1)){cout<<"* ";}
                  else if(j == m + (i-1)){cout<<"*  ";}
                  else {cout<<"   ";}
            }
    }
    else if(i>side){
          for(int j=1; j<=n; j++){
                  if(j == i-m+1){cout<<"* ";}
                  else if(j == n + m - i ){cout<<"*  ";}
                  else {cout<<"   ";}
            }
    }
cout<<endl;}
}