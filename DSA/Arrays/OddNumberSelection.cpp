#include<iostream>
using namespace std;
int main (){
int n; cin>>n;
cout<<endl;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
int sum = 0;
for(int i=0; i<n; i++){
    if(arr[i]%2 != 0){
        cout<<arr[i]<<"\t";
    }
}

}