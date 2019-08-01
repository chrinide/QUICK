/* 
  This file was generated automatically with /nfs/data-012/marques/software/source/libxc/svn/scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ../maple/gga_x_ssb_sw.mpl
  Type of functional: work_gga_x
*/

void xc_gga_x_ssb_sw_enhance
  (const xc_func_type *p,  xc_gga_work_x_t *r)
{
  double t1, t2, t3, t4, t5, t6, t7, t8;
  double t12, t13, t17, t18, t21, t22, t26, t27;
  double t31, t36, t37, t38, t39, t47, t48, t49;
  double t50, t51, t52, t64, t66, t68, t79, t83;
  double t86, t98, t116;

  gga_x_ssb_sw_params *params;
 
  assert(p->params != NULL);
  params = (gga_x_ssb_sw_params * )(p->params);

  t1 = M_CBRT6;
  t2 = params->B * t1;
  t3 = 0.31415926535897932385e1 * 0.31415926535897932385e1;
  t4 = cbrt(t3);
  t5 = t4 * t4;
  t6 = 0.1e1 / t5;
  t7 = r->x * r->x;
  t8 = t6 * t7;
  t12 = 0.1e1 + params->C * t1 * t8 / 0.24e2;
  t13 = 0.1e1 / t12;
  t17 = params->D * t1;
  t18 = t1 * t1;
  t21 = 0.1e1 / t4 / t3;
  t22 = t7 * t7;
  t26 = 0.1e1 + params->E * t18 * t21 * t22 / 0.576e3;
  t27 = 0.1e1 / t26;
  r->f = params->A + t2 * t8 * t13 / 0.24e2 - t17 * t8 * t27 / 0.24e2;

  if(r->order < 1) return;

  t31 = t6 * r->x;
  t36 = params->B * t18 * t21;
  t37 = t7 * r->x;
  t38 = t12 * t12;
  t39 = 0.1e1 / t38;
  t47 = t3 * t3;
  t48 = 0.1e1 / t47;
  t49 = params->D * t48;
  t50 = t22 * r->x;
  t51 = t26 * t26;
  t52 = 0.1e1 / t51;
  r->dfdx = t2 * t31 * t13 / 0.12e2 - t36 * t37 * t39 * params->C / 0.288e3 - t17 * t31 * t27 / 0.12e2 + t49 * t50 * t52 * params->E / 0.576e3;

  if(r->order < 2) return;

  t64 = params->B * t48;
  t66 = 0.1e1 / t38 / t12;
  t68 = params->C * params->C;
  t79 = t22 * t22;
  t83 = params->E * params->E;
  t86 = 0.1e1 / t51 / t26 * t83 * t18 * t21;
  r->d2fdx2 = t2 * t6 * t13 / 0.12e2 - 0.5e1 / 0.288e3 * t36 * t7 * t39 * params->C + t64 * t22 * t66 * t68 / 0.288e3 - t17 * t6 * t27 / 0.12e2 + 0.7e1 / 0.576e3 * t49 * t22 * t52 * params->E - t49 * t79 * t86 / 0.41472e5;

  if(r->order < 3) return;

  t98 = t38 * t38;
  t116 = t51 * t51;
  r->d3fdx3 = -t36 * t39 * params->C * r->x / 0.24e2 + t64 * t37 * t66 * t68 / 0.32e2 - t64 * t50 / t98 * t68 * params->C * t1 * t6 / 0.1152e4 + 0.5e1 / 0.96e2 * t49 * t52 * params->E * t37 - 0.5e1 / 0.13824e5 * t49 * t22 * t37 * t86 + t49 * t79 * t37 / t116 * t83 * params->E * t1 / t5 / t47 / 0.331776e6;

  if(r->order < 4) return;


}

#define maple2c_order 3
#define maple2c_func  xc_gga_x_ssb_sw_enhance
