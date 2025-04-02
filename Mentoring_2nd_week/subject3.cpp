//#include <stdio.h>
//
//// �ŵ������� math.h�� pow�� Ȱ���ؾ��ϳ�, �ٸ� ��������� �̿��� �� ���⿡ 10 �ŵ����� �Լ� ����
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
//// ���� ���� �Լ�
//int reverseNum(int num) {
//	int initialNum = num;
//	int nthNum = 1; // ������ �ڸ���
//	int result = 0;
//
//	// �ڸ��� ã��
//	// 10�� n���� ������ ���� �ø��鼭 �������� �ʱ� �Է� ���� �������� ������ ã�´�.
//
//	// Ex) �Է��� ���� 841�� ���,
//	// 841 % 10^1 = 1
//	// 841 % 10^2 = 41
//	// 841 % 10^3 = 841 <- �ʱ� �Է°��� �����ϹǷ�, �Է��� ���� �ڸ����� 100�� �ڸ���!
//	while (true) {
//		int temp = num % pow10(nthNum);
//		if (temp == initialNum) {
//			break;
//		}
//		nthNum++;
//	}
//	// printf("���� �ڸ��� : %d\n", nthNum); // log
//	// ���� ����
//
//	// �� �ڸ����� ���� ������ ��, 1, 10, 100�� �ڸ��� �������� �ִ� �۾�
//	// Ex) 841�� ���� ������Ű�� ���, (100�� �ڸ������� �̹� �˰��ִ� ����)
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
//	// ���� 2��, ��ȣ �Է¹ޱ�
//
//	int n1; int n2; char calc;
//	scanf_s(" %d %d %c", &n1, &n2, &calc);
//
//	// ���� ���� �˻� (���� ���� �ڵ� ������ int �ڷ��� ���� �������� ���� ������ ũ�� �������.)
//	if (n1 > 9999 || n1 < -9999 || n1 == 0) {
//		printf("OUT OF RANGE");
//		return 0;
//	}
//	else if (n2 > 9999 || n2 < -9999 || n2 == 0) {
//		printf("OUT OF RANGE");
//		return 0;
//	}
//
//	// n1, n2 �� �������� �ʱ�ȭ ���� �Լ� ����
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