
// finding minimum by the help of single condition


#include<iostream>
using namespace std ;
int main(){
    int x, y, z;
    cout<<"x : ";cin>>x;
    cout<<"y : ";cin>>y;
    cout<<"z : ";cin>>z;
    if(x<y){
        if(y<z){
            cout<<"Minimum : x";
        }
        else{
            cout<<"Minimum : z";
        }
    }
    else{
        if(z<y){
            cout<<"Minimum : z";
        }
        else{
            cout<<"Minimum : y";
        }
    }
}