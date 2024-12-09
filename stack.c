#include <stdio.h>
#define SIZE 5  

int stack[SIZE];  
int top = -1;  


void push() {
    int item;
    if (top == SIZE - 1) {
        printf("Stack overflow! Cannot push more elements.\n");
    } else {
        printf("Enter the element to push: ");
        scanf("%d", &item);
        top++;
        stack[top] = item;
        printf("Pushed: %d\n", item);
    }
}


void pop() {
    if (top == -1) {
        printf("Stack underflow! No elements to pop.\n");
    } else {
        printf("Popped: %d\n", stack[top]);
        top--;
    }
}


void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf(" %d ", stack[i]);
        }
        printf("\n");
    }
}


int main() {
    int choice;

    while (1) {
        printf("\nStack Operations Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}