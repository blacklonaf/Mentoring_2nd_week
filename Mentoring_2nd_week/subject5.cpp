//#include <stdio.h>
//
//// <math.h> ��������� pow�� ������ ����� �Լ� ����
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
//// 10���� -> 2���� ��ȯ �Լ� (8bit������ ǥ��)
//// 10������ ū ������ ���ʴ�� ������ ǥ���ϸ� 2���� �ϼ�
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
//// CLAP�� �ľ��ϴ��� �˻��ϴ� �Լ�
//// ������ 10���� -> 2���� ��ȯ �Լ��� �̿��ϱ� ������,
//// ��ȯ ������ 10�������� 3,6,9�� ������ 100, 10, 1�� ������ �˻����ָ� �ȴ�.
//bool isItClap(int num) {
//	int temp = num;
//
//	// 1�� �˻� - 100�� ������ �˻��Ѵ�. ���� 10, 1���� �˻縦 ���� �ش� 100���� ���� ����.
//	// 2�� �˻� - 10�� ������ �˻��Ѵ�. ���� 1���� �˻縦 ���� �ش� 10���� ���� ����.
//	// 3�� - 1�� ������ �˻��Ѵ�.
//	// ��� �ش���� ���� ��� �ڼ��� ġ�� �ʴ� 10���� ���̹Ƿ�, 2������ ��ȯ�Ѵ�.
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
//	// �Է°� ���� �˻�
//	if ((n >= 1 && n <= 255) == 0) {
//		printf("OUT OF RANGE");
//		return 0;
//	}
//
//	// �� 2���� ��ȯ ��¸��� ��� CLAP�� ������� �˻��Ѵ�.
//	for (int i = 1; i <= n; i++) {
//		if (isItClap(i) == true) {
//			printf("%8s ", "CLAP");
//		}
//		else {
//			printf("%8d ", exchangeBin(i));
//		}
//		// 9��° ��� ���� �ٹٲ� �����ؾ� �ϹǷ� 9��°���� �˻� ���� �ٹٲ�
//		if (i % 9 == 0) {
//			printf("\n");
//		}
//	}
//
//	return 0;
//}