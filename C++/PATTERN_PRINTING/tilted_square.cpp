
#include<iostream>
using namespace std;
int main(){
        int n; cout<<"n :  "; cin>>n;   // n : base of pyramide
        
        
        
        
        
        // uppeer part
        
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
          
    
    
    
    
    // lower part


      for(int i=1; i<=(n-1); i++){
        for(int a=1; a<=i; a++){
            cout<<"  ";
        }
        for(int j=(2*((n)-i)-1); j>=1; j-- ){
            cout<<"* ";
        }
          for(int a=1; a<=i; a++){
            cout<<"  ";
        }
        
      cout<<endl;
    }

}

/*
#Output
n :  5
        *         
      * * *       
    * * * * *     
  * * * * * * *   
* * * * * * * * * 
  * * * * * * *   
    * * * * *     
      * * *       
        *    
*/