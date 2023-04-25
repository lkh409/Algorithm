#include <stdio.h>

int main() {
	int a, b, c, money;
	scanf("%d %d %d", &a, &b, &c);

	if (a == b && b == c && a == c) {
		money = 10000 + a * 1000;
	}
	else if (a != b && b != c && a != c) {
		money = (a > b) ? a : b;
		money = (money > c) ? money : c;
		money = money * 100;
	}
	else {
		if (a == b || a == c)
			money = a;
		else
			money = b;
		money = 1000 + money * 100;

	}
	printf("%d", money);
	return 0;
}