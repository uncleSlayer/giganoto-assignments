#include <stdio.h>
#define MAXLEN 10;

void pop(int *top){
    if (*top < 0)
    {
        printf("the stack is empty.");
    } else{
        --(*top);
    }
    
    return;
}

void push(int *top, int *stack_ptr, int push_val){
    if (*top >= 10)
    {
        printf("The stack is full.");
    } else {
        stack_ptr[++(*top)] = push_val;
    }
    
    return;
}

void print_stack(int *stack, int *top){
    for (int i = 0; i <= *top; i++)
    {
        printf("%d\n", stack[i]);
    }
    
}

int main(){
    int stack[] = {12, 14};
    int top = -1;
    int *top_pointer = &top;

    push(top_pointer, stack, 5);
    // pop(top_pointer);

    print_stack(stack, top_pointer);

    return 0;
}