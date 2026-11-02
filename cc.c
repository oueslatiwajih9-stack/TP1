#include <stdio.h>
int main (){
    int a;
    int T [30];
    int i;
    do{
        printf("n=");
        scanf("%d",&a);
    }while ((a<0)||(a>30));
    for ( i = 0; i < a; i++){
        printf("n %d=",i+1);
        scanf("%d",& T[i]);
    }
    int s=0;
    for ( i = 0; i < a; i++)
    {
        s=s+T[i];
    }
    printf("votre somme=%d",s);
    return 0;
}