#include<stdio.h>
int main() {
    int n, i, j, k;
    float a[15][15], x[15], s, m;
    printf("\nEnter the number of constraints: ");
    scanf("%d", & n);

    for (i = 1; i <= n; i++) {
      printf("\nEnter the coefficient in left side for equation %d for :\n", i);
      for (j = 1; j <= n; j++) {
        printf("x%d :", j);
        scanf("%f", & a[i][j]);
      }
      printf("\nEnter the value in ride side of equation:");
      scanf("%f", & a[i][j]);
      x[i]=0.0;
    }

    printf("\nIterative Result\n");
    for(k=1;k<=10;k++){
        for (i = 1; i <= n; i++) {
            s=a[i][n+1];
            for (j = 1; j <= n; j++) {
                if(i!=j)
                    s=s-a[i][j]*x[j];
                x[i]=s/a[i][i];
            }
        }
        printf("\nFor k=%2d:\t", k);
        for (i = 1; i <= n; i++) {
            printf("x%d = %f\t", i, x[i]);
        }
    }
    return (0);

  }

