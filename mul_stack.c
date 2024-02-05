/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define m_size 12
#define no_of_stack 3

void push(int s[], int top[], int bound[], int i) {
    int ele;
    printf("Enter the ele to be inserted: ");
    scanf("%d", &ele);
    if (top[i] == bound[i + 1]) {
        printf("Stack %d is full\n", i);
        return;
    }
    top[i] = top[i] + 1;
    s[top[i]] = ele;
}

void pop(int s[], int top[], int bound[], int i) {
    int ele;
    if (top[i] == bound[i]) {
        printf("Stack %d underflow\n", i);
        return;
    }
    ele = s[top[i]];
    top[i] = top[i] - 1;
    printf("Element deleted is %d\n", ele);
}

void display(int s[], int top[], int bound[]) {
    int i, j;
    for (i = 0; i < no_of_stack; i++) {
        printf("Elements of stack %d\n", i);
        if (top[i] == bound[i]) {
            printf("Stack is empty\n");
            continue;
        }
        for (j = bound[i] + 1; j <= top[i]; j++) {
            printf("%d ", s[j]);
        }
        printf("\n"); // Add a newline after printing each stack
    }
}

int main() {
    int stack[m_size];
    int top[no_of_stack] = {-1, -1, -1};
    int bound[no_of_stack + 1] = {-1, m_size / no_of_stack - 1, 2 * m_size / no_of_stack - 1, m_size};


    int choice, stack_num;
    do {
        printf("\nMenu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter stack number (0 to %d): ", no_of_stack - 1);
                scanf("%d", &stack_num);
                if (stack_num >= 0 && stack_num < no_of_stack)
                    push(stack, top, bound, stack_num);
                else
                    printf("Invalid stack number.\n");
                break;
            case 2:
                printf("Enter stack number (0 to %d): ", no_of_stack - 1);
                scanf("%d", &stack_num);
                if (stack_num >= 0 && stack_num < no_of_stack)
                    pop(stack, top, bound, stack_num);
                else
                    printf("Invalid stack number.\n");
                break;
            case 3:
                display(stack, top, bound);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
