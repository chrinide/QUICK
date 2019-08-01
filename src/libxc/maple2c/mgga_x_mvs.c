/*   
  This file was generated automatically with ./maple2c.pl.  
  Do not edit this file directly as it can be overwritten!!  
  
  This Source Code Form is subject to the terms of the Mozilla Public  
  License, v. 2.0. If a copy of the MPL was not distributed with this  
  file, You can obtain one at http://mozilla.org/MPL/2.0/.  
  
  Maple version     : Maple 2016 (X86 64 LINUX)  
  Maple source      : ../maple/mgga_x_mvs.mpl  
  Type of functional: work_mgga_x  
*/  
  
#ifdef DEVICE  
__device__ static void   
xc_mgga_x_mvs_enhance(const void *pt, xc_mgga_work_x_t *r)  
#else  
static void   
xc_mgga_x_mvs_enhance(const xc_func_type *pt, xc_mgga_work_x_t *r)  
#endif  
{  
  double t1, t3, t4, t6, t7, t8, t9, t12;  
  double t13, t14, t17, t20, t21, t22, t24, t26;  
  double t29, t30, t31, t34, t35, t36, t39, t40;  
  double t41, t42, t47, t48, t49, t54, t55, t58;  
  double t61, t64, t65, t67, t70, t71, t73, t75;  
  double t77, t80, t82, t86, t89, t90, t93, t110;  
  double t125, t130;  
  
  
  t1 = r->x * r->x;  
  t3 = r->t - t1 / 0.8e1;  
  t4 = M_CBRT6;  
  t6 = 0.31415926535897932385e1 * 0.31415926535897932385e1;  
  t7 = POW_1_3(t6);  
  t8 = t7 * t7;  
  t9 = 0.1e1 / t8;  
  t12 = 0.1e1 - 0.5e1 / 0.9e1 * t3 * t4 * t9;  
  t13 = t3 * t3;  
  t14 = t4 * t4;  
  t17 = 0.1e1 / t7 / t6;  
  t20 = 0.1e1 - 0.51435185185185185185e0 * t13 * t14 * t17;  
  t21 = t20 * t20;  
  t22 = t13 * t13;  
  t24 = t6 * t6;  
  t26 = 0.1e1 / t8 / t24;  
  t29 = t21 + 0.42512574302697759488e0 * t22 * t4 * t26;  
  t30 = POW_1_4(t29);  
  t31 = 0.1e1 / t30;  
  t34 = 0.1e1 + 0.174e0 * t12 * t31;  
  t35 = t14 * t17;  
  t36 = t1 * t1;  
  t39 = 0.1e1 + 0.40451388888888888890e-4 * t35 * t36;  
  t40 = pow(t39, 0.1e1 / 0.8e1);  
  t41 = 0.1e1 / t40;  
  r->f = t34 * t41;  
  
  if(r->order < 1) return;  
  
  r->dfdrs = 0.0e0;  
  t42 = r->x * t4;  
  t47 = 0.1e1 / t30 / t29;  
  t48 = t12 * t47;  
  t49 = t20 * t3;  
  t54 = t13 * t3 * t4;  
  t55 = t26 * r->x;  
  t58 = 0.51435185185185185184e0 * t49 * t35 * r->x - 0.42512574302697759488e0 * t54 * t55;  
  t61 = 0.24166666666666666667e-1 * t42 * t9 * t31 - 0.43500000000000000000e-1 * t48 * t58;  
  t64 = 0.1e1 / t40 / t39;  
  t65 = t34 * t64;  
  t67 = t35 * t1 * r->x;  
  r->dfdx = t61 * t41 - 0.20225694444444444445e-4 * t65 * t67;  
  t70 = t4 * t9;  
  t71 = t70 * t31;  
  t73 = t49 * t35;  
  t75 = t54 * t26;  
  t77 = -0.20574074074074074074e1 * t73 + 0.17005029721079103795e1 * t75;  
  t80 = -0.96666666666666666667e-1 * t71 - 0.43500000000000000000e-1 * t48 * t77;  
  r->dfdt = t80 * t41;  
  r->dfdu = 0.0e0;  
  
  if(r->order < 2) return;  
  
  r->d2fdrs2 = 0.0e0;  
  t82 = t9 * t47;  
  t86 = t29 * t29;  
  t89 = t12 / t30 / t86;  
  t90 = t58 * t58;  
  t93 = t13 * t4;  
  t110 = t39 * t39;  
  r->d2fdx2 = (0.24166666666666666667e-1 * t71 - 0.12083333333333333334e-1 * t42 * t82 * t58 + 0.54375000000000000000e-1 * t89 * t90 - 0.43500000000000000000e-1 * t48 * (0.11125177897805212620e1 * t93 * t26 * t1 - 0.12858796296296296296e0 * t20 * t1 * t35 + 0.51435185185185185184e0 * t73 - 0.42512574302697759488e0 * t75)) * t41 - 0.40451388888888888890e-4 * t61 * t64 * t67 + 0.22090250651041666667e-7 * t34 / t40 / t110 * t4 * t26 * t36 * t1 - 0.60677083333333333335e-4 * t65 * t35 * t1;  
  t125 = t77 * t77;  
  t130 = t20 * t14;  
  r->d2fdt2 = (0.48333333333333333334e-1 * t70 * t47 * t77 + 0.54375000000000000000e-1 * t89 * t125 - 0.43500000000000000000e-1 * t48 * (0.17800284636488340192e2 * t93 * t26 - 0.20574074074074074074e1 * t130 * t17)) * t41;  
  r->d2fdu2 = 0.0e0;  
  r->d2fdrsx = 0.0e0;  
  r->d2fdrst = 0.0e0;  
  r->d2fdrsu = 0.0e0;  
  r->d2fdxt = (-0.60416666666666666668e-2 * t42 * t82 * t77 + 0.24166666666666666667e-1 * t70 * t47 * t58 + 0.54375000000000000000e-1 * t89 * t58 * t77 - 0.43500000000000000000e-1 * t48 * (-0.44500711591220850479e1 * t93 * t55 + 0.51435185185185185184e0 * t130 * t17 * r->x)) * t41 - 0.20225694444444444445e-4 * t80 * t64 * t67;  
  r->d2fdxu = 0.0e0;  
  r->d2fdtu = 0.0e0;  
  
  if(r->order < 3) return;  
  
  
}  
  
#ifndef DEVICE  
#define maple2c_order 3  
#define maple2c_func  xc_mgga_x_mvs_enhance  
#define kernel_id 13 
#endif  
