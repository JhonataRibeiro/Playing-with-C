#include <stdio.h>
#include <stdbool.h>
#define STACKSIZE 100
#define TRUE 1
#define FALSE 0
struct stack {
    int top;
    int itens[STACKSIZE];
};

typedef struct stack Stack;

int main(){
    Stack st;
    st.top = -1;
    isEmpty();
    push(st,1);
    return 0;
}

int isEmpty(Stack st){
    printf("stack => top: %d\n", st.top);
    if(st.top == -1){
        return TRUE;
    }else{
        return FALSE;
    } 
}

int push(Stack st, int item){
    printf("%d",item);
    st.top++;
    st.itens[st.top] = item;
    printf("stack position => %d , value: %d\n", st.top, st.itens[st.top]);
    return 0;
}