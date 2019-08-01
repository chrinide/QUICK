/*    
  This file was generated automatically with ../scripts/maple2c.pl.   
  Do not edit this file directly as it can be overwritten!!   
   
  This Source Code Form is subject to the terms of the Mozilla Public   
  License, v. 2.0. If a copy of the MPL was not distributed with this   
  file, You can obtain one at http://mozilla.org/MPL/2.0/.   
   
  Maple version     : Maple 2016 (X86 64 LINUX)   
  Maple source      : ../maple/lda_c_rpa.mpl   
  Type of functional: work_lda   
*/   
   
#ifdef DEVICE   
__device__ static void   
xc_lda_c_rpa_func0(const void *p, xc_lda_work_t *r)   
#else   
static void   
func0(const xc_func_type *p, xc_lda_work_t *r)   
#endif   
{   
  double t1, t6, t9, t10;   
   
   
  t1 = log(r->rs);   
  r->f = 0.311e-1 * t1 - 0.48e-1 + 0.9e-2 * r->rs * t1 - 0.17e-1 * r->rs;   
   
  if(r->order < 1) return;   
   
  t6 = 0.1e1 / r->rs;   
  r->dfdrs = 0.311e-1 * t6 + 0.9e-2 * t1 - 0.8e-2;   
   
  if(r->order < 2) return;   
   
  t9 = r->rs * r->rs;   
  t10 = 0.1e1 / t9;   
  r->d2fdrs2 = -0.311e-1 * t10 + 0.9e-2 * t6;   
   
  if(r->order < 3) return;   
   
  r->d3fdrs3 = 0.622e-1 / t9 / r->rs - 0.9e-2 * t10;   
   
  if(r->order < 4) return;   
   
   
}   
   
#ifdef DEVICE   
__device__ static void   
xc_lda_c_rpa_func1(const void *p, xc_lda_work_t *r)   
#else   
static void   
func1(const xc_func_type *p, xc_lda_work_t *r)   
#endif   
{   
  double t1, t6, t9, t10;   
   
   
  t1 = log(r->rs);   
  r->f = 0.311e-1 * t1 - 0.48e-1 + 0.9e-2 * r->rs * t1 - 0.17e-1 * r->rs;   
   
  if(r->order < 1) return;   
   
  t6 = 0.1e1 / r->rs;   
  r->dfdrs = 0.311e-1 * t6 + 0.9e-2 * t1 - 0.8e-2;   
  r->dfdz = 0.0e0;   
   
  if(r->order < 2) return;   
   
  t9 = r->rs * r->rs;   
  t10 = 0.1e1 / t9;   
  r->d2fdrs2 = -0.311e-1 * t10 + 0.9e-2 * t6;   
  r->d2fdrsz = 0.0e0;   
  r->d2fdz2 = 0.0e0;   
   
  if(r->order < 3) return;   
   
  r->d3fdrs3 = 0.622e-1 / t9 / r->rs - 0.9e-2 * t10;   
  r->d3fdrs2z = 0.0e0;   
  r->d3fdrsz2 = 0.0e0;   
  r->d3fdz3 = 0.0e0;   
   
  if(r->order < 4) return;   
   
   
}   
   
#ifdef DEVICE   
__device__ void   
xc_lda_c_rpa_func(const void *p, xc_lda_work_t *r)   
{   
  if(r->nspin == XC_UNPOLARIZED)   
    xc_lda_c_rpa_func0(p, r);   
  else   
    xc_lda_c_rpa_func1(p, r);   
}   
#else   
void    
xc_lda_c_rpa_func(const xc_func_type *p, xc_lda_work_t *r)   
{   
  if(p->nspin == XC_UNPOLARIZED)   
    func0(p, r);   
  else   
    func1(p, r);   
}   
#endif   
   
#ifndef DEVICE   
#define maple2c_order 3   
#define maple2c_func  xc_lda_c_rpa_func   
#define kernel_id 14 
#endif   
