#include <stdio.h>

int main(void){
    int x,max=-1000000,min=1000000;
    scanf("%d", &x);
    int Arr[x];
    for(int i=0;i<x;i++){
        scanf("%d", &Arr[i]);
    }
    for (int i = 0; i < x; i++)
    {
        if (max<Arr[i])
        {
            max=Arr[i];
        }
        if (min>Arr[i])
        {
            min=Arr[i];
        }
    }
    printf("%d %d",min,max);
    return 0;
}