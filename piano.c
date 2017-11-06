#include <stdio.h>
#include <stdlib.h>
#include <math.h>

FILE *ol;

main(int argc, char **argv)
{

	double *an, *bn, *a0, *anbn, *fx, *y, *xj,somas=0, somac=0, sa=0, somaf=0;
	int i=1, k, j,n;
	
	ol = fopen(argv[1], "r");
	
	y=malloc(3000*sizeof(double));
	
	while(fscanf(ol, "%lf\n", &y[i]) != EOF)
		i++;
	n=i;
	
	y=realloc(y, n*sizeof(*y));
	xj=malloc(n*sizeof(double));
	
	for(i=1; i<n;i++)
		xj[i]=i;
	
	//Calculo dos coeficientes 
	an=malloc((n)*sizeof(double));
	bn=malloc((n)*sizeof(double));
	anbn=malloc((n)*sizeof(double));
	
		
	ol = fopen(argv[2], "w");
	
	for(k=0; k<n/2; k++)
	{
	    somac=0.;
	    somas=0.;
	    
		for(j=0; j<n; j++)
		{
			somac += y[j]*cos((double)k*xj[j]);
			somas += y[j]*sin((double)k*xj[j]);
		}
		
		an[k] = (2./n)*somac;
		bn[k] = (2./n)*somas;
		
		anbn[k] = pow(an[k],2) + pow(bn[k],2); 
		fprintf(ol, "%lf\t%lf\t%lf\n", an[k], bn[k], anbn[k]);
	}

	fclose(ol);

	
}
