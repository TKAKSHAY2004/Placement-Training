#include  <stdio.h>

typedef struct employee
{
    int id; //4 bytes
    char name[30]; //30 bytes
    double salary; //8 bytes
} emp;

int main()
{
    printf("Size of employee structure: %lu\n", sizeof(emp));
    return 0;
}