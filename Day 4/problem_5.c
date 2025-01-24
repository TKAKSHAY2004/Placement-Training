//program to denomstrate array of structures

#include <stdio.h>
#include <string.h>

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
    for(int i=0;i< n;i++){
        printf("%6d %-30s %10.2lf\n", emp[i].id, emp[i].name, emp[i].salary);
    }
    star(48);
}   