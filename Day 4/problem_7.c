#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct empolyee
{
    int id;
    char name[30];
    double salary;
}Empolyee;

int main(){
    Empolyee e, *sptr;
    sptr = &e;
    // sptr->id = 1;
    // strcpy(sptr->name, "abishake");
    // sptr->salary = 10000.0;

    (*sptr).id = 1;
    strcpy((*sptr).name, "abishake");
    (*sptr).salary = 10000.0;

    printf("%d %s %.2lf\n",e.id,e.name,e.salary);
}