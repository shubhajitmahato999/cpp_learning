#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n; cout<<"n : "; cin>>n;
    int m = n;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m; j++){
           cout<<min(i,j)<<" ";
        }
        cout<<endl;
    }
}

/* 

n : 4
1 1 1 1 
1 2 2 2 
1 2 3 3 
1 2 3 4 
*/