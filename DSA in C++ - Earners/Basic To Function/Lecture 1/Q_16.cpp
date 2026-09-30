/*Q16. (Concept Booster: Upper/Lower Boundary constraints)
Take a character input from the keyboard. Write a conditional structure to evaluate whether the
provided letter is an uppercase English alphabet (A-Z), a lowercase alphabet (a-z), a numerical
digit (0-9), or a special symbolic character.*/
#include<iostream>
using namespace std;
    int main(){
        char ch ; cout<<"Ch : "; cin>>ch;
        if(ch >='a' && ch <='z'){ cout<<"Lower case";}
       else if(ch >='A' && ch <='Z') {cout<<"Upper case";}
       else if((int)ch >= 48 && (int)ch <= 57) {cout<<"number";}
    }