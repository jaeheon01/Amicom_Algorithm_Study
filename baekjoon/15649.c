/*
* <문제>
* 자연수 N과 M이 주어졌을 때, 아래 조건을 만족하는 길이가 M인 수열을 모두
* 구하는 프로그램을 작성하시오.
* -1부터 N까지 자연수 중에서 중복 없이 M개를 고른 수열
* 입력: 첫째 줄에 자연수 N과 M이 주어집니다.(1<=M<=N<=8)
* 출력: 한줄에 하나씩 문제의 조건을 만족하는 수열을 출력합니다.
* 각 수열은 공백으로 구분해서 출력해야 합니다. 
* 수열은 사전 순으로 증가하는 순서로 출력해야 합니다. 
*/

#include <stdio.h>

int n,m;
int result[1000]; //수열을 저장할 배열
int check[10]; //중복을 점검할 배열 1에서n까지 들어감.1 1 방지

void dfs(int stage)
{
    if(stage ==m) //깊이가 m까지 왔다면 순열 출력
    {
        for(int i=0;i<m;i++)
        {
            printf("%d ",result[i]);
        }
        printf("\n");
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(check[i]==0) //아직 중복 X -> result결과에 넣어줌
        {   
            result[stage]=i;  //수열배열에 중복되지 않은 정수 저장  
            check[i]=1;       //수열배열에 저장된 정수가 다시 저장되는거 방지
            dfs(stage+1);     // dfs 재귀함수 반복
            check[i]=0;       
        }
    }
}

int main()
{
    scanf("%d %d",&n,&m);
    dfs(0);
    return 0;
}