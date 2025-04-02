//#include <stdio.h>
//
//int pow(int base, int exponent) {
//	int result = 1;
//	if (exponent == 0) {
//		return 1;
//	}
//	else {
//		for (int i = 1; i <= exponent; i++) {
//			result *= base;
//		}
//		return result;
//	}
//
//}
//
//int exchangeBin(int num) {
//	int temp = num;
//	int result = 0;
//	for (int i = 7; i >= 0; i--) {
//		if (temp / pow(2, i) != 0) {
//			temp -= pow(2, i);
//			result += pow(10, i);
//		}
//	}
//	return result;
//}
//
//bool isItClap(int num) {
//	int temp = num;
//
//	for (int i = 2; i >= 0; i--) {
//		if (temp / pow(10,i) != 0) {
//			if ((temp / pow(10,i)) % 3 == 0) {
//				return true;
//			}
//			else {
//				temp -= (temp / pow(10, i)) * pow(10, i);
//			}
//		}
//		else {
//			continue;
//		}
//	}
//	return false;
//}
//
//int main() {
//
//	int n;
//
//	scanf_s("%d", &n);
//
//	if ((n >= 1 && n <= 255) == 0) {
//		printf("OUT OF RANGE");
//		return 0;
//	}
//
//	for (int i = 1; i <= n; i++) {
//		bool mustPrintClap = false;
//		if (isItClap(i) == true) {
//			printf("%8s ", "CLAP");
//		}
//		else {
//			printf("%8d ", exchangeBin(i));
//		}
//		if (i % 9 == 0) {
//			printf("\n");
//		}
//	}
//
//	return 0;
//}