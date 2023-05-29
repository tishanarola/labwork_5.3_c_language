#include<stdio.h>
#include<conio.h>

void main(){
int a;
int b;
int c;
clrscr();
printf("enter the value of A:");
scanf("%d",&a);
printf("enter the value of B:");
scanf("%d",&b);
printf("enter the value of C:");
scanf("%d",&c);

(a<b)
?((a<c)?printf("A is min..."):printf("C is min.."))
:((b<c)?printf("B is min"):printf("C is min"));
getch();
}