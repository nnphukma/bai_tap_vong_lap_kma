
#include <stdio.h>
//bai17 ~ NNP dz ~ DT070235
int main (){
	int n, m;
	printf("Nhap so hang cua Ma Tran A n = ");
	scanf("%d", &n);
	printf("Nhap so cot cua Ma Tran A m = ");
	scanf("%d", &m);
	int a[n][m], b[m][n];
	//nhap a
	printf("Nhap ma tran A%dx%d\n", n, m);
	for (int i = 0; i<n; i++){
		for (int j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			b[j][i] = a[i][j];
		}
	}
	for (int i = 0; i<m; i++){
		for (int j = 0; j < n; j++){
			printf("%d ", b[i][j]);
		}
		putchar('\n');
	}
	return 0;
}