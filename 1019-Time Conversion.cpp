#include <stdio.h>

int main()
{
    int N, hr, min, Sec;
    scanf("%d",&N);     //input total event duration in second

    hr = N / 3600;
    min = ((N - (hr * 3600)) / 60);
    Sec = (N - ((min * 60)+( hr * 3600)));

    printf("%d:%d:%d\n", hr, min, Sec);
    return 0;
}
