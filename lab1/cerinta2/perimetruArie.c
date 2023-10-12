#include <stdio.h>
int main(){
	int radius;
	scanf("%d", &radius);
	int perimeter, area;
	perimeter = 2 * radius * 3;
	area = 3 * radius * radius;
	printf("%d\n", perimeter);
	printf("%d\n", area);
	return 0;
}
