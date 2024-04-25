// #include <stdio.h>

// int main(void) {
//   int i, j, n;
//   printf("정수를 입력 하세요 : ");
//   scanf("%d", &n);

//   for (i = 0; i < n; i++) {
//     for (j = n - 1; j >= 0; j--) {
//       if (j > i)
//         printf(" ");
//       else
//         printf("*");
//     }
//     for (j = 1; j <= n; j++) {
//       if (j > i)
//         printf(" ");
//       else
//         printf("*");
//     }
//     printf("\n");
//   }
//   for (i = 1; i < n; i++) {
//     for (j = 1; j < n; j++) {
//       if (j <= i)
//         printf(" ");
//       else
//         printf("*");
//     }
//     for (j = n - 1; j > 0; j--) {
//       if (j >= i)
//         printf("*");
//       else
//         printf(" ");
//     }
//     printf("\n");
//   }
// }