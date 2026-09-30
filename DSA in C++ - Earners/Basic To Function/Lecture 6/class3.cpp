#include<iostream>
using namespace std;
    int main(){
      int u = 0, v = 0;
      if(u++ || v++){ cout<<"Yes"<<"\t"<<u<<"\t"<<v; }
      else{cout<<"No"<<"\t"<<u<<"\t"<<v;}
      
    }