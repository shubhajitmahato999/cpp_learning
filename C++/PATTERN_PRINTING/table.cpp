#include<iostream>
#include<math.h>
using namespace std;
int main(){
   // amke variable number time row collumbs er stars diagram banate habe
   int m;//row
   int n;//col
   cout<<"Row : ";cin>>m;
   cout<<"col : ";cin>>n;
   // nested loop for that 
   for(int i=1; i<=n; i++){
    for(int i=1; i<=m; i++){
        cout<<"* ";
    }
    cout<<endl;
   }
   // for  number table row and col
   for(int i=1; i<=n; i++){
    for(int i=1; i<=m; i++){
        cout<<i<<" ";
    }
    cout<<endl;
   }
}