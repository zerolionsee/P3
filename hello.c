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
int print_bin_2(int);
#include <stdio.h>
int main()
{
  int m = ~0;
  print_bin_2(m);
  printf("%d\n", m);
  return 0;
}

