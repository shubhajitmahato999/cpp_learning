#include<stdio.h>
#include<stdlib.h>
   int main(){
    //file declaration
    FILE *fptr;
    //make a sentence string of 100 storage for sentence putting
    char Sentence[100];
    fptr = fopen("1.txt","w");
    printf("Enter Sentence : ");
    fgets(Sentence,sizeof(Sentence),stdin);
    //fget() : its works from last || for grtting input and taking it a sized string
    //   3rd : keyboard to stdin
    //   2nd : size of string (in this case also use sizeof(name of string))
    //   1st : location of putting typed sentence from user 
    fputs(Sentence,fptr);
    //fputs(): using for putting string to the pointer of file and its works from first
    //       : two importents thing one(sentence) and two(file pointer)
    //   1st : selecting string so its use sentence named string
    //   2nd : selected string putting inti the file pointer its ude fptr
    fclose(fptr);
    printf("\n");
    //for out put
    fptr = fopen("1.txt","r");
    char sen[100];
    fgets(sen,100,fptr);// taken from fptr fitr then plased in a sized sen
    printf("%s",sen);   // using for printing sentence
    fclose(fptr);
    return 0;
}