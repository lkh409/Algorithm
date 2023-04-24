#include <stdio.h>
int main() {
	int a, b, c;

	scanf("%d %d", &a, &b);
	scanf("%d", &c);

	if (b + c >= 60) {
		int i = (b + c) / 60;
		int j = (b + c) % 60;

		if (a + i >= 24) {
			printf("%d %d", a + i - 24, j);
		}
		else {
			printf("%d %d", a + i, j);
		}
	}
		
	else {
		printf("%d %d", a, b+c);
	}
	return 0;

	}
