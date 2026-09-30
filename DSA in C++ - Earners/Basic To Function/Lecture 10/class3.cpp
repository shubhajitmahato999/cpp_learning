#include<iostream>
using namespace std;
int main (){
    int n; // row
    int m; // collumb
    cout<<"n : "; cin>>n;
    cout<<"m : "; cin>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout<<(char)(i+64)<<" ";
        }

        cout<<endl;
    }

    cout<<endl;


      for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout<<(char)(j+64)<<" ";
        }

        cout<<endl;
      }

    
}
/*

n : 7
m : 9
A A A A A A A A A 
B B B B B B B B B 
C C C C C C C C C 
D D D D D D D D D 
E E E E E E E E E 
F F F F F F F F F 
G G G G G G G G G 

A B C D E F G H I 
A B C D E F G H I 
A B C D E F G H I 
A B C D E F G H I 
A B C D E F G H I 
A B C D E F G H I 
A B C D E F G H I 

*/