#include<stdio.h>
int main(){
	int i;
	int soNguyenduong;
	printf("Moi ban nhap so nguyen duong (1-10): ");
	scanf("%d",&soNguyenduong);
	for(i=1; i<=10; i++){
		printf("%d x %d = %d\n",soNguyenduong, i, soNguyenduong*i);
	}
	return 0;
}
