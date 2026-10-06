#include<iostream>
#include<climits>
#include<cmath>
// MINIMUM found by methode 2 
using namespace std;
int main (){
int  arr[] = {-11452,-23,-34,-23,-34,-7,-84,-6224,-86,-980,-45,-59,-111};
int mn = arr[0]; 
for(int i=0; i<13; i++){
    mn = min(mn,arr[i]);
}
cout<<mn;
}