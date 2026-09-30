#include<iostream>
using namespace std;
int main(){
  int n; cout<<"n : "; cin>>n;
  for(int i=1; i<n; i++){
      for(int j=1; j<n-i+1; j++){
        cout<<"  ";
    }
    for(int j=1; j<=i; j++){
        cout<<"* ";
    }
  
    cout<<endl;
  }

  // making easy
  /*  by 1st loop         by 2nd loop
                            ####
         *                  ###
         **        +        ##
         ***                #
         ****                
    ____________________________________
              ####
              *###
              **##
              ***#
              ****
    ___________________________________
                                               
    by 2 loops      */





    /* # another methode :
    .........................................................................
               removable box contaied i and j have a common relaton 
               (i+j)<n
               * n : hight/base of the traingle
    ..........................................................................           
               
               
    */
}