#include <stdio.h>
int main(){
    int N, X, Y;
    scanf("%d",&N);

    for (int i=1; i<=N;i++){
        scanf("%d %d",&X, &Y);
        if (Y == 0){
            printf("divisao impossivel\n");
        }
        else{
            printf("%.1f\n",(float)X/Y);
        }

    }

}
