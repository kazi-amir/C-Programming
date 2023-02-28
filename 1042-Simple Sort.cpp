#include <stdio.h>
#include <math.h>

int main()
{
    int x,y,z, G1, G2, G3;
    scanf("%d %d %d", &x, &y, &z);

    if (x>y && x>z){
        if (y>z){
            printf("%d\n%d\n%d\n\n",z,y,x);
        }
        else if (z>y){
            printf("%d\n%d\n%d\n\n",y,z,x);
        }
    }
    else if (y>x && y>z){
        if (x>z){
            printf("%d\n%d\n%d\n\n",z,x,y);
        }
        else if (z>x){
            printf("%d\n%d\n%d\n\n",x,z,y);
        }
    }
    else if (z>x && z>y){
        if (x>y){
            printf("%d\n%d\n%d\n\n",y,x,z);
        }
        else if (y>x){
            printf("%d\n%d\n%d\n\n",x,y,z);
        }
    }

    printf("%d\n%d\n%d\n", x, y, z);

    return 0;
}
