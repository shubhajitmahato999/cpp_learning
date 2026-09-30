#include<iostream>
using namespace std;
int main (){
    int n;cout<<"n : "; cin>>n;
    int m = (2*n-5);
    for(int i=1; i<=n; i++){
        for(int a=1; a<=n-i; a++){
            cout<<"  ";
        }
        for(int j=1; j<=1; j++){
            cout<<"* ";
        
        }
         for(int a=1; a<=(2*i-3); a++){
            cout<<"  ";
        }
        if(i>1){for(int j=1; j<=1; j++){
            cout<<"* ";
        
        }}
       

        cout<<endl;
    }

    for(int i=1; i<=n-1; i++){
        for(int a=1; a<=i; a++){
            cout<<"  ";
        }
        for(int j=1; j<=1; j++){
            cout<<"* ";
        
        }
         for(int a=1; a<=(m); a++){
            cout<<"  ";
        }
        if(i<n-1){for(int j=1; j<=1; j++){
            cout<<"* ";
        
        }}
      
        m-=2;
        cout<<endl;
    }
}

/*

n : 10
---------------------------------------
                  * 
                *   * 
              *       * 
            *           * 
          *               * 
        *                   * 
      *                       * 
    *                           * 
  *                               * 
*                                   * 
  *                               * 
    *                           * 
      *                       * 
        *                   * 
          *               * 
            *           * 
              *       * 
                *   * 
                  * 
    --------------------------------*/