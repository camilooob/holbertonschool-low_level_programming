#include "holberton.h"
int print_sign(int n)
{
if(n>0)
{
printf("+,");
return(1);
}
else if (n==0)
{
printf("0,");
retun(0);
}
else if (n<0)
{
printf("-,");
return(-1);
}
}
