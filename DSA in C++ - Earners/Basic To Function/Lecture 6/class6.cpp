// 
//Perfect use of bool true or false


#include<iostream>
#include<cmath>
using namespace std;
    int main(){
     int n ; cout<<"n : "; cin>>n;
     bool flag = false ;      // flag halo variable of this bool operator // contained it that false now
     for(int i=2; i<=sqrt(n); i++){
        if(n%i == 0){
            flag = true ;
        }
     }
if(n == 1) cout<<"Neither Prime nor Composite Number";
if(flag == true) cout<<"Composite Number";
else if(flag == false && n != 1) cout<<"Prime Number";

      
    }
