#include<stdio.h>
#include<string.h>
struct date
{
    int dd;
    int mm;
    int yy;
};
struct employee
{
    int empID;
    char empName[30];
    struct date doj; // nested structure
    
    
};

int main(){
struct employee e1;
e1.empID = 101;
strcpy(e1.empName, "Lokesh Karmokar");
e1.doj.dd = 10;
e1.doj.mm = 11;
e1.doj.yy = 2014;

struct employee e2;
e1.empID = 101;
strcpy(e1.empName, "lakshman Karmokar");
e2.doj.dd = 21;
e2.doj.mm = 02;
e2.doj.yy = 2022;

printf("The ID of Employerr is %d\n", e1.empID);
printf("The Name of Employerr is %s\n", e1.empName);
printf("Employee date of joining (dd/mm/yy) : %d / %d / %d " , e1.doj.dd, e1.doj.mm, e1.doj.yy );

    return 0;
}