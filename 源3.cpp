#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int l, n, cnt = 0, arr[1001];
	int left, right, i, j;
	for (i = 0; i <= 1001; i++)
		arr[i] = 1;
	scanf("%d%d", &l, &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d%d", &left, &right);
		for (j = left; j <= right; j++)
			arr[j] = 0;
	}
	for (i = 0; i <= l; i++)
	{
		if (arr[i] == 1)
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}