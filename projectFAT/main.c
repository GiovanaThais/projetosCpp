#include <stdio.h>
#include <stdlib.h>
#include"cabcalho.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int num,resp;
printf("digite um numero que deseja saber o fatorial\n");
scanf("%d",&num);
resp=fat(num);
printf("o fatorial eh %d\n",resp);

	return 0;
}
