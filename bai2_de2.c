#include <stdio.h>
//cau2 de2 ~ NNP dz ~ DT070235
void arrIp(int a[100], int n){
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}
void arrOp(int a[100], int n){
	
	for (int i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}
void max_min(int a[100], int n){
	int max = a[0], min = a[0];
	for (int i = 0; i < n; i++){
		if (a [i] >= max){
			max = a[i];
		}
		if (a[i] <= min){
			min = a[i];
		}
	}
	printf("MAX = %d va MIN = %d\n", max, min);
}
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int partition(int a[], int l, int r){
	int i = l -1;
	int pivot = a[r];
	for (int j = l; j < r; j++){
		if(a[j] <= pivot){
			++i;
			swap(&a[i], &a[j]);
		}
	}
	++i;
	swap(&a[i], &a[r]);
	return i;
}

void quicksort(int a[], int l, int r){
	if (l >= r) return;
	int p = partition(a, l , r);
	quicksort(a, l, p - 1 );
	quicksort(a, p + 1, r);
}

int main (){
	int n, a[100];
	printf("nhap so phan tu cua day so: ");
	scanf("%d", &n);
	arrIp(a, n);
	printf("Day so vua  nhap la: ");
	arrOp(a, n);
	max_min(a, n);
	printf("Day so sau khi sap sep la: ");
	quicksort(a, 0, n -1);
	arrOp(a, n);
	return 0;
}