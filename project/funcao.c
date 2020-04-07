#include<stdio.h>
#include<stdlib.h>
#include"cabcalho.h"
int fat(int n){
	int aux;
	if(n==1){
		return 1;
	}
	aux=n*fat(n-1);
	return aux;
}
