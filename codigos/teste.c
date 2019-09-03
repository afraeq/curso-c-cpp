#include<stdio.h>

struct product {
  int weight;
  double price;
} apple, banana, melon;

int main () {

	struct product orange;
	struct product * ptr;
	ptr = &orange;
	ptr->price = 5;

	printf("%f",ptr->price);

}
