/* 
  This file was generated automatically with /nfs/data-012/marques/software/source/libxc/svn/scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ../maple/mgga_x_mk00.mpl
  Type of functional: work_mgga_x
*/

#ifdef CUDA
__device__ static void 
xc_mgga_x_mk00_enhance(const void *pt, xc_mgga_work_x_t *r)
#else
static void 
xc_mgga_x_mk00_enhance(const xc_func_type *pt, xc_mgga_work_x_t *r)
#endif
{
  double t1, t2, t3, t4, t6, t8, t11, t15;
  double t18, t23;


  t1 = M_CBRT3;
  t2 = t1 * t1;
  t3 = 0.31415926535897932385e1 * t2;
  t4 = M_CBRT4;
  t6 = POW_1_3(0.1e1 / 0.31415926535897932385e1);
  t8 = t4 / t6;
  t11 = 0.2e1 * r->t - r->u / 0.4e1;
  r->f = 0.2e1 / 0.3e1 * t3 * t8 / t11;

  if(r->order < 1) return;

  r->dfdrs = 0.0e0;
  r->dfdx = 0.0e0;
  t15 = t11 * t11;
  t18 = t3 * t8 / t15;
  r->dfdt = -0.4e1 / 0.3e1 * t18;
  r->dfdu = t18 / 0.6e1;

  if(r->order < 2) return;

  r->d2fdrs2 = 0.0e0;
  r->d2fdx2 = 0.0e0;
  t23 = t3 * t8 / t15 / t11;
  r->d2fdt2 = 0.16e2 / 0.3e1 * t23;
  r->d2fdu2 = t23 / 0.12e2;
  r->d2fdrsx = 0.0e0;
  r->d2fdrst = 0.0e0;
  r->d2fdrsu = 0.0e0;
  r->d2fdxt = 0.0e0;
  r->d2fdxu = 0.0e0;
  r->d2fdtu = -0.2e1 / 0.3e1 * t23;

  if(r->order < 3) return;


}

#ifndef CUDA
#define maple2c_order 3
#define maple2c_func  xc_mgga_x_mk00_enhance
#endif
