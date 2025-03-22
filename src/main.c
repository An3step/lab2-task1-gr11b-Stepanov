#include "car.h"
#include <stdio.h>

int main()
{
  struct Car cars[MODEL_COUNT];

  FILE *file = fopen("modeles.txt", "r");
  if (file == NULL) {
    printf("Ошибка открытия файла!\n");
    return 1;
  }

  for (int i = 0; i < MODEL_COUNT; i++) {
    fscanf(file, "%s %f", cars[i].model, &cars[i].price);
  }
  fclose(file);

  findMedianCar(cars);

  return 0;
}