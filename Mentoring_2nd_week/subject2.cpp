//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//
//// 각 가위, 바위, 보에 대해 숫자를 매칭시킨다.
//// 초반에는 파이썬의 dictionary와 같은 코드를 써볼까 했으나, 배우지 못한 내용이라 못하였음.
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
//	// 전체 진행 판 수 범위 검사
//	if (t > 0 && t < 1000) {
//		for (int i = 1; i <= t; i++) {
//			int n = 0; int playerA = 0; int playerB = 0;
//			scanf("%d", &n);
//
//			// 라운드 별 진행 판수 범위 검사
//			if (n > 0 && n < 100 == 0) {
//				printf("OUT OF RANGE");
//				return 0;
//			}
//			// printf("총 진행할 판  : %d\n", n);
//			for (int k = 1; k <= n; k++) {
//
//				printf("try : %d\n", k);
//				// 플레이어가 내는 가위바위보
//
//				// 공백을 추가하지 않을 경우, 이전에 출력한 내용을 받아버려 값 입력부분이 스킵당함.
//				scanf(" %c %c", &A, &B); // <- 30분 머리 쥐어뜯게한 주범
//
//				// 물론 switch로 모든 경우수를 넣는 방법도 있겠으나,
//				// 각 가위, 바위, 보마다 넘버링을 붙여 상성을 표현하고자 함
//				A = Numbering(A);
//				B = Numbering(B);
//
//				// 비겼을 경우
//				if (A == B) {
//					continue;
//				}
//
//				// 곱한 값이 3인 경우, 가위 vs 보자기의 대결구도가 만들어진 경우
//				else if (A * B == 3) {
//					if (A < B) {
//						playerA++;
//					}
//					else {
//						playerB++;
//					}
//				}
//				// 이외에는 높은 값이 이기도록 한다.
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
//	else {
//		printf("OUT OF RANGE");
//		return 0;
//	}
//
//	return 0;
//}
//
