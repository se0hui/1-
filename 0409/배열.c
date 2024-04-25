// #include <stdio.h>
// #define SIZE 7

// void modify_array(int a[], int size);
// void print_array(int a[], int size);


// int main(){
//   int list[SIZE] = {1, 2, 3, 4, 5, 6, 7};
//   print_array(list, SIZE);
//   modify_array(list, SIZE);
//   print_array(list, SIZE);

//   return 0;
// }

// void modify_array(int a[], int size)
// {
//   int i;
//   for(i = 0; i <size; i++)
//     ++a[i];
// }

// void print_array(int a[], int size)
// {
//   int i;
//   // a[0] = 10;
//   for(i = 0; i < size; i ++)
//     printf("%3d ", a[i]);
//   printf("\n");
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// #define DT 3
// #define STD 5
// #define SIZE 11

// int main(){
   // int arr[]={1,2,3,4,5};
   // for (int i = 0; i < 5; i++){
   //   printf("%3d", arr[4-i]);
   // }

  // int arr[5] = {11, 22, 33, 44, 55};
  // for (int i = 0; i < 5; i ++){
  //   printf("arr[%d] = %d\n", i, arr[i]);
  // }
  // printf("\n 반전 후 결과 출력\n\n");
  // for (int i =0; i < 5 / 2k; i++){
  //   int temp = arr[i];
  //   arr[i] = arr[4-i];
  //   arr[4-i] = temp;
  // }
  // for (int i = 0; i < 5; i++){
  //   printf("arr[%d] = %d\n", i, arr[i]);
  // }

  // int arr[7], i;
  // printf("5부터 24 사이 숫자를 랜덤으로 출력하시오.\n");
  // srand(time(NULL));
  // for (i=0; i<7; i++){
  //   arr[i] = rand()%20 + 5;
  //   printf("arr[%d] = %d\n", i,  arr[i]);
  // }

  // int score[DT], i, sum = 0;
  // float avg;
  // for(i=0; i<DT; i++)
  //   {
  //     printf("과목 %d 점수 입력 : ", i+1);
  //     scanf("%d", &score[i]);
  //     sum += score[i];
  //   }
  // avg = (float)sum / DT;
  // printf("총점 : %d\n", sum);
  // printf("평균 : %.2f\n", avg);

  // int arr[10] = {1, 2};
  // int i;
  // for(i=2; i<10; i++){
  //   arr[i] = arr[i-1] + arr[i-2];
  // }
  // for(i = 0; i < 10; i++){
  //   printf("%4d", arr[i]);
  // }

  // int grade[STD];
  // int i, min;
  // printf("5개의 성적 입력 : ");
  // for (i = 0; i<STD; i++){
  //   scanf("%d", &grade[i]);
  // }
  // min = grade[0];
  // for(i =1; i<STD; i++){
  //   if(grade[i] < min)
  //     min = grade[i];
  // }
  // printf("최소값 : %d", min);

  // int grade[SIZE] = {0};
  // int x;
  // while(1){
  //   printf("0~10까지 숫자 입력(종료는 -1) : ");
  //   scanf("%d", &x);
  //   if (x < 0)
  //     break;
  //   grade[x]++;
  // }
  // printf("값\t빈도\n");
  // for(int i = 0; i < SIZE; i++){
  //   printf("%d\t%d\n", i, grade[i]);
  // }
  
  // }