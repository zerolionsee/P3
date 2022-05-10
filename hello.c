// #include <stdio.h>
// int main()
// {
//   int a = 0;
//   int b = -a;
//   int c = ~a;
//   printf("%d\n%d\n", b, c);
//   printf("%d\n%d\n", sizeof(a), sizeof a);
// }
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//接收一个整型，输出它二进制序列的每一位(设为八位)
int main()
{
  // while (1) //实现一直接收
  // {
    int a = 0;
    // printf("Please enter:");
    scanf("%d", &a);
    int l = sizeof(a)*8;
    int i = 0;
    int sum = 0;
    // int array[l] = {0};     //编译错误Variable-sized object may not be initialized,
    int array[l];           //可以用变量定义数组长度，但不可初始化。
    for (i = 0; i < l; i++) //八位二进制序列，因此控制八次
    {
      sum = a & 1; //与1便得到这个数的最后一位
      if (sum == 1)
      {
        array[i] = 1;
      }
      else
      {
        array[i] = 0;
      }
      a = a >> 1; //更新这个二进制序列
    }
    for (i = l-1; i >= 0; i--) //逆序输出
    {
      printf("%d ", array[i]);
    }
    printf("\n");
  // }
  return 0;
}

