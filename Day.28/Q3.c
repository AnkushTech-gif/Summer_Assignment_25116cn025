#include <stdio.h>

int main()
{
    int totalSeats = 20;
    int bookedSeats;

    printf("Total Available Seats = %d\n", totalSeats);

    printf("Enter number of seats to book: ");
    scanf("%d", &bookedSeats);

    if(bookedSeats <= totalSeats)
    {
        totalSeats = totalSeats - bookedSeats;

        printf("Booking Successful!\n");
        printf("Remaining Seats = %d\n", totalSeats);
    }
    else
    {
        printf("Not enough seats available.\n");
    }

    return 0;
}