#include <stdio.h>
//bai14 ~ NNP dz ~ DT070235
int main (){
	int n, cnt = 1;
	printf("Nhap so dong cua ma tran vuong a: ");
	scanf("%d", &n);
	int a[n][n], r1 = 0, r2 = n - 1, c1 = 0, c2 = n - 1;
	while (r1 <= r2 && c1 <= c2){
		//
		for (int i = c1; i <= c2; i++){
			a[r1][i] = cnt;
			++cnt;
		} 
		++r1;
		//
		for (int i = r1; i <= r2; i++){
			a[i][c2] = cnt;
			++cnt;
		}
		--c2;
		if (c2 >= c1){
			for  (int i = c2; i>= c1; --i ){
				a[r2][i] = cnt;
				++cnt;
			}
			--r2;
		}
		if (r2 >= r1){
			for (int i = r2; i >= r1; --i){
			a[i][c1] = cnt;
			++cnt;
		}
		++c1;
		}	
	}
	
	for (int i = 0; i< n; i++){
		for (int j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		putchar('\n');
	}
	return 0;
}