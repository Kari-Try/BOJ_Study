#include <stdio.h>
int main(){
    int origin[6]={1,1,2,2,2,8};
    int have[6];

    for (int i=0;i<6;i++){
        scanf("%d",&have[i]);
    }

    for(int x=0;x<6;x++){
        printf("%d ",origin[x]-have[x]);
    }

}