#include<iostream>
using namespace std;
int main (){
    int n; // row  
    cout<<"n : "; cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(i%2 == 0){
                cout<<(char)(j+64)<<" ";
            }
            else {
                 cout<<j<<" ";
            }
        }

        cout<<endl;
    }
}
/*
n : 11
1 
A B 
1 2 3 
A B C D 
1 2 3 4 5 
A B C D E F 
1 2 3 4 5 6 7 
A B C D E F G H 
1 2 3 4 5 6 7 8 9 
A B C D E F G H I J 
1 2 3 4 5 6 7 8 9 10 11 */