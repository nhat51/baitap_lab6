#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number, i = 1;
 
    printf(" nhap so:");
    scanf("%d", &number);
    printf("bang nhan %d:\n ", number);
    printf("--------------------------\n");
    while (i <= 10)
    {
        printf(" %d x %d = %d \n ", number, i, number * i);
        i++;
}


	return 0;
}
