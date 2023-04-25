#include <stdio.h>

int main() {
	int x, y;
	scanf("%d\n %d", &x, &y);

	if (x > 0) {
		if (y > 0)
			printf("%d", 1);
		else if (y < 0)
			printf("%d", 4);
	}

	if (x < 0) {
		if (y > 0)
			printf("%d", 2);
		else if (y < 0)
			printf("%d", 3);
	}

	return 0;
		
}