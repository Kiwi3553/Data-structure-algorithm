#include<stdio.h>
#include<stdlib.h>


//���� �ڵ� ����
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


//ť ���� 

/*
#define MAX 3

typedef struct Queue {
	int front; //�� �� index
	int rear;  //�� �� index
	int data[MAX];
} Queue;

void init(Queue* q)             //���ǻ� �ʱ�ȭ�� 0���� 
{
	q->front = q->rear = -0;
}

int is_full(Queue *q){           //is full ���� �����ϱ� 
	return (((q->rear) + 1) % MAX == q->front);  //ť�� ����Ű�� ��� ���ϱ� 1�� �� �� �װ��� ������ �����ڸ� �Ἥ �ڱ� ť�� �ִ밪���� ���� ���������� ť�� ����Ű�� front���� �������� �Ǵ��Ͽ��� ������ �Ѵ�
}

int is_empty(Queue *q){
	return q->front == q->rear;        //�������� ���Ѵٴ°� ����ִ°� 

}

void enqueue(Queue* q, int item)
{
	if(is_full(q))                     //full�� �Ǵ��ϴ°� ���� 
	{
		printf("Error Queue is full");
		exit(1);
	}
	q->rear = (q->rear + 1) % MAX;     //ť�� ����Ű�� ��� �����͸� �����Ұ��� �ε����� �˱����ؼ� �Ʊ�f�� ������ �Ἥ �� ���� ��� �����
	q->data[q->rear] = item;           //ť�� ����Ű�� �������� ť�� ����Ű�� ��� �������� ���� 
}

int dequeue(Queue* q) {
	if (is_empty(q))
	{
		printf("Error Queue is empty");
		exit(1);
	}
	q->front = (q->front + 1) % MAX;   //����Ʈ�� �� ���ϱ� 
	return q->data[q->front];      //����Ʈ �ε����� �ִ°��� ����
}

int main()
{
	Queue q;
	init(&q);

	enqueue(&q, 3);
	enqueue(&q, 2);
	enqueue(&q, 1);                 //�� �κ� ����(��ĭ Ȯ��)

	printf("%d\n", dequeue(&q));
	printf("%d\n", dequeue(&q));
	printf("%d\n", dequeue(&q));

	enqueue(&q, 3);                      //
	printf("%d", dequeue(&q));           //
	return 0;
}
*/

//����ť 
typedef struct queue
{
	int* arr;          //���� �޸��� �ּҸ� �����ϴ� ������
	int front;         //������ġ(�迭�� ÷��=�ε���)
	int rear;          //������ġ(�迭�� ÷��)
	int count;         //����� ������ ����
	int capacity;      //�迭�� �ִ� �뷮 = �迭�� ���������� ���ϱ⶧���� �뷮�� ��� ���ϸ�,���� �뷮�� �� �ִ�뷮�̴�
} queue;

int main()
{
	
}