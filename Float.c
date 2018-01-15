//
// Created by Mieszko Wawrzyniak on 15/01/2018.
//

#include "Float.h"
#include "Tests.h"
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define int_t uint32_t
#define base 0xFFFFF
#define filename "float_int32.csv"

void float_int32_test() {
  int_t num;
  
  float_int32_result r;
  
  FILE *f = fopen(filename, "w");
  if (!f) {
    perror(filename);
  }
  
  for (int_t i = 1; i < (RANGE * PRECISION + 1); ++i) {
    num = base * i;
    
    // Int calculations
    r.int_a = num;
    r.int_b = num + 1;
    r.int_result = r.int_a + r.int_b;
    
    // Float calculations
    r.float_a = (float) num;
    r.float_b = (float) num + 1;
    r.float_result = r.float_a + r.float_b;
    
    // Calculate error
    r.error = abs(r.int_result - ((int_t) r.float_result));
    
    // Print results
    fprintf(f, "%d,", r.int_a);
    fprintf(f, "%d,", r.int_b);
    fprintf(f, "%d,", r.int_result);
    fprintf(f, "%f,", r.float_a);
    fprintf(f, "%f,", r.float_b);
    fprintf(f, "%f,", r.float_result);
    fprintf(f, "%d\n", r.error);
  }
  
  fclose(f);
}