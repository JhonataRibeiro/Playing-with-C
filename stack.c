#include <stdio.h>
#include <stdbool.h>
#define STACKSIZE 100
struct stack {
    int top;
    int items[STACKSIZE];
};

bool checkIfStackIsEmpty(int *stack);

int main(){
    struct stack s;
    checkIfStackIsEmpty(&s);
    printf("stack %d \n", s);
    return 0;
}

// checkIfStackIsEmpty(int *stack){
//     return 0;
// }