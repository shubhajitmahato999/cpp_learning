#include<iostream>
using namespace std;
int main (){
    int n; // row
    int m; // collumb
    cout<<"n : "; cin>>n;
    cout<<"m : "; cin>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
          //for x
          if(i == j || i+j == n+1){ 
            cout<<"* ";
           }
           //for +
          else if(i == n/2 + 1 || j == n/2 + 1){
            cout<<"* ";
           }
           //for square
           else if(i == 1 || j == 1){
            cout<<"* ";
           }
           else if(i == n || j == n){
            cout<<"* ";
           }
        
          
           else cout<<"  ";
        }

        cout<<endl;
    }
}

/*

n : 11
m : 17
* * * * * * * * * * * 
* *       *       * * 
*   *     *     *   * 
*     *   *   *     * 
*       * * *       * 
* * * * * * * * * * * 
*       * * *       * 
*     *   *   *     * 
*   *     *     *   * 
* *       *       * * 
* * * * * * * * * * * */