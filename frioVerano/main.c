#include <stdio.h>
#include <stdlib.h>
#include "pruebadedialogos.h"
int main () {
int a, b, c, d;
printf(titulo);
printf(intro);
printf(personajes);
fflush(stdin); //para limpiar la consola
scanf("%d", &a);
if (a==1){
        printf(n1);
        fflush(stdin);
        scanf("%d", &b);
        if (b==1){
                printf(n1a);
        }else{
            printf(n1b);
            fflush(stdin);
            scanf("%d", &c);
            if (c==1){
                printf(n2a);
            }else{
                printf(n2b);
                fflush(stdin);
                scanf ("&d", &d);
                if (d==1){
                    printf(n3a);
                }else{
                    printf(n3b);
                }
            }
        }
}else{
    if (a==2){
        printf(j1);
        fflush(stdin);
        scanf("%d", &b);
        if (b==1){
                printf(j1a);
        }else{
            printf(j1b);
            fflush(stdin);
            scanf("%d", &c);
            if (c==1){
                printf(j2a);
            }else{
                printf(j2b);
                fflush(stdin);
                scanf ("&d", &d);
                if (d==1){
                    printf(j3a);
                }else{
                    printf(j3b);
                }
            }
        }
    }

}
}
