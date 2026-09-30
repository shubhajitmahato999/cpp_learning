#include<iostream>
using namespace std;

// Nasted Scoping
int main(){
    int x = 10 ;
    {
        int x = 20;
    }
    cout<<x<<endl;
    // output : 10
    // unsing " int" , treats x as new another varriable 



      {
         x = 20;
    }
    cout<<x<<endl;
   // output : 20 
   // nested x varriable er janya global varriable halo x  
}