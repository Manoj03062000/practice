#include<stdio.h>
#include<stdlib.h>

struct node {
//data 
int data;
//pointer address of the next node 
struct node *next;

};

int main()
{
   
    //structre member to create a head ,new_node,temp
    struct node *head,*new_node,*temp;

    head = 0;
    int choice;
    while(choice)
    {
        // creat a new node to store the dta and address of the next node  
        new_node = (struct node*) malloc(sizeof(struct node));

        //assign the data and address of the node 
        printf("Enter the data \n");
        scanf("%d",&new_node->data);
        new_node->next = 0;

        if (head == 0){
            //assigen the new_node  to the head 
            head=temp = new_node;
        }
        else {
            temp->next = new_node;
            temp = new_node;
        }
        printf("do you want to contionue [0,1]\n");
        scanf(" %d",&choice);
    }

    // print the list or travese the head 

    temp = head ;
    // loop until the end of null 
    while(temp!=0)
    {
        printf(" -> %d",temp->data);
        temp = temp->next;
    }
}