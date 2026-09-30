#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int b = 15;
    int a = 1 ;
    for(int i=1; i<=15; i++){
        for(int j=1; j<=i; j++){
            cout<<a<<"\t";
          a++;
        }
        cout<<endl;
    }
    
}