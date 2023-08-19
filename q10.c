#include<stdio.h>
#include<math.h>
void main(){
printf("Enter values for a,b and c for the quadratic equation ax^2+bx+c");
float a,b,c;
float d;
float r1,r2;
scanf("%f%f%f",&a,&b,&c);
d=(b*b)-(4*a*c);
float i;
switch(d>=0){
case 1:
    switch(d>0){
    case 1:
        printf("Roots are real and unequal.\n");
        r1=(-b+sqrt(d))/2*a;
        r2=(-b-sqrt(d))/2*a;
        printf("Roots are %f and %f\n",r1,r2);
        break;
    case 0:
        printf("Roots are real and equal.");
        r1=(-b+sqrt(d))/2*a;
        r2=(-b-sqrt(d))/2*a;
        printf("Roots are %f and %f\n",r1,r2);
        break;
    }
break;

case 0:
    printf("Roots are imaginary.");
    r1=r2=(-b)/2*a;
    i = sqrt(-d) / (2 * a);
    printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f",r1, i, r2, i);
    break;
default:
    printf("Invalid input.");






}


}
