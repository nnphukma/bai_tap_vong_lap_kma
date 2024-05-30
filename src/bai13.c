#include <stdio.h>
//bai13 ~ NNP dz ~ DT070235
int main (){
	int n;
	printf("Nhap so phan tu cua day: ");
	scanf("%d", &n);
	int a[n], b[n], c[n];
	int cnt1 = 0, cnt2 = 0;
	printf("Nhap phan tu cua day a: ");
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		if(a[i] > 0){
			b[cnt1] = a[i];
			++cnt1;
		} else {
			c[cnt2] = a[i];
			++cnt2;
		}
	}
	for (int i = 0; i < cnt1; i++){
		printf("%d ", b[i]);
	}
	putchar('\n');
	for (int i = 0; i < cnt2; i++){
		printf("%d ", c[i]);
	}
	putchar('\n');
	return 0;
}