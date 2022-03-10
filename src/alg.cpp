// Copyright 2021 NNTU-CS

int cbinsearch(int* arr, int size, int value) {
  int current = size - 1;
  int step = size;
  int result = 0;
  while (true) {
    step = step >> 1;
    if (value < arr[current]) {
      current -= step;
    } else if (value > arr[current]) {
      current += step;
    } else if (value == arr[current]) {
      for (; value == arr[current]; current++) {}
      current--;
      for (; value == arr[current] && current >= 0; current--) {
        result++;
      }
      break;
    } 
    if (step == 0) {
      break;
    }
  }
  return result;
}
