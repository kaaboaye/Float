//
// Created by Mieszko Wawrzyniak on 15/01/2018.
//

#ifndef FLOAT_DOUBLE_H
#define FLOAT_DOUBLE_H

#include <stdint.h>
#include <stdio.h>

typedef struct {
  // Int values
  uint64_t int_a;
  uint64_t int_b;
  uint64_t int_result;
  
  // Float values
  double float_a;
  double float_b;
  double float_result;
  
  // Error
  int64_t error;
  
} double_int64_result;

static FILE *f;

void double_int64_test();

#endif //FLOAT_DOUBLE_H
