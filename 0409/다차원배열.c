// #include <stdio.h>

// int main(){
  // int arr[2][3] = {1,2,3,4,5,6};
  // int arr2[2][3] = {{1,2,3}, {4,5,6}};

  // for(int i = 0; i < 2; i++){
  //   for (int j =0; j<3; j++){
  //     printf("%3d", arr[i][j]);
  //   }
  //   printf("\n");
  // }
  
  // int arr3[][3] = {{1,2,3}, {4,5,6}};

  // for(int i = 0; i < 2; i++){
  //   for (int j =0; j<3; j++){
  //     printf("%3d", arr3[i][j]);
  //   }
  //   printf("\n");
  // }

//9-1
  //int x;
  //printf("배열 크기 입력 : ");
  //scanf("%d", &x);
  //int b[50][50] ={};
  //int cnt =0;
  //for (int i=0; i<x; i++){
  //  for (int j =0; j <x; j++){
  //    cnt++;
  //    b[i][j] = cnt;
  //  }
  //}
  //for (int i=0; i<x; i++){
  //  for (int j=0; j<x; j++)
  //    printf("%3d", b[i][j]);
  //printf("\n");
  //}

  // int x;
  // printf("배열 크기 입력 : ");
  // scanf("%d", &x);
  // int b[50][50] ={};
  // int cnt =0;
  // for (int i=0; i<x; i++){
  //   for (int j =0; j <x; j++){
  //     cnt++;
  //     b[i][j] = cnt;
  //   }
  // }
  // for (int i=0; i<x; i++){
  //   for (int j=0; j<x; j++)
  //     printf("%3d", b[j][i]);
  // printf("\n");
  // }

//9-2
  // int arr[3][3] = {{1,2,3}, {3,4}, {5}};
  // for (int i =0; i<3; i++){
  //   for (int j =0; j<3; j++){
  //     printf("%3d", arr[i][j]);
  //   }
  //   printf("\n");
  // }
// }

//9-3
// #include <stdio.h>
// #define SIZE 5
// int main(){
  // int b[SIZE][SIZE] = {0};
  // int cnt = 0;
  // for(int i =0; i < SIZE; i++){
  //   for (int j =0; j<SIZE; j++){
  //     if(i % 2 == 0){
  //       b[i][j] = ++cnt;
  //     }
  //     else{
  //       b[i][4-j] = ++cnt;
  //     }
  //   }
  // }
  // for (int i =0; i < SIZE; i++){
  //   for (int j =0; j<SIZE; j++){
  //     printf("%3d ", b[i][j]);
  //   }
  //   printf("\n");
  // }

  // int b[SIZE][SIZE] = {0};
  // int cnt = 0;
  // for(int i =0; i < SIZE; i++){
  //   for (int j =0; j<SIZE; j++){
  //     if(i % 2 == 0){
  //       b[j][i] = ++cnt;
  //     }
  //     else{
  //       b[4-j][i] = ++cnt;
  //     }
  //   }
  // }

  // for (int i =0; i < SIZE; i++){
  //   for (int j =0; j<SIZE; j++){
  //     printf("%3d ", b[i][j]);
  //   }
  //   printf("\n");
  // }
  // return 0;
// }

// #include <stdio.h>

// int main(){
//9-5
  // int A[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
  // int B[3][3] = { {9,8,7}, {6,5,4}, {3,2,1} };
  // int C[3][3] = {};
  // for (int i = 0; i<3; i++){
  //   for (int j =0; j < 3; j++){
  //     C[i][j] = A[i][j] + B[i][j];
  //   }
  // }
  // for (int i = 0; i<3; i++){
  //   for (int j =0; j < 3; j++){
  //     printf("%3d ", C[i][j]);
  //   }
  //   printf("\n");
  // }

//9-6
  // int grade[3][5] = { 0 };
  // int sub_sum = 0, sum = 0;
  // for (int i =0; i < 3; i++){
  //   printf("학급 %d의 성적 입력(5명) : ", i + 1);
  //   sub_sum = 0;
  //   for (int j = 0; j < 5; j++){
  //     scanf("%d", &grade[i][j]);
  //     sub_sum += grade[i][j];
  //   }
  //   printf("학급 %d의 성적 평균 : %.2f\n\n", i+1, sub_sum / 5.0);
  //   sum += sub_sum;
  // }
  // printf("\n전체 성적 평균 : %.2f\n", sum /15.0);
// }

//9-7 (=9-3)
// #include <stdio.h>
// #define SIZE 5

// int main(){
  // int b[SIZE][SIZE] = { 0 };
  // int cnt = 0;
  // for (int i = 0; i < SIZE; i++){
  //   for (int j = 0; j < SIZE; j++){
  //     if(i % 2 == 0){
  //       b[i][j] = ++cnt;
  //     }
  //     else{
  //       b[i][4-j] = ++cnt;
  //     }
  //   }
  // }
  // for (int i = 0; i < SIZE; i++){
  //   for (int j = 0; j < SIZE; j++){
  //     printf("%3d ", b[i][j]);
  //   }
  //   printf("\n");
  // }
// }

//9-3(선생님 풀이)
// #include <stdio.h>
// #define SIZE 5

// int main(){
//   int b[SIZE][SIZE] = { 0 };
//   int cnt =0;
//   for (int i =0; i < SIZE; i++){
//   if (i % 2 == 0){
//     for (int j =0; j < SIZE; j++){
//       cnt++;
//       b[i][j] += cnt;
//     }
//   }
//   else
//     for(int j = SIZE -1; j>=0; j--){
//       cnt++;
//       b[i][j] += cnt;
//     }
//   }
//   for (int i = 0; i < SIZE; i++){
//     for(int j =0; j < SIZE; j++){
//       printf("%3d ", b[i][j]);
//     }
//     printf("\n");
//   }
// }