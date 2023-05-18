#include <stdio.h>

int main(void)
{
	int total_price, category, product_price, product_count, price_sum = 0;

	scanf("%d", &total_price);
	scanf("%d", &category);

	for (int i = 0; i < category; i++){
		scanf("%d %d", &product_price, &product_count);
		price_sum += product_price * product_count;
	}

	if (total_price == price_sum){
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	return 0;
}
