#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n; cout<<"n : "; cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){cout<<min(i,j)<<" ";}
        for(int j=n-1; j>=1; j--){cout<<min(i,j)<<" ";}
        cout<<endl;
    }

       for(int i=n-1; i>=1; i--){
        for(int j=1; j<=n; j++){cout<<min(i,j)<<" ";}
        for(int j=n-1; j>=1; j--){cout<<min(i,j)<<" ";}
        cout<<endl;
    }

}

/*

n : 4
1 1 1 1 1 1 1 
1 2 2 2 2 2 1 
1 2 3 3 3 2 1 
1 2 3 4 3 2 1 
1 2 3 3 3 2 1 
1 2 2 2 2 2 1 
1 1 1 1 1 1 1 

*/