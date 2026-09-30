#include<iostream>
using namespace std;
int main(){
        int n; cout<<"n :  "; cin>>n;   // n : base of pyramide
         for(int i=1; i<=n; i++){
            for(int a=1; a<=(n-i); a++){
                cout<<"  ";
            }
            for(int b=1; b<=((2*i)-1); b++){
                cout<<"* ";
            }
             for(int a=1; a<=(n-i); a++){
                cout<<"  ";
            }
        cout<<endl;
     }

}

/*
outputs

n :  6
          *           
        * * *         
      * * * * *       
    * * * * * * *     
  * * * * * * * * *   
* * * * * * * * * * * 


*/