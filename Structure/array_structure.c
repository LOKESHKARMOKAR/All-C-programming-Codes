// WAP 

#include<stdio.h>
#include<string.h>
struct  student
{
    int rollNO;
    char name[30];
};

int main(){
// array of objects 

struct student s1[5];
int i;
for(i=0; i<5;i++){
    printf("Enter the roll no of a student : \n");
    scanf("%d", &s1[i].rollNO);
    printf("Enter the Name of a student : \n");
    gets(s1[i].name);
    fflush(stdin);
}


    return 0;
}