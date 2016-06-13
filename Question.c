#include<stdio.h>

int funcao(int a, int *b){
	static int c = 5;
	int d = 3;
	*b = *b + 5;
	a++, c++, d++;
	return(a + *b + c + d);
}

int main(int argc, char *argv[]){
	int a =2 , b = 4,(*ptr)(int,int*);
	ptr = funcao;
	printf("%d\n",(*ptr)(a,&b));
	printf("%d\n",(*ptr)(a,&b));
	printf("%d\n",(*ptr)(a,&b));
}