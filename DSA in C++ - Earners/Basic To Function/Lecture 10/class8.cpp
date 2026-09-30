#include<iostream>
using namespace std;
int main (){
    int n; // row
    int m; // collumb
    cout<<"n : "; cin>>n;
    cout<<"m : "; cin>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
          if(i == n/2 + 1  ||  j ==  m/2 + 1){ 
            cout<<"* ";
           }
           else cout<<"  ";
        }

        cout<<endl;
    }
}
/*


n : 11
m : 9
        *         
        *         
        *         
        *         
        *         
* * * * * * * * * 
        *         
        *         
        *         
        *         
        *            */