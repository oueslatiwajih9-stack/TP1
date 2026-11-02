#include <stdio.h>
int main ()
{
    float a;
    float b;
    printf("a=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);
    printf("choisir l'operation: +,-,*,/");
    char c;
    scanf(" %c",&c);
    switch (c)
    {
        case '+':
            printf("votre somme=%f",a+b);
            break;
        case '-':
            printf("votre difference=%f",a-b);
            break;
        case '*':
            printf("votre produit=%f",a*b);
            break;
        case '/':
            if (b==0)
                printf("erreur");
            else
                printf("votre quotient=%f",a/b);
            break;
        default:
            printf("erreur");
    }
}  
