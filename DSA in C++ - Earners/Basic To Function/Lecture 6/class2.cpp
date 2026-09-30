#include<iostream>
using namespace std;
    int main(){
      int u = 5, v = 7;
      if(u++ || v++){ cout<<"Yes"<<"\t"<<u<<"\t"<<v; }
      // ekhane 1st condition thik haote 2nd condition checkiing hachhe na tai 
      // u++ te sudhu u = 6 hache and rest e thakche 
      else{cout<<"No"<<"\t"<<u<<"\t"<<v;}
      
    }