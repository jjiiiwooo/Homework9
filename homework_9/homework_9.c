#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
#define MAX_VERTICES 50
#define MAX_STACK_SIZE 50
#define MAX_QUEUE_TYPE 50


//그래프 
typedef struct GreaphType {
	int n; //정점의 개수 
	int adj_mat[MAX_VERTICES][MAX_VERTICES];
}GraphType;

//스택 
typedef int element;
typedef struct {
	element data[MAX_STACK_SIZE];
	int top;
}StackType;

//큐
typedef struct {
	element queue[MAX_QUEUE_TYPE];
	int front, rear;
}QueueType;

int visited[MAX_VERTICES];

//스택 초기화 
void init_stack(StackType* s)
{
	s->top = -1;
}

//스택 공백 상태 검출
int is_empty(StackType* s)
{
	return (s->top == -1);
}

//스택 포화 상태 검출 
int is_full(StackType* s)
{
	return (s->top == (MAX_STACK_SIZE - 1));
}

//스택 삽입 
void push(StackType* s, element item)
{
	if (is_full(s)) {
		fprintf(stderr, "스택 포화 에러\n");
		return;
	}
	else s->data[++(s->top)] = item;
}

//스택 삭제 
element pop(StackType* s)
{
	if (is_empty(s)) {
		fprintf(stderr, "스택 공백 에러\n");
		return;
	}
	else return s->data[(s->top)--];
}


//큐 초기화 
void queue_init(QueueType* q)
{
	q->front = q->rear = 0;
}

//큐 공백 상태 검출 
int Q_isEmpty(QueueType* q)
{
	return (q->front == q->rear);
}

//큐 포화 상태 검출 
int Q_isFull(QueueType* q)
{
	return ((q->rear + 1) % MAX_QUEUE_TYPE == q->front);
}

//큐 삽입 
void enqueue(QueueType* q, element item)
{
	if (Q_isfull(q))
		fprintf(stderr, "큐가 포화상태입니다.");
	q->rear = (q->rear + 1) % MAX_QUEUE_TYPE;
	q->queue[q->rear] = item;
}

//큐 삭제 
element dequeue(QueueType* q)
{
	if (Q_isEmpty(q))
		fprintf(stderr, "큐가 공백상태입니다.");
	q->front = (q->front + 1) % MAX_QUEUE_TYPE;
	return q->queue[q->front];
}

//그래프 상태 출력 
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

//그래프 초기화 
void init(GraphType* g)
{
	int r, c;
	g->n = 0;
	for (r = 0; r < MAX_VERTICES; r++)
		for (c = 0; c < MAX_VERTICES; c++)
			g->adj_mat[r][c] = 0;
}

//정점 삽입 연산 
void insert_vertex(GraphType* g, int v)
{
	if ((g->n) + 1 > MAX_VERTICES) {
		fprint(stderr, "그래프 : 정점 개수 초과 ");
		return;
	}
	g->n++;
}

//간선 삽입 연산 
void insert_edge(GraphType* g, int start, int end)
{
	if ((start >= g->n || end >= g->n))
	{
		fprint(stderr, "그래프: 정점 번호 오류");
		return;
	}
	g->adj_mat[start][end] = 1;
	g->adj_mat[end][start] = 1;

}

//깊이 우선 탐색 
void dfs_mat(GraphType* g, int v, int key)
{
	StackType* s; //스택 생성 
	GraphType* w;

	push(s, v);
	while (!is_empty(s))
	{
		v = pop(s);
		for (w = 0; w < g->n; w++)
		{
			if (visited[v] = FALSE)
				visited[v] = TRUE;
			//인접 정점 탐색
			for (w = 0; w < g->n; w++)
			{

			}
		}
	}
}

//너비우선탐색
void bfs_mat(GraphType* g, int v)
{
	int w;
	QueueType* q;

	queue_init(&q);
}




int main(void)
{
	printf("-----------------\n");
	printf("1   : 깊이 우선 탐색\n");
	printf("2   : 너비 우선 탐색\n");
	printf("3   : 종료\n");

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