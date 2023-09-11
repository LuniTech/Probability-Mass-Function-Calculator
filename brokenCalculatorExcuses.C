//probability mass function
#include <stdio.h>
#include <stdlib.h>
#include <Math.h>
void	display(int vals,float sx[], float px[]);
void expectedVal(int vals,float sx[], float px[]);
int main(void)
{
	int vals=2;
	printf("Enter the number of values\n");
	scanf("%i",&vals);
	float sx[vals];
	float px[vals];
	int i;
	for(i=0;i<vals;i++)
	{
	printf("Enter small x or 'x' number %i \n",i+1);
	scanf("%f",&sx[i]);
	//printf(sx[i]);
	}
	printf("Success!\n");
	/*for(i=0;i<vals;i++)
	{
	printf("Vals: %f\n",sx[i]);
	}*/
	//printf("Enter small x or 'x' number %i\n",i+1);
	for(i=0;i<vals;i++)
	{
	printf("Enter P(x) number %i\n",i+1);
	scanf("%f",&px[i]);
	}
	display(vals,sx, px);
	expectedVal(vals,sx, px);
	return 0;
}
void display(int vals,float sx[], float px[])
{
	printf("Success!\n");
	int i;
	printf("x ");
	for(i=0;i<vals;i++)
	{
	printf("%f\t",sx[i]);
	}
	printf("\n");
		printf("P(x) ");
		for(i=0;i<vals;i++)
	{
	printf("%f\t",px[i]);
	}

}

void expectedVal(int vals,float sx[], float px[])
{
	float acumm=0;
	float acumm2=0;
	int i;
	for(i=0;i<vals;i++)
	{
	acumm+=px[i]*sx[i];
	}
	printf("\n The expected value is %f\n",acumm);
	
	for(i=0;i<vals;i++)
	{
	acumm2+=px[i]*sx[i]*sx[i];
	}
	acumm2 = acumm2 -acumm*acumm;
	printf(" The Variance is %f\n",acumm2);
printf(" The standard deviation is %f\n",sqrt(acumm2));
}


///COMBINATION FUNCTION 
int combination(int n)
{
	int i;
	int fact=n;
	for(i=1;i<n;i++)
	{
		fact*=i;
	}
	
}

