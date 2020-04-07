
#define N 7
#include"cabecalhos.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num[N];
float media;
preenchevet(num);
imprimevet(num);
somavet(num);

media=mediavet(num);
printf("a media eh %f\n",media);
	
	return 0;
}
