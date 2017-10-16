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
static Stack st;

int main(){
    st.top = -1;
    isEmpty();
    for(int i=0; i<=10; i++){
        push(i);
    }
    int poped = pop(st);
    printf("poped: %d", poped);
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

int push(int item){
    st.top++;
    st.itens[st.top] = item;
    printf("stack position => %d , value: %d\n", st.top, st.itens[st.top]);
    return 0;
}

int pop(Stack st){
    int item = st.itens[st.top];
    printf("poped: position => %d , value: %d\n", st.top, st.itens[st.top]);
    st.top--;
    return item;
}