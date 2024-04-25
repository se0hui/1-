// #include <stdio.h>

// int main(){
  //09
  //1109 이서희
  // int i, j;
  // for (i = 0; i < 5; i++){
  //   for (j = 5; j >= 0; j--){
  //     if (j <= i)
  //       printf("*");
  //     else
  //       printf(" ");
  //       }
  //   printf("\n");
  // }

  //10
  //1109 이서희
  // int i, j, n;
  // printf("정수를 입력하시오 : ");
  // scanf("%d", &n);
  // for(i = 0; i < n; i++){
  //   for(j = 0; j < n; j++){
  //     if (j <= i)
  //       printf(" %d", j+1);
  //     else
  //       printf(" ");
  //   }
  //   printf("\n");
  // }

  //11
  //1109 이서희
  // int fuel = 100, amount;
  // char action;
  // printf("현재 연료량 : %d", fuel);
  // do{
  //   printf("\n\n연료 충전은 +, 소모는 -로 입력해주세요 : ");
  //   scanf(" %c %d", &action, &amount);
  //   if (action == '+'){
  //    fuel += amount;
  //    if (fuel > 500)
  //      fuel = 500;
  //    printf("현재 연료량 : %d", fuel);
  // }
  //   else if (action == '-'){
  //     fuel -= amount;
  //     printf("현재 연료량 : %d", fuel);
  // }
  //   else{
  //     printf("\n잘못된 입력입니다.연료 충전은 +, 소모는 -로 입력해주세요.\n");
  //     printf("현재 연료량 : %d" , fuel);
  //   }
  // } while (fuel > 0);
  // printf("\n\n(경고) 연료가 15리터 미만입니다.\n연료가 다 소진되었습니다. 프로그램을 종료합니다.");
  

  //12
  //1109 이서희
  // int n;
  // printf("정수를 입력하시오 : ");
  // scanf("%d", &n);
  // do{
  //   printf("%d", n%10);
  //   n = n/10;
  // }while(n);

  //13
  //1109 이서희
  // int age, cash=10000;
  // printf("나이를 입력하세요 : ");
  // scanf("%d", &age);
  // if(age >= 7 && age <= 12)
  //   printf("어린이 요금(450원)이 차감되었습니다.\n남은 잔액 : %d원", cash-450);
  // else if (age >= 13 && age <= 18)
  //   printf("청소년 요금(720원)이 차감되었습니다.\n남은 잔액 : %d원", cash-720);
  // else
  //   printf("어른 요금(1200원)이 차감되었습니다.\n남은 잔액 : %d원", cash-1200);

  //14
  //1109 이서희
  // char drink;
  // printf("f,c,p 중 하나를 입력하세요 : ");
  // scanf(" %c", &drink);
  // switch(drink){
  //   case 'f' : printf("환타"); break;
  //   case 'c' : printf("콜라"); break;
  //   case 'p' : printf("사이다"); break;
  //   default : printf("판매하지 않는 메뉴");
  // }

  //15
  //1109 이서희
  // char c1; int i;
  // printf("시작 문자 입력 : ");
  // scanf("%c", &c1);
  // printf("출력 :");
  // for (i = c1; i <= 'z'; i++){
  //   printf(" %c", i);
  // }
//   return 0;
// }