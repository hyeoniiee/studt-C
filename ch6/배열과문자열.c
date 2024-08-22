#include <stdio.h>

int main(void)
{
	char c = 'A';
	printf("%c\n", c);

    char str[6] = "coding"; // [c][o][d][i][n][g]
    // char str[7] = "coding"; // [c][o][d][i][n][g][\0]
    // char str[] = "coding"; 
    printf("%s\n", str);  
    printf("%d\n", sizeof(str)); 

	for (int i = 0; i < sizeof(str); i++)
	{
		printf("%c\n", str[i]);
	}

  // 배열에 한글 저장하기
  char kor[] = "나도코딩";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));

  // 문자열배열 , 문자
  char c_array[7] = { 'c', 'o', 'd', 'i', 'n', 'g', '\0' };
	// char c_array[6] = { 'c', 'o', 'd', 'i', 'n', 'g' };
	// char c_array[10] = { 'c', 'o', 'd', 'i', 'n', 'g' };

	printf("%s\n", c_array);

	for (int i = 0; i < sizeof(c_array); i++)
	{
		printf("%c\n", c_array[i]); // 아스키코드로 출력 시 %c를 %d로 수정
	}

  // 문자열 입력
  char name[256];
  printf("ÀÌ¸§ÀÌ ¹¹¿¹¿ä? ");
  scanf_s("%s", name, sizeof(name));
  printf("%s\n", name);

  // 아스키코드
  printf("%c\n", 'a');
	printf("%d\n", 'a');
	printf("%c\n", 'b');
	printf("%d\n", 'b');
 	printf("%c\n", 'A');
 	printf("%d\n", 'A');
	printf("%c\n", '\0');
  printf("%d\n", '\0');
 	printf("%c\n", '0');
	printf("%d\n", '0');
	printf("%c\n", '1');
 	printf("%d\n", '1');

	// 아스키코드 값 0~127에 해당하는 문자 확인
	for (int i = 0; i < 128; i++)
	{
		printf("아스키코드 값 %d : %c\n", i, i);
	}

	return 0;
}          