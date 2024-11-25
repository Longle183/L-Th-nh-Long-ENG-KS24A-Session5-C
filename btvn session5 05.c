#include<stdio.h>
int main(){
	int i, k;
	for(i=1;i<=9;i++){
		printf("Bang cu chuong cua %d: \n",i);
		for(k=1;k<=10;k++){
			printf("%d x %d = %d\n",i, k, i*k);
		}
	}
	return 0;
}
