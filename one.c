#include <stdio.h>
#include <stdbool.h>

int main() {

    bool seats[10] = {false};   // 10 seats
    int choice, seat;

    while(1){

        printf("\n--- Ticket Booking System ---\n");
        printf("1. Show Seats\n");
        printf("2. Book Seat\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        if(choice==1){

            printf("\nSeat Status:\n");

            for(int i=0;i<10;i++){
                if(seats[i]==false)
                    printf("Seat %d : Available\n",i+1);
                else
                    printf("Seat %d : Booked\n",i+1);
            }
        }

        else if(choice==2){

            printf("Enter seat number (1-10): ");
            scanf("%d",&seat);

            if(seat<1 || seat>10){
                printf("Invalid seat number\n");
            }

            else if(seats[seat-1]==true){
                printf("Seat already booked\n");
            }

            else{
                seats[seat-1]=true;
                printf("Seat %d booked successfully\n",seat);
            }
        }

        else if(choice==3){
            printf("Exiting...\n");
            break;
        }

        else{
            printf("Invalid choice\n");
        }
    }

    return 0;
}
