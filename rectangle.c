#include <stdio.h>
#define area l*w
#define  peri 2*l*w
int main() {

    int l,w;

    printf("\nEnter the length and width of rectangle = ");
    scanf("%d%d",&l,&w);
     printf("\nArea = %d\nPerimeter = %d",area,peri);
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c\AREA> gcc rectangle.c
PS F:\PROFOUND\PRACTICAL\c\AREA> ./a.exe        

Enter the length and width of rectangle = 10
20

Area = 200
Perimeter = 400
PS F:\PROFOUND\PRACTICAL\c\AREA>
*/