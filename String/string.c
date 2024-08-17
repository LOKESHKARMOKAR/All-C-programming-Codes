#include<stdio.h>
#include<string.h>
int main(){

// char name[15]={'L','O','K',' ','E','S','H','\0'};
// // printf("India team captain is : %s\n", name);

// // by using string litreal

// char name1[100] = "Virat Kholi";
// // printf("%s",name1);

// char ch[100] = "Welcome to 'Youth career hub'.\n This is your youtube channel ";
// // printf("%s", ch);

// char input[100];
// printf("Enter your name : \n");
// // scanf("%s", &input);
// scanf("%[^\n]s", input);
// printf("My name is %s", input);


    //************GETS ,  PUTS ****************** 

    char name[100];
    puts("Enter your name : ");
    gets(name);
    printf("Name = %s", name);
    printf("%s", name);
    return 0;
}