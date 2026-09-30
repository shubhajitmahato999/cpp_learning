#include<iostream>
using namespace std;
int main (){
    int marks[] = {100,97,95,91,98,93,94};
    cout<<sizeof(marks)/4;
    /* sizeof function gives thats ocupied bites of arrays,
    so its must devides by 4, due to one int contain 4 bytes */
}
// output 7