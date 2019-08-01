/*    
  This file was generated automatically with ./maple2c.pl.   
  Do not edit this file directly as it can be overwritten!!   
   
  This Source Code Form is subject to the terms of the Mozilla Public   
  License, v. 2.0. If a copy of the MPL was not distributed with this   
  file, You can obtain one at http://mozilla.org/MPL/2.0/.   
   
  Maple version     : Maple 2017 (X86 64 LINUX)   
  Maple source      : ../maple/gga_x_chachiyo.mpl   
  Type of functional: work_gga_x   
*/   
   
#ifdef DEVICE   
__device__ void xc_gga_x_chachiyo_enhance   
  (const void *p,  xc_gga_work_x_t *r)   
#else   
void xc_gga_x_chachiyo_enhance   
  (const xc_func_type *p,  xc_gga_work_x_t *r)   
#endif   
{   
  double t1, t2, t3, t4, t5, t6, t10, t11;   
  double t12, t13, t15, t17, t18, t20, t22, t23;   
  double t24, t25, t31, t32, t35, t36, t38, t39;   
  double t40, t42, t45, t46, t47, t48, t51, t55;   
  double t56, t57, t60, t61, t63, t67, t71, t72;   
  double t78, t82, t84, t108, t112, t119, t123, t138;   
   
   
  t1 = M_CBRT3;   
  t2 = POW_1_3(0.31415926535897932385e1);   
  t3 = t2 * t2;   
  t4 = t1 * t3;   
  t5 = M_CBRT2;   
  t6 = r->x * r->x;   
  t10 = 0.31415926535897932385e1 * 0.31415926535897932385e1;   
  t11 = t1 * t1;   
  t12 = t11 * t2;   
  t13 = t5 * t5;   
  t15 = t12 * t13 * r->x;   
  t17 = 0.1e1 + t15 / 0.27e2;   
  t18 = log(t17);   
  t20 = 0.2e1 / 0.81e2 * t4 * t5 * t6 + t10 * t18;   
  t22 = t15 / 0.9e1 + t10;   
  t23 = 0.1e1 / t22;   
  t24 = t20 * t23;   
  t25 = 0.1e1 / t18;   
  r->f = t24 * t25;   
   
  if(r->order < 1) return;   
   
  t31 = 0.1e1 / t17;   
  t32 = t13 * t31;   
  t35 = 0.4e1 / 0.81e2 * t4 * t5 * r->x + t2 * t10 * t11 * t32 / 0.27e2;   
  t36 = t35 * t23;   
  t38 = t22 * t22;   
  t39 = 0.1e1 / t38;   
  t40 = t20 * t39;   
  t42 = t12 * t13;   
  t45 = t18 * t18;   
  t46 = 0.1e1 / t45;   
  t47 = t24 * t46;   
  t48 = t12 * t32;   
  r->dfdx = t36 * t25 - t40 * t25 * t42 / 0.9e1 - t47 * t48 / 0.27e2;   
   
  if(r->order < 2) return;   
   
  t51 = t4 * t5;   
  t55 = t17 * t17;   
  t56 = 0.1e1 / t55;   
  t57 = t5 * t56;   
  t60 = 0.4e1 / 0.81e2 * t51 - 0.2e1 / 0.243e3 * t3 * t10 * t1 * t57;   
  t61 = t60 * t23;   
  t63 = t35 * t39;   
  t67 = t36 * t46;   
  t71 = 0.1e1 / t38 / t22;   
  t72 = t20 * t71;   
  t78 = t4 * t5 * t31;   
  t82 = 0.1e1 / t45 / t18;   
  t84 = t4 * t57;   
  r->d2fdx2 = t61 * t25 - 0.2e1 / 0.9e1 * t63 * t25 * t42 - 0.2e1 / 0.27e2 * t67 * t48 + 0.4e1 / 0.27e2 * t72 * t25 * t51 + 0.4e1 / 0.81e2 * t40 * t46 * t78 + 0.4e1 / 0.243e3 * t24 * t82 * t84 + 0.2e1 / 0.243e3 * t47 * t84;   
   
  if(r->order < 3) return;   
   
  t108 = t46 * 0.31415926535897932385e1;   
  t112 = t82 * 0.31415926535897932385e1;   
  t119 = t45 * t45;   
  t123 = 0.1e1 / t55 / t17;   
  t138 = t38 * t38;   
  r->d3fdx3 = -t60 * t39 * t25 * t42 / 0.3e1 + 0.4e1 / 0.9e1 * t35 * t71 * t25 * t51 - t61 * t46 * t48 / 0.9e1 + 0.4e1 / 0.27e2 * t63 * t46 * t78 + 0.4e1 / 0.81e2 * t36 * t82 * t84 + 0.2e1 / 0.81e2 * t67 * t84 - 0.8e1 / 0.81e2 * t72 * t108 * t31 - 0.8e1 / 0.243e3 * t40 * t112 * t56 - 0.4e1 / 0.243e3 * t40 * t108 * t56 - 0.8e1 / 0.729e3 * t24 / t119 * 0.31415926535897932385e1 * t123 - 0.8e1 / 0.729e3 * t24 * t112 * t123 - 0.8e1 / 0.2187e4 * t24 * t108 * t123 + 0.8e1 / 0.2187e4 * t10 * 0.31415926535897932385e1 * t123 * t23 * t25 - 0.8e1 / 0.27e2 * t20 / t138 * t25 * 0.31415926535897932385e1;   
   
  if(r->order < 4) return;   
   
   
}   
   
#ifndef DEVICE   
#define maple2c_order 3   
#define maple2c_func  xc_gga_x_chachiyo_enhance   
#define kernel_id 21 
#endif   
