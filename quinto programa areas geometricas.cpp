#include<stdio.h>
int main (){
	int l,b,h,bM,bm,a1,a2,a3;
	printf("=================================");
	printf("\nCalcular el area de un Cuadrado \n");
	printf("=================================");
	printf("\n\nintrodusca el valor de un lado ");
	scanf("%d",&l);
	printf("\nel area del cuadrado es %d \n\n",l*l);
	printf("=================================");
	printf("\nCalcular el area de un Triangulo \n");
	printf("=================================");
	printf("\n \nintroduzca la base ");
	scanf("%d",&b);
	printf("\nintroduzca la altura ");
	scanf("%d",&h);
	printf("\n\nel area del triangulo es %d \n\n",b*h/2);
	printf("=================================");
	printf("\nCalcular el area de un Rectangulo \n");
	printf("=================================");
	printf("\n\ningrese el valor de la base mayor ");
	scanf("%d",&bM);
	printf("\ningrese el valor de la base menor ");
	scanf("%d",&bm);
	printf("\n\nel area del rectangulo es %d\n",bM*bm);
	
	
	return 0;
}
