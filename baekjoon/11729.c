#include <stdio.h>
/*
n: number of plate
from: first column
tmp: second column
to: third(destination) column
*/
void hanoi(int n, char from, char tmp, char to){
    if(n==1){
        printf("%c %c\n",from,to);
    }
    else{
        hanoi(n-1,from,to,tmp);
        printf("%c %c\n",from,to);
        hanoi(n-1,tmp,from,to);
    }
}

int main(){
    int N;
    scanf("%d",&N);
    if(N<1 || N>20){
        printf("Error");
    }
    //number of moving plate
    int count=(1<<N)-1;
    printf("%d\n",count);
    hanoi(N,'1','2','3');
    return 0;
}