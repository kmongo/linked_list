#include <stdio.h>
#include <stdlib.h>

int main(){
	double x = 1;
	double num = 121;
	double y = 1.0 / 2 * (x + num/x);

	while(fabs(y-x) > 1e-5){
		x = y;
		y = 1.0 / 2 * (x + num/x);
	}
	printf("%.3lf\n",y);
}
