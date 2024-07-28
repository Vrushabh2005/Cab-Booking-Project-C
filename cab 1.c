#include <stdio.h>

int main() {
    char name[50];
    char pickup[50];
    char destination[50]; 
    char date[20]; 
    char time[20];
	float distance; 
    int choice;
    printf("Welcome to Vrushabh cab services\n");

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter pickup location: ");
    scanf("%s", pickup);

    printf("Enter destination: ");
    scanf("%s", destination);

    printf("Enter the date: ");
    scanf("%s", date);
    
    printf("Enter the time: ");
    scanf("%s", time);
    
    printf("Enter distance in km: ");
    if (scanf("%f", &distance) != 1) {
        printf("Invalid input for distance.\n");
        return 1; 
    }

    printf("Enter car type (1 for petrol, 2 for diesel): ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid input for car type.\n");
        return 1;
    }

    float fare;
    float gstRate = 0.12; 
    if (choice == 1) {
        fare = 15 * distance; 
    } else if (choice == 2) {
        fare = 12 * distance; 
    } else {
        printf("Invalid choice entered.\n");
        return 1;
    }

    float taxAmount = fare * gstRate;
    float totalFare = fare + taxAmount;

    printf("\nName: %s\n", name);
    printf("Pickup location: %s\n", pickup);
    printf("Destination: %s\n", destination);
    printf("Distance: %.2f km\n", distance);
    printf("Date: %s\n", date);
    printf("Time: %s\n", time);
    printf("Fare: Rs %.2f\n", fare);
    printf("GST (12%%): Rs %.2f\n", taxAmount);
    printf("Total fare (including GST): Rs %.2f\n", totalFare);

    return 0;
}

