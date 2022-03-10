// Copyright 2021 NNTU-CS

int cbinsearch(int* arr, int size, int value) {
  int current = size - 1;
  int result = 0;
  while (true) {
    if (value < arr[current]) {
      current = current >> 1;
    } else if (value > arr[current]) {
      current += current >> 1;
    } else if (value == arr[current]) {
      for (; value == arr[current]; current++) {}
      current--;
      for (; value == arr[current] && current >= 0; current--) {
        result++;
      }
      break;
    } else if (current == 0)
      break;
  }
  return result; 
}
