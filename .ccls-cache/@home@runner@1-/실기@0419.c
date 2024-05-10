// #include <stdio.h>

// int main(){
  //16
  // 1109 이서희
  // int price, extra;
  // printf("금액을 입력하세요 : ");
  // scanf("%d", &price);
  // for (int i = 0; ; i++){
  //   if (price - 1200 > 0){
  //     price -= 1200;
  //     printf("잔액 : %d\n", price);
  //   }
  //   else
  //     break;
  // }
  
  // 17
  //1109 이서희
  // int i, j, n;
  // printf("높이를 입력하세요 : ");
  // scanf("%d", &n);
  // for (i = 0; i < n; i++){
  //   for (j = n; j >= 0; j--){
  //     if (j <= i)
  //       printf("*");
  //     else
  //       printf(" ");
  //   }
  //   for (j = 0; j < i; j++){
  //     if (j < i)
  //       printf("*");
  //     else
  //       printf(" ");
  //   }
  //   printf("\n");
  // }
//   return 0;
// }

//18
//1109 이서희
//   int get_tax(int income);

//   int main(){
//     int n, tax;
//     printf("소득을 입력하시오(만원) : ");
//     scanf("%d", &n);
//     tax = get_tax(n);
//     printf("소득세는 %d만원 입니다", tax);
//   }

// int get_tax(int income){
//   int tax;
//   if (income <= 1000)
//     tax = income * 0.08;
//   else
//     tax = (income-1000) * 0.1 + 1000*0.08;
//   return tax;
// }

//19
//1109 이서희
// int check();

// int main(){
//   int success = 0;
//   for(int i = 0; i <4; i++){
//     if (check()){
//       success = 1;
//       printf("로그인 성공\n");
//       break;
//     }
//     else
//       printf("로그인 실패\n");
//     if(i == 3 && !success)
//       printf("\n프로그램 종료\n");
//   }
// }

// int check()
// {
//   static int call_count = 0;
//   call_count++;
//   if(call_count <= 4){
//     printf("\n로그인 시도 %d회 비밀번호 입력 : ", call_count);
//   }
//   int n;
//   scanf("%d", &n);
//   if (n == 1234){
//     return 1;
//   }
//   return 0;
// }