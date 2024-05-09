// #include <stdio.h>

// int main() {
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
//   return 0;
// }

// 142~153p

// #include <stdio.h>

// int main(){
// 144p
// int a[]={1,2,3,4,};
// printf("*a = %u \n", *a);
// printf("*(a+1) = %u \n", *(a+1));
// printf("*(a+2) = %u \n", *(a+2));
//   return 0;
// }

// 145p
// #include <stdio.h>

// int total = 0;
// int sumpt(int *pt) {
//   int a;
//   for (a = 0; a < 5; a += 1)
//     if (*(pt + a) % 2 == 0)
//       total = total + *(pt + a);
//   return total;
// }

// int main(void) {
//   int numpt[] = { 89, 74, 36, 45, 98};
//   printf("%d", sumpt(numpt));
//   return 0;
// }

// 146p
 // #include <stdio.h>
 // void robotMove(int pxp, int pyp, int mx, int my);
 // void robotMovePt(int *pxp, int *pyp, int mx, int my);
 // int main(void){
 //   int x = 1, y = 1;
 //   robotMove(x, y, 1, 2);
 //   printf("이동한 위치 (%d, %d) \n", x, y);
 //   robotMovePt(&x, &y, 1, 2);
 //   printf("이동한 위치 (%d, %d) \n", x, y);
 //   return 0;
 // }
 // void robotMove(int pxp, int pyp, int mx, int my){
 //   pxp += mx;
 //   pyp += my; // pxp와 pyp의 main에서의 값이 바뀌지 않음
 // }
 // void robotMovePt(int *pxp, int *pyp, int mx, int my){
 //   *pxp += mx;
 //   *pyp += my; //pxp와 pyp의 main에서의 값이 바뀜
 //   // pxp가 지목하는 데이터 값을 변하게 한 것이기 때문에 영향을 줌
 // }

// 147p
//  #include <stdio.h>
//  void swap(int *a, int *b);
//  int main(void){
//    int a, b;
//    a = 5;
//    b = 7;
//    printf("함수 호출 전 : a = %d, b = %d \n", a, b);
//    swap(&a, &b);
//    printf("함수 호출 후 : a = %d, b = %d \n", a, b);
//    return 0;
//  }
//  void swap(int *a, int *b){
//    int temp;
//    temp = *a;
//    *a = *b;
//    *b = temp;
//  }

// #include <stdio.h>

// int main(void) {
// 148p
//  char *lang[3] = {"C", "JAVA", "PYTHON"};
//  int a;
//  printf("여러분이 배워야 할 언어는");
//  for(a = 0; a < 3; a++) printf(" %s ", lang[a]);
//  return 0;

// 148p
//  char *p = "진달래꽃    김소월\n\n나 보기가 역겨워\n가실 때에는\n말없이
//  고이 보내 드리오리다.\n\n영변에\n진달래꽃\n아름 따다 가실 길에
//  뿌리오리다.\n\n가시는 걸음걸음\n놓인 그 꽃을\n사뿐히 즈려 밟고
//  가시옵소서.\n\n나 보기가 엮겨워\n가실 때에는\n죽어도 아니 눈물
//  흘리오리다."; printf("%s \n", p); return 0;

// 149p
//  char address[100];
//  char *addpt;
//  printf("주소를 입력 : ");
//  gets(address);
//  addpt = address;
//  printf("입력한 주소는 : ");
//  puts(addpt);
//  return 0;
// }

// 150p
// #include <stdio.h>
// #include <string.h>
// int main(void) {
//   int i;
//   int isUpper, isLower, isDigit;
//   char mypasswd[20];
//   while (1) {
//     printf("사용할 암호를 넣으세요 : ");
//     scanf("Q%s", mypasswd);
//     isUpper = isLower = isDigit = 0;
//     for (i = 0; i < strlen(mypasswd); i++) {
//       if (mypasswd[i] >= '0' && mypasswd[i] <= '9')
//         isDigit++;
//       else if (mypasswd[i] >= 'A' && mypasswd[i] <= 'Z')
//         isUpper++;
//       else if (mypasswd[i] >= 'a' && mypasswd[i] <= 'z')
//         isLower++;
//     }
//     if ((i >= 6) && (isDigit >= 1) && (isUpper >= 1) && (isLower >= 1)) {
//       printf("암호로 사용이 가능합니다. \n");
//       break;
//     }
//     else
//       printf("6문자 이상, 숫자, 대문자, 소문자가 각 1개 이상 있어야
//       합니다.\n");
//   }
//   return 0;
// }

//151p
// #include <stdio.h>
// int main() {
//   int a;
//   char *spring_term[6] = {"입춘", "우수", "경칩", "춘분", "청명", "곡우"};
//   for (a = 0; a < 6; a++) {
//     printf("%s ", spring_term[a]);
//   }
//   return 0;
// }

//151p
// #include <stdio.h>
// #include <string.h>
// int strcmp(const char *s1, const char *s2);
// int main(){
//   int a;
//   char *spring_term[6] = {"입춘", "우수", "경칩", "춘분", "청명", "곡우"};
//   char tname[10];
//   scanf("%s", tname);
//   for (a = 0; a < 6; a++){
//     if(strcmp(spring_term[a], tname)==0){
//       printf("%s 봄절기 입니다", tname);
//       break;
//     }
//   }
//   return 0;
// }
// int strcmp(const char *s1, const char *s2){
//   if(*s1 == *s2){
//     return 0;
//   }
//   else
//     return 1;
// }

//152p
// #include <stdio.h>
// int main(void){
//   int a; char *animals[3] = {"dog", "cat", "lion"};
//   for(a =0; a < 3; a++){
//     printf("%d 번째 동물은 %s 입니다.\n", a+1, animals[a]);
//   }
//   return 0;
// }

//153p
#include <stdio.h>
int main(){
  int a;
  char *pt = "I love you";
  for(a = 7; a < 10; a++){
    printf("%c", *(pt+a));
  }
  return 0;
}