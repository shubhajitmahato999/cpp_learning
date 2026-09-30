#include<iostream>
using namespace std;
//scpoe resulation opeerator 
int n = 2 ; // global 
int main(){
    int n =  20;
    n+=30;
    cout<<n<<endl;
    // to access the global verriable 
    cout<<::n<<endl;

}
/*
output
______________________
50
2
_______________________
*/