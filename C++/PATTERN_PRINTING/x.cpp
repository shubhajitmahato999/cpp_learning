#include<iostream>
using namespace std;
int main(){
  int n=5;
  for(int i=1; i<=5; i++){
    for(int j=1; j<=5; j++){
        if(i == j) cout<<"* ";
        else if(i == (5+1-j)) cout<<"* ";
        else cout<<"  ";
    }
    cout<<endl;
  }
}