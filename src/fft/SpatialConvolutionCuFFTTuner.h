// Copyright 2014 Facebook

#pragma once

#include "torch/fb/fbcunn/src/fft/CuFFTStrategy.h"
#include <folly/Optional.h>

struct THCState;

namespace facebook { namespace deeplearning { namespace torch {

struct SpatialConvolutionCuFFTTuner {
  static folly::Optional<CuFFTStrategy> getBestPerformance(THCState* state,
                                                           ProblemSizes pbs);
};

}}}
