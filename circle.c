#include <stdio.h>
#define area 3.14*r*r
#define circum 2*3.14*r
int main() {

    double r;

    printf("\nEnter the .. radius .. of the circle whose u want to find the area nd circumferance = ");
    scanf("%lf",&r);
     printf("\nArea = %lf\nCircumfrence = %lf",area,circum);


    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\definefunction> gcc circle.c
PS F:\PROFOUND\PRACTICAL\definefunction> ./a.exe

Enter the .. radius .. of the circle whose u want to find the area nd circumferance = 10

Area = 314.000000
Circumfrence = 62.800000
PS F:\PROFOUND\PRACTICAL\definefunction> 
*/
