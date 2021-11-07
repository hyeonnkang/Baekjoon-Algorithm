# 문제 주소 https://www.acmicpc.net/problem/10824

## 풀이

- 문제점: string A, B, C, D의 수를 입력받아 fir = A + B, sec = C + D 로 저장한다. 여기서 나는 fir 과 sec를 integer 로 바꿔서 풀자 런타임 에러가 났다.

- 이유: 네 자연수 A, B, C, D의 조건이 (1 ≤ A, B, C, D ≤ 1,000,000) 인데, A = B = C = D = 1000000 일 경우 자리수가 너무 커져 범위를 벗어나기 때문이다.

- 해결방법: string class의 함수 stoll을 이용해주면 된다. 기존에 존재하던 atoi, atof, atol 등의 함수의 상위 버전으로 c++11 부터 새로 생겼다고 한다.
