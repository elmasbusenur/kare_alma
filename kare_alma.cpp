#include<stdio.h>
void kareAl(int a){
//	int a;
	int kare;
	kare=a*a;
	printf("kare=%d",kare);
}
int main(void){
	int sayi;
	printf("sayi giriniz");
	scanf("%d",&sayi);
   kareAl(sayi);

	return 0;
}
