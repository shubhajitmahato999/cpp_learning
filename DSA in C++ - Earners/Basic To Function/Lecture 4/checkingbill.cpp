// checking bill 
#include<iostream>
using namespace std;
    int main(){
      float units; cout<<"units : "; cin>>units;
      if(units>=0 && units<=100){ cout<<" Your Bill : "<<units*1.5 - units*1.5*0.15<<" $";}
      else if(units>100 && units<=300){ cout<<" Your Bill : "<<units*2.5 - units*2.5*0.15<<" $";}
      else if(units>300){ cout<<" Your Bill : "<<units*4.0 - units*4.0*0.15<<" $";}
      
    }
