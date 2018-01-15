//
// Created by Mieszko Wawrzyniak on 15/01/2018.
//

#include "Tests.h"

uint64_t abs_uint64_t(int64_t num) {
  if (num >= 0) return (uint64_t) num;
  return (uint64_t) -num;
}
