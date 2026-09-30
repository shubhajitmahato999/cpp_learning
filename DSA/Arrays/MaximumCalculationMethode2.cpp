#include<iostream>
using namespace std;
/* useing of max function for arrays type maximum calculation */
int main (){
int  arr[] = {-112,-23,-34,-23,-34,-7,-84,-64,-86,-98,-45,-59,-111};
int mx = arr[0] ;
for(int i=1; i<13; i++){
   mx = max(mx,arr[i]); // # uses
}
cout<<mx;
}