#include<iostream> 
#include<vector>
using namespace std;
// use of push_back :eta kare je last r ekta arr element bariye dei
int main(){
    vector<int> arr(5,18);
    arr.push_back(100);
    int n = arr.size();
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}
/*
18
18
18
18
18
100  ; reasoon : arr.push_back(100);
*/