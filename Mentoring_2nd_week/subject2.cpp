//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//
//// �� ����, ����, ���� ���� ���ڸ� ��Ī��Ų��.
//// �ʹݿ��� ���̽��� dictionary�� ���� �ڵ带 �Ẽ�� ������, ����� ���� �����̶� ���Ͽ���.
//int Numbering(char p) {
//	if (p == 'S') {
//		return 1;
//	}
//	else if (p == 'R') {
//		return 2;
//	}
//	else if (p == 'P') {
//		return 3;
//	}
//}
//
//int main() {
//
//	int t;
//	scanf("%d", &t);
//	char A; char B;
//
//	// ��ü ���� �� �� ���� �˻�
//	if (t > 0 && t < 1000) {
//		for (int i = 1; i <= t; i++) {
//			int n = 0; int playerA = 0; int playerB = 0;
//			scanf("%d", &n);
//
//			// ���� �� ���� �Ǽ� ���� �˻�
//			if (n > 0 && n < 100 == 0) {
//				printf("OUT OF RANGE");
//				return 0;
//			}
//			// printf("�� ������ ��  : %d\n", n);
//			for (int k = 1; k <= n; k++) {
//
//				printf("try : %d\n", k);
//				// �÷��̾ ���� ����������
//
//				// ������ �߰����� ���� ���, ������ ����� ������ �޾ƹ��� �� �Էºκ��� ��ŵ����.
//				scanf(" %c %c", &A, &B); // <- 30�� �Ӹ� ������� �ֹ�
//
//				// ���� switch�� ��� ������ �ִ� ����� �ְ�����,
//				// �� ����, ����, ������ �ѹ����� �ٿ� ���� ǥ���ϰ��� ��
//				A = Numbering(A);
//				B = Numbering(B);
//
//				// ����� ���
//				if (A == B) {
//					continue;
//				}
//
//				// ���� ���� 3�� ���, ���� vs ���ڱ��� ��ᱸ���� ������� ���
//				else if (A * B == 3) {
//					if (A < B) {
//						playerA++;
//					}
//					else {
//						playerB++;
//					}
//				}
//				// �̿ܿ��� ���� ���� �̱⵵�� �Ѵ�.
//				else {
//					if (A > B) {
//						playerA++;
//					}
//					else {
//						playerB++;
//					}
//				}
//			}
//			if (playerA > playerB) {
//				printf("�����̰� �̰��!\n");
//			}
//			else if (playerA < playerB) {
//				printf("�Ͽ��̰� �̰��!\n");
//			}
//			else {
//				printf("����.\n");
//			}
//		}
//	}
//	else {
//		printf("OUT OF RANGE");
//		return 0;
//	}
//
//	return 0;
//}
//
