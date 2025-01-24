//program to denomstrate array of structures

#include <stdio.h>
#include <string.h>

typedef struct empolyee
{
    int id;
    char name[30];
    double salary;
}emp;  

int main()
{
    emp e1;
    e1.id = 1;
    strcpy(e1.name, "John");
    //This is necessary because you cannot directly assign a string to a character array in C.
    e1.salary = 10000.0;
    printf("Employee id: %d\n", e1.id);
    printf("Employee name: %s\n", e1.name); 
    printf("Employee salary: %.3f\n", e1.salary);
    return 0;
}