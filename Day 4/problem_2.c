#include <stdio.h>

struct employee
{
    int id; //4 bytes
    char name[30]; //30 bytes
    double salary; //8 bytes
};
int main()
{

    printf("Size of employee structure: %lu\n", sizeof(struct employee));
    return 0;
}   
