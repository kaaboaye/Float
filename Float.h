//
// Created by Mieszko Wawrzyniak on 15/01/2018.
//

#ifndef FLOAT_FLOAT_H
#define FLOAT_FLOAT_H

#include <stdint.h>
#include <stdio.h>

typedef struct {
  // Int values
  uint32_t int_a;
  uint32_t int_b;
  uint32_t int_result;
  
  // Float values
  float float_a;
  float float_b;
  float float_result;
  
  // Error
  int32_t error;
  
} float_int32_result;

static FILE *f;

void float_int32_test();

#endif //FLOAT_FLOAT_H
