#include<iostream>
using namespace std;
int main(){
        int n; cout<<"n :  "; cin>>n;
         for(int i=1; i<=n; i++){


          // age space print karte chaichi 

            for(int a=1; a<=(n-i); a++){
                cout<<"  ";
            }



          //  eibar number printing 

            for(int a=1; a<=n; a++){
                cout<<a<<" ";
            }

         cout<<endl;
        }
    }

/* output
    n :  4
      1 2 3 4 
    1 2 3 4 
  1 2 3 4 
1 2 3 4 
*/