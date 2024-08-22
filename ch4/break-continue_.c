#include <stdio.h>

int main(void)
{
	for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("나머지 학생은 집에 가세요.\n");
			break;
		}
		printf("%d번 학생은 조별 발표를 준비하세요.\n", i);
	}

  for (int j = 1; j <= 30; j++)
	{
		if (j >= 6 && j <= 10)
		{
			if (j == 7)
			{
				printf("%d번 학생은 결석입니다.\n", j);
				continue;
			}
			printf("%d번 학생은 조별 발표를 준비하세요.\n", j);
		}
	}

	return 0;
}          