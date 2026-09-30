#include<iostream>
using namespace std;
//[default varriable]
void power(int base, int exponent = 2){
    int ans = 1;
    for(int i=1; i<=exponent; i++){
        ans*=base;
    }
    cout<<ans<<endl;
}
int main(){
   power(5);
   power(5,3);
}

/*
output
_______________________
25
125
_______________________
*/