#include <stdio.h>
//bai11 ~ NNP dz ~ DT070235
int main (){
	int n, cnt;
	printf("Nhap so phan tu cua day: ");
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++){
		if (a[i] < 0){
			cnt = i;
		}
	}
	printf("phan tu am cuoi cung la a[%d] = %d", cnt, a[cnt]);
	return 0;
}