//
// Created by Mieszko Wawrzyniak on 15/01/2018.
//

#ifndef FLOAT_TESTS_H
#define FLOAT_TESTS_H

#include <stdint.h>

#define RANGE 10
#define PRECISION 100

typedef enum {
  float_int32,
  double_int64,
  long_double_int128,
} Test;

uint64_t abs_uint64_t(int64_t);

#endif //FLOAT_TESTS_H
