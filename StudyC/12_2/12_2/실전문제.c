// 키보드로 세 단어를 입력하여 사전 순서대로 출력
//
//#include <stdio.h>
//#include <string.h>
//
//void my_strcmp(char *ps1, char *ps2);
//
//int main(void)
//{
//	char str1[80];
//	char str2[80];
//	char str3[80];
//	char *ps1 = str1;
//	char *ps2 = str2;
//	char *ps3 = str3;
//
//	printf("세 단어 입력 : ");
//	scanf("%s%s%s", &str1, &str2, &str3);
//	printf("입력 된 단어 : %s %s %s\n", str1, str2, str3);
//
//	if (strcmp(str1, str2) == -1)
//	{
//		ps1 = &str1;
//		ps2 = &str2;
//	}
//	else if (strcmp(str1, str2) == 1)
//	{
//		ps1 = &str2;
//		ps2 = &str1;
//	}
//	else {
//		
//	}
//
//	printf("%s, %s, %s", ps1, ps2, ps3);
//
//	return 0;
//}
//
//void my_strcmp(char str1, char str2, char str3)
//{
//	char temp;
//	char *ps1;
//	char *ps2;
//	char *ps3;
//
//	if (strcmp(str1, str2) == -1)									// str1 이 str2 보다 앞에 올 때 (str1, str2)
//	{
//		ps1 = &str1;
//		ps2 = &str2;
//
//		if (strcmp(str1, str3) == -1)								// str1 이 str3 보다 앞에 올 때 (str1, str3)
//		{
//			ps1 = &str1;
//			ps3 = &str3;
//
//			if (strcmp(str2, str3) == -1)							// str2 가 str3 보다 앞에 올 때 (str1, str2, str3)
//			{
//				ps2 = &str2;
//				ps3 = &str3;
//			}
//			else if (strcmp(str2, str3) == 1)						// str2 가 str3 보다 뒤에 올 때 (str1, str3, str2)
//			{
//				ps2 = &str3;
//				ps3 = &str2;
//			}
//		}
//		else if (strcmp(str1, str3) == 1)							// str1 이 str3 보다 뒤에 올 때 (str3, str1)
//		{
//			ps1 = &str3;
//			ps3 = &str1;
//
//			if (strcmp(str2, str3) == -1)							// str2 가 str3 보다 앞에 올 때 (str2, str3, str1)
//			{
//				ps1 = &str2;
//				ps2 = &str3;
//			}
//			else if (strcmp(str2, str3) == 1)						// str2 가 str3 보다 뒤에 올 때 (str3, str1, str2)
//			{
//				ps1 = &str3;
//				ps3 = &str2;
//			}
//		}
//	}
//	else if( strcmp(str1, str2) == 1)								// str1 가 str2 보다 뒤에 올 때 (str2, str1)
//	{
//		ps1 = &str2;
//		ps2 = &str1;
//
//		if (strcmp(str2, str3) == -1)								// str2 가 str3 보다 앞에 올 때 (str2 가 제일 앞, str1 과 str3 은 비교해야함)
//		{
//			ps1 = &str2;
//			ps3 = &str3;
//
//			if (strcmp(str2, str3) == 1)
//			{
//				ps1
//			}
//		}
//	}
//}