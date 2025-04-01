//#include <stdio.h>
//
//// 거듭제곱은 math.h의 pow를 활용해야하나, 다른 헤더파일은 이용할 수 없기에 10 거듭제곱 함수 제작
//
//int pow10(int a) {
//	int base = 1;
//	for (int i = 1; i <= a; i++) {
//		base *= 10;
//	}
//
//	return base;
//}
//
//// 숫자 반전 함수
//int reverseNum(int num) {
//	int initialNum = num;
//	int nthNum = 1; // 숫자의 자릿수
//	int result = 0;
//
//	// 자릿수 찾기
//	while (true) {
//		int temp = num % pow10(nthNum);
//		if (temp == initialNum) {
//			break;
//		}
//		nthNum++;
//	}
//	// printf("숫자 자릿수 : %d\n", nthNum); // log
//	// 반전 진행
//	for (int k = nthNum; k >= 1; k--) {
//		int nthNumVal = num / pow10(k - 1);
//		num -= nthNumVal * pow10(k - 1);
//		result += (nthNumVal * pow10(nthNum - k));
//	}
//
//	return result;
//}
//
//int main() {
//	// 숫자 2개, 기호 입력받기
//
//	int n1; int n2; char calc;
//	scanf_s(" %d %d %c", &n1, &n2, &calc);
//
//	// 숫자 범위 검사
//	if (n1 > 9999 || n1 < -9999 || n1 == 0) {
//		printf("OUT OF RANGE");
//		return 0;
//	}
//	else if (n2 > 9999 || n2 < -9999 || n2 == 0) {
//		printf("OUT OF RANGE");
//		return 0;
//	}
//
//	// n1, n2 값 반전시켜 초기화 진행 함수 실행
//
//	// printf("%d\n", reverseNum(n1));
//
//	switch (calc)
//	{
//	case '+':	printf("%d + %d = %d", reverseNum(n1), reverseNum(n2), reverseNum(n1) + reverseNum(n2)); break;
//	case '-':	printf("%d - %d = %d", reverseNum(n1), reverseNum(n2), reverseNum(n1) - reverseNum(n2)); break;
//	case '*':	printf("%d * %d = %d", reverseNum(n1), reverseNum(n2), reverseNum(n1) * reverseNum(n2)); break;
//	case '%':	printf("%d % %d = %d", reverseNum(n1), reverseNum(n2), reverseNum(n1) % reverseNum(n2)); break;
//	case '/':	printf("%d / %d = %.2f", reverseNum(n1), reverseNum(n2), (float)reverseNum(n1) / (float)reverseNum(n2)); break;
//	default:
//		printf("OUT OF RANGE");
//		break;
//	}
//
//	return 0;
//}