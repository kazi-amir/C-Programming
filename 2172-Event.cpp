#include <stdio.h>

int main(){
    int X;
    long long int M;
    while(scanf("%d %lld",&X, &M)){
        if (X==0 && M==0){
            break;
        }
        else
            printf("%lld\n", X*M);
        }

    return 0;
}
