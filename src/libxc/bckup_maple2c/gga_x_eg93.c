/* 
  This file was generated automatically with /nfs/data-012/marques/software/source/libxc/svn/scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ../maple/gga_x_eg93.mpl
  Type of functional: work_gga_x
*/

void xc_gga_x_eg93_enhance
  (const xc_func_type *p,  xc_gga_work_x_t *r)
{
  double t1, t2, t3, t4, t6, t7, t8, t10;
  double t13, t14, t15, t17, t19, t23, t24, t25;
  double t27, t28, t30, t32, t34, t35, t36, t40;
  double t43, t46, t48, t52, t53, t54, t60, t62;
  double t75;


  t1 = M_CBRT6;
  t2 = 0.31415926535897932385e1 * 0.31415926535897932385e1;
  t3 = cbrt(t2);
  t4 = t3 * t3;
  t6 = t1 / t4;
  t7 = r->x * r->x;
  t8 = t6 * t7;
  t10 = t1 * t1;
  t13 = t10 / t3 / t2;
  t14 = t7 * t7;
  t15 = t13 * t14;
  t17 = t14 * t7;
  t19 = 0.1e1 + 0.68630291666666666664e-1 * t8 + 0.17015937500000000000e-2 * t15 + 0.77525097764432616297e-7 * t17;
  t23 = 0.1e1 + 0.63486291666666666666e-1 * t8 + 0.63755034722222222221e-3 * t15 + 0.50269449564821471180e-7 * t17;
  t24 = 0.1e1 / t23;
  r->f = t19 * t24;

  if(r->order < 1) return;

  t25 = t6 * r->x;
  t27 = t7 * r->x;
  t28 = t13 * t27;
  t30 = t14 * r->x;
  t32 = 0.13726058333333333333e0 * t25 + 0.68063750000000000000e-2 * t28 + 0.46515058658659569778e-6 * t30;
  t34 = t23 * t23;
  t35 = 0.1e1 / t34;
  t36 = t19 * t35;
  t40 = 0.12697258333333333333e0 * t25 + 0.25502013888888888888e-2 * t28 + 0.30161669738892882708e-6 * t30;
  r->dfdx = t32 * t24 - t36 * t40;

  if(r->order < 2) return;

  t43 = t13 * t7;
  t46 = 0.13726058333333333333e0 * t6 + 0.20419125000000000000e-1 * t43 + 0.23257529329329784889e-5 * t14;
  t48 = t32 * t35;
  t52 = 0.1e1 / t34 / t23;
  t53 = t19 * t52;
  t54 = t40 * t40;
  t60 = 0.12697258333333333333e0 * t6 + 0.76506041666666666664e-2 * t43 + 0.15080834869446441354e-5 * t14;
  r->d2fdx2 = t46 * t24 - t36 * t60 - 0.2e1 * t48 * t40 + 0.2e1 * t53 * t54;

  if(r->order < 3) return;

  t62 = t13 * r->x;
  t75 = t34 * t34;
  r->d3fdx3 = (0.40838250000000000000e-1 * t62 + 0.93030117317319139556e-5 * t27) * t24 - 0.3e1 * t46 * t35 * t40 + 0.6e1 * t32 * t52 * t54 - 0.3e1 * t48 * t60 - 0.6e1 * t19 / t75 * t54 * t40 + 0.6e1 * t53 * t40 * t60 - t36 * (0.15301208333333333333e-1 * t62 + 0.60323339477785765416e-5 * t27);

  if(r->order < 4) return;


}

#define maple2c_order 3
#define maple2c_func  xc_gga_x_eg93_enhance
