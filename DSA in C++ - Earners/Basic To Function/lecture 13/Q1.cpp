// PASCALS TRIANGLE PLOTTING

#include<iostream>
using namespace std;

    int Fact(int n){
        int f = 1;
        for(int i=2; i<=n; i++){
            f*=i;
        }
        return f;
    }
    int nCr(int n, int r){
       int c = Fact(n)/(Fact(r)*Fact(n-r));
        return c;
    }
  int main(){
    int n; cout<<"n : "; cin>>n;
    for(int i=0; i<=n; i++){
        for(int a=0; a<=(n-i); a++){
            cout<<" ";
        }
    
        for(int j=0; j<=i; j++){
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }
  }

  /*
  n : 4

     1 
    1 1 
   1 2 1 
  1 3 3 1 
 1 4 6 4 1 
 
 */