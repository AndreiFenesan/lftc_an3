#include <stdio.h>
int main(){
	int nr1,nr2;
	scanf("%d", &nr1);
	scanf("%d", &nr2);
	
	if(nr1 == 0){
		if (nr2 == 0){
			printf("%d\n", -1);
			return 0;
		}
		if (nr2 != 0){
			printf("%d\n", nr2);
			return 0;
		}
	}
	if(nr1 != 0){
		if (nr2 == 0){
			printf("%d\n", nr1);
			return 0;
		}	
	}
	
	while(nr1 != nr2){
		if(nr1 > nr2){
			nr1 = nr1 - nr2;
		}
		if(nr1 < nr2){
			nr2 = nr2 - nr1;
		}
	}
	printf("%d\n", nr1);
	return 0;
}
