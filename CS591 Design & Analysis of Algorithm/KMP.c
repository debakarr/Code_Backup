#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *ComputePrefixFunction(char *);
int KMPMatcher(char *, char *);

int main()
{
	char *s1 = "ababaabaababbbaabaabababbb";
	char *s2 = "aabaaba";
	printf("Text: %s\n", s1);
	printf("Pattern: %s\n\n", s2);
	int index = KMPMatcher(s1, s2);
	//printf("Position of matching is %d\n", index);
	return 0;
}

int* ComputePrefixFunction(char *P)
{
	int m = strlen(P);
	int *Pi = (int*)malloc(m * sizeof(int));
	Pi[0] = 0;
	int k = 0;
	int q;

	for (q = 1; q < m; q++)
	{
		while (k > 0 && (P[k] != P[q]) )
			k = Pi[k - 1];
		if (P[k] == P[q])
			k++;
		Pi[q] = k;
	}
	return Pi;
}

int KMPMatcher(char *T, char *P)
{
	int n = strlen(T);
	int m = strlen(P);
	int *Pi = ComputePrefixFunction(P);
	int q = 0;
	int i;

	for (i = 0; i < n; i++)
	{
		while (q > 0 && (P[q] != T[i]) )
			q = Pi[q - 1];
		if (P[q] == T[i])
			q++;
		if (q == m)
			printf("Position of matching is %d\n", i + 2 - m);
	}
	free(Pi);
	return -1;
}

/*
Text: ababaabaababbbaabaabababbb
Pattern: aabaaba

Position of matching is 5
Position of matching is 15
*/