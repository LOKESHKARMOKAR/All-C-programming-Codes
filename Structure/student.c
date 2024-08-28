// WAP to define a structure to store following information of a student

// 1. student roll no
// 2. student name

#include <stdio.h>
#include<string.h>
struct student
    {
        int rollNo;
        char name[30];
        int age;
    };

int main(){

// Grouping Method
// struct student s1 = {101, "Rohit"};
// struct student s2 = {102, "Virat"};

// By using . or mrmber operarer

// struct student s3;
// s3.rollNo = 103;
//s3.name = "Dhoni";
// strcpy(s3.name,"Dhoni");

// how to access the value inside the member

// printf("Student id %d\n", s1.rollNo);
// printf("Student id %d\n", s2.rollNo);
// printf("Student id %d\n", s3.rollNo);
// printf("\n");
// printf("Student Nase %s\n", s1.name);
// printf("Student name %s\n", s2.name);
// printf("Student name %s\n", s3.name);

// struct  student s1;
// printf("Enter the roll number :");
// scanf("%d", &s1.rollNo);
// fflush(stdin);
// printf("Enter the Name :");
// //scanf("%[^\n]s", &s1.name);
// gets(s1.name);

// printf("Enter the Age :");
// scanf("%d", &s1.age);
// printf("The roll number is :%d \n", s1.rollNo);
// printf("The Name is :%s \n", s1.name);
// printf("The Age is :%d \n", s1.age);






    return 0;
}