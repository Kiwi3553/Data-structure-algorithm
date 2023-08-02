#include<stdio.h>
#include<stdlib.h>


//스택 코드 구현

typedef struct stacktype {
	int arr[100];
	int top;

}

stacktype;

void init(stacktype* s)
{

	s->top = -1;

}

int is_empty(stacktype* s)
{
	if (s->top == -1)

		return 1;

	return 0;
}

int is_full(stacktype* s)
{
	if (s->top == 100 - 1)
		return 1;
	return 0;
}


void push(stacktype* s, int value)
{
	if (is_full(s))
	{
		printf("stack is full");
		exit(1);
	}

	printf("\npushed:%d\n", value);
	s->arr[++(s->top)] = value;
}

int pop(stacktype* s)
{
	if (is_empty(s))
	{
		printf("stack is empty");
		exit(1);
	}
	return s->arr[(s->top)--];

}

int peek(stacktype* s)
{
	if (is_empty(s))
	{
		printf("stack is empty");
		exit(1);
	}
	return s->arr[(s->top)];
}



int main()
{
	stacktype s;
	init(&s);

	push(&s, 3);
	push(&s, 2);
	push(&s, 1);

	printf("\npeek:%d\n", peek(&s));

	printf("\n pop:%d \n", pop(&s));
	printf("\n pop:%d \n", pop(&s));
	printf("\n pop:%d \n", pop(&s));

	return 0;
}