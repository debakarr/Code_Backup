#include<stdio.h>

  int main() {
    int i, j, n;
    float x[15], y[15], f[15][15] = {0}, p = 1.0, u, s, h, Xp;

    printf("\nEnter the number of terms: ");
    scanf("%d", & n);

    printf("\nEnter the values for X: \n");
    for (i = 0; i < n; i++)
      scanf("%f", & x[i]);

    printf("\nEnter the values for Y: \n");
    for (i = 0; i < n; i++)
      scanf("%f", & y[i]);

    printf("\nEnter the value of Xp for which you want to calculate Yp: ");
    scanf("%f", & Xp);

    for (i = 0; i < n; i++)
      f[0][i] = y[i];

    for (i = 1; i < n; i++)
      for (j = 0; j < n - i; j++)
        f[i][j] = f[i - 1][j + 1] - f[i - 1][j];

    printf("\nNewton's Forward Difference Table:\n");
    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++)
        printf("%f\t", f[i][j]);
      printf("\n");
    }

    h = x[1] - x[0];
    u = (Xp - x[0]) / h;
    s = y[0];

    for (i = 1; i < n; i++) {
      p = p * (u - i + 1) / i;
      s = s + p * f[i][0];
    }

    printf("\nFor Xp = %f, Yp = %f.\n", Xp, s);

    return (0);
  }
