#include <stdio.h>

int bill(int x);
int price[100],a[100],sum;
int main(void){
    int balance,n;

    scanf("%d",&balance);
    scanf("%d",&n);
    bill(n);
    if (sum==balance)
    {
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
    
}

int bill(int n){
    for(int i=0;i<n;i++){
        scanf("%d",&price[i]);
        scanf("%d",&a[i]);

    }
    for(int i=0;i<n;i++){
        sum+= price[i]*a[i];
    }
    return 0;
}