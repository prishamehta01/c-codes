#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *link;
};

typedef struct node * NODE;

NODE getnode()
{
    NODE x;
    x = (NODE)malloc(sizeof(struct node));
    if(x == NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }
    return x;
}

NODE insert_front(NODE first, int item)
{
    NODE temp;
    temp = getnode();
    temp->info = item;
    temp->link = NULL;
    if(first == NULL)
        return temp;
    else
    {
        temp->link = first;
        return temp;
    }
}

NODE insert_rear(NODE first, int item)
{
    NODE temp, prev, cur;
    temp = getnode();
    temp->info = item;
    temp->link = NULL;
    if(first == NULL)
        return temp;
    cur = first;
    prev = NULL;
    while(cur != NULL)
    {
        prev = cur;
        cur = cur->link;
    }
    prev->link = temp;
    return first;
}

NODE delete_front(NODE first)
{
    int ele;
    NODE next;
    if(first == NULL)
    {
        printf("There are no elements\n");
        return first;
    }
    ele = first->info;
    next = first->link;
    free(first);
    return next;
}

NODE delete_rear(NODE first)
{
    NODE cur, prev;
    int ele;
    if(first == NULL)
    {
        printf("There are no elements\n");
        return NULL;
    }
    if(first->link == NULL)
    {
        ele = first->info;
        free(first);
        return NULL;
    }
    cur = first;
    prev = NULL;
    while(cur->link != NULL)
    {
        prev = cur;
        cur = cur->link;
    }
    ele = cur->info;
    free(cur);
    prev->link = NULL;
    return first;
}

void display(NODE first)
{
    NODE cur;
    if(first == NULL)
    {
        printf("There are no elements\n");
        return;
    }
    cur=first;
    while(cur!=NULL)
    {
        printf("%d ",cur->info);
        cur=cur->link;
    }
    printf("\n"); 
}

void count(NODE first)
{
    int count=0;
    NODE cur;
    cur=first;
    while(cur!=NULL)
    {
        cur=cur->link;
        count++;
    }
    printf("Number of nodes: %d\n", count);
}

NODE rev_sll(NODE first)
{
    NODE rev=NULL;
    NODE cur,temp;
    cur=first;
    while(cur!=NULL)
    {
        temp=getnode();
        temp->info=cur->info;
        temp->link=rev;
        rev=temp;
        cur=cur->link;
    }
    return rev;
}

void sort(NODE first)
{
    int temp;
    NODE cur, next;
    if (first == NULL)
        return;

    for (cur = first; cur->link != NULL; cur = cur->link)
    {
        for (next = cur->link; next != NULL; next = next->link)
        {
            if (cur->info > next->info)
            {
                temp = cur->info;
                cur->info = next->info;
                next->info = temp;
            }
        }
    }
}

int main()
{
    NODE first = NULL;
    int choice, item;

    while(1)
    {
        printf("\n1. Insert at front");
        printf("\n2. Insert at rear");
        printf("\n3. Delete from front");
        printf("\n4. Delete from rear");
        printf("\n5. Display");
        printf("\n6. Count the nodes");
        printf("\n7. Reverse the nodes");
        printf("\n8. Sort the list");
        printf("\n9. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter the element to insert at front: ");
                scanf("%d", &item);
                first = insert_front(first, item);
                break;
            case 2:
                printf("Enter the element to insert at rear: ");
                scanf("%d", &item);
                first = insert_rear(first, item);
                break;
            case 3:
                first = delete_front(first);
                break;
            case 4:
                first = delete_rear(first);
                break;
            case 5:
                display(first);
                break;
            case 6:
                count(first);
                break;
            case 7:
                first = rev_sll(first);
                printf("Reversed list: ");
                display(first);
                break;
            case 8:
                sort(first);
                printf("Sorted list: ");
                display(first);
                break;
            case 9:
                printf("Exiting program\n");
                exit(0);
            default:
               printf("Invalid choice! Please enter a valid option.\n");
        }
    }

    return 0;
} 
