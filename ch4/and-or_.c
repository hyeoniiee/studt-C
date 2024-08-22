#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 11; // 10
	int c = 12;
	int d = 13; // 12

	if (a == b || c == d)
	{
		printf("a와 b가 같고 c와 d도 같습니다.\n");
	}
	else
	{
		printf("값이 서로 다릅니다.\n");
	}

  int aa = 10;
  int bb = 10; //11
  int cc = 12; //13
  int dd = 13;

  if (aa == bb || cc == dd) 
  {
      printf("aa와 bb 또는 cc와 dd의 값이 같습니다.\n");
  }

	return 0;
}          