#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main() {
	int offset = abs('1' - '*');
	char str[100000] = { '\0' };
	while (fgets(str, 100000, stdin) != NULL) {

		for (int i = 0; str[i] != '\0'; i++) {
			str[i] = str[i] - offset;
		}
		for (int i = 0; str[i] != '\0'; i++) {
			printf("%c", str[i]);
		}
		printf("\n");
		for (int i = 0; str[i] != '\0'; i++) {
			str[i] = '\0';
		}
	}
	return 0;
}
