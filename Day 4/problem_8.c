#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct empolyee
{
    int id;
    char name[30];
    double salary;
}Empolyee;

typedef struct empolyee
{
    Empolyee emp;
    struct node *nxt;
}Node;

Node* createNode(Empolyee e){
    Node* temp = (Node*)calloc(1,sizeof(Node));
    temp->emp = e;
    return temp;

}

addFirst(Node* list,Empolyee e){
    Node *newNode = createNode(e);
    newNode->nxt = list;
    list = newNode;
    return list;
}

void printList(Node* List){
    if(List){
        printf("\n[]");
        for(Node* temp = List; temp; temp = temp->nxt){
            printf("%d %s %.2lf\n",temp->emp.id,temp->emp.name,temp->emp.salary);
        }
        
    }else{
        printf("\n[]");
    }
}
int main(){

    return 0;
}