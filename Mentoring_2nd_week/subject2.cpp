//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
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
//	if (t > 0 && t < 1000) {
//		for (int i = 1; i <= t; i++) {
//			int n = 0; int playerA = 0; int playerB = 0;
//			scanf("%d", &n);
//			if (n > 0 && n < 100 == 0) {
//				printf("OUT OF RANGE");
//				return 0;
//			}
//			// printf("총 진행할 판  : %d\n", n);
//			for (int k = 1; k <= n; k++) {
//
//				printf("try : %d\n", k);
//				// 플레이어가 내는 가위바위보
//				scanf(" %c %c", &A, &B); // <- 30분 머리 쥐어뜯게한 주범
//
//				A = Numbering(A);
//				B = Numbering(B);
//
//				if (A == B) {
//					continue;
//				}
//				else if (A * B == 3) {
//					if (A < B) {
//						playerA++;
//					}
//					else {
//						playerB++;
//					}
//				}
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
//				printf("기현이가 이겼다!\n");
//			}
//			else if (playerA < playerB) {
//				printf("하영이가 이겼다!\n");
//			}
//			else {
//				printf("비겼다.\n");
//			}
//		}
//	}
//
//	return 0;
//}
//
