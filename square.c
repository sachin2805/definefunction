#include <stdio.h>
#define area s*s
#define  peri 2*2*s
int main() {

    int s;

    printf("\nEnter the side of square = ");
    scanf("%d",&s);
    printf("\nArea = %d\nPerimeter = %d",area,peri);
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c\AREA> gcc square.c
PS F:\PROFOUND\PRACTICAL\c\AREA> ./a.exe 

Enter the side of square = 10

Area = 100
Perimeter = 40
PS F:\PROFOUND\PRACTICAL\c\AREA>
*/

