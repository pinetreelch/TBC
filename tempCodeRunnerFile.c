#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
  //  unsigned int i = 0b11111111111111111111111111111111; //4byte 0b는 내가 입력한 111111... 이 리터널이 binary즉 이진수다라는것. unsigned int 출력했을때 메모리 4칸을 차지함 => 4UL. 1byte =8 bit 즉 4bype = 8 * 4 = 32
//    unsigned int u = UINT_MAX;

    //unsigned int u_max = UINT_MAX;
    // unsigned int u_min = 0;
    // signed int i_max = INT_MAX;
    // signed int i_min = INT_MIN;

    
    // printf("max of uint = %u\n", u_max);
    // printf("mint of uint = %u\n", u_min);
    // printf("max of int%d\n", i_max);
    // printf("min of int%d\n", i_min);





    // i to binary representation
    // char buffer[33];
    //print decimal and binary

    //sizeof(unsigned int); 
    //printf("%u", sizeof(unsigned int));
    //printf("%u", sizeof(i)); 
    
    unsigned int u_max = UINT_MAX;

    char buffer[33];
    _itoa(u_max, buffer, 2);

    printf("decimal: %u\n", u_max);
    printf("binary: %s\n", buffer);


    return 0;
}