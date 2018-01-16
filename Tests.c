//
// Created by Mieszko Wawrzyniak on 15/01/2018.
//

#include <stdio.h>
#include <string.h>
#include "Tests.h"

#define str_len 100
char *int64_to_str(uint64_t num) {
  size_t len;

  // Allocate memory
  while (!int_str) {
    int_str = malloc(str_len);
  }

  // Clean memory
  memset(int_str, 0, str_len);

  // Int to string
  sprintf(int_str, "%lu", num);
  len = strlen(int_str);

  // Add dot to string
  int_str[len] = int_str[len - 1];
  int_str[len - 1] = int_str[len -2];
  int_str[len - 2] = '.';

  return int_str;
}

uint64_t abs_uint64_t(int64_t num) {
  if (num >= 0) return (uint64_t) num;
  return (uint64_t) -num;
}
