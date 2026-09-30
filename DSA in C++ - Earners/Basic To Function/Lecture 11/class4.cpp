#include<iostream>
using namespace std;
int main (){
    int n; // row representive 
    
    cout<<"n : "; cin>>n;
    
    for(int i=1; i<=n; i++){
        for(int a=1; a<=(n-i); a++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<(char)(j+64)<<" ";
        
        }

        cout<<endl;
    }
}
/*

n : 10 
                  A 
                A B 
              A B C 
            A B C D 
          A B C D E 
        A B C D E F 
      A B C D E F G 
    A B C D E F G H 
  A B C D E F G H I 
A B C D E F G H I J 
*/