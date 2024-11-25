#include<stdio.h>
int main(){
	int soNguyenduong;
	int tong=0;
	int i=1;
	printf("Moi ban nhap vao so nguyen duong: ");
	scanf("%d",&soNguyenduong);
	for(i=1; i<=soNguyenduong; i++){
		tong+=i;
	}
	printf("Tong cac so tu 1 den %d la: %d",soNguyenduong, tong);
	return 0;
}
