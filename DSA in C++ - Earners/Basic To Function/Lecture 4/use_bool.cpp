#include<iostream>
using namespace std;
int main(){
    int marks = 245;
    bool pass = (marks >= 250) ? true : false ;
    /* int bonous = true ? 5 : 0 ;  eikhane amar bhul 
    ache je ami sarasari pass er badale true likhechi
     tai pass nahleo bonous diye diche */
     int bonous = pass ? 5 : 0 ;
    cout<<pass<<endl;
    cout<<bonous;
}
    