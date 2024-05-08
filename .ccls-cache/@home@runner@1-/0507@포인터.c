#include <stdio.h>

int main() {
  // 1
  //  int a = 8;
  //  int* pa = NULL;
  //  pa = &a;
  //  float b = 3.75;
  //  float* pb = &b;

  // printf("a = %u\n", a);
  // printf("a의 주소 = %u\n", &a);
  // printf("포인터 pa의 주소 = %u\n\n", pa);

  // printf("b = %.2f\n", b);
  // printf("b의 주소 = %u\n", &b);
  // printf("포인터 pb의 주소 = %u\n\n", pb);

  // printf("NULL = %u\n", NULL);

  // 2
  //  int a = 30;
  //  int* p = NULL;

  // printf("a = 30, p = &a일 때 \n");

  // p = &a;

  // printf("1. 포인터 p의 주소값 : %u\n", p);
  // printf("2. 포인터가 가리키는 *p의 데이터값 : %u\n", *p);

  // printf("\np = 50일 때\n");

  // *p = 50;

  // printf("1. 포인터 p의 주소값 : %u\n", p);
  // printf("2. 포인터가 가리키는 *p의 데이터값 : %u\n", *p);

  // 11-5 예제
  //  int a = 103;
  //  int *pa = NULL;

  // pa = &a;

  // printf("int a = 103;\n");
  // printf("int *pa = NULL;\n");
  // printf("pa = &a;\n");

  // if(pa != NULL){
  //   printf("pa는 유효한 포인터\n");
  //   printf("1. 포인터 pa의 주소값 : %u\n", pa);
  //   printf("2. 포인터가 가리키는 *pa의 데이터값 : %u\n");
  // }
  // else{
  //   printf("소스 코드 08행을 /* pa = &a; */처럼 주석 처리한 경우\n");
  //   printf("pa는 유효하지 않은 포인터!\n");
  // }

  // 11-6 예제
  //  int a;
  //  double *pd = NULL;

  // pd = &a;
  // *pd = 13.8;

  // if(pd != NULL){
  //   printf("pd는 유효하지 않은 포인터\n");
  //   printf("1. 포인터 pd의 주소값 : %u\n", pd);
  //   printf("2. 포인터가 가리키는 *pd의 데이터값 : %u\n", *pd);
  // }
  // else{
  //   printf("pd는 유효하지 않은 포인터\n");
  // }

  //포인터 증감 연산
  // char *pc;
  // int *pi;
  // double *pd;

  // pc = (char *)10000;
  // pi = (int *)10000;
  // pd = (double *)10000;

  // printf("pc=%u, pc+1=%u, pc+2=%u\n", pc, pc+1, pc+2);
  // printf("pi=%u, pi+1=%u, pi+2=%u\n", pi, pi+1, pi+2);
  // printf("pd=%u, pd+1=%u, pd+2=%u\n", pd, pd+1, pd+2);

  //포인터의 증감 연산
  // int i = 10;
  // int *pi = &i;
  // printf("i = %d, pi = %p\n", i, pi);
  // (*pi)++;
  // printf("i = %d, pi = %p\n", i, pi);
  // *pi++;
  // printf("i = %d, pi = %p\n", i, pi);

  // 4
  //  int a[] = {1, 2, 3, 4};
  //  printf("*a = %d \n", *a);
  //  printf("*(a+1) = %d \n", *(a+1));
  //  printf("*(a+2) = %d \n", *(a+2));

  // int a[5] = {100, 200, 300, 400, 500};
  // for (int i = 0; i < 5; i++){
  //   printf("a[%d] = %p\n", i, &a[i]);
  //   printf("a[%d] = %p\n", i, a+1);
  //   printf("a[%d] = %d\n", i, a[i]);
  //   printf("a[%d] = %d\n", i, *(a+1));
  //   printf("\n");
  // }

  // 실습 9
  // int a[5] = {100, 200, 300, 400, 500};
  // int *p = a;
  // printf("주소 = %p, 값 = %d\n", p, *p);
  // *p++;
  // printf("주소 = %p, 값 = %d\n", p, *p);
  // (*p)++;
  // printf("주소 = %p, 값 = %d\n", p, *p);
  // ++*p;
  // printf("주소 = %p, 값 = %d\n", p, *p);
  // *++p;
  // printf("주소 = %p, 값 = %d\n", p, *p);

  // 10
  //  int a[] = {100, 200, 300};
  //  int *p = a;
  //  int value = 0;
  //  printf("주소 = %p, 값 = %d, value = %d\n", p, *p, value);
  //  value = *p + 1;
  //  printf("주소 = %p, 값 = %d, value = %d\n", p, *p, value);
  //  value = *(p + 1);
  //  printf("주소 = %p, 값 = %d, value = %d\n", p, *p, value);
  //  value = *p++;
  //  printf("주소 = %p, 값 = %d, value = %d\n", p, *p, value);
  //  value = (*p)++;
  //  printf("주소 = %p, 값 = %d, value = %d\n", p, *p, value);
  //  value = *++p;
  //  printf("주소 = %p, 값 = %d, value = %d\n", p, *p, value);
  //  value = ++*p;
  //  printf("주소 = %p, 값 = %d, value = %d\n", p, *p, value);

  // 11
  //  int a[] = {1,2,3,4,5,6};
  //  int* p = a;
  //  int* q = a+3;
  //  printf("%d\n", *(a+1));
  //  printf("%d\n", *(p+2));
  //  printf("%d\n", *(q+1));
  //  printf("%d\n", p[1]);

  return 0;
}