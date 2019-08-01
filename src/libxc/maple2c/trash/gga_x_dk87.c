/* 
  This file was generated automatically with /nfs/data-012/marques/software/source/libxc/svn/scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ../maple/gga_x_dk87.mpl
  Type of functional: work_gga_x
*/

#ifdef DEVICE
__device__ void xc_gga_x_dk87_enhance
  (const void *p,  xc_gga_work_x_t *r)
#else
void xc_gga_x_dk87_enhance
  (const xc_func_type *p,  xc_gga_work_x_t *r)
#endif
{
  double t1, t2, t3, t4, t5, t6, t7, t8;
  double t9, t10, t11, t12, t13, t14, t15, t16;
  double t17, t18, t19, t22, t23, t34, t38, t42;
  double t43, t44, t45, t47, t55, t63, t72, t80;
  double t83, t85, t86, t90, t91, t99, t134;

  gga_x_dk87_params *params;
 
#ifndef DEVICE
  assert(p->params != NULL);
  params = (gga_x_dk87_params * )(p->params);
#else
  params = (gga_x_dk87_params * )(p);
#endif

  t1 = 0.1e1 / 0.31415926535897932385e1;
  t2 = M_CBRT6;
  t3 = t2 * t2;
  t4 = t1 * t3;
  t5 = 0.31415926535897932385e1 * 0.31415926535897932385e1;
  t6 = cbrt(t5);
  t7 = 0.1e1 / t6;
  t8 = M_CBRT3;
  t9 = t8 * t8;
  t10 = t7 * t9;
  t11 = t4 * t10;
  t12 = M_CBRT4;
  t13 = cbrt(t1);
  t14 = 0.1e1 / t13;
  t15 = t12 * t14;
  t16 = r->x * r->x;
  t17 = pow(r->x, params->alpha);
  t18 = params->a1 * t17;
  t19 = 0.1e1 + t18;
  t22 = t16 * params->b1 + 0.1e1;
  t23 = 0.1e1 / t22;
  r->f = 0.1e1 + 0.7e1 / 0.11664e5 * t11 * t15 * t16 * t19 * t23;

  if(r->order < 1) return;

  t34 = t4 * t10 * t12;
  t38 = t17 * params->alpha * t23;
  t42 = t16 * r->x;
  t43 = t14 * t42;
  t44 = t22 * t22;
  t45 = 0.1e1 / t44;
  t47 = t19 * t45 * params->b1;
  r->dfdx = 0.7e1 / 0.5832e4 * t11 * t15 * r->x * t19 * t23 + 0.7e1 / 0.11664e5 * t34 * t14 * r->x * params->a1 * t38 - 0.7e1 / 0.5832e4 * t34 * t43 * t47;

  if(r->order < 2) return;

  t55 = t14 * params->a1;
  t63 = params->alpha * params->alpha;
  t72 = t4 * t7 * t9 * t12 * t14;
  t80 = t16 * t16;
  t83 = 0.1e1 / t44 / t22;
  t85 = params->b1 * params->b1;
  t86 = t19 * t83 * t85;
  r->d2fdx2 = 0.7e1 / 0.5832e4 * t11 * t15 * t19 * t23 + 0.7e1 / 0.3888e4 * t34 * t55 * t38 - 0.35e2 / 0.5832e4 * t34 * t14 * t16 * t47 + 0.7e1 / 0.11664e5 * t34 * t55 * t17 * t63 * t23 - 0.7e1 / 0.2916e4 * t72 * t16 * params->a1 * t17 * params->alpha * t45 * params->b1 + 0.7e1 / 0.1458e4 * t34 * t14 * t80 * t86;

  if(r->order < 3) return;

  t90 = t55 * t17;
  t91 = 0.1e1 / r->x;
  t99 = t45 * r->x * params->b1;
  t134 = t44 * t44;
  r->d3fdx3 = 0.7e1 / 0.5832e4 * t34 * t90 * params->alpha * t91 * t23 - 0.7e1 / 0.486e3 * t34 * t14 * t19 * t99 + 0.7e1 / 0.3888e4 * t34 * t90 * t63 * t91 * t23 - 0.7e1 / 0.486e3 * t72 * t18 * params->alpha * t99 + 0.7e1 / 0.162e3 * t34 * t43 * t86 + 0.7e1 / 0.11664e5 * t34 * t90 * t63 * params->alpha * t91 * t23 - 0.7e1 / 0.1944e4 * t72 * t18 * t63 * t99 + 0.7e1 / 0.486e3 * t72 * t42 * params->a1 * t17 * params->alpha * t83 * t85 - 0.7e1 / 0.243e3 * t34 * t14 * t80 * r->x * t19 / t134 * t85 * params->b1;

  if(r->order < 4) return;


}

#ifndef DEVICE
#define maple2c_order 3
#define maple2c_func  xc_gga_x_dk87_enhance
#endif
