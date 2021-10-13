# 문제 주소 : https://www.acmicpc.net/problem/1874

### 풀이

이 문제는 수열의 순서에 맞게 스택의 push, pop을 올바르게 하는 것이었다. 이때 오름차순으로만 push 된다.

예로 4, 3, 5, ... 이면
스택에 1, 2, 3, 4 를 push, 4 pop, 3 pop, 5 push, 5 pop 이런 형태로 스택을 컨트롤 하는 것이다.

스택의 push, pop에 대응되게 '+', '-'를 출력해야하므로 따로 string 변수를 통해 push, pop을 할 때 마다 단어를 추가해 주는 형식을 했다.

## 시간 복잡도 O(n^2)
