#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES 
#define CRT_SECURE_NO_DEPRECATE
//0
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int n;
	int N = 0;
	int Nb = 0;
	printf("¬ведите значение n:");
	scanf_s("%d", &n);
	for (int st = 1; st <= n; st++) 
	{
		if (st == 1)
		{
			printf("+");
		}
		printf("*!");
		N++;
		if (N == n/2)
		{
			break;
		}
	}
	for (int end = 1; end <= n; end++)
	{
		printf("=!");
		Nb++;
		if (Nb == n / 2)
		{
			break;
		}
	}
//1
	int ne, me;
	int s = 0;
	int k = 1;
	printf("\n¬ведите значение m:");
	scanf_s("%d", &me);
	printf("\n¬ведите значение n:");
	scanf_s("%d", &ne);

	for (int i=ne; i>=me;i--)
	{
		s=s+i;
		printf("\n¬ыполнено %d раз", k++);
		printf("\n–езультат %d", s);
	}
//1A (подправить)
	int M;

	printf("\n¬ведите значение M:\n");
	scanf_s("%d", &M);
	for (int i = 1;i<=M;i++)
	{
		if (i >= 10)
		{
			printf("\n2^%d = %20.1lf K", i, (pow(2, i)) /  1024);
		}
			if (i < 10)
			{
				printf("\n2^%d = %20.1lf", i, (pow(2, i)));
			}
	}
//2 (править)
	int X;
	int h;
	int w = 1;
	printf("\ny=|e^w-2|-x^2, где x = ");
	scanf_s("%d", &X);
	printf("\n¬ведите шаг табул€ции[1-3]:\n");
	scanf_s("%d", &h);

	for (int i = X;i<=3; i+=h)
	{
		printf("%d", X);
		printf("\t%.lf\n", abs(exp(w)-2)-pow(X,2));
	}
//3
	int Nv;
	float q = 1;
	printf("¬ведите значение N:\n");
	scanf_s("%d", &Nv);
	for (int l=2;l<=Nv;l++)
	{
		q = q + (1./l);
		printf("\n–езультат: %.2lf", q);
	}

}	