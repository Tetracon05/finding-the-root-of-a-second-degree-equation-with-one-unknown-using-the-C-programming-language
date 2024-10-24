#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	double x1,x2,a,b,c,discriminant;
	
	printf("ax.x + bx + c enter the coefficients of the equation in order.\n");
	
// The coefficients a, b, and c are taken from the user in order.
	printf("a: ");
	scanf("%lf",&a);
	
	printf("b: ");
	scanf("%lf",&b);
	
	printf("c: ");
	scanf("%lf",&c);
	
//The delta value is calculated.
	discriminant = b*b - 4*a*c;
	
//According to the sign of the delta value, if there are roots, the roots are provided to the user. If there are no roots, a message indicating that there are no roots is given to the user.
	if (discriminant > 0) {
	
		x1 = (-b + sqrt(discriminant)) / (2*a);
		x2 = (-b - sqrt(discriminant)) / (2*a);	
		printf("The equation has two different real roots.\nbirinci kok:  %.2lf\nikinci kok:  %.2lf",x1,x2);
	
	} else if (discriminant == 0) {
		
		x1 = -b / (2*a);
		printf("The equation has one single real root.\nkok= %2lf",x1);
		
	} else if (discriminant < 0) {
		
		printf("The equation has no real roots.");
		}
	
	return 0;
}