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
	printf("������� �������� n:");
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
	printf("\n������� �������� m:");
	scanf_s("%d", &me);
	printf("\n������� �������� n:");
	scanf_s("%d", &ne);

	for (int i=ne; i>=me;i--)
	{
		s=s+i;
		printf("\n��������� %d ���", k++);
		printf("\n��������� %d", s);
	}
//1A (����������)
	int M;

	printf("\n������� �������� M:\n");
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
//2 (�������)
	int X;
	int h;
	int w = 1;
	printf("\ny=|e^w-2|-x^2, ��� x = ");
	scanf_s("%d", &X);
	printf("\n������� ��� ���������[1-3]:\n");
	scanf_s("%d", &h);

	for (int i = X;i<=3; i+=h)
	{
		printf("%d", X);
		printf("\t%.lf\n", abs(exp(w)-2)-pow(X,2));
	}
//3
	int Nv;
	float q = 1;
	printf("������� �������� N:\n");
	scanf_s("%d", &Nv);
	for (int l=2;l<=Nv;l++)
	{
		q = q + (1./l);
		printf("\n���������: %.2lf", q);
	}

}	