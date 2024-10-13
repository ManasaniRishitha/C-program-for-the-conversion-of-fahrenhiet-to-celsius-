# C-program-for-the-conversion-of-fahrenhiet-to-celsius-
#include<stdio.h>
void main()
{
float c,f;
printf("enter the fahrenhiet value :");
scanf("%f",&f);
c=(f-32)*5/9;
printf("\n value of temperature after conversion of fahrenhiet to celsius is %f",c);
}
