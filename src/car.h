// Степанов Антон
#ifndef CAR_H
#define CAR_H
// Car - структура для хранения информации о модели автомобиля
// compareCars - функция для сравнения двух автомобилей по цене
// findMedianCar - функция для нахождения средней марки автомобиля
#define MODEL_COUNT 7
#define MAX_MODEL_NAME_LENGTH 50

struct Car {
  char model[MAX_MODEL_NAME_LENGTH];
  float price;
};

int compareCars(const void *a, const void *b);

void findMedianCar(const struct Car *cars);

#endif // CAR_H