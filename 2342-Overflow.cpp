#include <stdio.h>
int main(){
    int N, P, Q, result;
    char sign;
    scanf("%d", &N);
    scanf("%d %c %d",&P, &sign, &Q);

    switch (sign)
    {
    case '+':
        result = P + Q;
        break;
    case '*':
        result = P * Q;
        break;
    }

    if (result <= N){
        printf("OK\n");
    }
    else if (result > N){
        printf("OVERFLOW\n");
    }


    return 0;
}
