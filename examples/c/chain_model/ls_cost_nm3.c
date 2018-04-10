/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CODEGEN_PREFIX
  #define NAMESPACE_CONCAT(NS, ID) _NAMESPACE_CONCAT(NS, ID)
  #define _NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) ls_cost_nm3_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

static const casadi_int casadi_s0[19] = {15, 1, 0, 15, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
static const casadi_int casadi_s1[33] = {15, 15, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 0, 1, 2};

/* ls_cost_nm3:(i0[15])->(o0[15],o1[15x15,15nz]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem) {
  casadi_real a0;
  a0=arg[0] ? arg[0][3] : 0;
  if (res[0]!=0) res[0][0]=a0;
  a0=arg[0] ? arg[0][4] : 0;
  if (res[0]!=0) res[0][1]=a0;
  a0=arg[0] ? arg[0][5] : 0;
  if (res[0]!=0) res[0][2]=a0;
  a0=arg[0] ? arg[0][6] : 0;
  if (res[0]!=0) res[0][3]=a0;
  a0=arg[0] ? arg[0][7] : 0;
  if (res[0]!=0) res[0][4]=a0;
  a0=arg[0] ? arg[0][8] : 0;
  if (res[0]!=0) res[0][5]=a0;
  a0=arg[0] ? arg[0][9] : 0;
  if (res[0]!=0) res[0][6]=a0;
  a0=arg[0] ? arg[0][10] : 0;
  if (res[0]!=0) res[0][7]=a0;
  a0=arg[0] ? arg[0][11] : 0;
  if (res[0]!=0) res[0][8]=a0;
  a0=arg[0] ? arg[0][12] : 0;
  if (res[0]!=0) res[0][9]=a0;
  a0=arg[0] ? arg[0][13] : 0;
  if (res[0]!=0) res[0][10]=a0;
  a0=arg[0] ? arg[0][14] : 0;
  if (res[0]!=0) res[0][11]=a0;
  a0=arg[0] ? arg[0][0] : 0;
  if (res[0]!=0) res[0][12]=a0;
  a0=arg[0] ? arg[0][1] : 0;
  if (res[0]!=0) res[0][13]=a0;
  a0=arg[0] ? arg[0][2] : 0;
  if (res[0]!=0) res[0][14]=a0;
  a0=1.;
  if (res[1]!=0) res[1][0]=a0;
  if (res[1]!=0) res[1][1]=a0;
  if (res[1]!=0) res[1][2]=a0;
  if (res[1]!=0) res[1][3]=a0;
  if (res[1]!=0) res[1][4]=a0;
  if (res[1]!=0) res[1][5]=a0;
  if (res[1]!=0) res[1][6]=a0;
  if (res[1]!=0) res[1][7]=a0;
  if (res[1]!=0) res[1][8]=a0;
  if (res[1]!=0) res[1][9]=a0;
  if (res[1]!=0) res[1][10]=a0;
  if (res[1]!=0) res[1][11]=a0;
  if (res[1]!=0) res[1][12]=a0;
  if (res[1]!=0) res[1][13]=a0;
  if (res[1]!=0) res[1][14]=a0;
  return 0;
}

CASADI_SYMBOL_EXPORT int ls_cost_nm3(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT void ls_cost_nm3_incref(void) {
}

CASADI_SYMBOL_EXPORT void ls_cost_nm3_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int ls_cost_nm3_n_in(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_int ls_cost_nm3_n_out(void) { return 2;}

CASADI_SYMBOL_EXPORT const char* ls_cost_nm3_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* ls_cost_nm3_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* ls_cost_nm3_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* ls_cost_nm3_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int ls_cost_nm3_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 2;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
