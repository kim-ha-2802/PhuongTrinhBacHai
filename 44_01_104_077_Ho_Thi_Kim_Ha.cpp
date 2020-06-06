#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main(){
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	double x1, x2, d, tmp;
	d = b*b - 4 * a*c;
	if (a == 0){
		if (b == 0){
			if (c != 0){
				printf("0\n");
				return 0;
			}
			printf("-1\n");
			return 0;
		}
		else{
			x1 = (-1 * c) / b;
			if (x1 == 0)
			    printf("1\n0.0000000000\n");
			else
			    printf("1\n%.10lf\n", x1);
			return 0;
		}
	}
	if (a != 0){
		if (d < 0) {
			printf("0\n");
			return 0;
		}
		if (d == 0) {
			x1 = -1 * b / (2 * a);
			if (x1 == 0)
			    printf("1\n0.0000000000\n");
			else
			    printf("1\n%.10lf\n", x1);
			return 0;
		}
		x1 = (-1 * b - sqrt(d)) / (2 * a);
		x2 = (-1 * b + sqrt(d)) / (2 * a);
		if (x1 > x2){
			tmp = x1;
			x1 = x2;
			x2 = tmp;
		}
		if (x1 == 0 && x2 > 0){
			    printf("2\n0.0000000000\n");
			    printf("%.10lf\n",x2);
		}
		else if(x1<0 && x2==0){
		    printf("2\n%.10lf\n",x1);
		    printf("0.0000000000\n");
		}
		else
		    printf("2\n%.10lf\n%.10lf\n", x1, x2);
		return 0;
	}
	return 0;
}