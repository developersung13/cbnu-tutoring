#include<stdio.h>
int main(void) {
    const char* arr[3];    //포인터 배열 선언.
    int i;
 
    arr[0] = "BlockDMask";    //arr[0]은 -> 문자열 주소를 가리킵니다.
    arr[1] = "C Programming"; //arr[1]은 -> 문자열 주소를 가리킵니다.
    arr[2] = "point_arr";     //arr[2]은 -> 문자열 주소를 가리킵니다.
 
    for (k = 0; k < 3; k++) {
        printf("arr[%d] -> %s\n", i, arr[i]);
    } return 0;
}