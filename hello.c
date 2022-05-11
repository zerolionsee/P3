// #include <stdio.h>
// int main()
// {
//   int a = 0;
//   int b = -a;
//   int c = ~a;
//   printf("%d\n%d\n", b, c);
//   printf("%d\n%d\n", sizeof(a), sizeof a);
// }
// #define _CRT_SECURE_NO_WARNINGS
// int print_bin_2(int);
// #include <stdio.h>
// int main()
// {
//   // int m = ~0;
//   register int m = 127; // auto int a=10;  局部变量=自动变量 auto  省略
//   print_bin_2(m);
//   printf("%d\n", m);
//   return 0;
// }

// #include <stdio.h>
// int main()
// {
//   int a = 3;
//   int b = 5;
//   int c = a && b;
//   printf("%d\n", c);
// }

#include <stdio.h>
int main()
{
  unsigned int a = -3;
  printf("%u\n", a);//无符号整数打印不出负数
}
