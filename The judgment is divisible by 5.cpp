#include <stdio.h>
int main()
{
	int m = 0;
	printf("Please enter an integer:");
	scanf_s("%d", &m);
	if (m%5==0) {
		printf("judgement:YES\n");
	}
	else {
		printf("judgement:NO\n");
		}
	return 0;
}