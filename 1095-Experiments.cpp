#include<stdio.h>

int main(){
    int N, Amount, i,total=0, totalC=0, totalR=0, totalS=0;
    char Type;
    scanf("%d",&N);
    for (i=1;i<=N; i++){
        scanf("%d %c",&Amount, &Type);
        total = total+Amount;
        if (Type == 'C'){
            totalC = totalC+Amount;
        }
        if (Type == 'R'){
            totalR = totalR+Amount;
        }
        if (Type == 'S'){
            totalS = totalS+Amount;
        }
    }
    float pC, pR, pS;
    pC = ((float)totalC*100)/total;
    pR = ((float)totalR*100)/total;
    pS = ((float)totalS*100)/total;

    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",totalC);
    printf("Total de ratos: %d\n",totalR);
    printf("Total de sapos: %d\n",totalS);
    printf("Percentual de coelhos: %.2f %%\n",pC);
    printf("Percentual de ratos: %.2f %%\n",pR);
    printf("Percentual de sapos: %.2f %%\n",pS);

    return 0;
}
