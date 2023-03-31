#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
int main(void)
{
	char input[20] = {0};
	system("shutdown -s -t 60");//表示将在60秒后电脑关机
again:
	printf("请注意：你的电脑将在60秒后自动关机，如果输入：不要关机，则取消自动关机\n");
	scanf("%s", input);
	if (strcmp(input,"不要关机") == 0)
	{
		system("shutdown -a");
		printf("任务取消")
	}
	else
		goto again;
	return 0;
}
