// WAP to create and open a file

#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp = fopen("C:/Users/lokes/OneDrive/Desktop/C Programming/chapter3/F2.txt","w");

    if(fp==NULL){
        printf("File does't exist\n");
        exit(1);
    }else{

    }

    fclose(fp);
    printf("File create successfull");
    return 0;
}