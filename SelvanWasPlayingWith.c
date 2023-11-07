#include <stdio.h>
int main()
{
	int L,W,H, area;
	scanf("%d%d%d",&L,&W,&H);
	area= 2* (W*L + L*H + H*W);

	printf("%d",area);
}

