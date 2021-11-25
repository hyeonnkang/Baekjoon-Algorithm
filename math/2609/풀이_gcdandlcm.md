# 문제 주소 https://www.acmicpc.net/problem/2609

## 풀이

1. 최대공약수 구하는 방법:

```cpp
int gcd(int a, int b){
    if(b == 0) return a;
    else return gcd(b, a % b);
}
```

2. 최소공배수 구하는 방법

```cpp
int lcm(int a, int b){
    return (a * b) / gcd(a, b);
}
```
