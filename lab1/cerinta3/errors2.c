#include <stdio.h>

int main(){
	int a, b=40;
	scanf("%d", &a);
	if(a > b){
		printf("%s\n", "Numarul introdus e mai mare ca 40");
	}
	else{
		printf("%s\n", "Numarul introdus e mai mic ca 40");
	}
	return 0;
}
