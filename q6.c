#include<stdio.h>
void main(){
    printf("Enter total marks secured by the student out of 100.");
    int m;
    scanf("%d",&m);
    if (m>=90 && m<=100){
        printf("Secured grade is O.\n");
    }
    else if (m>=80 && m<=89){
        printf("Secured grade is E.\n");
    }
    else if (m>=70 && m<=79){
        printf("Secured grade is A.\n");
    }
    else  if (m>=60 && m<=69){
        printf("Secured grade is B.\n");
    }
    else  if (m>=50 && m<=59){
        printf("Secured grade is C.\n");
    }
    else if (m>=40 && m<=49){
        printf("Secured grade is D.\n");
    }
    else if (m<40){
        printf("Secured grade is F.\n");
    }

    }


