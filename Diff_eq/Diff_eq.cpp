#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main()
{
	FILE* f1 = fopen("out+.txt", "w");
	double x = 1, t = 0, dt = .1;
	for (int i = 0; i < 100; i++)
	{
		fprintf(f1, "%lf %lf %lf\n", t, exp(t), x);
		t += dt;
		x = x + x * dt;
	}
	fclose(f1);


	FILE* f2 = fopen("out-.txt", "w");
	x = 1;
	t = 0;
	for (int i = 0; i < 100; i++)
	{
		fprintf(f2, "%lf %lf %lf\n", t, exp(-t), x);
		t += dt;
		x = x - x * dt;
	}
	fclose(f2);
}