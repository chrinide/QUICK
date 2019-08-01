/* 
  This file was generated automatically with /nfs/data-012/marques/software/source/libxc/svn/scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ../maple/mgga_x_gvt4.mpl
  Type of functional: work_mgga_x
*/

#ifdef CUDA
__device__ static void 
xc_mgga_x_gvt4_enhance(const void *pt, xc_mgga_work_x_t *r)
#else
static void 
xc_mgga_x_gvt4_enhance(const xc_func_type *pt, xc_mgga_work_x_t *r)
#endif
{
  double t1, t4, t5, t6, t7, t8, t9, t11;
  double t17, t18, t19, t21, t25, t28, t30, t32;
  double t35, t36, t38, t40, t42, t47, t54, t56;
  double t57, t58, t66, t70, t72, t80, t88, t93;
  double t102;


  t1 = r->x * r->x;
  t4 = M_CBRT6;
  t5 = t4 * t4;
  t6 = 0.31415926535897932385e1 * 0.31415926535897932385e1;
  t7 = POW_1_3(t6);
  t8 = t7 * t7;
  t9 = t5 * t8;
  t11 = 0.1e1 + 0.186726e-2 * t1 + 0.373452e-2 * r->t - 0.11203560000000000000e-2 * t9;
  t17 = -0.3556788e-2 * t1 + 0.12500652e-1 * r->t - 0.37501956000000000000e-2 * t9;
  t18 = t11 * t11;
  t19 = 0.1e1 / t18;
  t21 = t1 * t1;
  t25 = 0.2e1 * r->t - 0.3e1 / 0.5e1 * t9;
  t28 = t25 * t25;
  t30 = -0.2354518e-4 * t21 - 0.1282732e-3 * t1 * t25 + 0.3574822e-3 * t28;
  t32 = 0.1e1 / t18 / t11;
  t35 = M_CBRT3;
  t36 = t35 * t35;
  t38 = M_CBRT4;
  t40 = POW_1_3(0.1e1 / 0.31415926535897932385e1);
  t42 = t38 / t40;
  r->f = -0.2e1 / 0.9e1 * (-0.9800683e0 / t11 + t17 * t19 + t30 * t32) * t36 * t42;

  if(r->order < 1) return;

  r->dfdrs = 0.0e0;
  t47 = t17 * t32;
  t54 = -0.9418072e-4 * t1 * r->x - 0.2565464e-3 * r->x * t25;
  t56 = t18 * t18;
  t57 = 0.1e1 / t56;
  t58 = t30 * t57;
  r->dfdx = -0.2e1 / 0.9e1 * (-0.3453491332284e-2 * t19 * r->x - 0.746904e-2 * t47 * r->x + t54 * t32 - 0.1120356e-1 * t58 * r->x) * t36 * t42;
  t66 = 0.746904e-2 * t47;
  t70 = -0.2565464e-3 * t1 + 0.28598576e-2 * r->t - 0.85795728000000000000e-3 * t9;
  t72 = 0.1120356e-1 * t58;
  r->dfdt = -0.2e1 / 0.9e1 * (0.16160736667716e-1 * t19 - t66 + t70 * t32 - t72) * t36 * t42;
  r->dfdu = 0.0e0;

  if(r->order < 2) return;

  r->d2fdrs2 = 0.0e0;
  t80 = t17 * t57;
  t88 = t54 * t57;
  t93 = t30 / t56 / t11;
  r->d2fdx2 = -0.2e1 / 0.9e1 * (0.7892584858752248736e-4 * t32 * t1 - 0.3453491332284e-2 * t19 + 0.836798377824e-4 * t80 * t1 - t66 + (-0.28254216e-3 * t1 - 0.5130928e-3 * r->t + 0.15392784000000000000e-3 * t9) * t32 - 0.2240712e-1 * t88 * r->x + 0.1673596755648e-3 * t93 * t1 - t72) * t36 * t42;
  t102 = t70 * t57;
  r->d2fdt2 = -0.2e1 / 0.9e1 * (0.26457845415852824874e-2 * t32 + 0.836798377824e-4 * t80 - 0.2240712e-1 * t102 + 0.1673596755648e-3 * t93) * t36 * t42;
  r->d2fdu2 = 0.0e0;
  r->d2fdrsx = 0.0e0;
  r->d2fdrst = 0.0e0;
  r->d2fdrsu = 0.0e0;
  r->d2fdxt = -0.2e1 / 0.9e1 * (-0.58066640491359751264e-3 * t32 * r->x + 0.836798377824e-4 * t80 * r->x - 0.1120356e-1 * t88 - 0.1120356e-1 * t102 * r->x + 0.1673596755648e-3 * t93 * r->x) * t36 * t42;
  r->d2fdxu = 0.0e0;
  r->d2fdtu = 0.0e0;

  if(r->order < 3) return;


}

#ifndef CUDA
#define maple2c_order 3
#define maple2c_func  xc_mgga_x_gvt4_enhance
#endif
