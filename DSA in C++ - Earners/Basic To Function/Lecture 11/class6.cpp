#include<iostream>
using namespace std;
int main (){
    int n;cout<<"n : "; cin>>n;
    int m = (2*n - 1);
    for(int i=1; i<=n; i++){
        for(int a=1; a<(i); a++){
            cout<<"  ";
        }
        for(int j=1; j<=m; j++){
            cout<<(char)(j+64)<<" ";
        
        }
        m-=2;
        cout<<endl;
    }
}

/*

n : 5
A B C D E F G H I 
  A B C D E F G 
    A B C D E 
      A B C 
        A 
        
        
        */