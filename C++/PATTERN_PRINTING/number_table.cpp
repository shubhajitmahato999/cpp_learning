#include<iostream>
#include<math.h>
using namespace std;
int main(){
   // amke variable number time roe columbs er stars diagram banate habe
   int m;//row
   int n;//col
   cout<<"Row : ";cin>>m;
   cout<<"col : ";cin>>n;
   int x = 1;
   while(x!=(n+1)){
    for(int i=1; i<=m; i++){
        cout<<x*i<<"\t";
    }
    x++;
    cout<<endl;
   }
}