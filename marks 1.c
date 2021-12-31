#include<stdio.h>
void main()
{
int m,p,c,cs;
printf("enter marks of m\np\nc\ncs\n");
scanf("%d%d%d%d", &m ,&p, &c, &cs);
 if ( m<=35)
 {
 	printf("failed in maths");
 }
  if( c<=35 )
 {
 	printf("\nfailed in chemistry");
 }
  if(cs<=35)
 {
 	printf("\nfailed in cs");
 }
}


