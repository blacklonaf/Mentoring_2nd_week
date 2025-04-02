//#include <stdio.h>
//
//int main() {
//	int num;
//	char symbol;
//	
//	scanf_s("%d %c", &num, &symbol);
//
//	if ((num >= 2) == 0) {
//		printf("OUT OF RANGE");
//		return 0;
//	}
//	
//	// 1번째 줄
//	for (int j = 1; j <= (2 * num - 1); j++) {
//		printf("%c", symbol);
//	}
//	printf("\n");
//	// 2번째 ~ n번째 줄
//	for (int i = 0; i <= num-2; i++) {
//		for (int j = 1; j <= (num-(i+1)); j++) {
//			printf("%c", symbol);
//		}
//		for (int k = 1; k <= 1 + i * 2; k++) {
//			printf(" ");
//		}
//		for (int j = 1; j <= (num - (i+1)); j++) {
//			printf("%c", symbol);
//		}
//		printf("\n");
//	}
//	// n+1 ~ 2n-2번째 줄
//	for (int i = num - 3; i >= 0; i--) {
//		for (int j = (num - (i + 1)); j >= 1; j--) {
//			printf("%c", symbol);
//		}
//		for (int k = 1 + i * 2; k >=1 ; k--) {
//			printf(" ");
//		}
//		for (int j = (num - (i + 1)); j >= 1; j--) {
//			printf("%c", symbol);
//		}
//		printf("\n");
//	}
//	// 2n-1번째 줄
//	for (int j = 1; j <= (2 * num - 1); j++) {
//		printf("%c", symbol);
//	}
//	printf("\n");
//	return 0;
//}