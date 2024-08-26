// #include <stdio.h>
// //int sum (int, int);
// int sum(int x, int y)
// {
    
//     if(y==0){
//         return x;
//     }else{
//         return sum(x+1, y-1);
//     }
// }
// int main()
// {

//     int r;
//     r = sum(5,4);
//     printf("sum is ; %d", r);

//     return 0;
// }

// #include<stdio.h>
// int facto(int x){
//     if(x==1){
//         return 1;
//     }else{
//        return x*facto(x-1);
//     }
// }
// int main(){
// int n, r;
// printf("Enter the value of n : \n");
// scanf("%d", &n);
// r = facto(n);
// printf("The Factorial value of %d is %d", n, r);

//     return 0;
// }


// *************** Indirect recursion

// #include<stdio.h>
// int facto1(int x){
//     if(x==1){
//         return 1;
//     }else{
//        return x*facto2(x-1);
//     }
// }
// int facto2(int x){
//     if(x==1){
//         return 1;
//     }else{
//        return x*facto1(x-1);
//     }
// }
// int main(){
// int n, r;
// printf("Enter the value of n : \n");
// scanf("%d", &n);
// r = facto1(n);
// printf("The Factorial value of %d is %d", n, r);

//     return 0;
// }


//  ****************Fibanocci Serics***********************

#include<stdio.h>
int fibo(int x){
    if(x==0 || x==1){
        return x;
    }else{
       return fibo(x-1)+fibo(x-2);
    }
}
int main(){
    int n,r;
    printf("Enter the value : \n");
    scanf("%d", &n);
    r = fibo(n);
    printf("The value of %d term is %d", n,r);
    return 0;
}

