#include<stdio.h>
#include<stdlib.h>
int main(){
	int num1, num2;
	int choose;
	printf("Nhap hai so bat ky: ");
	scanf("%d %d",&num1, &num2);
	printf("	Caculator	\n");
	printf("1. Tong cua 2 so\n");
	printf("2. Hieu cua 2 so\n");
	printf("3. Tich cua 2 so\n");
	printf("4. Thuong cua 2 so\n");
	printf("5. Thoat\n");
	printf("Lua chon cua ban la: ");
	scanf("%d",&choose);
	switch(choose){
		case 1:
			printf("Tong cua hai so %d va %d la %d",num1, num2, num1+num2);
			break;
		case 2:
			printf("Hieu cua hai so %d va %d la %d",num1, num2, num1-num2);
			break;
		case 3:
			printf("Tich cua hai so %d va %d la %d",num1, num2, num1*num2);
			break;
		case 4:
			printf("Thuong cua hai so %d va %d la %.2f",num1, num2, num1);
			break;
		case 5:
			exit(0);
			break;
	}
	return 0;
}
