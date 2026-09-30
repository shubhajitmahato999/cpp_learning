#include<iostream>
using namespace std;
int main (){
    int n;cout<<"n : "; cin>>n;
    for(int i=1; i<=n; i++){
        for(int a=1; a<=(n-i); a++){
            cout<<"  ";
        }
        for(int j=1; j<=n; j++){
            cout<<(char)(j+64)<<" ";
        
        }

        cout<<endl;
    }
}
/*
n : 10
                  A B C D E F G H I J 
                A B C D E F G H I J 
              A B C D E F G H I J 
            A B C D E F G H I J 
          A B C D E F G H I J 
        A B C D E F G H I J 
      A B C D E F G H I J 
    A B C D E F G H I J 
  A B C D E F G H I J 
A B C D E F G H I J 
*/