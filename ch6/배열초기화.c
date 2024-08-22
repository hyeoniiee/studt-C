#include <stdio.h>

int main(void)
{
  // 배열 초기화
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // 배열 초기화
	// int arr[10];

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}

  // 일부 값 초기화
  int arr[10] = { 1, 2 }; // 일부 값 초기화

	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]); 
	}

  // 실수형 배열 초기화
  float arr_f[5] = { 1.0f, 2.0f, 3.0f };

	for (int i = 0; i < 5; i++)
	{
		printf("%.2f\n", arr_f[i]);
	}

	return 0;
}          
