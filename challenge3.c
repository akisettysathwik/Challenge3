#include <stdio.h>
int main(){
    int type;
    float mrpprice, discount, distance, distancecharge, finalprice;

printf("Enter the customer type (1 = student and 2 = regular): ");
scanf("%d", &type);

printf("Enter the MRP price and Distance: ");
scanf("%f %f", &mrpprice, &distance);

if (type == 1 && mrpprice >= 2000){
    discount = 0.15 * mrpprice;
    printf("Discount = 15 Percentage\n");}

else if (type == 1 && mrpprice < 2000){
    discount = 0.10 * mrpprice;
    printf("Discount = 10 Percentage\n");
}

else if (type == 2 && mrpprice >= 3000){
    discount = 0.08 * mrpprice;
    printf("Discount = 8 Percentage\n");}

else{
    printf("No Discount\n");
}

if (distance <= 5){
    distancecharge = 40;
}
else if (distance >5 && distance <=15){
    distancecharge = 70;
}
else if (distance > 15){
    distancecharge = 100;
}
else {
    printf("Invalid distance\n");
}

distance = distancecharge;
finalprice = mrpprice - discount + distance;
printf("Your final price is : %f\n", finalprice);
printf("Discount = %f\n Distance = %f\n", discount, distance);
return 0;
}