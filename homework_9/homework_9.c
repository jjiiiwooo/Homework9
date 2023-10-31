#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
#define MAX_VERTICES 50
#define MAX_STACK_SIZE 50
#define MAX_QUEUE_TYPE 50


//�׷��� 
typedef struct GreaphType {
	int n; //������ ���� 
	int adj_mat[MAX_VERTICES][MAX_VERTICES];
}GraphType;

//���� 
typedef int element;
typedef struct {
	element data[MAX_STACK_SIZE];
	int top;
}StackType;

//ť
typedef struct {
	element queue[MAX_QUEUE_TYPE];
	int front, rear;
}QueueType;

int visited[MAX_VERTICES];

//���� �ʱ�ȭ 
void init_stack(StackType* s)
{
	s->top = -1;
}

//���� ���� ���� ����
int is_empty(StackType* s)
{
	return (s->top == -1);
}

//���� ��ȭ ���� ���� 
int is_full(StackType* s)
{
	return (s->top == (MAX_STACK_SIZE - 1));
}

//���� ���� 
void push(StackType* s, element item)
{
	if (is_full(s)) {
		fprintf(stderr, "���� ��ȭ ����\n");
		return;
	}
	else s->data[++(s->top)] = item;
}

//���� ���� 
element pop(StackType* s)
{
	if (is_empty(s)) {
		fprintf(stderr, "���� ���� ����\n");
		return;
	}
	else return s->data[(s->top)--];
}


//ť �ʱ�ȭ 
void queue_init(QueueType* q)
{
	q->front = q->rear = 0;
}

//ť ���� ���� ���� 
int Q_isEmpty(QueueType* q)
{
	return (q->front == q->rear);
}

//ť ��ȭ ���� ���� 
int Q_isFull(QueueType* q)
{
	return ((q->rear + 1) % MAX_QUEUE_TYPE == q->front);
}

//ť ���� 
void enqueue(QueueType* q, element item)
{
	if (Q_isfull(q))
		fprintf(stderr, "ť�� ��ȭ�����Դϴ�.");
	q->rear = (q->rear + 1) % MAX_QUEUE_TYPE;
	q->queue[q->rear] = item;
}

//ť ���� 
element dequeue(QueueType* q)
{
	if (Q_isEmpty(q))
		fprintf(stderr, "ť�� ��������Դϴ�.");
	q->front = (q->front + 1) % MAX_QUEUE_TYPE;
	return q->queue[q->front];
}

//�׷��� ���� ��� 
void GraphStatus(GraphType* g)
{
	for (int i = 1; i < MAX_VERTICES; i++)
	{
		for (int j = 1; j < MAX_VERTICES; j++)
		{
			printf("%d ", g->adj_mat[i][j]);
		}
	}
	printf("\n");
}

//�׷��� �ʱ�ȭ 
void init(GraphType* g)
{
	int r, c;
	g->n = 0;
	for (r = 0; r < MAX_VERTICES; r++)
		for (c = 0; c < MAX_VERTICES; c++)
			g->adj_mat[r][c] = 0;
}

//���� ���� ���� 
void insert_vertex(GraphType* g, int v)
{
	if ((g->n) + 1 > MAX_VERTICES) {
		fprint(stderr, "�׷��� : ���� ���� �ʰ� ");
		return;
	}
	g->n++;
}

//���� ���� ���� 
void insert_edge(GraphType* g, int start, int end)
{
	if ((start >= g->n || end >= g->n))
	{
		fprint(stderr, "�׷���: ���� ��ȣ ����");
		return;
	}
	g->adj_mat[start][end] = 1;
	g->adj_mat[end][start] = 1;

}

//���� �켱 Ž�� 
void dfs_mat(GraphType* g, int v, int key)
{
	StackType* s; //���� ���� 
	GraphType* w;

	push(s, v);
	while (!is_empty(s))
	{
		v = pop(s);
		for (w = 0; w < g->n; w++)
		{
			if (visited[v] = FALSE)
				visited[v] = TRUE;
			//���� ���� Ž��
			for (w = 0; w < g->n; w++)
			{

			}
		}
	}
}

//�ʺ�켱Ž��
void bfs_mat(GraphType* g, int v)
{
	int w;
	QueueType* q;

	queue_init(&q);
}




int main(void)
{
	printf("-----------------\n");
	printf("1   : ���� �켱 Ž��\n");
	printf("2   : �ʺ� �켱 Ž��\n");
	printf("3   : ����\n");

	int menu;

	switch (menu)
	{
	case 1:
		break;
	case 2:
		break;
	case 3:

	}

}