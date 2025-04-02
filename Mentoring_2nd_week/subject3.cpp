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
//	// 10의 n제곱 단위를 점차 올리면서 나머지가 초기 입력 값과 같아지는 지점을 찾는다.
//
//	// Ex) 입력한 값이 841인 경우,
//	// 841 % 10^1 = 1
//	// 841 % 10^2 = 41
//	// 841 % 10^3 = 841 <- 초기 입력값과 동일하므로, 입력한 값의 자릿수는 100의 자릿수!
//	while (true) {
//		int temp = num % pow10(nthNum);
//		if (temp == initialNum) {
//			break;
//		}
//		nthNum++;
//	}
//	// printf("숫자 자릿수 : %d\n", nthNum); // log
//	// 반전 진행
//
//	// 각 자릿수의 값을 추출한 뒤, 1, 10, 100의 자리를 반전시켜 넣는 작업
//	// Ex) 841의 값을 반전시키는 경우, (100의 자릿수임을 이미 알고있는 상태)
//	// 841 / 100 = 8 -> result = result + (8 * 10^0) = 8 / num (841) - 800 = 41 
//	// 41 / 10 = 4 -> result = result + (4 * 10^1) = 48 / num (41) - 40 = 1
//	// 1 / 1 = 1 -> result = result + (1 * 10^2) = 148 / num (1) - 1 = 0
//	// result = 148
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
//	// 숫자 범위 검사 (현재 만든 코드 내에선 int 자료형 범위 내에서의 범위 제한은 크게 상관없다.)
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