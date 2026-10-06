#include<iostream>
// finding n as int located at array methode 2
using namespace std;
int main (){
int  arr[] = {-23,-23,-23,-23,-34,-7,-84,-6224,-86,-980,-45,-59,-111};
int n = 2323;
bool flag = false ; // false represants that element found 
for(int i=0; i<13; i++){
    if(arr[i] == n){
        flag = true  ; // ture : element not found
        break; 
    }
}
flag == true ? cout<<"Element Detected" : cout<<"Element Not Detected";
}