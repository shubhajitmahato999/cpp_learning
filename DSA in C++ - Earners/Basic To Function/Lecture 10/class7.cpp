#include<iostream>
using namespace std;
int main (){
    int n; // row
    int m; // collumb
    cout<<"n : "; cin>>n;
    cout<<"m : "; cin>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
           if(i == 1 || j == 1){
            cout<<char(177)<<" ";
           }
           else if(i == n ||  j ==  m){ 
            cout<<char(177)<<" ";
           }
           else cout<<"  ";
        }

        cout<<endl;
    }
}

/*

n : 10
m : 20
* * * * * * * * * * * * * * * * * * * * 
*                                     * 
*                                     * 
*                                     * 
*                                     * 
*                                     * 
*                                     * 
*                                     * 
*                                     * 
* * * * * * * * * * * * * * * * * * * * 

*/