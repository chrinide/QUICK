/*    
  This file was generated automatically with ../scripts/maple2c.pl.   
  Do not edit this file directly as it can be overwritten!!   
   
  This Source Code Form is subject to the terms of the Mozilla Public   
  License, v. 2.0. If a copy of the MPL was not distributed with this   
  file, You can obtain one at http://mozilla.org/MPL/2.0/.   
   
  Maple version     : Maple 2016 (X86 64 LINUX)   
  Maple source      : ../maple/lda_xc_zlp.mpl   
  Type of functional: work_lda   
*/   
   
#ifdef DEVICE   
__device__ static void   
xc_lda_xc_zlp_func0(const void *p, xc_lda_work_t *r)   
#else   
static void   
func0(const xc_func_type *p, xc_lda_work_t *r)   
#endif   
{   
  double t1, t2, t3, t4, t6, t7, t9, t13;   
  double t14, t15, t16, t21, t25, t28, t29, t34;   
  double t41, t42, t45, t51, t56, t69, t79, t80;   
   
   
  t1 = M_CBRT3;   
  t2 = M_CBRT4;   
  t3 = t2 * t2;   
  t4 = t1 * t3;   
  t6 = cbrt(0.1e1 / 0.31415926535897932385e1);   
  t7 = t1 * t1;   
  t9 = 0.1e1 / t6;   
  t13 = 0.1e1 + 0.35185423664167797878e2 * r->rs * t7 * t2 * t9;   
  t14 = log(t13);   
  t15 = t6 * t14;   
  t16 = 0.1e1 / r->rs;   
  t21 = t6 * (0.1e1 - 0.23684050000000000000e-2 * t4 * t15 * t16);   
  r->f = -0.23305500000000000000e0 * t4 * t21 * t16;   
   
  if(r->order < 1) return;   
   
  t25 = 0.1e1 / t13;   
  t28 = r->rs * r->rs;   
  t29 = 0.1e1 / t28;   
  t34 = t6 * (-0.10000000000000000000e1 * t25 * t16 + 0.23684050000000000000e-2 * t4 * t15 * t29);   
  r->dfdrs = -0.23305500000000000000e0 * t4 * t34 * t16 + 0.23305500000000000000e0 * t4 * t21 * t29;   
   
  if(r->order < 2) return;   
   
  t41 = t13 * t13;   
  t42 = 0.1e1 / t41;   
  t45 = t7 * t2 * t9;   
  t51 = 0.1e1 / t28 / r->rs;   
  t56 = t6 * (0.35185423664167797878e2 * t42 * t16 * t45 + 0.20000000000000000000e1 * t25 * t29 - 0.47368100000000000000e-2 * t4 * t15 * t51);   
  r->d2fdrs2 = -0.23305500000000000000e0 * t4 * t56 * t16 + 0.46611000000000000000e0 * t4 * t34 * t29 - 0.46611000000000000000e0 * t4 * t21 * t51;   
   
  if(r->order < 3) return;   
   
  t69 = t6 * t6;   
  t79 = t28 * t28;   
  t80 = 0.1e1 / t79;   
  r->d3fdrs3 = -0.23305500000000000000e0 * t4 * t6 * (-0.74280842305618755822e4 / t41 / t13 * t16 * t4 / t69 - 0.10555627099250339363e3 * t42 * t29 * t45 - 0.60000000000000000000e1 * t25 * t51 + 0.14210430000000000000e-1 * t4 * t15 * t80) * t16 + 0.69916500000000000000e0 * t4 * t56 * t29 - 0.13983300000000000000e1 * t4 * t34 * t51 + 0.13983300000000000000e1 * t4 * t21 * t80;   
   
  if(r->order < 4) return;   
   
   
}   
   
#ifdef DEVICE   
__device__ static void   
xc_lda_xc_zlp_func1(const void *p, xc_lda_work_t *r)   
#else   
static void   
func1(const xc_func_type *p, xc_lda_work_t *r)   
#endif   
{   
  double t1, t2, t3, t4, t6, t7, t9, t13;   
  double t14, t15, t16, t21, t25, t28, t29, t34;   
  double t41, t42, t45, t51, t56, t69, t79, t80;   
   
   
  t1 = M_CBRT3;   
  t2 = M_CBRT4;   
  t3 = t2 * t2;   
  t4 = t1 * t3;   
  t6 = cbrt(0.1e1 / 0.31415926535897932385e1);   
  t7 = t1 * t1;   
  t9 = 0.1e1 / t6;   
  t13 = 0.1e1 + 0.35185423664167797878e2 * r->rs * t7 * t2 * t9;   
  t14 = log(t13);   
  t15 = t6 * t14;   
  t16 = 0.1e1 / r->rs;   
  t21 = t6 * (0.1e1 - 0.23684050000000000000e-2 * t4 * t15 * t16);   
  r->f = -0.23305500000000000000e0 * t4 * t21 * t16;   
   
  if(r->order < 1) return;   
   
  t25 = 0.1e1 / t13;   
  t28 = r->rs * r->rs;   
  t29 = 0.1e1 / t28;   
  t34 = t6 * (-0.10000000000000000000e1 * t25 * t16 + 0.23684050000000000000e-2 * t4 * t15 * t29);   
  r->dfdrs = -0.23305500000000000000e0 * t4 * t34 * t16 + 0.23305500000000000000e0 * t4 * t21 * t29;   
  r->dfdz = 0.0e0;   
   
  if(r->order < 2) return;   
   
  t41 = t13 * t13;   
  t42 = 0.1e1 / t41;   
  t45 = t7 * t2 * t9;   
  t51 = 0.1e1 / t28 / r->rs;   
  t56 = t6 * (0.35185423664167797878e2 * t42 * t16 * t45 + 0.20000000000000000000e1 * t25 * t29 - 0.47368100000000000000e-2 * t4 * t15 * t51);   
  r->d2fdrs2 = -0.23305500000000000000e0 * t4 * t56 * t16 + 0.46611000000000000000e0 * t4 * t34 * t29 - 0.46611000000000000000e0 * t4 * t21 * t51;   
  r->d2fdrsz = 0.0e0;   
  r->d2fdz2 = 0.0e0;   
   
  if(r->order < 3) return;   
   
  t69 = t6 * t6;   
  t79 = t28 * t28;   
  t80 = 0.1e1 / t79;   
  r->d3fdrs3 = -0.23305500000000000000e0 * t4 * t6 * (-0.74280842305618755822e4 / t41 / t13 * t16 * t4 / t69 - 0.10555627099250339363e3 * t42 * t29 * t45 - 0.60000000000000000000e1 * t25 * t51 + 0.14210430000000000000e-1 * t4 * t15 * t80) * t16 + 0.69916500000000000000e0 * t4 * t56 * t29 - 0.13983300000000000000e1 * t4 * t34 * t51 + 0.13983300000000000000e1 * t4 * t21 * t80;   
  r->d3fdrs2z = 0.0e0;   
  r->d3fdrsz2 = 0.0e0;   
  r->d3fdz3 = 0.0e0;   
   
  if(r->order < 4) return;   
   
   
}   
   
#ifdef DEVICE   
__device__ void   
xc_lda_xc_zlp_func(const void *p, xc_lda_work_t *r)   
{   
  if(r->nspin == XC_UNPOLARIZED)   
    xc_lda_xc_zlp_func0(p, r);   
  else   
    xc_lda_xc_zlp_func1(p, r);   
}   
#else   
void    
xc_lda_xc_zlp_func(const xc_func_type *p, xc_lda_work_t *r)   
{   
  if(p->nspin == XC_UNPOLARIZED)   
    func0(p, r);   
  else   
    func1(p, r);   
}   
#endif   
   
#ifndef DEVICE   
#define maple2c_order 3   
#define maple2c_func  xc_lda_xc_zlp_func   
#define kernel_id 29 
#endif   
