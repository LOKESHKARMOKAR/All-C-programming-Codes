#include<stdio.h>
int main(){

// int a =10;
// int *p;
// p=&a;

// int a =10, *p=&a;

// printf("Address of variable a is: %d\n", &a);
// printf("value of pointer p : %d", p);

int a =10, b=20;
int *p, *q;
p=&a;
q=&b;

printf("value of a %d\n", a);
printf("value of a (Using pointer) %d\n", *p);






    return 0;
}