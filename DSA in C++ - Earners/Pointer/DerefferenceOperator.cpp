#include<iostream>
using namespace std;
int main(){
    int a = 5 ;
    int* ptr = &a;
    *ptr = 20;  // *ptr : ptr, then * ptr gelo x er vslue er ksch then change karlo value to 20
    cout<<a;
}
// ooutput : 20