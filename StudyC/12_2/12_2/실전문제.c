// Ű����� �� �ܾ �Է��Ͽ� ���� ������� ���
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
//	printf("�� �ܾ� �Է� : ");
//	scanf("%s%s%s", &str1, &str2, &str3);
//	printf("�Է� �� �ܾ� : %s %s %s\n", str1, str2, str3);
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
//	if (strcmp(str1, str2) == -1)									// str1 �� str2 ���� �տ� �� �� (str1, str2)
//	{
//		ps1 = &str1;
//		ps2 = &str2;
//
//		if (strcmp(str1, str3) == -1)								// str1 �� str3 ���� �տ� �� �� (str1, str3)
//		{
//			ps1 = &str1;
//			ps3 = &str3;
//
//			if (strcmp(str2, str3) == -1)							// str2 �� str3 ���� �տ� �� �� (str1, str2, str3)
//			{
//				ps2 = &str2;
//				ps3 = &str3;
//			}
//			else if (strcmp(str2, str3) == 1)						// str2 �� str3 ���� �ڿ� �� �� (str1, str3, str2)
//			{
//				ps2 = &str3;
//				ps3 = &str2;
//			}
//		}
//		else if (strcmp(str1, str3) == 1)							// str1 �� str3 ���� �ڿ� �� �� (str3, str1)
//		{
//			ps1 = &str3;
//			ps3 = &str1;
//
//			if (strcmp(str2, str3) == -1)							// str2 �� str3 ���� �տ� �� �� (str2, str3, str1)
//			{
//				ps1 = &str2;
//				ps2 = &str3;
//			}
//			else if (strcmp(str2, str3) == 1)						// str2 �� str3 ���� �ڿ� �� �� (str3, str1, str2)
//			{
//				ps1 = &str3;
//				ps3 = &str2;
//			}
//		}
//	}
//	else if( strcmp(str1, str2) == 1)								// str1 �� str2 ���� �ڿ� �� �� (str2, str1)
//	{
//		ps1 = &str2;
//		ps2 = &str1;
//
//		if (strcmp(str2, str3) == -1)								// str2 �� str3 ���� �տ� �� �� (str2 �� ���� ��, str1 �� str3 �� ���ؾ���)
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