#include<iostream>
using namespace std;
// cheaking composite function or not
int main(){
 int n; cout<<"n : "; cin>>n;
 int factors = 0;
 for(int i=1; i<=n; i++){
       if(n%i == 0){
        factors ++;
        }
    } 
if(factors == 2) cout<<"Prime Number";
else cout<<"Composite function";

}