#include <stdio.h>

int main()
{
    //부동소수점
    //Normalized significand: 1.xxxx X 2^x; => 이 형태로 저장되게됨

    //4바이트 정수 범위
    //4바이트 부동소수점 범위

    //4바이트 8바이트가 흔함

    /* 코드사용법 */

    printf("%u\n", sizeof(float)); //4
    printf("%u\n", sizeof(double)); //8
    printf("%u\n", sizeof(long double)); //8

    float f = 123.456f; //float를 붙여야함
    double d = 123.456;

    float f2 = 123.456;
    double d2 = 123.456f;

    int i = 3;
    float f3 = 3.f; //3.0f
    double d3 = 3.; //3.0

    float f4 = 1.234e10f;

    float f5 = 0xb.ap1; //0x붙으면 16진수
    double d5 = 1.0625e0;   // 16진수 예제

    printf("%f %F %e %E\n", f ,f, f, f);
    printf("%f %F %e %E\n", d ,d, d, d);
    printf("%a %A\n", f5, f5);
    printf("%a %A\n", d5, d5);

    return 0;
}