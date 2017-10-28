#include <stdio.h>
#include <stdlib.h>
#include <math.h>

FILE *op;

main(int argc, char **argv)
{

	double an, bn, anbn, fx, *y, *xj, n, x, somas=0, somac=0, dx;
	int i=0, k, j;
	
	op = fopen(argv[1], "r");
	
	y=malloc(3000*sizeof(double));
	xj=malloc(3000*sizeof(double));
	while(fscanf(op, "%lf\t%lf\n", &xj[i], &y[i]) != EOF)
		i++;
	n=i;
	
	y=realloc(y, n*sizeof(*y));
	xj=realloc(xj, n*sizeof(*xj));
	

	op = fopen(argv[2], "w");
	//Calculo dos coeficientes 
	for(k=0; k<n; k++)
	{
		for(j=0; j<n-1; j++)
		{
			somac += y[j]*cos(k*xj[j]);
			somas += y[j]*sin(k*xj[j]);
		}
		
		an = (1/n)*somac;
		bn = (1/n)*somas;
		anbn = pow(an,2) + pow(bn,2);
		fprintf(op, "%lf\t%lf\t%lf\n", an, bn, anbn);
	}
	
	fclose(op);
	
	
}
