#include<iostream>
using namespace std;
int main (){
    int n; // row
    int m; // collumb
    cout<<"n : "; cin>>n;
    cout<<"m : "; cin>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<(char)(i+64)<<" ";
        }

        cout<<endl;
    }
}
/*
n : 10
A 
B B 
C C C 
D D D D 
E E E E E 
F F F F F F 
G G G G G G G 
H H H H H H H H 
I I I I I I I I I 
J J J J J J J J J J 

*/