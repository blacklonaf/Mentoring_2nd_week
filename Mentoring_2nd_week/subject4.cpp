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
//	// ��� ������ ���� (2n-1) * (2n-1) ���ο� ǥ������ �� �� ����.
//	// �� �� ù��°, ������ ��° ���� ������ for�� �Լ��� �̿��� ����.
//
//	// 1��° ��
//	for (int j = 1; j <= (2 * num - 1); j++) {
//		printf("%c", symbol);
//	}
//	printf("\n");
//
//	// ���� 1�ٿ� �����Ǵ� ��ȣ�� ���鰣�� ��Ģ�� �̿��Ѵ�.
//	// ���� ���� ��(��ȣ) / �߾�(����) / ��(��ȣ) �� �и��Ͽ� for���� �ۼ��ߴ�.
//
//	// 2��° ~ n��° ��
//	for (int i = 0; i <= num - 2; i++) {
//		// �� (��ȣ)
//		for (int j = 1; j <= (num - (i + 1)); j++) {
//			printf("%c", symbol);
//		}
//		// �� (����)
//		for (int k = 1; k <= 1 + i * 2; k++) {
//			printf(" ");
//		}
//		// �� (��ȣ)
//		for (int j = 1; j <= (num - (i + 1)); j++) {
//			printf("%c", symbol);
//		}
//		printf("\n");
//	}
//
//	// n��° ���� ���� ���ķδ� ���� ������ �پ���.
//
//	// n+1 ~ 2n-2��° ��
//	for (int i = num - 3; i >= 0; i--) {
//		// �� (��ȣ)
//		for (int j = (num - (i + 1)); j >= 1; j--) {
//			printf("%c", symbol);
//		}
//		// �� (����)
//		for (int k = 1 + i * 2; k >= 1; k--) {
//			printf(" ");
//		}
//		// �� (��ȣ)
//		for (int j = (num - (i + 1)); j >= 1; j--) {
//			printf("%c", symbol);
//		}
//		printf("\n");
//	}
//	// 2n-1��° ��
//	for (int j = 1; j <= (2 * num - 1); j++) {
//		printf("%c", symbol);
//	}
//	printf("\n");
//	return 0;
//}