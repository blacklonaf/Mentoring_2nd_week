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
//	// 출력 내용을 보면 (2n-1) * (2n-1) 내부에 표현됨을 알 수 있음.
//	// 그 중 첫번째, 마지막 번째 줄을 제외한 for문 함수를 이용해 구현.
//
//	// 1번째 줄
//	for (int j = 1; j <= (2 * num - 1); j++) {
//		printf("%c", symbol);
//	}
//	printf("\n");
//
//	// 가로 1줄에 생성되는 기호와 공백간의 규칙을 이용한다.
//	// 가로 또한 좌(기호) / 중앙(공백) / 우(기호) 로 분리하여 for문을 작성했다.
//
//	// 2번째 ~ n번째 줄
//	for (int i = 0; i <= num - 2; i++) {
//		// 좌 (기호)
//		for (int j = 1; j <= (num - (i + 1)); j++) {
//			printf("%c", symbol);
//		}
//		// 중 (공백)
//		for (int k = 1; k <= 1 + i * 2; k++) {
//			printf(" ");
//		}
//		// 우 (기호)
//		for (int j = 1; j <= (num - (i + 1)); j++) {
//			printf("%c", symbol);
//		}
//		printf("\n");
//	}
//
//	// n번째 줄은 지난 이후로는 점차 공백이 줄어든다.
//
//	// n+1 ~ 2n-2번째 줄
//	for (int i = num - 3; i >= 0; i--) {
//		// 좌 (기호)
//		for (int j = (num - (i + 1)); j >= 1; j--) {
//			printf("%c", symbol);
//		}
//		// 중 (공백)
//		for (int k = 1 + i * 2; k >= 1; k--) {
//			printf(" ");
//		}
//		// 우 (기호)
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