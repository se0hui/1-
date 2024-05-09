//5-1
// #include <stdio.h>
// void swap(int x, int y);
// int main(){
//   int a = 100, b = 200;
//   printf("main 초기값 : a = %d, b = %d\n", a, b);

//   swap(a, b);

//   printf("main 변환값 : a = %d, b = %d\n", a, b);
//   return 0;
// }
// void swap(int x, int y){
//   int tmp;
//   printf("swap 이전값 : x = %d, y = %d\n", x, y);

//   tmp = x;
//   x = y;
//   y = tmp;

//   printf("swap 이후값 : x = %d, y = %d\n", x, y);
// }

//5-1
// #include <stdio.h>
// void swap(int* px, int* py);
// int main(){
//   int a = 100, b = 200;
//   printf("main 초기값 : a = %d, b = %d\n", a, b);

//   swap(&a, &b);

//   printf("main 변환값 : a = %d, b = %d\n", a, b);
//   return 0;
// }
// void swap(int* px, int* py){
//   int tmp;

//   tmp = *px;
//   *px = *py;
//   *py = tmp;
// }

//5-3
// #include <stdio.h>
// void sub(int b[], int n);
// int main(void){
//   int a[3] = {1,2,3};

//   printf("%d %d %d\n", a[0], a[1], a[2]);
//   sub(a, 3);
//   printf("%d %d %d\n", a[0], a[1], a[2]);
//   return 0;
// }
// void sub(int b[], int n)
// {
//   b[0] = 4;
//   b[1] = 5;
//   b[2] = 6;
// }

// #include <stdio.h>
