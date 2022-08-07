#include <stdio.h>

float H(float ){

}
void G(float a, float b, int c){

        printf("\nla plus grande moyenne dans ce classe est %f\n", a);
        printf("la plus petite moyenne dans ce classe est %f\n", b);
        printf("le nombre des eleves a obtenu une moyenne superieur ou egale 10 de ce classe est : %d\n", c);
}

float U(int b, int d){

     int i,j,M,P = 0;
     float A[b],tmp,tab3[13],Z[28];

     for(i=1; i<=b; i++){
            printf("Donner la moyenne de eleve numero %d dans ce classe:\n",i);
            scanf("%f", &A[i]);
     }
        for(i=1; i<=b-1; i++){
          M = i;
          for(j= i+1; j<=b; j++){
              if(A[M] > A[j]){
                 M = j;
              }
          }
          if(M!= i){
                tmp = A[i];
                A[i] = A[M];
                A[M] = tmp;
            }
        }
        for(i=1; i<=b; i++){
            printf("%f\t", A[i]);
            H(A[i]);
            if(A[i] >= 10){
                P = P + 1;
            }
        }

        G(A[b], A[1], P);
       /*if(d == 1){
            for(i = 1; i <=13; i++){
                 Z[i] = A[i];
                 H();
            }
        }
        if(d == 2){{
            for(i = 1, j = 13; j <= 28 && i <= 15; i++, j++){
                 Z[j] = A[i];
            }
            printf("\nA la fin de semester :\n");
            for(i = 1; i<= 28; i++){
                 printf("%f\t",Z[i]);
            }
        }*/
 return b;
}

float classe(int a, int j){
    int K;

    if(a == 1){
       K = 13;
    } else if (a == 2){
       K = 15;
    }
    U(K, j);
 return a;
}

int main()
{
    int A,i;
    for(i=1; i<=2; i++){
        printf("entrer 1 si veux entrer les moyennes de classe 1, entrer 2 si veux entrer les moyennes de classe 2\n");
        scanf("%d", &A);
        printf("pour le classe %d\n", A);
        classe(A,i);
    }
    return 0;
}
