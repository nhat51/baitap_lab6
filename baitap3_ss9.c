#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number,t;
	long int z[10];
	
	printf("enter the number: ");
	scanf ("%d",&number);
	
	z[1]=1;
	
	for (t=2;t<number;t++)
	z[t]=z[t-1]+z[t-2];
	printf("fabonacci series is: \n");
	for (t=0;t<number;t++)
	printf ("%d\n",z[t]);
	

	return 0;
}
