/* 
  This file was generated automatically with /nfs/data-012/marques/software/source/libxc/svn/scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ../maple/gga_x_bpccac.mpl
  Type of functional: work_gga_x
*/

#ifdef CUDA
__device__ void xc_gga_x_bpccac_enhance
  (const void *p,  xc_gga_work_x_t *r)
#else
void xc_gga_x_bpccac_enhance
  (const xc_func_type *p,  xc_gga_work_x_t *r)
#endif
{
  double t2, t3, t4, t5, t6, t7, t8, t9;
  double t10, t11, t12, t13, t15, t18, t21, t24;
  double t28, t31, t32, t34, t35, t37, t40, t44;
  double t45, t47, t49, t50, t51, t52, t53, t54;
  double t55, t56, t60, t61, t69, t70, t72, t73;
  double t74, t78, t79, t80, t84, t86, t89, t90;
  double t91, t92, t95, t98, t99, t100, t106, t109;
  double t114, t115, t121, t122, t124, t128, t129, t130;
  double t136, t140, t142, t148, t149, t150, t154, t178;
  double t192, t203, t215;


  t2 = exp(-r->x + 0.19e2);
  t3 = 0.1e1 + t2;
  t4 = 0.1e1 / t3;
  t5 = 0.1e1 - t4;
  t6 = POW_1_3(0.6e1);
  t7 = 0.31415926535897932385e1 * 0.31415926535897932385e1;
  t8 = POW_1_3(t7);
  t9 = t8 * t8;
  t10 = 0.1e1 / t9;
  t11 = t6 * t10;
  t12 = r->x * r->x;
  t13 = t11 * t12;
  t15 = 0.1227e1 + 0.91464571985215458336e-2 * t13;
  t18 = 0.2227e1 - 0.1505529e1 / t15;
  t21 = exp(-0.25e2 / 0.6e1 * t13);
  t24 = (0.2743e0 - 0.1508e0 * t21) * t6;
  t28 = t6 * t6;
  t31 = t28 / t8 / t7;
  t32 = t12 * t12;
  t34 = 0.69444444444444444444e-5 * t31 * t32;
  t35 = t24 * t10 * t12 / 0.24e2 - t34;
  t37 = t28 / t8;
  t40 = log(0.64963333333333333333e0 * t37 * r->x + sqrt(POW_2(0.64963333333333333333e0 * t37 * r->x) + 0.1e1));
  t44 = 0.1e1 + 0.16370833333333333333e-1 * t37 * r->x * t40 + t34;
  t45 = 0.1e1 / t44;
  t47 = t35 * t45 + 0.1e1;
  r->f = t5 * t18 + t4 * t47;

  if(r->order < 1) return;

  t49 = t3 * t3;
  t50 = 0.1e1 / t49;
  t51 = t50 * t2;
  t52 = t51 * t18;
  t53 = t15 * t15;
  t54 = 0.1e1 / t53;
  t55 = t5 * t54;
  t56 = t11 * r->x;
  t60 = t50 * t47 * t2;
  t61 = t12 * r->x;
  t69 = 0.27777777777777777778e-4 * t31 * t61;
  t70 = 0.52361111111111111112e-1 * t31 * t61 * t21 + t24 * t10 * r->x / 0.12e2 - t69;
  t72 = t44 * t44;
  t73 = 0.1e1 / t72;
  t74 = t35 * t73;
  t78 = 0.25321408066666666666e1 * t13 + 0.1e1;
  t79 = sqrt(t78);
  t80 = 0.1e1 / t79;
  t84 = 0.16370833333333333333e-1 * t37 * t40 + 0.63810234166666666665e-1 * t11 * r->x * t80 + t69;
  t86 = t70 * t45 - t74 * t84;
  r->dfdx = -t52 + 0.27540513119265888754e-1 * t55 * t56 + t60 + t4 * t86;

  if(r->order < 2) return;

  t89 = 0.1e1 / t49 / t3;
  t90 = t2 * t2;
  t91 = t89 * t90;
  t92 = t91 * t18;
  t95 = t51 * t54 * t56;
  t98 = 0.1e1 / t53 / t15;
  t99 = t5 * t98;
  t100 = t31 * t12;
  t106 = t89 * t47 * t90;
  t109 = t50 * t86 * t2;
  t114 = t7 * t7;
  t115 = 0.1e1 / t114;
  t121 = 0.83333333333333333334e-4 * t100;
  t122 = 0.26180555555555555556e0 * t31 * t12 * t21 - 0.26180555555555555556e1 * t115 * t32 * t21 + t24 * t10 / 0.12e2 - t121;
  t124 = t70 * t73;
  t128 = 0.1e1 / t72 / t44;
  t129 = t35 * t128;
  t130 = t84 * t84;
  t136 = 0.1e1 / t79 / t78;
  t140 = 0.12762046833333333333e0 * t11 * t80 - 0.16157649781637222777e0 * t31 * t12 * t136 + t121;
  t142 = t122 * t45 - 0.2e1 * t124 * t84 + 0.2e1 * t129 * t130 - t74 * t140;
  r->d2fdx2 = -0.2e1 * t92 + t52 - 0.55081026238531777508e-1 * t95 - 0.10075924978827462422e-2 * t99 * t100 + 0.27540513119265888754e-1 * t55 * t11 + 0.2e1 * t106 + 0.2e1 * t109 - t60 + t4 * t142;

  if(r->order < 3) return;

  t148 = t49 * t49;
  t149 = 0.1e1 / t148;
  t150 = t90 * t2;
  t154 = t53 * t53;
  t178 = t31 * r->x;
  t192 = 0.16666666666666666667e-3 * t178;
  t203 = t72 * t72;
  t215 = t78 * t78;
  r->d3fdx3 = 0.82621539357797666262e-1 * t95 - t52 + t60 + 0.6e1 * t92 - 0.3e1 * t109 - 0.6e1 * t106 - 0.6e1 * t149 * t150 * t18 + 0.34059701828023721654e-5 * t5 / t154 * t61 + 0.6e1 * t89 * t86 * t90 + 0.6e1 * t149 * t47 * t150 + 0.3e1 * t50 * t142 * t2 - 0.16524307871559533253e0 * t91 * t54 * t56 - 0.82621539357797666262e-1 * t51 * t54 * t6 * t10 + 0.30227774936482387265e-2 * t51 * t98 * t100 - 0.30227774936482387266e-2 * t99 * t178 + t4 * ((0.62833333333333333334e0 * t31 * r->x * t21 - 0.23562500000000000000e2 * t115 * t61 * t21 + 0.21817129629629629630e2 * t115 * t32 * r->x * t11 * t21 - t192) * t45 - 0.3e1 * t122 * t73 * t84 + 0.6e1 * t70 * t128 * t130 - 0.3e1 * t124 * t140 - 0.6e1 * t35 / t203 * t130 * t84 + 0.6e1 * t129 * t84 * t140 - t74 * (-0.64630599126548891108e0 * t31 * t136 * r->x + 0.75603004865054533525e-1 * t61 / t79 / t215 + t192));

  if(r->order < 4) return;


}

#ifndef CUDA
#define maple2c_order 3
#define maple2c_func  xc_gga_x_bpccac_enhance
#endif
