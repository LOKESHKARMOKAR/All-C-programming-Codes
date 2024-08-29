// WAP to create and open a file

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    // FILE *fp;
    // char ch[100];
    // fp = fopen("C:/Users/lokes/OneDrive/Desktop/C Programming/chapter3/F2.txt","a");

    // if(fp==NULL){
    //     printf("File does't exist\n");
    //     exit(1);
    // }else{
    //     printf("Enter the text :\n");
    //     gets(ch);
    //     fputs(ch, fp);
    //      fclose(fp);
    // }

   
    // printf("File create successfull");

    FILE *fp;
    char ch;
    fopen("File/bio.txt", "r");
    if(fp==NULL){
        printf("File does't exist\n");
        exit(1);
    }
    else{
        ch = fgetc(fp);
        printf("The charecter is %c", ch);
        
    }

    printf("\nFile create successfull");
    fclose(fp);
    return 0;
}