#include<iostream>
using namespace std;
int main(){
    int n; cout<<"n :  "; cin>>n;
    int t;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if((i+j)<=n){
                  cout<<"  ";
            }
            else {cout<<(n-j+1)<<" ";
            }
        }
        cout<<endl;
    }
}
