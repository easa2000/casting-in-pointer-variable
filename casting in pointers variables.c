#include<stdio.h>
void main()
{
    float fnum, *pfnum = &fnum;
    int num, *pnum = &num;

    printf("\n Enter a floating point number: ");
    scanf("%f",&fnum);
    *pnum = (int)*pfnum;
    printf("\n the integer equivalent of %.2f = %d",*pfnum, *pnum);
}
