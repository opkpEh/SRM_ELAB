#include <stdio.h>
int main()
{
	int billamt,amtgiven;
	int rem, quot;
	scanf("%d%d",&amtgiven, &billamt);

	rem= amtgiven%billamt;
	quot= amtgiven/billamt;

	printf("Quotient:%d\n",quot);
	printf("Remainder:%d",rem);
	return 0;
}
