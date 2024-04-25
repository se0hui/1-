#include <stdio.h>

// 1-1
//  void ADD(int x, int y);
// int main(void)
// {
// 	int a = 10, b = 20;
// 	ADD(a, b);
// 	a = 5, b = 10;
// 	ADD(a, b);
// 	return 0;
// }
// void ADD(int x, int y) {
// 	printf("%d + %d = %d\n", x, y, x + y);
// }

// 1-2
//  int ADD(int x, int y);
//  int main(void) {
//  	int a = 10, b = 20, result;
//  	result = ADD(a, b);
//  	printf("%d + %d = %d\n", a, b, result);
//  	a = 5, b = 10;
//  	printf("%d + %d = %d\n", a, b, ADD(a, b));
//  	return 0;
//  	}
//  int ADD(int x, int y) {
//   	return x=y;
//  }

// 2
//  int func(int c);
//  int main(void) {
//  	int a = 100, result = 0;
//  	result = func(a) + 50;
//  	printf("a = %d \n", a);
//  	printf("result = %d \n", result);
//  	return 0;
//  }
//  int func(int n) {
//  	n = 200;
//  	return n;
//  }
////a = 100, b = 250

// 3
//  void Exchange(float input);
//  int main(void) {
//  	float input;
//  	printf("인치 입력 : ");
//  	scanf("%f", &input);
//  	Exchange(input);
//  	return 0;
//  }
//  void Exchange(float input) {
//  	printf("%.2f 센티미터", input * 2.54);
//  }

// 4
//  char Alpha();
//  int main() {
//  	char show;
//  	printf("<< 1. 사용자 정의 함수에서 입력한 알파벳 전달 >> \n");
//  	show = Alpha();
// 	printf("<< 3. main 함수 영역 >> \n");
// 	printf("전달받은 알파벳 : %c \n", show);
// 	printf("아스키 코드 값 : %d \n", show);
// 	return 0;
// }
// char Alpha() {
// 	char c1;
// 	printf("알파벳 입력 : ");
// 	scanf("%c", &c1);
// 	return c1;
// }

// 5
//  int Power(int x, int y);
//  int main() {
//  	int result;
//  	result = Power(2, 10);
//  	printf("결과 = %d \n", result);
//  	return 0;
//  }
//  int Power(int x, int y) {
//  	int i, r = 1;
//  	for (i = 1; i <= 10; i++)
//  	{
//  		r = r*2;
//  	}
//  	return r;
//  }

// 6
//  int SUM(int x);
//  int main() {
//  	int input, result = 0;
//  	printf("정수 입력 : ");
//  	scanf("%d", &input);
//  	result = SUM(input);
//  	printf("1부터 %d까지 합 = %d \n", input, result);

// 	printf("정수 입력 : ");
// 	scanf("%d", &input);
// 	printf("1부터 %d까지 합 = %d \n", input, SUM(input));
// 	return 0;
// }
// int SUM(int x) {
// 	int i, r = 0;
// 	for (i = 1; i <= x; i++)
// 	{
// 		r += i;
// 	}
// 	return r;
// }

// 7
// int Prime_check(int x);
// int main() {
//   int input, result;
//   printf("2 이상의 정수 입력 : ");
//   scanf("%d", &input);
//   if (input == 1)
//     printf("입력 범위가 아닙니다.\n");
//   else {
//     result = Prime_check(input);
//     if (result == 1)
//       printf("소수입니다.\n");
//     else
//       printf("소수가 아닙니다.\n");
//   }
//   return 0;
// }
// int Prime_check(int x)
// {
//   int i;
//   for (i = 2; i < x; i++)
//   {
//     if (x % i == 0)
//       return 0;
//   }
//   return 1;
// }

// 8
//  void get_divisor(int x);
//  int main(void){
//    int input;
//    printf("정수 입력 : ");
//    scanf("%d", &input);

//   printf("%d의 약수 : ", input);
//   get_divisor(input);
//   return 0;
// }
// void get_divisor(int x){
//   int i;
//   for(i=1; i<=x; i++)
//     {
//       if(x % i == 0)
//         printf("%d ", i);
//     }
//   printf("\n");
// }

// 9
// void prime_print(int x);
// int main(void) {
//   int input;
//   printf("정수 입력 : ");
//   scanf("%d", &input);

//   printf("%d 이하의 소수 출력 : ", input);
//   prime_print(input);
//   return 0;
// }
// void prime_print(int x) {
//   int i, j;
//   for (i = 2; i <= x; i++)
//   {
//     for (j = 2; j < i; j++)
//     {
//       if (i % j == 0)
//       {
//         break;
//       }
//     }
//     if (i == j)
//     {
//       printf("%3d", i);
//     }
//   }
// }
