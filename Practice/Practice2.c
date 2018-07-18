#include <stdio.h>

int main(void)
{
	char num, mask;
	
	mask = 1;
	scanf("%c", &num);

	printf("%d", num >> 7 & mask);
	printf("%d", num >> 6 & mask);
	printf("%d", num >> 5 & mask);
	printf("%d", num >> 4 & mask);
	printf("%d", num >> 3 & mask);
	printf("%d", num >> 2 & mask);
	printf("%d", num >> 1 & mask);
	printf("%d\n", num & mask);

	return 0;
}