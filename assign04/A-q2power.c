#include <math.h>
#include <stdio.h>


double powr (double n1 , double n2 );
int main()
{
    double base, exp, result;
    printf("Enter a base number: ");
    scanf("%lf", &base);
    printf("Enter an exponent: ");
    scanf("%lf", &exp);
	result = powr(base , exp);
    printf("%.1lf^%.1lf = %.2lf", base, exp, result);
 return 0;
 }

double powr (double n1 ,double n2)
{
  double res;
  res = pow(n1 , n2);
  return res;
}
