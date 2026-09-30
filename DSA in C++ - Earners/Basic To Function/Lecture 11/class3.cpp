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
            cout<<j<<" ";
        
        }

        cout<<endl;
    }
}
/*

n : 10
                  1 
                1 2 
              1 2 3 
            1 2 3 4 
          1 2 3 4 5 
        1 2 3 4 5 6 
      1 2 3 4 5 6 7 
    1 2 3 4 5 6 7 8 
  1 2 3 4 5 6 7 8 9 
1 2 3 4 5 6 7 8 9 10 

*/