
#include <stdio.h>
#include "car.h"

int main() {
    Car cars[N];
    
    printf("Enter %d cars:\n", N);
    inputCars(cars, N);
    
    sortCars(cars, N);
    
    printf("\nMiddle car brand: %s\n", getMiddleBrand(cars, N));
    
    return 0;
}
