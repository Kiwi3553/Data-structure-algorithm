#include<stdio.h>
#include<stdlib.h>


//스택 코드 구현
/*
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
*/


//큐 구현 

/*
#define MAX 3

typedef struct Queue {
	int front; //앞 쪽 index
	int rear;  //뒤 쪽 index
	int data[MAX];
} Queue;

void init(Queue* q)             //편의상 초기화를 0으로 
{
	q->front = q->rear = -0;
}

int is_full(Queue *q){           //is full 공식 대입하기 
	return (((q->rear) + 1) % MAX == q->front);  //큐가 가리키는 레어에 더하기 1을 한 후 그것을 나머지 연산자를 써서 자기 큐의 최대값으로 나눈 나머지값이 큐가 가리키는 front값과 같은지를 판단하여서 리턴을 한다
}

int is_empty(Queue *q){
	return q->front == q->rear;        //같은곳을 향한다는건 비어있는것 

}

void enqueue(Queue* q, int item)
{
	if(is_full(q))                     //full을 판단하는건 동일 
	{
		printf("Error Queue is full");
		exit(1);
	}
	q->rear = (q->rear + 1) % MAX;     //큐가 가리키는 리어에 데이터를 삽입할곳의 인덱스를 알기위해서 아까봣던 공식을 써서 그 값을 리어에 담아줌
	q->data[q->rear] = item;           //큐가 가리키는 데이터의 큐가 가리키는 리어에 아이탬을 대입 
}

int dequeue(Queue* q) {
	if (is_empty(q))
	{
		printf("Error Queue is empty");
		exit(1);
	}
	q->front = (q->front + 1) % MAX;   //프론트의 값 구하기 
	return q->data[q->front];      //프론트 인덱스에 있는값을 리턴
}

int main()
{
	Queue q;
	init(&q);

	enqueue(&q, 3);
	enqueue(&q, 2);
	enqueue(&q, 1);                 //이 부분 삭제(한칸 확보)

	printf("%d\n", dequeue(&q));
	printf("%d\n", dequeue(&q));
	printf("%d\n", dequeue(&q));

	enqueue(&q, 3);                      //
	printf("%d", dequeue(&q));           //
	return 0;
}
*/

//원형큐 
typedef struct queue
{
	int* arr;          //동적 메모리의 주소를 저장하는 포인터
	int front;         //삭제위치(배열의 첨자=인덱스)
	int rear;          //삽입위치(배열의 첨자)
	int count;         //저장된 원소의 개수
	int capacity;      //배열의 최대 용량 = 배열이 유동적으로 변하기때문에 용량이 계속 변하며,현재 용량이 곧 최대용량이다
} queue;

int main()
{
	
}