#include<iostream>
#include<climits>
using namespace std;
int main (){
int  arr[] = {-112,-23,-34,-23,-34,-7,-84,-64,-86,-98,-45,-59,-111};
int max = INT_MIN ; // or jadi arr[0] deo hai tahleo kaj habe
                    // using #include<climits> added
for(int i=1; i<13; i++){
    if(arr[i]>=max){
        max = arr[i];
    }
}
cout<<max;
}