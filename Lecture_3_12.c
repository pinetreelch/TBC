#include <stdio.h>
#include <float.h>

int main()
{
    //부동소수점의 한계

    //round-off errors (ex1) 왜 에러가 안나지???
    // float a, b;
    // a = 1.0E0f + 1.0f;
    // b = a - 1.0E20f;
    // printf("%f\n", b);


    //round-off errors (ex2)
    // float a = 0.0f;
    // a = a + 0.01f;
    // a = a + 0.01f;
    // a = a + 0.01f;
    // a = a + 0.01f;
    // a = a + 0.01f;
    //printf("%f\n",a); // 부동소수점 에서는 1.0을 표현할 수 없다.

    //overflow 에러
    //float max = 3.402823466e+38F;
    //printf("%f\n", max); //여기서는 숫자가 나옴
    //max = max * 100.0f;
    //printf("%f\n", max); //inf라고 뜸 infinite 너무 커서 표시못함

    //underflow 에러
    
    //float f = 1.401298464e-45F;
    //printf("%e\n", f);
    //f = f / 100.0f;
    //printf("%e\n", f); // subnormal 숫자가 사라져버린것. 너무 작아져버림

    // 0으로 나누는 경우
    // float f = 104.0f;
    // printf("%f\n", f);
    // f = f / 0.0f;
    // printf("%f\n", f);

    //float f = asinf(1.0f);
    //printf("%f\n", f);

    //f = asinf(2.0f);
    //printf("%f\n", f);

    return 0;
}