#include<iostream>
using namespace std;
int main(){
    int x = 5;
    //Updation
        x = 8;
    cout<<x<<endl;
        x = x + 20; // or use x += 20 , getting same out put
    cout<<x<<endl;
        x += 20;    // use 1st the -,+ that means : age x er valu er sathe + hache kichu then abar x ei giye assiment hache
    cout<<x<<endl;
        x -= 20;    // use of "-="
    cout<<x<<endl;
       x = 0     ;
       // three types doing same thing
       x = x + 1 ; cout<<x<<endl;
       x += 1    ; cout<<x<<endl;
       x ++      ; cout<<x<<endl;
    }