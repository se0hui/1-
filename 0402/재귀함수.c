// #include <stdio.h>

// void Recursive(int num);
// int main(){
//   Recursive(5);
//   return 0;
// }
// void Recursive(int num){
//   if(num >    0){
//   printf("Recursive %d \n", num);
//   Recursive(num -1);
//   }
//   return;
// }

// int sum(int a);
// int main(){
//   int result;
//   result = sum(5);
//   printf("result = %d \n", result);
//   return 0;
// }
// int sum(int a){
//   printf("%02d ", a);
//   if (a<0)
//     return 1;
//   else
//     return (a + sum(a-2));
// }

// int f(int a);
// int main(){
//   int result;
//   result = f(5);
//   printf("result = %d\n", result);
//   return 0;
// }
// int f(int a){
//   printf("%02d ", a);
//   if (a<1)
//     return 3;
//   else
//     return (3 * f(a-3) + 1);
// }