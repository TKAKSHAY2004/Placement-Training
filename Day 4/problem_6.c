#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

typedef struct empolyee
{
    int id;
    char name[30];
    double salary;
}Empolyee;  

void star(int n){
    for(int i=1;i<=n;i++){
        printf("*");
    }
    printf("\n");
}

int compare(const void *a, const void *b){
    //sorting their name by alphabetical order
    return strcmp(((Empolyee *)a)->name, ((Empolyee *)b)->name);
    //sorting their salary by ascending order
    return ((Empolyee *)a)->salary - ((Empolyee *)b)->salary;   
}

int main()
{
    int n;
    scanf("%d", &n);
    Empolyee emp[n];
    for(int i = 0; i < n; i++){
        scanf("%d %s %lf", &emp[i].id,emp[i].name, &emp[i].salary);
        
    }
    star(48);
    printf("Emp ID Employee Name%17s Salary\n","");
    star(48);
    qsort(emp, n, sizeof(Empolyee), compare);
    for(int i=0;i< n;i++){
        printf("%6d %-30s %10.2lf\n", emp[i].id, emp[i].name, emp[i].salary);
    }
    star(48);
} 