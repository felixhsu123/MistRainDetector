/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 * Generated by MATLAB(R) 8.1 and the Signal Processing Toolbox 6.19.
 * Generated on: 05-May-2013 10:09:26
 */

/*
 * Discrete-Time IIR Filter (real)
 * -------------------------------
 * Filter Structure    : Direct-Form II, Second-Order Sections
 * Number of Sections  : 6
 * Stable              : Yes
 * Linear Phase        : No
 */

/* General type conversion for MATLAB generated C-code  */
#include "tmwtypes.h"
/* 
 * Expected path to tmwtypes.h 
 * C:\Program Files\MATLAB\R2013a\extern\include\tmwtypes.h 
 */
#define hp_MWSPT_NSEC 13
const int hp_NL[hp_MWSPT_NSEC] = { 1,3,1,3,1,3,1,3,1,3,1,3,1 };
const real64_T hp_NUM[hp_MWSPT_NSEC][3] = {
  {
     0.7939283828909,                 0,                 0 
  },
  {
                   1,   -1.995313252716,   0.9999810869253 
  },
  {
                   1,                 0,                 0 
  },
  {
                   1,    -1.60751654293,   0.6085954128968 
  },
  {
                   1,                 0,                 0 
  },
  {
                   1,   -0.905940656465,   0.1498720310252 
  },
  {
                   1,                 0,                 0 
  },
  {
                   1,   -1.548669166455,    0.550339681026 
  },
  {
                   1,                 0,                 0 
  },
  {
                   1,   -1.379117971099,   0.3844840200244 
  },
  {
                   1,                 0,                 0 
  },
  {
                   1,    -1.34986071597,   0.3519155067339 
  },
  {
                   1,                 0,                 0 
  }
};
const int hp_DL[hp_MWSPT_NSEC] = { 1,3,1,3,1,3,1,3,1,3,1,3,1 };
const double hp_DEN[hp_MWSPT_NSEC][3] = {
  {
                   1,                 0,                 0 
  },
  {
                   1,   -1.971438173437,   0.9827152280009 
  },
  {
                   1,                 0,                 0 
  },
  {
                   1,   -1.917701825477,    0.932700552667 
  },
  {
                   1,                 0,                 0 
  },
  {
                   1,   -1.787869581888,   0.8196921238136 
  },
  {
                   1,                 0,                 0 
  },
  {
                   1,   -1.478661416268,   0.5952984737822 
  },
  {
                   1,                 0,                 0 
  },
  {
                   1,  -0.9378345818974,   0.3138591312733 
  },
  {
                   1,                 0,                 0 
  },
  {
                   1,  -0.2320298106962,  0.04681514799358 
  },
  {
                   1,                 0,                 0 
  }
};
