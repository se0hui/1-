// #include <stdio.h>

// int main() {
  // 1
  //  int cnt = 0; char c;
  //  while(1){
  //    printf("알파벳 입력 : ");
  //    scanf(" %c", &c);
  //    if (c == 'Q' || c == 'q'){
  //      cnt++;
  //      printf("총 %d회 실행하여 알파벳을 찾았습니다\n", cnt);
  //      printf("찾은 알파벳은 대소문자 구별 없이 'Q'입니다.\n");
  //      break;
  //    }
  //    else{
  //      printf("찾는 알파벳이 아닙니다. 알파벳을 다시 입력하세요.\n\n");
  //      cnt++;
  //    }
  //  }

  // 2
  //  int n, sum, i=1;
  //  back:
  //  printf("정수값 입력 : ");
  //  scanf("%d", &n);
  //  do{
  //    if (n < 0){
  //      printf("음의 정수값 %d는(은) 허용하지 않습니다.\n양의 정수값을 다시
  //      입력하세요.\n", n); goto back;
  //    }
  //    else {
  //      sum += i;
  //      i++;
  //    }
  //  }while(i < n+1);
  //  printf("1부터 %d까지 누적 합계는 %d", n, sum);

  // 3
  //  int n, sum, i=1;
  //  back:
  //  printf("정수값 입력 : ");
  //  scanf("%d", &n);
  //  do{
  //    if (n < 0){
  //      printf("음의 정수값 %d는(은) 허용하지 않습니다.\n양의 정수값을 다시
  //      입력하세요.\n", n); goto back;
  //    }
  //    else if (i % 2 == 1){
  //    sum += i;
  //    i++;
  //    }
  //    i++;
  //  }while(i < n+1);
  //  printf("1부터 %d까지 홀수의 누적 합계는 %d", n, sum);

  // 4
  //  int n, sum, i=1;
  //  back:
  //  printf("정수값 입력 : ");
  //  scanf("%d", &n);
  //  do{
  //    if (n < 0){
  //      printf("음의 정수값 %d는(은) 허용하지 않습니다.\n양의 정수값을 다시
  //      입력하세요.\n", n); goto back;
  //    }
  //    else if (i % 2 == 0){
  //    sum += i;
  //    i++;
  //    }
  //    i++;
  //  }while(i < n+1);
  //  printf("1부터 %d까지 짝수의 누적 합계는 %d", n, sum);

  // 5
//   int i, j, cnt = 0;
//   char c;
// start:
//   do {
//     cnt++;
//     printf("<%d회 실행>\n", cnt);
//     for (i = 1; i < 10; i++) {
//       for (j = 2; j < 10; j++) {
//         printf("%d x %d = %d\t", j, i, j * i);
//       }
//       printf("\n");
//     }
//   back:
//     printf("프로그램을 다시 실행하겠습니까?(Y/N) : ");
//     scanf(" %c", &c);
//     switch (c) {
//     case 'Y':
//     case 'y':
//       break;
//     case 'N':
//     case 'n':
//       goto end;
//     default:
//       printf("입력한 알파벳 %c는(은) 허용하지 않습니다.\n알파벳을 다시 "
//              "입력하세요.\n",
//              c);
//       goto back;
//     }

//   } while (1);
// end:
//   printf("총 %d회 실행 후 프로그램을 종료합니다.", cnt);

//   return 0;
// }