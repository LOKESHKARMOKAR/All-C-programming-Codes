#include <stdio.h>
#include <math.h>
int main()
{
    // int num;
    // printf("Enter any number :");
    // scanf("%d", &num);

    // if - else

    //  if(num<0){
    //     printf("This is negetive number ");
    //  }else{
    //     printf("this is positive number");
    //  }

    // else - if ladder

    // if(num==0){
    //     printf("Number is equal");
    // }else if(num < 0){
    //     printf("Number is negetive");
    // }else if(num > 0 ){
    //     printf("Number is positive");
    // }else{
    //     printf("Anycondition are not match");
    // }

    // nested if statement....

    // int a , b, c;
    // printf("Enter 1st number : \n");
    // scanf("%d", &a);

    // printf("Enter 2nd number : \n");
    // scanf("%d", &b);

    // printf("Enter 3rd number : \n");
    // scanf("%d", &c);

    // if(a>b){
    //     if(a>c){
    //         printf("%d is the largest number : ", a);
    //     }else{
    //         printf("%d is the largest number :", c);
    //     }
    // }else{
    //     if(b>c){
    //          printf("%d is the largest number :", b);
    //     }else{
    //          printf("%d is the largest number :", c);
    //     }
    // }

    // int a,b;
    // printf("Enter Two integer number : \n");
    // scanf("%d %d", &a, &b);
    // if(a>b){
    //     printf("A is gretter than B");
    // }else{
    //     printf("B is gretter than A");
    // }

    // int a;
    // printf("Enter any number :\n");
    // scanf("%d", &a);
    // if(a%2==0){
    //     printf("number is even");
    // }else{
    //     printf("number is odd");
    // }

    // int a;
    // printf("Enter a number :\n");
    // scanf("%d", &a);
    // if((a%5==0) && (a%11==0)){
    //     printf("%d 55divisible by 5 \n",a);
    // }else{
    //     printf("not divisible %d", a);
    // }

    // int ch;
    // printf("enter any charecter :");
    // scanf("%c", &ch);
    // if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
    //     printf("%c is an alphabate", ch);
    // }else if(ch>=0 && ch<=9){
    //     printf("%c is an digit", ch);
    // }else{
    //     printf("%c It is a special charecter ", ch);
    // }

    // char a;
    // printf("Enter any Alphaphat : ");
    // scanf("%c", &a);
    // if(a =='a' || a=='e' || a=='i' || a=='O' || a=='u' || a =='A' || a=='E' || a=='I' || a=='O' || a=='U'){
    //     printf("%c is a vowel", a);
    // }else{
    //     printf("%c is an consonent ", a);
    // }

    // int math, ph ,chem;
    // printf("Enter Math Physics and Chemistry marks : \n");
    // scanf("%d %d %d", &math, &ph, &chem);
    // if((math>=65) && (ph>=55) && (chem>=50)){
    //     printf("%d %d %d 3 subjects marks are done\n", math,ph,chem);
    // }else if(math+ph+chem >=180){
    //     printf("%d %d %d sum of total 3 subjects marks are done /n", math, ph, chem);
    // }else if(math+ph >=140){
    //     printf("%d %d sum of total 2 subjects marks are done /n", math, ph);
    // }else{
    //     printf("you are not allowed :");
    // }

    // int a;
    // printf("enter any year ");
    // scanf("%d", &a);
    // if(a%400==0){
    //     printf("%d is a leapyear", a);
    // }else if((a%4==0) && (a%100!=0)){
    //     printf("%d is a leapyear", a);
    // }
    // else{
    //     printf("%d is  not a leapyear", a);
    // }

    // int bs, gross, hra, da;
    // printf("Enter your basic Salary : ");
    // scanf("%d", &bs);

    // if(bs<=10000){
    //     hra = bs*0.2;
    //     da = bs*0.8;
    // }else if(bs<=20000){
    //     hra = bs*0.25;
    //     da = bs*0.9;
    // }else {
    //     hra = bs*0.3;
    //     da = bs*0.95;
    // }
    // gross = bs+hra+da;
    // printf("the hra of an employee %d\n", hra);
    // printf("the da of an employee %d\n", da);
    // printf("the gross salary of an employee %d\n", gross);

    // int a;
    // float b, sc, total_bill, tax;

    // printf("Enter the Units in Rupess :");
    // scanf("%d", &a);

    // if(a<=50){
    //     b=50*0.50;
    // }else if(a<=150){
    //     b = 50*0.50 + (a-50)*0.75;
    // }else if(a<=250){
    //     b= (50*0.50) + (100*0.75) + (a-150)*1.20;
    // }
    // else{
    //     b= ((50*0.50) + (100*0.75) + (100*0.20) + (a-250)*1.50);
    // }
    // sc = b*0.2;
    // total_bill = b+sc;

    //  if(total_bill<=400){
    //     printf("No tax\n");
    // }else if(total_bill<=600){
    //     tax = total_bill*0.2;
    // }else if(total_bill>600){
    //     tax = total_bill * 0.25;
    // }else{
    //     printf("nothing");
    // }

    // printf("Total elec bill is %.2f\n", total_bill);
    // printf("Sub charge of elec bill is %f\n", sc);
    // printf("total bill is %f", tax);

    // WAP in c qoardatic equation

    // int a, b, c, root_part, denom, root1, root2;
    // printf("Enter the three coefficent value : \n");
    // scanf("%d %d %d", &a, &b, &c);

    // // root part
    // root_part= sqrt((b * b) - (4 * a *c));
    // denom= 2*a;

    // if(a==0){
    //     printf("this is not a quatatite equation \n");
    // }
    // else{
    //     // root part negetive of positive
    //     if(root_part >= 0){
    //         // formula
    //        root1= (-b+ root_part)/denom;
    //        root2= (-b- root_part)/denom;
    //        printf("the root a real number\n");
    //        printf("the root are %d and %d \n", root1, root2);

    //     }else{
    //         printf("the root are imaginary number");
    //     }
    // }

    //  Switch case

    // int a = 10;
    // switch (a)
    // {
    // case 1:
    //     printf("hii\n");
    //     break;
    // case 2:
    //     printf("hello\n");
    //     break;
    // default:
    //     printf("byy\n");
    // }

    // int a,b,c,d, cd, result;
    // printf("Enter 4 variable :\n");
    // scanf("%d %d %d %d", &a, &b, &c, &d);
    // cd = c-d;
    // if(cd!=0){
    //     result = (a+b)/cd;
    //     printf("the ratio of (a+b)-(c-d) = %d\n", result);

    // }else{
    //     printf("the ratio is not possible to count");
    // }

    if(!printf("l")){
        printf("okk");
    }else{
        printf("hii");
    }
    
    return 0;
}