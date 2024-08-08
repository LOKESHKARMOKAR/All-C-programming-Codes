#include<stdio.h>
int main(){
// while loop
// int i = 10;
// while(i>=1){
//     printf("%d\n", i);
//     i--;
// }

        // for loop


// for(int i =10; i>=1; i--){
//     printf("%d", i);
// }

// for(;;){
//     printf("lokesh");
// }

// int i=1;
// do{
//     printf("%d\n", i);
//     i++;
// }while(i<=10);

// #include <stdio.h>

// int main() {
    // int number, firstDigit, lastDigit, sum;

    // // Prompt the user to enter a number
    // printf("Enter a number: ");
    // scanf("%d", &number);

    // // Get the last digit of the number
    // lastDigit = number % 10;

    // // Find the first digit
    // firstDigit = number;
    // while (firstDigit >= 10) {
    //     firstDigit /= 10;
    // }

    // // Calculate the sum of the first and last digits
    // sum = firstDigit + lastDigit;

    // // Display the result
    // printf("The sum of the first and last digits of %d is: %d\n", number, sum);

//     return 0;
// }


        // 1. Reverse the number...............

// int n, r=0;
// printf("Enter a number to reverse \n");
// scanf("%d", &n);
// while(n!=0){
//     r=r*10;
//     r=r+(n%10);
//     n=n/10;
// }
// printf("the reverse number is : %d" , r);

                //  Pattern Printing
// int i , j;
// for(i=1; i<=5; i++){
//         for(j=1; j<=5; j++){
//                 if((i+j)<=5){
//                         printf(" ");
//                 }else{
//                         printf("* ");
//                 }
//         }
//         printf("\n");
// }

// int i, j;
// for(i=1; i<=5; i++){
//         for(j=1; j<=5; j++){
//                 if(i==1 || i==5 || j==1 || j==5){
//                         printf("*");
//                 }else{
//                         printf(" ");
//                 }
                
//         }
//         printf("\n");

int a;
int b;
int c,d,e;
int sum;
printf("enter a number\n");
scanf("%d", &a);
printf("enter b number\n");
scanf("%d", &b);
printf("enter c number\n");
scanf("%d", &c);
printf("enter d number\n");
scanf("%d", &d);
printf("enter e number\n");
scanf("%d", &e);
sum = a+b+c+d+e;
printf("sum of %d and %d  and %d and %d and %d = %d", a,b,c,d,e,sum);
printf("hello ");








 return 0;
}