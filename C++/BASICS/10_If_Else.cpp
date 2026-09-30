#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number : "  ;
    cin>>n;
    if(n%2 == 0) cout<<"Your Number Even" ;
    else         cout<<"Your Number Odd"  ;

    // ekhane if else condition syntex ektu alada 
    // if(condition) cout<<"_________" ;
    // else cout<<"_____" ;
     
    cout<<endl ;

    // but ager tate jehetu '{}' use karano hai tahle kebal ekta line ei elhan jabe basically ekta cout lekhha jabe
    // aro if condition er madhyei aro cout lekhar janya use  kara jeete pare  ta halo in the '{}'

    //example
    if(n%2 == 0){
         cout<<"Your Number Even"<<endl;  //1st line
         cout<<"Thank You" ;         //2nd line
    }
    else{
            cout<<"Your Number Odd"<<endl ; // 1st line
            cout<<"Try Again" ;        // 2nd line
    }
          // counting the abousulate valuae 

        cout<<endl;
        if(n>=0) cout<<n;
        else cout<<(-n);  
        
        // chage the value of permanent 
        if(n<0) n = -n ;
        cout<<endl<<n;
        
    
}