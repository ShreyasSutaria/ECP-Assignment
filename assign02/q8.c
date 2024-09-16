/*Write a program that will calculate the price for a quantity entered from the keyboard, given
that the unit price is Rs 5 and there is a discount of 10 percent for quantities over 30 and a 15
percent discount for quantities over 50. */


#include <stdio.h>

int main() {
    int quantity;
    float unitPrice = 5.0, totalPrice;

 
    printf("Enter the quantity: ");
    scanf("%d", &quantity);

   
    totalPrice = quantity * unitPrice;

  
    if (quantity > 50) {
        totalPrice *= 0.85;  // 15% discount
    } else if (quantity > 30) {
        totalPrice *= 0.90;  // 10% discount
    }

    printf("Total price: Rs %.2f\n", totalPrice);

    return 0;
}

