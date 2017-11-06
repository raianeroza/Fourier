#include <stdio.h>
#include <stdlib.h>
#include <math.h>

FILE *op;

double f1(double x){
	return sin(5*x)+(rand()%200/100. - 1.) ;
}


main(int argc, char **argv)
{
	double *y, dx, x;
	
	dx=2./1024.;

	op = fopen(argv[1], "w");
	
	x=-1.;
	do{
	    fprintf(op, "%lf\t%lf\n", x, f1(x));
	    x+=dx;
	  
	}while(x<=1.);
	
	
	fclose(op);
}
