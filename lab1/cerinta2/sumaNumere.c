#include<stdio.h>
int main(){
	int n, nr, sum;
	scanf("%d", &n);
	sum = 0;
	while (n > 0){
		scanf("%d", &nr);
		sum = sum + nr;
		n = n - 1;
	}
	printf("%d\n", sum);
	return 0;
}
