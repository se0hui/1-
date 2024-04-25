#include <stdio.h>
// 1
// 1109 이서희
// int even(int n);
// int abs(int n);
// int sign(int n);
// int main(){
//   int a;
//   printf("정수를 입력하시오 : ");
//   scanf("%d", &a);
//   even(a);
//   abs(a);
//   sign(a);
//   printf("even()의 결과 : %d \n", even(a));
//   printf("abs()의 결과 : %d \n", abs(a));
//   printf("sign()의 결과 : %d \n", sign(a));
// }
// int even(int n){
//    n = (n%2 == 0)?1:0;
//   return n;
// }
// int abs(int n){
//    n = (n>=0)?n:-n;;
//   return n;
// }
// int sign(int n){
//    n = (n>0)?1:(n<0)?-1:0;
//   return n;
// }

// 2
// 1109 이서희
//  int is_multiple(int n, int m);
//  int main(){
//  int n1, n2;
//    printf("첫 번째 정수 : ");
//    scanf("%d", &n1);
//    printf("두 번째 정수 : ");
//    scanf("%d", &n2);
//    is_multiple(n1, n2);
//    if(is_multiple(n1, n2) == 1)
//      printf("%d는 %d의 배수입니다", n1, n2);
//    else
//      printf("%d는 %d의 배수가 아닙니다", n1, n2);
//  }
//  int is_multiple(int n, int m){
//    int a;
//    a = (n%m == 0)?1:0;
//    return a;
//  }

// 3
// 1109 이서희
// double get_bigger(double n1, double n2);
// int main(){
//   double a1, a2, r;
//   printf("2개의 실수 입력 : ");
//   scanf("%lf %lf", &a1, &a2);
//   r = get_bigger(a1, a2);
//   printf("큰 수는 %.1lf입니다.", r);
// }
// double get_bigger(double n1, double n2){
//   double r;
//   r = (n1>n2)?n1:n2;
//   return r;
// }

//4
//1109 이서희
// char check_alpha(char c);
// int main(){
//   char a, r;
//   printf("문자를 입력하시오 : ");
//   scanf("%c", &a);
//   r = check_alpha(a);
//   if (r == 1)
//     printf("%c는 알파벳 문자입니다.", a);
//   else
//     printf("%c는 알파벳 문자가 아닙니다", a);
// }
// char check_alpha(char c){
//   char r;
//   r = (c>='a' && c<='z')||(c>='A' && c<='Z')?1:0;
//   return r;
// }

//5
//1109 이서희
// int is_leap(int year);
// int main(){
//   int y, r;
//   printf("연도를 입력하시오 : ");
//   scanf("%d", &y);
//   r = is_leap(y);
//   if(r == 1)
//     printf("%d년은 윤년(366년)입니다.", y);
//   else
//     printf("%d년은 윤년이 아닙니다.", y);
// }
// int is_leap(int year){
//   int r;
//   r = (year%4 == 0 && year%100 != 0 || year%400 == 0)?1:0;
//   return r;
// }

//6
//1109 이서희
// void show_disit(int x);
// int main(){
//   int a;
//   printf("정수를 입력하시오 : ");
//   scanf("%d", &a);
//   show_disit(a);
// }
// void show_disit(int x){
//   if(x>=10)
//   {
//     show_disit(x / 10);
//     // printf("%2d", x);
//   }
//   printf("%2d", x % 10);
// }