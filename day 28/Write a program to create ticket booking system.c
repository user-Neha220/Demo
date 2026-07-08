#include <stdio.h>

int main()
{
    int tickets;
    float price = 250.0, total;

    printf("===== Ticket Booking =====\n");

    printf("Enter Number of Tickets: ");
    scanf("%d", &tickets);

    total = tickets * price;

    printf("\nTicket Price : %.2f\n", price);
    printf("Tickets      : %d\n", tickets);
    printf("Total Amount : %.2f\n", total);

    printf("\nBooking Successful!\n");

    return 0;
}