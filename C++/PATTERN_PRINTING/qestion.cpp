#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int b = 5; // col
    for(int i=1; i<=b; i++){
        for(int j=1; j<=i; j++){
            cout<<!((i+j)%2)<<"\t";
          
        }
        cout<<endl;
    }
    
}