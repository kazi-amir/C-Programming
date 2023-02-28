#include <stdio.h>
#include <stdlib.h>
int main(){
    int f, a=0,g=0,d=0;
    while(scanf("%d",&f)){
    if (f>4 || f<1){
        scanf("%d",&f);
    }

        if (f==1){
            a = a+1;
        }
        if (f==2){
            g = g+1;
        }
        if (f==3){
            d = d+1;
        }
        if(f==4){
            break;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", a);
    printf("Gasolina: %d\n", g);
    printf("Diesel: %d\n",d);
    return 0;
}
