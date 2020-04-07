#include<stdio.h>
#include<stdlib.h>
float** allocamat(int ,float**);
void preenchemat(int,float**);
void imprimemat(int,float **);
void imprimepar(int,float**);
void processamat(int,float**,int*,float*);

int main(void){
float **mat,somapar=0;
int tam,i,j,cont=0;
printf("informe o tamanho da matriz\n");
scanf("%d",&tam);;

mat=allocamat(tam,mat);
preenchemat(tam,mat);
imprimemat(tam,mat);
processamat(tam,mat,&cont,&somapar);
printf("o total de pares eh %d\n",cont);
printf("a soma dos pares eh %d\n",somapar);
imprimemat(tam,mat);
imprimepar(tam,mat);

free(mat);
return 0;
}
float **allocamat(int tam,float**mat){
	int i,j;
	mat=(float**)malloc(tam*sizeof(float*));
	if(mat==0){
		printf("erro");
		exit(0);
	}
	for(i=0;i<tam;i++){
		mat[i]=(float*)malloc(tam*sizeof(float));
		if(mat[i]==0){
			printf("erro");
			exit(0);
		}
		
	}
	
	return mat;
}
void preenchemat(int tam,float**mat){
	int i,j;
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			printf("informe os %d elementos para matriz\n",tam*tam);
			scanf("%f",&mat[i][j]);
		}
	}
}
void imprimemat(int tam,float **mat){
	int i,j;
	printf("imprimindo matriz\n");
	for(i=0;i<tam;i++){
		printf("\n");
		for(j=0;j<tam;j++){
			printf("\t %f",mat[i][j]);
		}
	}
	
}
void processamat(int tam,float **mat,int *tot,float *som){
	int i,j;
	int ehpar;
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			ehpar=mat[i][j]/2;
			if(ehpar*2==mat[i][j]){
				*(som)+=mat[i][j];
				(*(tot))++;
			}
		}
	}
	
}

void imprimepar(int tam,float **mat){
int i,j;
float ehpar;
printf("imprimindo pares\n");
for(i=0;i<tam;i++){
	printf("\n");
	for(j=0;j<tam;j++){
		ehpar=mat[i][j]/2;
		if(ehpar*2==mat[i][j])
		printf("\t %f",mat[i][j]);
		else{
			printf("\t *");
		}
	}
}
	
}
