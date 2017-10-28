#include <stdio.h>
#include <stdlib.h>
#include <math.h>

FILE *op;

main(int argc, char **argv)
{

	double *an, *bn, *anbn, fx, *y, *xj, n, x, somas=0, somac=0, dx;
	int i=0, k, j;
	
	op = fopen(argv[1], "r");
	
	y=malloc(3000*sizeof(double));
	xj=malloc(3000*sizeof(double));
	while(fscanf(op, "%lf\t%lf\n", &xj[i], &y[i]) != EOF)
		i++;
	n=i;
	
	y=realloc(y, n*sizeof(*y));
	xj=realloc(xj, n*sizeof(*xj));
	

	
	//Calculo dos coeficientes 
	
	an=malloc(n*sizeof(double));
	bn=malloc(n*sizeof(double));
	anbn=malloc(n*sizeof(double));
	
	
	op = fopen(argv[2], "w");
	for(k=0; k<n; k++)
	{
		for(j=0; j<n-1; j++)
		{
			somac += y[j]*cos(k*xj[j]);
			somas += y[j]*sin(k*xj[j]);
		}
		
		an[k] = (1/n)*somac;
		bn[k] = (1/n)*somas;
		anbn[k] = pow(an[k],2) + pow(bn[k],2);
		fprintf(op, "%lf\t%lf\t%lf\n", an[k], bn[k], anbn[k]);
	}
	
	fclose(op);
	
	
}
