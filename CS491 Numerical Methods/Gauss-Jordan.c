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
    }

    for (i = 1; i <= n; i++) {
      for (j = 1; j <= n; j++) {
        if(i!=j){
            m=a[j][i]/a[i][i];
            for(k=i;k<=n+1;k++)
                a[j][k]=a[j][k]-m*a[i][k];
        }
        }
      }

    printf("\nFinal form of Augmented Matrix is\n");
    for (i = 1; i <= n; i++) {
      for (j = 1; j <= n + 1; j++)
        printf("%f\t", a[i][j]);
      printf("\n");
    }


    for (i = 1; i <= n; i++) {
      x[i] = a[i][n + 1] / a[i][i];
    }

    printf("\n");
    for (i = 1; i <= n; i++) {
      printf("x%d = %f,\t", i, x[i]);
    }
    return (0);

  }
