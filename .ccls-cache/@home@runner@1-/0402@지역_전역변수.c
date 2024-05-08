#include <stdio.h>

// int main(){
//   int sum = 0;
//   for (int i = 1; i <= 10; i++){
//     sum += i;
//   }
//   printf("\n %d" , sum);
//   printf("\n %d ", i);
// }

// int main(){
//   int sum = 0, i;
//   for (int i = 1; i <= 10; i++){
//     sum += i;
//   }
//   printf("\n %d" , sum);
//   printf("\n %d ", i);
// }

// int y, z;
// void func(int a);
// int main (){
//   int x;
//   x =10, y = 10, z = 10;
//   printf("x = %d, y = %d, z = %d \n", x, y, z);
//   func(5);
//   printf("x = %d, y = %d, z = %d \n", x, y, z);
// }
// void func(int a){
//   int x, z;
//   x = a, y = a, z = a;
// }
// x = 10, y = 10, z = 10
// x = 10, y = 5, z = 10

// int a = 100;
// int foun(int a);
// int main(){
//   int result;
//   result = foun(a) + 50;
//   printf("a = %d, result = %d \n", a, result);
// }
// int foun(int a){
//   a = 200;
//   return a;
// }
// a = 100, result = 250

// void func(int x);
// int main() {
//   for (int i = 0; i < 5; i++) {
//     func(i);
//   }
// }
// void func(int x) {
//   static int cnt = 0; // 값이 변하지 않고 누적, 재선언 되지 않는다
//   if (cnt) {
//     printf("%2d", x);
//   }
//   cnt++;
// }

// void start();
// int main(){
//   for (int i = 0; i < 5; i++) {
//     start();
//   }
// }
// void start(){
//   static int s_int = 0;
//   int a_int =0;
//   s_int++;
//   a_int++;
//   printf("s_int = %d, a_int = %d \n", s_int, a_int);
// }