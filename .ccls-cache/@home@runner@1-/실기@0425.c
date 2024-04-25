// #include <stdio.h>

// int main() {
//   int arr[3][5] = {{12, 60, 32, 16, 98},
//   {99, 56, 34, 41, 11},
//   {65, 3, 87, 78, 21}};
//   int result =0; int i, j;
//   for (i = 0; i < 3; i++){
//     result = 0;
//     printf("%d행의 합계 : ", i);
//     for (j =0; j<5; j++){
//       result += arr[i][j];
//     }
//     printf(" %d\n", result);
//   }
//   for (i = 0; i< 5; i++){
//     result = 0;
//     printf("%d열의 합계 : ", i);
//     for (j =0; j<3; j++){
//         result += arr[j][i];
//       }
//       printf(" %d\n", result);
//       }
//   return 0;
// }

// #include <stdio.h>

// int main() {
//     int arr[3][5] = {
//         {12, 60, 32, 16, 98},
//         {99, 56, 34, 41, 11},
//         {65, 3, 87, 78, 21}
//     };

//     int i, j, temp;

//     printf("시험별 최댓값, 최솟값 출력\n\n");

//     for (j = 0; j < 5; j++) {
//         int min = arr[0][j];
//         int max = arr[0][j];

//         for (i = 1; i < 3; i++) {
//             if (arr[i][j] < min) {
//                 min = arr[i][j];
//             }
//             if (arr[i][j] > max) {
//                 max = arr[i][j];
//             }
//         }
//         printf("시험 #%d의 최대 점수 = %d\n", j+1, max);
//         printf("시험 #%d의 최소 점수 = %d\n", j+1, min);
//         printf("-----\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// #define ARR 5

// double aa(double arra[ARR]);

// int main(){
//   double list[ARR] = {12.3, 35.8, 57.29, 96.53, 28.37};
//   double result;
//   result = aa(list);
//   printf("%.2lf", result);
// }

// double aa(double arra[ARR]){
//   int i;
//   double res = 0;
//   for (i = 0; i < ARR; i++){
//     res += arra[i];
//   }
//   return res;
// }
