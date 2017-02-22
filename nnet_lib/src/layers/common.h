#ifndef _LAYERS_COMMON_H_
#define _LAYERS_COMMON_H_

#include "nnet_fwd.h"

result_buf run_layer(float* activations,
                     float* weights,
                     layer_t* layers,
                     int layer_num,
                     float* result,
                     float* sigmoid_table,
                     bool do_activation_func);
#endif
