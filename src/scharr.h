#include <hls_stream.h>
#include "ap_axi_sdata.h"
#include <stdint.h>
#include "ap_int.h"

#ifndef SCHARR_H_
#define SCHARR_H_

#define WIDTH 	1280
#define HEIGHT	720

typedef unsigned char PIXEL;
typedef ap_axiu<8, 0, 0, 0> trans_pkt;

void scharr(hls::stream<trans_pkt>& src, hls::stream<trans_pkt>& dst, int rows, int cols);

#endif
