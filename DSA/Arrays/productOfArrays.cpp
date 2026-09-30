#include<iostream>
using namespace std;
int main (){
    int marks[] = {10,7,5,1,8,3,4};
    int n = sizeof(marks)/4;
    int product = 1;
    for(int i=0; i<n; i++){
    product*=marks[i];
    }
    cout<<product;
}
// output : 33600