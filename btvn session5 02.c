#include<stdio.h>
int main(){
	int soChotruoc=18;
	int soNhapvao;
	printf("Moi ban nhap vao so nguyen: ");
	while(1){
		scanf("%d",&soNhapvao);
		if(soNhapvao==soChotruoc){
			printf("Dung roi");
		}else{
			printf("Sai roi");
		}
	}
	return 0;
}
