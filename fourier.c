#include <stdio.h>
#include <stdlib.h>
#include <math.h>

FILE *op;

double f1(double x){
	return(sin(3*x));
}
double f2(double x){
	return(sin(5*x));
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
	
	op = fopen(argv[2], "w");
	for(x=-M_PI; x <= M_PI; x+=dx)
		fprintf(op, "%lf\t%lf\n", x, f2(x));

	fclose(op);
	
}
