#include<stdio.h>
#include<stdio.h>
struct node {
    int data;
    struct node*next;
};

struct node*create_node(int data) {
    struct node*temp=malloc(sizeof(struct node));
    temp->data=data;

    temp->next=temp;
    return temp;
}
void print(struct node*tail) {
    struct node*ptr=tail->next;
    printf("elements in the list:");
    do {
        printf("%3d",ptr->data);
        ptr=ptr->next;
    } while(ptr!=tail->next);
}
struct node*insert_beg(struct node*tail, int data)

{
    struct node*temp=malloc(sizeof(struct node));

    temp->data=data;
    temp->next=NULL;
    temp->next=tail->next;
    tail->next=temp;
    return tail;
}
struct node*add_end(struct node*tail,int data)
{
    struct node*temp=malloc(sizeof(struct node));

    temp->data=data;
    temp->next=NULL;
    temp->next=tail->next;
    tail->next=temp;
    tail=tail->next;
    return tail;
}
struct node*insert_pos(struct node*tail,int data, int pos)
{
    struct node*temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    struct node*ptr=tail->next;
    if(pos==1)
        insert_beg(tail,data);
    else {
    pos--;
            while(pos!=1)
            {
                ptr= ptr->next;
                pos--;
            }
        if(ptr==tail)
        {
            temp->next=tail->next;
            tail->next=temp;
            tail=tail->next;
        }
        else {
            

            temp->next=ptr->next;
            ptr->next=temp;

        }
    }
    return tail;
}
struct node*delete_at_beg(struct node*tail)
{
    struct node*temp=tail->next;
    tail->next=temp->next;
    free(temp);
    temp=NULL;
    return tail;
}
struct node*delete_at_end(struct node*tail)
{
    struct node*temp=tail->next;
    while(temp->next!=tail)
    {
        temp=temp->next;

    }
    temp->next=tail->next;
    free(tail);
    tail=temp;
    return tail;
}
int main() {
    struct node*tail;

    tail=create_node(10);

    tail= insert_beg(tail,20);
    print(tail);


    tail=add_end(tail,30);
    print(tail);


    tail=insert_pos(tail,40,4);
    print(tail);


    tail=delete_at_beg(tail);
    print(tail);


    tail=delete_at_end(tail);
    print(tail);




}
