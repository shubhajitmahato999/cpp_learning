#include<iostream>
#include<climits>
// MINIMUM found
using namespace std;
int main (){
int  arr[] = {-112,-23,-34,-23,-34,-7,-84,-64,-86,-980,-45,-59,-111};
int mn = INT_MAX ; 
for(int i=0; i<13; i++){
    if(arr[i]<=mn){
        mn = arr[i];
    }
}
cout<<mn;
}