// 5-1
//  #include <stdio.h>
//  void swap(int x, int y);
//  int main(){
//    int a = 100, b = 200;
//    printf("main 초기값 : a = %d, b = %d\n", a, b);

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

// 5-1
//  #include <stdio.h>
//  void swap(int* px, int* py);
//  int main(){
//    int a = 100, b = 200;
//    printf("main 초기값 : a = %d, b = %d\n", a, b);

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

// 5-3
//  #include <stdio.h>
//  void sub(int b[], int n);
//  int main(void){
//    int a[3] = {1,2,3};

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
// 6-1
// char arr1[6] = {'a', 'p', 'p', 'l', 'e', '\0'};
// char arr2[6] = "apple";
// char arr3[] = "apple";
// char arr4[5] = "apple";
// printf("%s의 크기 : %d\n", arr1, sizeof(arr1));
// printf("%s의 크기 : %d\n", arr2, sizeof(arr2));
// printf("%s의 크기 : %d\n", arr3, sizeof(arr3));
// printf("%s의 크기 : %d\n", arr4, sizeof(arr4));

// 6-2
//  char arr1[] = "Hello World";
//  printf("%s의 크기 : %d\n", arr1, sizeof(arr1));

// char arr2[] = "Hello\0 World";
// printf("%s의 크기 : %d\n", arr2, sizeof(arr2));

// 6-3
//  char str[] = "KOMPUTER";
//  printf("수정 전 : %s\n", str);
//  str[0] = 'C';
//  printf("수정 후 : %s\n", str);

// 6-4
//  char str[20];
//  int i, length = 0;
//  printf("띄어쓰기 없이 문자열을 20바이트 내로 입력하시오 : ");
//  scanf("%s", str);
//  for(i = 0; str[i] != '\0'; i++){
//    length++;
//  }
//  printf("\n입력한 문자열 %s의 길이 : %d\n", str, length);
// }

// #include <stdio.h>
// #include <string.h>
// int main(){
//   //7-1
//   // char str1[10] = "elephant";
//   // char str2[10] = "ele\0phant";

//   // printf("%s의 길이는 %d입니다.\n", str1, strlen(str1));
//   // printf("%s의 길이는 %d입니다.\n", str2, strlen(str2));

//   //7-2
//   // char str1[10] = "cat";
//   // char str2[10];

//   // strcpy(str2, str1);
//   // printf("strcpy : %s \n", str2);

//   // strcpy_s(str2, 10, str1);
//   // printf("strcpy_s : %s \n", str2);
//   // return 0;
// }

// #include <stdio.h>
// int main(){
//   int cnt, size, choice;
//   char* task[] = {"Desk", "Computer", "Books", "USB", "EXIT"};

//   printf("포인터 배열의 요소 선택(종료 : 5)\n");

//   size = sizeof(task) / sizeof(task[0]);

//   for(cnt = 0; cnt < size; cnt++){
//     printf("%d.%s\n", cnt + 1, task[cnt]);
//   }
//   while (1){
//     printf("\n숫자 입력(1~5) : ");
//     scanf("%d", &choice);
//     if (choice < 1 || choice > 5)
//     {
//       printf("입력 숫자 오류!\n");
//       continue;
//     }
//     else if(choice == 5)
//       break;
//     else
//       printf("선택한 단어는 \"%s\"입니다.\n", task[choice-1]);
//   }
//   return 0;
// }

// #include <stdio.h>
// int main(){
//   int cnt, size;
//   char* dept[] = {
//   "행정학과",
//   "법학과",
//   "빅데이터사이언스과학과",
//   };
//   printf("전공 학과 선택 \n");
//   size = sizeof(dept) / sizeof(dept[0]);
//   for(cnt = 0; cnt < size; cnt++){
//     printf("%d. %s\n", cnt+1, dept[cnt]);
//   }
//   return 0;
// }

//연습문제
//9-1
// #include <stdio.h>
// int main(){
//   int a[5] = {10, 20, 30, 40, 50};
//   int result = 0, i = 0;
//   int *p = a;
//   for(i = 0; i < 5; i++){
//     result += *(p+i);
//   }
//   printf("배열의 합 = %d", result);
// }

//9-2
// int StringPointer(char* s);
// #include <stdio.h>
// int main() {
//   int len;
//   char string[100] = "";
//   printf("문자열 입력 : ");
//   gets(string);
//   printf("문자열 길이 : %d \n", StringPointer(string));
// }
// int StringPointer(char* s) {
//     int len = 0;

//     while (*s != '\0') {
//         len++;
//         s++;
//     }

//     return len;
// }

//9-3
// #include <stdio.h>

// void Stringcopy(char *pa, char *pb);

// int main() {
//   char a[20] = "I LOVE YOU";
//   char b[20];
//   Stringcopy(a, b);
//   printf("a 배열 : %s\n", a);
//   printf("b 배열 : %s\n", b);
//   return 0;
// }

// void Stringcopy(char *pa, char *pb){
//   while (*pa != '\0'){
//     *pb = *pa;
//     pa++;
//     pb++;
//   }
//   *pb = '\0'; // Null-terminate the string
// }

//9-4
// #include <stdio.h>
// #include <string.h>
// int main(){
//   char a[4][10] = {"you", "house", "home", "school"};
//   char temp[10];
//   strcpy(temp, a[0]);
//   int max = strlen(a[0]);
//   for(int i = 1; i < 4; i++){
//     if(strlen(a[i]) > max){
//       strcpy(temp, a[i]);
//       max = strlen(a[i]);
//     }
//   }
//   printf("%s\n", temp);
//   return 0;
// }

//9-5
// #include <stdio.h>
// #include <string.h>
// int main(){
//   char* p[4] = {"you", "house", "school", "home"};
//   char* temp = p[0];
//   int max = strlen(p[0]);
//   for(int i = 1; i < 4; i++){
//     if(strlen(p[i]) > max){
//       temp = p[i];
//       max = strlen(p[i]);
//     }
//   }
//   printf("%s\n", temp);
// return 0;
// }

//10
// #include <stdio.h>
// int total = 0;
// int sumpt(int* pt);
// int main(){
//   int numpt[] = {89, 74, 36, 45, 98};
//   printf("%d", sumpt(numpt));
//   return 0;
// }

// int sumpt(int* pt){
//   int a;
//   for(a = 0; a < 5; a++){
//     if(*(pt+a)%2==0){
//       total += *(pt+a);
//     }
//   }
//   return total;
// }