//#include <stdio.h>
//
//// <math.h> 헤더파일의 pow를 못쓰는 관계로 함수 제작
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
//// 10진수 -> 2진수 변환 함수 (8bit까지만 표기)
//// 10진수를 큰 수부터 차례대로 나눠서 표기하면 2진수 완성
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
//// CLAP을 쳐야하는지 검사하는 함수
//// 이전에 10진수 -> 2진수 변환 함수를 이용하기 때문에,
//// 변환 이전의 10진수에서 3,6,9가 들어가는지 100, 10, 1의 단위로 검사해주면 된다.
//bool isItClap(int num) {
//	int temp = num;
//
//	// 1차 검사 - 100의 단위를 검사한다. 이후 10, 1단위 검사를 위해 해당 100단위 값을 뺀다.
//	// 2차 검사 - 10의 단위를 검사한다. 이후 1단위 검사를 위해 해당 10단위 값을 뺀다.
//	// 3차 - 1의 단위를 검사한다.
//	// 모두 해당되지 않을 경우 박수를 치지 않는 10진수 값이므로, 2진수로 변환한다.
//
//	for (int i = 2; i >= 0; i--) {
//		if (temp / pow(10, i) != 0) {
//			if ((temp / pow(10, i)) % 3 == 0) {
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
//	// 입력값 범위 검사
//	if ((n >= 1 && n <= 255) == 0) {
//		printf("OUT OF RANGE");
//		return 0;
//	}
//
//	// 매 2진수 변환 출력마다 대신 CLAP을 출력할지 검사한다.
//	for (int i = 1; i <= n; i++) {
//		if (isItClap(i) == true) {
//			printf("%8s ", "CLAP");
//		}
//		else {
//			printf("%8d ", exchangeBin(i));
//		}
//		// 9번째 출력 이후 줄바꿈 진행해야 하므로 9번째인지 검사 이후 줄바꿈
//		if (i % 9 == 0) {
//			printf("\n");
//		}
//	}
//
//	return 0;
//}