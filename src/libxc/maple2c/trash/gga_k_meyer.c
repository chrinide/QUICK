/* 
  This file was generated automatically with /nfs/data-012/marques/software/source/libxc/svn/scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ../maple/gga_k_meyer.mpl
  Type of functional: work_gga_x
*/

#ifdef DEVICE
__device__ void xc_gga_k_meyer_enhance
  (const void *p,  xc_gga_work_x_t *r)
#else
void xc_gga_k_meyer_enhance
  (const xc_func_type *p,  xc_gga_work_x_t *r)
#endif
{
  double t1, t2, t3, t4, t5, t6, t7, t10;
  double t11, t13, t15, t16, t17, t18, t19, t21;
  double t22, t23, t24, t28, t35, t36, t37, t38;
  double t42, t43, t44, t45, t46, t48, t51, t55;
  double t62, t63, t70, t71, t72, t76, t79, t80;
  double t81, t82, t85, t86, t87, t88, t91, t92;
  double t96, t103, t107, t150, t155, t162, t194;


  t1 = M_CBRT6;
  t2 = 0.31415926535897932385e1 * 0.31415926535897932385e1;
  t3 = cbrt(t2);
  t4 = t3 * t3;
  t5 = 0.1e1 / t4;
  t6 = t1 * t5;
  t7 = r->x * r->x;
  t10 = 0.1e1 - t6 * t7 / 0.864e3;
  t11 = t1 * t1;
  t13 = t11 / t3;
  t15 = t13 * r->x / 0.72e2;
  t16 = 0.1e1 + t15;
  t17 = 0.1e1 - t15;
  t18 = fabs(t17);
  t19 = 0.1e1 / t18;
  t21 = log(t16 * t19);
  t22 = t10 * t21;
  t23 = t1 * t3;
  t24 = 0.1e1 / r->x;
  t28 = 0.1e1 / 0.2e1 + 0.3e1 * t22 * t23 * t24;
  r->f = 0.1e1 + 0.5e1 / 0.72e2 * t28 * t7 * t6;

  if(r->order < 1) return;

  t35 = t18 * t18;
  t36 = 0.1e1 / t35;
  t37 = t16 * t36;
  t38 = fabs(t17) / t17;
  t42 = t37 * t13 * t38 / 0.72e2 + t13 * t19 / 0.72e2;
  t43 = t10 * t42;
  t44 = 0.1e1 / t16;
  t45 = t43 * t44;
  t46 = t18 * t1;
  t48 = t46 * t3 * t24;
  t51 = 0.1e1 / t7;
  t55 = -t13 * t21 / 0.144e3 + 0.3e1 * t45 * t48 - 0.3e1 * t22 * t23 * t51;
  r->dfdx = 0.5e1 / 0.72e2 * t55 * t7 * t6 + 0.5e1 / 0.36e2 * t28 * r->x * t6;

  if(r->order < 2) return;

  t62 = t42 * t44;
  t63 = t62 * t18;
  t70 = 0.1e1 / t35 / t18;
  t71 = t16 * t70;
  t72 = t38 * t38;
  t76 = 0.0;
  t79 = t37 * t6 * t76 / 0.864e3;
  t80 = t6 * t36 * t38 / 0.432e3 + t71 * t6 * t72 / 0.432e3 - t79;
  t81 = t10 * t80;
  t82 = t81 * t44;
  t85 = t16 * t16;
  t86 = 0.1e1 / t85;
  t87 = t86 * t18;
  t88 = t87 * t24;
  t91 = t44 * t38;
  t92 = t91 * t24;
  t96 = t46 * t3 * t51;
  t103 = 0.1e1 / t7 / r->x;
  t107 = -t13 * t63 / 0.72e2 + 0.3e1 * t82 * t48 - t43 * t88 / 0.4e1 - t43 * t92 / 0.4e1 - 0.6e1 * t45 * t96 + t13 * t24 * t21 / 0.144e3 + 0.6e1 * t22 * t23 * t103;
  r->d2fdx2 = 0.5e1 / 0.72e2 * t107 * t7 * t6 + 0.5e1 / 0.18e2 * t55 * r->x * t6 + 0.5e1 / 0.36e2 * t28 * t1 * t5;

  if(r->order < 3) return;

  t150 = t7 * t7;
  t155 = 0.1e1 / t2;
  t162 = t35 * t35;
  t194 = -t13 * t80 * t44 * t18 / 0.48e2 + t6 * t42 * t86 * t18 / 0.576e3 + t6 * t62 * t38 / 0.576e3 - t81 * t88 / 0.2e1 - t81 * t92 / 0.2e1 - t13 * t51 * t21 / 0.48e2 - 0.9e1 * t82 * t96 + 0.18e2 * t45 * t46 * t3 * t103 + 0.3e1 / 0.4e1 * t43 * t87 * t51 + 0.3e1 / 0.4e1 * t43 * t91 * t51 + t13 * t24 * t63 / 0.48e2 - 0.18e2 * t22 * t23 / t150 + 0.3e1 * t10 * (t155 * t70 * t72 / 0.1728e4 - t155 * t36 * t76 / 0.3456e4 + t16 / t162 * t155 * t72 * t38 / 0.1728e4 - t71 * t155 * t38 * t76 / 0.1728e4 - t79) * t44 * t48 + t43 / t85 / t16 * t18 * t24 * t13 / 0.144e3 + t43 * t86 * t13 * t38 * t24 / 0.144e3 + t45 * t13 * t76 * t24 / 0.288e3;
  r->d3fdx3 = 0.5e1 / 0.72e2 * t194 * t7 * t6 + 0.5e1 / 0.12e2 * t107 * r->x * t6 + 0.5e1 / 0.12e2 * t55 * t1 * t5;

  if(r->order < 4) return;


}

#ifndef DEVICE
#define maple2c_order 3
#define maple2c_func  xc_gga_k_meyer_enhance
#endif
