#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ten[45]="abc";
	int x,tuoi;
	
	printf ("nhap ten: ");
	scanf ("%c",&ten);
	
	printf ("nhap tuoi: ");
	fflush(stdin);
	scanf ("%s",&x);
	
	while (tuoi<x)
	
	printf ("%c",ten);
	tuoi++;
	

	return 0;
}
