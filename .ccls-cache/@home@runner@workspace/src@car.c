// Степанов Антон
#include "car.h"
#include <stdio.h>
// compareCars - функция для сравнения двух автомобилей по цене
int compareCars(const void *a, const void *b) {
  return ((struct Car *)a)->price - ((struct Car *)b)->price;
}

// findMedianCar - функция для нахождения средней марки автомобиля
void findMedianCar(const struct Car *cars) {
  printf("Средняя стоимость машины: %.2f, модель машины со средней стоимостью: "
         "%s\n",
         cars[MODEL_COUNT / 2].price, cars[MODEL_COUNT / 2].model);
}