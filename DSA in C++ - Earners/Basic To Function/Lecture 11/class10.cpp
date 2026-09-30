#include<iostream>
using namespace std;
int main(){
    int n; cout<<"n : "; cin>>n;
    int m =(2*n - 1);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){cout<<"* ";}
        for(int a=1; a<=(2*i-3); a++){cout<<"  ";}
        if(i==1){for(int b=1; b<n; b++){cout<<"* ";}}
        else{for(int b=1; b<=n-i+1; b++){cout<<"* ";}}
        cout<<endl;
    }
}

/*

n : 7
_______________________________

* * * * * * * * * * * * * 
* * * * * *   * * * * * * 
* * * * *       * * * * * 
* * * *           * * * * 
* * *               * * * 
* *                   * * 
*                       * 
_______________________________*/