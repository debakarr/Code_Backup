#include<stdio.h>

  int main() {
    int i, j, n;
    float x[15], y[15], p = 1.0, s = 0.0, Xp;

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

    for (i = 0; i < n; i++) {
	  p = 1.0;
      for (j = 0; j < n; j++)
	  {
		  if(i != j)
			p = p * (Xp - x[j]) / (x[i] - x[j]);
	  }
	  s = s + p * y[i];
    }

    printf("\nFor Xp = %f, Yp = %f.\n", Xp, s);

    return (0);
  }
