/*    
  This file was generated automatically with ./scripts/maple2c.pl.   
  Do not edit this file directly as it can be overwritten!!   
   
  This Source Code Form is subject to the terms of the Mozilla Public   
  License, v. 2.0. If a copy of the MPL was not distributed with this   
  file, You can obtain one at http://mozilla.org/MPL/2.0/.   
   
  Maple version     : Maple 2016 (X86 64 LINUX)   
  Maple source      : ./maple/lda_c_chachiyo.mpl   
  Type of functional: work_lda   
*/   
   
#ifdef DEVICE   
__device__ static void   
xc_lda_c_chachiyo_func0_kernel(const void *p, xc_lda_work_t *r)   
#else   
static void   
func0(const xc_func_type *p, xc_lda_work_t *r)   
#endif   
{   
  double t3, t5, t6, t7, t11, t12, t14, t15;   
  double t18, t20, t22, t24, t25;   
   
  lda_c_chachiyo_params *params;   
   
#ifndef DEVICE   
  assert(p->params != NULL);   
  params = (lda_c_chachiyo_params * )(p->params);   
#else   
  params = (lda_c_chachiyo_params * )(p);   
#endif   
   
  t3 = r->rs * r->rs;   
  t5 = params->bp / t3;   
  t6 = 0.1e1 + params->bp / r->rs + t5;   
  t7 = log(t6);   
  r->f = params->ap * t7;   
   
  if(r->order < 1) return;   
   
  t11 = 0.2e1 * params->bp / t3 / r->rs;   
  t12 = -t5 - t11;   
  t14 = 0.1e1 / t6;   
  r->dfdrs = params->ap * t12 * t14;   
   
  if(r->order < 2) return;   
   
  t15 = t3 * t3;   
  t18 = 0.6e1 * params->bp / t15;   
  t20 = params->ap * (t11 + t18);   
  t22 = t12 * t12;   
  t24 = t6 * t6;   
  t25 = 0.1e1 / t24;   
  r->d2fdrs2 = -params->ap * t22 * t25 + t20 * t14;   
   
  if(r->order < 3) return;   
   
  r->d3fdrs3 = params->ap * (-t18 - 0.24e2 * params->bp / t15 / r->rs) * t14 - 0.3e1 * t20 * t25 * t12 + 0.2e1 * params->ap * t22 * t12 / t24 / t6;   
   
  if(r->order < 4) return;   
   
   
}   
   
#ifdef DEVICE   
__device__ static void   
xc_lda_c_chachiyo_func1_kernel(const void *p, xc_lda_work_t *r)   
#else   
static void   
func1(const xc_func_type *p, xc_lda_work_t *r)   
#endif   
{   
  double t1, t3, t4, t5, t6, t7, t8, t10;   
  double t11, t12, t14, t15, t16, t18, t19, t21;   
  double t23, t26, t29, t31, t32, t34, t35, t37;   
  double t38, t40, t42, t46, t48, t49, t51, t53;   
  double t54, t55, t57, t58, t59, t61, t63, t65;   
  double t67, t68, t70, t74, t76, t79, t82, t87;   
  double t90, t96;   
   
  lda_c_chachiyo_params *params;   
   
#ifndef DEVICE   
  assert(p->params != NULL);   
  params = (lda_c_chachiyo_params * )(p->params);   
#else   
  params = (lda_c_chachiyo_params * )(p);   
#endif   
   
  t1 = 0.1e1 / r->rs;   
  t3 = r->rs * r->rs;   
  t4 = 0.1e1 / t3;   
  t5 = params->bp * t4;   
  t6 = params->bp * t1 + t5 + 0.1e1;   
  t7 = log(t6);   
  t8 = params->ap * t7;   
  t10 = params->bf * t4;   
  t11 = params->bf * t1 + t10 + 0.1e1;   
  t12 = log(t11);   
  t14 = params->af * t12 - t8;   
  t15 = 0.1e1 + r->z;   
  t16 = POW_1_3(t15);   
  t18 = 0.1e1 - r->z;   
  t19 = POW_1_3(t18);   
  t21 = t16 * t15 + t19 * t18 - 0.2e1;   
  t23 = M_CBRT2;   
  t26 = 0.1e1 / (0.2e1 * t23 - 0.2e1);   
  r->f = t14 * t21 * t26 + t8;   
   
  if(r->order < 1) return;   
   
  t29 = 0.1e1 / t3 / r->rs;   
  t31 = 0.2e1 * params->bp * t29;   
  t32 = -t5 - t31;   
  t34 = 0.1e1 / t6;   
  t35 = params->ap * t32 * t34;   
  t37 = 0.2e1 * params->bf * t29;   
  t38 = -t10 - t37;   
  t40 = 0.1e1 / t11;   
  t42 = params->af * t38 * t40 - t35;   
  r->dfdrs = t42 * t21 * t26 + t35;   
  t46 = 0.4e1 / 0.3e1 * t16 - 0.4e1 / 0.3e1 * t19;   
  r->dfdz = t14 * t46 * t26;   
   
  if(r->order < 2) return;   
   
  t48 = t3 * t3;   
  t49 = 0.1e1 / t48;   
  t51 = 0.6e1 * params->bp * t49;   
  t53 = params->ap * (t31 + t51);   
  t54 = t53 * t34;   
  t55 = t32 * t32;   
  t57 = t6 * t6;   
  t58 = 0.1e1 / t57;   
  t59 = params->ap * t55 * t58;   
  t61 = 0.6e1 * params->bf * t49;   
  t63 = params->af * (t37 + t61);   
  t65 = t38 * t38;   
  t67 = t11 * t11;   
  t68 = 0.1e1 / t67;   
  t70 = -params->af * t65 * t68 + t63 * t40 - t54 + t59;   
  r->d2fdrs2 = t70 * t21 * t26 + t54 - t59;   
  r->d2fdrsz = t42 * t46 * t26;   
  t74 = t16 * t16;   
  t76 = t19 * t19;   
  t79 = 0.4e1 / 0.9e1 / t74 + 0.4e1 / 0.9e1 / t76;   
  r->d2fdz2 = t14 * t79 * t26;   
   
  if(r->order < 3) return;   
   
  t82 = 0.1e1 / t48 / r->rs;   
  t87 = params->ap * (-0.24e2 * params->bp * t82 - t51) * t34;   
  t90 = 0.3e1 * t53 * t58 * t32;   
  t96 = 0.2e1 * params->ap * t55 * t32 / t57 / t6;   
  r->d3fdrs3 = t87 - t90 + t96 + (params->af * (-0.24e2 * params->bf * t82 - t61) * t40 - 0.3e1 * t63 * t68 * t38 + 0.2e1 * params->af * t65 * t38 / t67 / t11 - t87 + t90 - t96) * t21 * t26;   
  r->d3fdrs2z = t70 * t46 * t26;   
  r->d3fdrsz2 = t42 * t79 * t26;   
  r->d3fdz3 = t14 * (-0.8e1 / 0.27e2 / t74 / t15 + 0.8e1 / 0.27e2 / t76 / t18) * t26;   
   
  if(r->order < 4) return;   
   
   
}   
   
#ifdef DEVICE   
__device__ void   
xc_lda_c_chachiyo_func_kernel(const void *p, xc_lda_work_t *r)   
{   
  if(r->nspin == XC_UNPOLARIZED)   
xc_lda_c_chachiyo_func0_kernel(p, r);   
  else   
xc_lda_c_chachiyo_func1_kernel(p, r);   
}   
#else   
void    
xc_lda_c_chachiyo_func(const xc_func_type *p, xc_lda_work_t *r)   
{   
  if(p->nspin == XC_UNPOLARIZED)   
    func0(p, r);   
  else   
    func1(p, r);   
}   
#endif   
   
#ifndef DEVICE   
#define maple2c_order 3   
#define maple2c_func  xc_lda_c_chachiyo_func   
#define kernel_id 4 
#endif
