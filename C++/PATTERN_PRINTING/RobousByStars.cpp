#include<iostream>
using namespace std;
int main(){
        int n; cout<<"n :  "; cin>>n;
         for(int i=1; i<=n; i++){


          // age space print karte chaichi 

            for(int a=1; a<=(n-i); a++){
                cout<<"  ";
            }



          //  eibar stars printing 

            for(int a=1; a<=n; a++){
                cout<<"* ";
            }

         cout<<endl;
        }
    }
/*
     Output

n :  10
                  * * * * * * * * * * 
                * * * * * * * * * * 
              * * * * * * * * * * 
            * * * * * * * * * * 
          * * * * * * * * * * 
        * * * * * * * * * * 
      * * * * * * * * * * 
    * * * * * * * * * * 
  * * * * * * * * * * 
* * * * * * * * * * 


*/    