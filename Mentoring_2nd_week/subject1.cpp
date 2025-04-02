//#include <stdio.h>
//
//int main() {
//
//	int n1;
//
//	scanf_s("%d", &n1);
//
//	int initialNum = n1;
//	int repeatCount = 0;
//
//	if (n1 >= 10 && n1 <= 99) {
//
//		while (true) {
//			// 1의 자리 구하기
//			int n1st = n1 % 10;
//			// 10의 자리 구하기
//			int n10th = n1 / 10;
//
//			n1 = n1st * 10 + (n1st + n10th) % 10;
//			repeatCount++;
//			if (initialNum == n1) {
//				break;
//			}
//		}
//		printf("%d\n", repeatCount);
//	}
//	else {
//		printf("OUT OF RANGE");
//	}
//
//	return 0;
//}