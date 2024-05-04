#include <stdio.h>
#define MAX 100

int graph[MAX][MAX];
int visited[MAX];
int N,M,V;

void DFS(int node){
    visited[node]=1;
    printf("%d", node);
    for(int j=1; j<=N; j++){
        if(graph[node][j]==1 && !visited[j]){
            DFS(j);
        }
    }
}
/*
bfs 구현--> 첫 노드와 연결된 노드들 큐에 삽입, 큐에서 하나 pop하고 pop한 노드랑 연결된 노드들 큐에 삽입
*/
void BFS(int v){
    int currentNode;
    int queue[MAX];
    int front=-1,rear=-1;
    visited[v]=1;
    queue[rear++]=v;
    //현재 노드와 연결된 노드 큐에 삽입 루프
    while(front!=rear){
        currentNode=queue[front++];
        printf("%d", currentNode);
    for(int j=1; j<=N; j++){
        if(graph[currentNode][j]==1 && !visited[j]){
            queue[rear++]=j; //rear0==2, rear1==3, rear2==4
            visited[j]=1;
        }
    }
    }
}

int main(){
    int u, v; //간선에 연결된 두 노드
    scanf("%d %d %d", &N, &M, &V);
    for(int i=0; i<M; i++){
        scanf("%d %d", &u, &v);
        graph[u][v]=graph[v][u]=1;
    }
    DFS(V);
    printf("\n");
    for(int i=1;i<=N;i++){
        visited[i]=0;
    }
    BFS(V);
    printf("\n");
    return 0;
}