
#ifndef CAR_H
#define CAR_H

#define N 7

typedef struct {
    char brand[50];
    int price;
} Car;

void inputCars(Car cars[], int n);
void sortCars(Car cars[], int n);
char* getMiddleBrand(Car cars[], int n);

#endif

