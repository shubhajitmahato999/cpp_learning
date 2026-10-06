#include<iostream>
#include<climits>
#include<cmath>
// finding n as int located at array 
using namespace std;
int main (){
int  arr[] = {-23,-23,-23,-23,-34,-7,-84,-6224,-86,-980,-45,-59,-111};
int n = -23;
for(int i=0; i<13; i++){
    if(arr[i] == n){
        cout<<"Yes Located";
        break; 
    }
    else{
        cout<<"not located";
        break;
    }
}

}