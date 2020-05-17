#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1,num2,sum,i;
	printf ("nhap num1: ");
	scanf ("%d",&num1);
	printf ("nhap num2: ");
	scanf ("%d",&num2);

	sum=0;

			
	for (i=num1;i<=num2;i+=2)
		sum+=i;
		
		printf ("tong cac so le giua ai so la: %d ",sum);
	
	return 0;
}
