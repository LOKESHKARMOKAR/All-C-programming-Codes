#include<stdio.h>
int main(){

            // ******************  sum of two Matrix ********************

// int a[2][3];
// int i,j, sum=0;
// printf("Enter a element of a matrix \n");
// for(i=0; i<2; i++){
//     for(j=0; j<3; j++){
//         scanf("%d\n" , &a[i][j]);
//     }
//     printf("\n");
// }

// for(i=0; i<2; i++){
//     for(j=0; j<3; j++){
//         printf("%d\t", a[i][j]);
//         sum=sum+a[i][j];
//     }
//     printf("\n");
// }
// printf("%d", sum);


        //  ****************** Transpose of a Matrix *********************

    int a[2][3];
int i,j, sum=0;
printf("Enter a element of a matrix \n");
for(i=0; i<2; i++){
    for(j=0; j<3; j++){
        scanf("%d\n" , &a[i][j]);
    }
    printf("\n");
}
printf("Original matrix \n");
for(i=0; i<2; i++){
    for(j=0; j<3; j++){
        printf("%d\t", a[i][j]);
        
    }
    printf("\n");
}
printf("after the transpose \n");
int b[3][2];
for(i=0; i<3; i++){
    for(j=0; j<2; j++){
        b[i][j] = a[j][i];
    }
    
}
printf("%d", b[i][j]);


return 0;
}
