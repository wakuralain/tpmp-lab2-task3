#include <stdio.h>
#include <string.h>
#include "car.h"

void inputCars(Car cars[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Car %d\n", i + 1);
        printf("Brand: ");
        scanf("%s", cars[i].brand);
        printf("Price: ");
        scanf("%d", &cars[i].price);
    }
}

void sortCars(Car cars[], int n) {
    Car temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (cars[i].price > cars[j].price) {
                temp = cars[i];
                cars[i] = cars[j];
                cars[j] = temp;
            }
        }
    }
}

char* getMiddleBrand(Car cars[], int n) {
    return cars[n / 2].brand;
}
