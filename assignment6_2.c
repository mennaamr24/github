#include <stdio.h>
#include <stdlib.h>
struct complex
{
    int real;
    int imaginary;
};
int main()
{
    struct complex first;
    printf("for first complex number\n");
    printf("Enter real and imaginary part respectively\n");
    scanf("%d",&first.real);
    scanf("%d",&first.imaginary);
    struct complex second;
    printf("\n for second complex number\n");
    printf("Enter real and imaginary part respectively\n");
    scanf("%d",&second.real);
    scanf("%d",&second.imaginary);
    int x =first.real+second.real;
    int y=first.imaginary+second.imaginary;
    printf("sum = %d + %d i",x,y);
    return 0;
}
