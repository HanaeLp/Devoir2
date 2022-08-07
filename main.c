#include <stdio.h>
#include <stdlib.h>

float tab1[13],tab2[15],tab3[28];

/*void H(float w[], float q[]){
    float tab3[28];
    int i,j,k,u;

    for(i = 1; i <= 13; i++){
        tab3[i] = w[i];
    }
    k=i;
    for(j = 1; j <=15; j++){
        k++;
        tab3[k] = q[j];
    }
    printf("Le tableau fusionne est: ");
    for(u = 1; u <= k; u++){
        printf("%f",tab3[u]);
    }
}*/

void G(float a, float b, int c){

        printf("\nla plus grande moyenne dans ce classe est %f\n", a);
        printf("la plus petite moyenne dans ce classe est %f\n", b);
        printf("le nombre des eleves a obtenu une moyenne superieur ou egale 10 de ce classe est : %d\n", c);
}

float U(int b, int d){

     int i,j,M,P = 0;
     float A[b],tmp;

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
            if(A[i] >= 10){
                P = P + 1;
            }
        }
        for(i=1; i<=b; i++){
            if(b == 13){
               tab1[i] = A[i];
            }
            if(b == 15){
               tab2[i] = A[i];
            }
        }

    int k,u;

    for(i = 1; i <= 13; i++){
        tab3[i] = tab1[i];
    }
    k=i;
    for(j = 1; j <=15; j++){
        tab3[k] = tab2[j];
        k++;
    }
    if(b == 15){
        printf("Le tableau fusionne est: ");
        for(u = 1; u <= k; u++){
            printf("%f",tab3[u]);
        }
    }

   // H(tab1,tab2);

    G(A[b], A[1], P);
 return b;
}

float classe(int a, int e){
    int K;

    if(a == 1){
       K = 13;
    } else if (a == 2){
       K = 15;
    }
    U(K, e);
 return a;
}

int main()
{
        int A,i;

        for(i=1; i<=2; i++){
            printf("Entrer les moyennes de classe %d :\n", i);
            scanf("%d", &A);
            classe(A,i);
        }
}
