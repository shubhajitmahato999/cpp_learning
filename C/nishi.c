#include<stdio.h>

int main(){
    int a;
    printf("Enter a : ");
    scanf("%d", &a);
    float b;
    b= a*(1+0.4);
    printf("the income is %f\n",(b*(1-.22) - a));


     return 0;
} 