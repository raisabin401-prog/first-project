#include <stdio.h>
#include<math.h>
#define F(x)(x*x*x-2*x-5)
int main()
{
	int i=1;
	float a,b,c,f;
	printf("\n Enter the values of a and b:");
	scanf("%f%f",&a,&b);
	do{
		c=(a+b)/2;
		f=F(c);
		printf("\n i=%d a=%f b=%f F(c= %f",i,a,b,c,f);
		if(F(a)*F(c)<0)//root lies between a and c
		{
		 b=c;
		}
	else {
		a=c;// f(b)*f(c)<0 then root lies between b and c and we write a=c
	}
	i++;
	}
	while (fabs F(c)>0.001); // fabs gives absolute values / mod values
	printf("\n\n\n approximate root = %.4f\n\n",c);
	return 0;
}
