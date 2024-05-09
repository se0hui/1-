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
// int main(){
  //6-1
  // char arr1[6] = {'a', 'p', 'p', 'l', 'e', '\0'};
  // char arr2[6] = "apple";
  // char arr3[] = "apple";
  // char arr4[5] = "apple";
  // printf("%s의 크기 : %d\n", arr1, sizeof(arr1));
  // printf("%s의 크기 : %d\n", arr2, sizeof(arr2));
  // printf("%s의 크기 : %d\n", arr3, sizeof(arr3));
  // printf("%s의 크기 : %d\n", arr4, sizeof(arr4));

  //6-2
  // char arr1[] = "Hello World";
  // printf("%s의 크기 : %d\n", arr1, sizeof(arr1));

  // char arr2[] = "Hello\0 World";
  // printf("%s의 크기 : %d\n", arr2, sizeof(arr2));

  //6-3
  // char str[] = "KOMPUTER";
  // printf("수정 전 : %s\n", str);
  // str[0] = 'C';
  // printf("수정 후 : %s\n", str);

  //6-4
  // char str[20];
  // int i, length = 0;
  // printf("띄어쓰기 없이 문자열을 20바이트 내로 입력하시오 : ");
  // scanf("%s", str);
  // for(i = 0; str[i] != '\0'; i++){
  //   length++;
  // }
  // printf("\n입력한 문자열 %s의 길이 : %d\n", str, length);
// }