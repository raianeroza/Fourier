#include <stdio.h>
#include <stdlib.h>
#include <math.h>

FILE *op;

double f1(double x){

	if(x<0)
		return(-1);
	else
		return(1);
}


main(int argc, char **argv)
{
	double *y, dx, x;
	int i=0, cont=0;
	
	op=fopen(argv[1], "r");
	
	dx=2*M_PI/1024;

	op = fopen(argv[1], "w");
	for(x=-M_PI; x <= M_PI; x+=dx)
		fprintf(op, "%lf\t%lf\n", x, f1(x));
	
	fclose(op);
}
