#include<stdio.h>
#define MAX 12
char hand[MAX][30];
char eye[MAX][30];
char mouth[MAX][30];
int get(char p[][30]);
int main()
{
	int len1, len2, len3;
	len1 = get(hand);
	len2 = get(eye);
	len3 = get(mouth);
	int n;
	int h1, h2, m, e1, e2;
	scanf_s("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf_s("%d%d%d%d%d", &h1, &e1, &m, &e2, &h2);
		if ((h1 > len1) || (e1 > len2) || (m > len3) || (e2 > len2) || (h2 > len1)) //ѡ�����ų������Ͻ�
			printf("Are you kidding me? @\\/@");
		else if ((h1 < 1) || (e1 < 1) || (m < 1) || (e2 < 1) || (h2 < 1))//ѡ�����ų������½�
			printf("Are you kidding me? @\\/@");
		else
			printf("%s(%s%s%s)%s", hand[h1], eye[e1], mouth[m], eye[e2], hand[h2]);
		putchar('\n');
	}
	return 0;
}
int  get(char p[][30])
{
	int i = 0, j = 0, c;
	int count = 0;
	int  flag = 0;//�Ƿ����[]�ı�־λ
	while ((c = getchar()) != '\n')
	{
		if (c == '[')
		{
			flag = 1;//�Ѿ����롰[��
			i++;//������һ������
			j = 0;
			count++;
		}
		else if (c == ']')
		{
			flag = 0;//�Ѿ��˳���]��
			p[i][j] = 0;
		}
		else
		{
			if (flag == 1)
				p[i][j++] = c;//��[]�ڵ��ַ����������
		}
	}
	return count;//�����ַ����з��Ÿ���
}