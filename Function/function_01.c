#include<stdio.h>
void sum(){
    int a, b, sum = 0;
    printf("Enter two number :\n");
    scanf("%d %d", &a, &b);
    sum = a+b;
    printf("Sum of two number is : %d", sum);
}

void diff(){
    int a, b, sum = 0;
    printf("Enter two number :\n");
    scanf("%d %d", &a, &b);
    sum = a-b;
    printf("diff of two number is : %d", sum);
}
int main(){
sum();
printf("\n");
diff();

    return 0;
}