#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
int main(void)
{
	char input[20] = {0};
	system("shutdown -s -t 60");//��ʾ����60�����Թػ�
again:
	printf("��ע�⣺��ĵ��Խ���60����Զ��ػ���������룺��Ҫ�ػ�����ȡ���Զ��ػ�\n");
	scanf("%s", input);
	if (strcmp(input,"��Ҫ�ػ�") == 0)
	{
		system("shutdown -a");
		printf("����ȡ��")
	}
	else
		goto again;
	return 0;
}
