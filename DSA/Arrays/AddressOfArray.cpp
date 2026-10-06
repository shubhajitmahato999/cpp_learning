#include<iostream> 
using namespace std;
// Checking Memory location for array
int main (){
int  arr[] = {4,2,6,8,1,9,5}; // Hints : no of elements in array  : 7
for(int i=0; i<7; i++){
    cout<<(long long)&arr[i]<<endl;
}
}
/*
#By Int Location number
6422256
6422260
6422264
6422268
6422272
6422276
6422280

#By computer language : 
0x61fef0
0x61fef4
0x61fef8
0x61fefc
0x61ff00
0x61ff04
0x61ff08
*/
