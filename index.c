#include <stdio.h>  

int main() {
  int x =75 ,y = 0, length = 0;
  float result = 0;

  // scanfに\nは入れない
  printf("脛骨長を入力して下さい:"); scanf("%d", &length);

  for(int i=0;i<10;i++){
    y = 100 - x;
    result = y * length / 100.0;
    // 結果を小数点以下2桁まで表示
    printf("z値%d: %.2f\n", x,result);
    printf("-----------------------\n");
    x -= 5;
  }

  return 0; 
}