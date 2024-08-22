#include <stdio.h>

int main(void)
{
	int age = 20;
	printf("%d\n", age);
	age = 21;
	printf("%d\n", age);

  float f = 46.5f;
	printf("%.2f\n", f); // 소수점 이하 셋째 자리에서 반올림
	double d = 4.428;
	printf("%.2lf\n", d); // 소수점 이하 셋째 자리에서 반올림

  char c = 'A';
	printf("%c\n", c);

	char str[256];
	scanf("%s", str, sizeof(str));
	// scanf_s("%s", str, (unsigned int) sizeof(str)); // 형변환
	// 또는
	// scanf_s("%s", str, 256); // 문자형 변수 크기 직접 입력
	printf("%s\n", str);

	return 0;
}