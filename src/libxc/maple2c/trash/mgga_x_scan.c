/* 
  This file was generated automatically with ./scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : .//maple/mgga_x_scan.mpl
  Type of functional: work_mgga_x
*/

#ifdef DEVICE
__device__ static void 
xc_mgga_x_scan_enhance(const void *pt, xc_mgga_work_x_t *r)
#else
static void 
xc_mgga_x_scan_enhance(const xc_func_type *pt, xc_mgga_work_x_t *r)
#endif
{
  double t1, t2, t3, t4, t5, t6, t7, t8;
  double t12, t13, t14, t16, t17, t20, t23, t27;
  double t28, t32, t35, t36, t38, t40, t43, t44;
  double t45, t50, t51, t52, t53, t54, t57, t59;
  double t61, t62, t65, t66, t68, t69, t70, t74;
  double t75, t76, t77, t79, t80, t83, t88, t89;
  double t90, t91, t99, t100, t103, t107, t110, t113;
  double t117, t118, t122, t124, t125, t130, t133, t135;
  double t137, t139, t143, t144, t146, t147, t148, t153;
  double t155, t156, t157, t159, t162, t164, t167, t170;
  double t171, t190, t198, t202, t203, t205, t221, t222;
  double t229, t232, t234, t235, t239, t241, t243, t247;
  double t260, t267, t295, t298, t304, t340, t346;

  mgga_x_scan_params *params;

  assert(pt->params != NULL);
  params = (mgga_x_scan_params * )(pt->params);

  t1 = M_CBRT6;
  t2 = 0.31415926535897932385e1 * 0.31415926535897932385e1;
  t3 = POW_1_3(t2);
  t4 = t3 * t3;
  t5 = 0.1e1 / t4;
  t6 = t5 * t1;
  t7 = r->x * r->x;
  t8 = t7 * t6;
  t12 = 0.100e3 / 0.6561e4 / params->k1 - 0.73e2 / 0.648e3;
  t13 = t1 * t1;
  t14 = t13 * t12;
  t16 = 0.1e1 / t3 / t2;
  t17 = t7 * t7;
  t20 = t7 * t5;
  t23 = exp(-0.27e2 / 0.80e2 * t20 * t1 * t12);
  t27 = sqrt(0.146e3);
  t28 = t1 * t27;
  t32 = r->t - t7 / 0.8e1;
  t35 = 0.5e1 / 0.9e1 * t5 * t1 * t32;
  t36 = 0.1e1 - t35;
  t38 = t36 * t36;
  t40 = exp(-t38 / 0.2e1);
  t43 = 0.7e1 / 0.12960e5 * t20 * t28 + t40 * t36 * t27 / 0.100e3;
  t44 = t43 * t43;
  t45 = params->k1 + 0.5e1 / 0.972e3 * t8 + t23 * t17 * t16 * t14 / 0.576e3 + t44;
  t50 = 0.1e1 + (0.1e1 - 0.1e1 / t45 * params->k1) * params->k1;
  t51 = t35 <= 0.1e1;
  t52 = t32 * params->c1;
  t53 = 0.1e1 / t36;
  t54 = t53 * t6;
  t57 = exp(-0.5e1 / 0.9e1 * t54 * t52);
  t59 = exp(t53 * params->c2);
  t61 = (t51 ? t57 : -t59 * params->d);
  t62 = 0.1e1 - t61;
  t65 = t62 * t50 + 0.1174e1 * t61;
  t66 = sqrt(0.3e1);
  t68 = 0.1e1 / t3 * t13;
  t69 = r->x * t68;
  t70 = sqrt(t69);
  t74 = exp(-0.98958000000000000000e1 / t70 * t66);
  t75 = 0.1e1 - t74;
  r->f = t75 * t65;

  if(r->order < 1) return;

  r->dfdrs = 0.0e0;
  t76 = params->k1 * params->k1;
  t77 = t45 * t45;
  t79 = 0.1e1 / t77 * t76;
  t80 = t1 * r->x;
  t83 = t7 * r->x;
  t88 = t12 * t12;
  t89 = t2 * t2;
  t90 = 0.1e1 / t89;
  t91 = t90 * t88;
  t99 = r->x * t27;
  t100 = t40 * t6;
  t103 = t38 * t27;
  t107 = 0.7e1 / 0.6480e4 * r->x * t5 * t28 + t100 * t99 / 0.720e3 - t100 * r->x * t103 / 0.720e3;
  t110 = 0.5e1 / 0.486e3 * t5 * t80 + t23 * t83 * t16 * t14 / 0.144e3 - 0.9e1 / 0.1280e4 * t23 * t17 * r->x * t91 + 0.2e1 * t107 * t43;
  t113 = params->c1 * r->x;
  t117 = 0.1e1 / t38;
  t118 = t117 * t16;
  t122 = 0.5e1 / 0.36e2 * t54 * t113 + 0.25e2 / 0.324e3 * r->x * t118 * t13 * t52;
  t124 = params->c2 * params->d;
  t125 = t117 * t124;
  t130 = (t51 ? t57 * t122 : 0.5e1 / 0.36e2 * t59 * t5 * t80 * t125);
  t133 = t62 * t110 * t79 - t130 * t50 + 0.1174e1 * t130;
  t135 = t66 * t65;
  t137 = 0.1e1 / t70 / t69;
  t139 = t74 * t68;
  r->dfdx = t75 * t133 - 0.49479000000000000000e1 * t139 * t137 * t135;
  t143 = t40 * t5 * t28;
  t144 = t100 * t103;
  t146 = -t143 / 0.180e3 + t144 / 0.180e3;
  t147 = t146 * t43;
  t148 = t62 * t147;
  t153 = t53 * t5 * t1 * params->c1;
  t155 = t16 * t13;
  t156 = t117 * t155;
  t157 = t156 * t52;
  t159 = -0.5e1 / 0.9e1 * t153 - 0.25e2 / 0.81e2 * t157;
  t162 = t59 * t6 * t125;
  t164 = (t51 ? t57 * t159 : -0.5e1 / 0.9e1 * t162);
  t167 = 0.2e1 * t148 * t79 - t164 * t50 + 0.1174e1 * t164;
  r->dfdt = t75 * t167;
  r->dfdu = 0.0e0;

  if(r->order < 2) return;

  r->d2fdrs2 = 0.0e0;
  t170 = 0.1e1 / t77 / t45 * t76;
  t171 = t110 * t110;
  t190 = t107 * t107;
  t198 = t40 * t36 * t16;
  t202 = t38 * t36;
  t203 = t202 * t27;
  t205 = t40 * t155;
  t221 = 0.1e1 / t202;
  t222 = t221 * t90;
  t229 = t122 * t122;
  t232 = t221 * t124;
  t234 = t59 * t16;
  t235 = t234 * t13 * t7;
  t239 = params->c2 * params->c2;
  t241 = t38 * t38;
  t243 = 0.1e1 / t241 * t239 * params->d;
  t247 = (t51 ? t57 * (0.5e1 / 0.36e2 * t153 - 0.25e2 / 0.648e3 * t156 * t7 * params->c1 - 0.125e3 / 0.972e3 * t7 * t222 * t52 + 0.25e2 / 0.324e3 * t157) + t57 * t229 : -0.25e2 / 0.648e3 * t235 * t232 + 0.5e1 / 0.36e2 * t162 - 0.25e2 / 0.1296e4 * t235 * t243);
  t260 = t74 * t6;
  r->d2fdx2 = t75 * (-0.2e1 * t62 * t171 * t170 + t62 * (0.5e1 / 0.486e3 * t6 + t23 * t7 * t16 * t14 / 0.48e2 - 0.81e2 / 0.1280e4 * t23 * t17 * t91 + 0.243e3 / 0.51200e5 * t23 * t6 * t17 * t7 * t90 * t88 * t12 + 0.2e1 * t190 + 0.2e1 * (0.7e1 / 0.6480e4 * t5 * t28 + t143 / 0.720e3 - t198 * t13 * t7 * t27 / 0.1728e4 - t144 / 0.720e3 + t205 * t7 * t203 / 0.5184e4) * t43) * t79 - 0.2e1 * t130 * t110 * t79 - t247 * t50 + 0.1174e1 * t247) - 0.98958000000000000000e1 * t139 * t137 * t66 * t133 + 0.74218500000000000000e1 * t260 / t70 / t8 * t135 - 0.12081241814357438530e3 * t260 / t83 * t65;
  t267 = t146 * t146;
  t295 = t159 * t159;
  t298 = t59 * t155;
  t304 = (t51 ? t57 * (-0.50e2 / 0.81e2 * t118 * t13 * params->c1 - 0.500e3 / 0.243e3 * t222 * t52) + t57 * t295 : -0.50e2 / 0.81e2 * t298 * t232 - 0.25e2 / 0.81e2 * t298 * t243);
  r->d2fdt2 = t75 * (-0.8e1 * t62 * t267 * t44 * t170 + 0.2e1 * t62 * t267 * t79 + 0.2e1 * t62 * (-t198 * t13 * t27 / 0.108e3 + t205 * t203 / 0.324e3) * t43 * t79 - 0.4e1 * t164 * t147 * t79 - t304 * t50 + 0.1174e1 * t304);
  r->d2fdu2 = 0.0e0;
  r->d2fdrsx = 0.0e0;
  r->d2fdrst = 0.0e0;
  r->d2fdrsu = 0.0e0;
  t340 = t234 * t13 * r->x;
  t346 = (t51 ? t57 * (0.25e2 / 0.162e3 * t156 * t113 + 0.125e3 / 0.243e3 * r->x * t222 * t52) + t57 * t159 * t122 : 0.25e2 / 0.162e3 * t340 * t232 + 0.25e2 / 0.324e3 * t340 * t243);
  r->d2fdxt = t75 * (-0.4e1 * t148 * t110 * t170 + t62 * (0.2e1 * t107 * t146 + 0.2e1 * (t198 * t13 * t99 / 0.432e3 - t205 * r->x * t203 / 0.1296e4) * t43) * t79 - t164 * t110 * t79 - 0.2e1 * t130 * t147 * t79 - t346 * t50 + 0.1174e1 * t346) - 0.49479000000000000000e1 * t139 * t137 * t66 * t167;
  r->d2fdxu = 0.0e0;
  r->d2fdtu = 0.0e0;

  if(r->order < 3) return;


}

#ifndef DEVICE
#define maple2c_order 3
#define maple2c_func  xc_mgga_x_scan_enhance
#endif
