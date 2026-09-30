#include<iostream>
#include<math.h>
using namespace std;
int main(){
   int n;
   cout<<"Enter n : ";
   cin>>n;
   //AP
   // 4 9 14 19.......upto nth term 
   for(int i=4; i<=(4+(n-1)*5); i+=5){
    cout<<i<<"\t";
   }
   cout<<endl;
   //GP
   //3 6 12 24.......
   int m; 
   cout<<endl<<"Enter m : ";
   cin>>m;
   for(int i=0; i<m; i++){
      cout<<3*(pow(2,i))<<"\t";
   }

}