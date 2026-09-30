#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int m = 5;
    int x = m;
    while(x != 0){
        for(int i=1; i<=x; i++){
            if(x%2 != 0){
                cout<<i<<"\t";
            }
            else {
                cout<<(char)(i+64)<<"\t";
            }
        }
     x--;
     cout<<endl;
    }

    // using by for and for then
    //for(int i=1; i<=n; i++){ for(int j=1; j<=1; j++){ cout<<j;} cout<<endl;}
}