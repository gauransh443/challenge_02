/*
TripCalc: A student is planning a road trip. Write a C program to read the total distance to be travelled (in
kilometres), the vehicle&#39;s mileage (kilometres per litre), and the current fuel price per litre. Calculate and
display the amount of fuel required for the trip and the total fuel cost.
*/


#include <stdio.h>
int main(){
    int vehical_mileage,fuel_price,distance,fuel_required,total_cost;
    printf("Enter distance : ");
    scanf("%d",&distance);
    printf("Enter vehical mileage : ");
    scanf("%d",&vehical_mileage);
    printf("Enter fuel price : ");
    scanf("%d",&fuel_price);
    fuel_required = distance/vehical_mileage;
    total_cost = fuel_price*fuel_required;
    printf("The total fuel required for trip is %d Litres and trip of cost is %d rupees",fuel_required,total_cost);
    return 0;
    
}