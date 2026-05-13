#include <memory.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef uint8_t п8;
typedef uint16_t п16;
typedef uint32_t п32;
typedef uint64_t п64;
typedef п64 природне;
typedef int8_t ц8;
typedef int16_t ц16;
typedef int32_t ц32;
typedef int64_t ц64;
typedef ц64 ціле;

extern ц32 почати();

природне записати_у_файл(п8* дані, природне розмір) {
  FILE* file = fopen("./test.o", "wb");
  if (file == NULL) {
    return 0;
  }
  природне записано = fwrite(дані, sizeof(п8), розмір, file);
  fclose(file);
  return записано;
}

п8* виділити_памʼять(природне розмір) {
  return (п8*)malloc(розмір);
}

п8* перевиділити_памʼять(п8* значення, природне розмір) {
  return (п8*)realloc(значення, розмір);
}

void звільнити_памʼять(п8* значення) {
  free(значення);
}

int main() {
  return (int)почати();
}