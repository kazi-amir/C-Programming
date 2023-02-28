#include<stdio.h>

int main(){
    int N, L;
    int multiple2=0,multiple3=0,multiple4=0,multiple5=0;
    scanf("%d",&N);

    for(int i=1;i<=N;i++){
        scanf("%d",&L);
        if(L%2 == 0){
            multiple2 += 1;
        }
        if(L%3 == 0){
            multiple3 += 1;
        }
        if(L%4 == 0){
            multiple4 += 1;
        }
        if(L%5 == 0){
            multiple5 += 1;
        }
    }
    printf("%d Multiplo(s) de 2\n", multiple2);
    printf("%d Multiplo(s) de 3\n", multiple3);
    printf("%d Multiplo(s) de 4\n", multiple4);
    printf("%d Multiplo(s) de 5\n", multiple5);

    return 0;
}
