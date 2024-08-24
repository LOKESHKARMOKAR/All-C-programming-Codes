// #include<stdio.h>
// // no return type and no argument
// void sum(){
//  int a=10, b=20;
//     int sum =0;
//     sum = a+b;
//     printf("Sum is : %d", sum);
// }
// int main(){
//    sum();
//     return 0;
// }

//********Retuen type but no argument */

// #include <stdio.h>
// int sum()
// {
//     int a = 10, b = 20, sum = 0;

//     sum = a + b;
//     return sum;

// }
// int main()
// {
//     int res;
//     res= sum();
//     printf("%d", res);

//     return 0;
// }

//***** with argument but no return type */

// #include <stdio.h>
// void sum(int x, int y)
// {
//     int sum = x + y;
//     printf("%d", sum);
// }
// int main()
// {

//     int a = 10, b = 20;
//     sum(a,b);

//     return 0;
// }

//**********with argument and with return type */

#include <stdio.h>
int sum(int x, int y)
{
    // return (x+y); both are same
    int sum = x + y;
    return sum;
}
int main()
{
    int res;
    int a = 10, b = 20;
    res = sum(a,b);
    printf("%d", res);

    return 0;
}