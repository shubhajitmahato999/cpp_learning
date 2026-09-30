#include<iostream>
using namespace std;
int main (){
    int marks[] = {100,97,95,91,98,93,94};
    int n = sizeof(marks)/4;
    int sum = 0;
    for(int i=0; i<n; i++){
     sum+=marks[i];
    }
    cout<<sum;
}
// output 668