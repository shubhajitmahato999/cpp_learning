#include<iostream>
using namespace std;
int main (){
    int n;cout<<"n : "; cin>>n;
    int a=1, b=n-1;
    for(int i=1; i<=n*2-1; i++){
        for(int l=1; l<=b; l++){ cout<<"  ";}
        for(int j=1; j<=a; j++){ cout<<"* ";}
        if(i<n){a+=2; b--;}
        else{a-=2; b++;}
        cout<<endl;
    }
}
/*

n : 6
_______________________________
          * 
        * * * 
      * * * * * 
    * * * * * * * 
  * * * * * * * * * 
* * * * * * * * * * * 
  * * * * * * * * * 
    * * * * * * * 
      * * * * * 
        * * * 
          * 
_______________________________*/