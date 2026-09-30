
// checking quadrand

#include<iostream>
using namespace std ;
int main(){
   float x, y;
   cout<<"x : ";
   cin>>x;
   cout<<"y : ";
   cin>>y;
   if(x>0 && y>0) cout<<"1st Quadrand";
   else if(x<0 && y>0) cout<<"2nd Quadrand";
   else if(x<0 && y<0) cout<<"3rd Quadrand";
   else if(x>0 && y<0) cout<<"4th Quadrand";
   else if(x == 0 && y != 0) cout<<"X axis":
   

}