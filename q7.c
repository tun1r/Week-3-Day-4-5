#include<stdio.h>
void main(){
char ch;
int c;

printf("Enter 2 numbers.");
int a,b;
scanf("%d%d",&a,&b);
printf("Enter A to add, S for subtraction, M for multiplication and D for division.\n");
scanf(" %c",&ch);
switch(ch){
case 'A':
    c=a+b;
    printf("Sum is %d",c);
    break;
case 'S':
    if (a>b){
        c=a-b;
        }
    else {
        c=b-a;
    }
    printf("Difference is %d",c);
    break;
case 'M':
    c=a*b;
    printf("Product is %d",c);
    break;
case 'D':
    c=a/b;
    printf("Quotient is %d,c");
    break;
default:
    printf("Invalid Input");
    break;

}
}
