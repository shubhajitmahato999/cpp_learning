#include<iostream>
using namespace std;
int main (){
    int n; // row representive 
    
    cout<<"n : "; cin>>n;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<(i+j+1)%2<<" ";
        
        }

        cout<<endl;
    }
}

/*

n : 10
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 
0 1 0 1 0 1 
1 0 1 0 1 0 1 
0 1 0 1 0 1 0 1 
1 0 1 0 1 0 1 0 1 
0 1 0 1 0 1 0 1 0 1 
*/