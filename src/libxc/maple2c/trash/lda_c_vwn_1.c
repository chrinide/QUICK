/* 
  This file was generated automatically with ../scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ../maple/lda_c_vwn_1.mpl
  Type of functional: work_lda
*/

#ifdef DEVICE
__device__ static void
xc_lda_c_vwn_1_func0(const void *p, xc_lda_work_t *r)
#else
static void
func0(const xc_func_type *p, xc_lda_work_t *r)
#endif
{
  double t1, t3, t4, t6, t9, t12, t14, t15;
  double t17, t19, t20, t22, t24, t26, t27, t28;
  double t31, t32, t35, t36, t39, t41, t43, t44;
  double t45, t51, t53, t58, t59, t62, t63, t64;
  double t70, t75, t79, t81, t83, t84, t89, t90;
  double t95, t100, t101, t105, t106, t107, t131, t140;
  double t150, t151, t153, t175, t191;


  t1 = sqrt(r->rs);
  t3 = r->rs + 0.372744e1 * t1 + 0.129352e2;
  t4 = 0.1e1 / t3;
  t6 = log(r->rs * t4);
  t9 = 0.2e1 * t1 + 0.372744e1;
  t12 = atan(0.61519908197590802322e1 / t9);
  t14 = t1 + 0.10498e0;
  t15 = t14 * t14;
  t17 = log(t15 * t4);
  r->f = 0.310907e-1 * t6 + 0.38783294878113014393e-1 * t12 + 0.96902277115443742139e-3 * t17;

  if(r->order < 1) return;

  t19 = t3 * t3;
  t20 = 0.1e1 / t19;
  t22 = 0.1e1 / t1;
  t24 = 0.1e1 + 0.18637200000000000000e1 * t22;
  t26 = -r->rs * t20 * t24 + t4;
  t27 = 0.1e1 / r->rs;
  t28 = t26 * t27;
  t31 = t9 * t9;
  t32 = 0.1e1 / t31;
  t35 = 0.37846991046400000000e2 * t32 + 0.1e1;
  t36 = 0.1e1 / t35;
  t39 = t14 * t4;
  t41 = t15 * t20;
  t43 = t39 * t22 - t41 * t24;
  t44 = 0.1e1 / t15;
  t45 = t43 * t44;
  r->dfdrs = 0.310907e-1 * t28 * t3 - 0.23859447405016062107e0 * t32 * t22 * t36 + 0.96902277115443742139e-3 * t45 * t3;

  if(r->order < 2) return;

  t51 = 0.1e1 / t19 / t3;
  t53 = t24 * t24;
  t58 = -0.2e1 * t20 * t24 + 0.2e1 * r->rs * t51 * t53 + 0.93186000000000000000e0 * t22 * t20;
  t59 = t58 * t27;
  t62 = r->rs * r->rs;
  t63 = 0.1e1 / t62;
  t64 = t26 * t63;
  t70 = 0.1e1 / t31 / t9;
  t75 = 0.1e1 / t1 / r->rs;
  t79 = t31 * t31;
  t81 = 0.1e1 / t79 / t9;
  t83 = t35 * t35;
  t84 = 0.1e1 / t83;
  t89 = t14 * t20;
  t90 = t22 * t24;
  t95 = t15 * t51;
  t100 = t27 * t4 / 0.2e1 - 0.2e1 * t89 * t90 - t39 * t75 / 0.2e1 + 0.2e1 * t95 * t53 + 0.93186000000000000000e0 * t41 * t75;
  t101 = t100 * t44;
  t105 = 0.1e1 / t15 / t14;
  t106 = t43 * t105;
  t107 = t3 * t22;
  r->d2fdrs2 = 0.310907e-1 * t59 * t3 - 0.310907e-1 * t64 * t3 + 0.310907e-1 * t28 * t24 + 0.47718894810032124214e0 * t70 * t27 * t36 + 0.11929723702508031054e0 * t32 * t75 * t36 - 0.18060165846193892340e2 * t81 * t27 * t84 + 0.96902277115443742139e-3 * t101 * t3 - 0.96902277115443742139e-3 * t106 * t107 + 0.96902277115443742139e-3 * t45 * t24;

  if(r->order < 3) return;

  t131 = 0.1e1 / t1 / t62;
  t140 = t15 * t15;
  t150 = t19 * t19;
  t151 = 0.1e1 / t150;
  t153 = t53 * t24;
  t175 = t79 * t79;
  t191 = t75 * t24;
  r->d3fdrs3 = 0.48451138557721871070e-3 * t106 * t3 * t75 - 0.621814e-1 * t58 * t63 * t3 + 0.621814e-1 * t26 / t62 / r->rs * t3 - 0.14315668443009637264e1 / t79 * t75 * t36 - 0.71578342215048186322e0 * t70 * t63 * t36 - 0.17894585553762046581e0 * t32 * t131 * t36 - 0.19380455423088748428e-2 * t100 * t105 * t107 - 0.19380455423088748428e-2 * t106 * t90 + 0.14535341567316561321e-2 * t43 / t140 * t3 * t27 + 0.310907e-1 * (0.6e1 * t51 * t53 + 0.13977900000000000000e1 * t20 * t75 - 0.6e1 * r->rs * t151 * t153 - 0.55911600000000000000e1 * t22 * t51 * t24) * t27 * t3 + 0.621814e-1 * t59 * t24 - 0.621814e-1 * t64 * t24 + 0.12642116092335724638e3 / t79 / t31 * t75 * t84 + 0.27090248769290838510e2 * t81 * t63 * t84 - 0.27340917403095972916e4 / t175 * t75 / t83 / t35 + 0.96902277115443742139e-3 * (-0.3e1 / 0.4e1 * t63 * t4 - 0.3e1 / 0.2e1 * t27 * t20 * t24 + 0.6e1 * t14 * t51 * t22 * t53 + 0.3e1 / 0.2e1 * t89 * t191 + 0.27955800000000000000e1 * t89 * t63 + 0.3e1 / 0.4e1 * t39 * t131 - 0.6e1 * t15 * t151 * t153 - 0.55911600000000000000e1 * t95 * t191 - 0.13977900000000000000e1 * t41 * t131) * t44 * t3 + 0.19380455423088748428e-2 * t101 * t24 - 0.90299355952797405550e-3 * t45 * t75 - 0.28972179702000000000e-1 * t26 * t131;

  if(r->order < 4) return;


}

#ifdef DEVICE
__device__ static void
xc_lda_c_vwn_1_func1(const void *p, xc_lda_work_t *r)
#else
static void
func1(const xc_func_type *p, xc_lda_work_t *r)
#endif
{
  double t1, t3, t4, t6, t8, t9, t12, t14;
  double t15, t17, t19, t20, t21, t23, t24, t26;
  double t27, t30, t32, t35, t36, t38, t40, t43;
  double t45, t46, t48, t50, t53, t54, t56, t58;
  double t60, t61, t62, t65, t66, t69, t70, t73;
  double t75, t77, t78, t79, t82, t84, t85, t88;
  double t90, t91, t94, t95, t98, t99, t102, t104;
  double t106, t107, t108, t111, t115, t123, t125, t130;
  double t131, t134, t135, t136, t142, t147, t151, t153;
  double t155, t156, t161, t162, t167, t172, t173, t177;
  double t178, t179, t184, t189, t191, t196, t197, t200;
  double t206, t213, t215, t217, t218, t223, t224, t229;
  double t234, t235, t239, t240, t241, t246, t253, t255;
  double t258, t270, t282, t291, t301, t302, t304, t326;
  double t342, t366, t392, t402, t403, t405, t427, t443;
  double t467, t483;


  t1 = sqrt(r->rs);
  t3 = r->rs + 0.372744e1 * t1 + 0.129352e2;
  t4 = 0.1e1 / t3;
  t6 = log(r->rs * t4);
  t8 = 0.2e1 * t1;
  t9 = t8 + 0.372744e1;
  t12 = atan(0.61519908197590802322e1 / t9);
  t14 = t1 + 0.10498e0;
  t15 = t14 * t14;
  t17 = log(t15 * t4);
  t19 = 0.310907e-1 * t6 + 0.38783294878113014393e-1 * t12 + 0.96902277115443742139e-3 * t17;
  t20 = 0.1e1 + r->z;
  t21 = cbrt(t20);
  t23 = 0.1e1 - r->z;
  t24 = cbrt(t23);
  t26 = t21 * t20 + t24 * t23 - 0.2e1;
  t27 = M_CBRT2;
  t30 = 0.1e1 / (0.2e1 * t27 - 0.2e1);
  t32 = -t26 * t30 + 0.1e1;
  t35 = r->rs + 0.706042e1 * t1 + 0.180578e2;
  t36 = 0.1e1 / t35;
  t38 = log(r->rs * t36);
  t40 = t8 + 0.706042e1;
  t43 = atan(0.47309269095601128300e1 / t40);
  t45 = t1 + 0.32500e0;
  t46 = t45 * t45;
  t48 = log(t46 * t36);
  t50 = 0.1554535e-1 * t38 + 0.52491393169780936218e-1 * t43 + 0.22478670955426118383e-2 * t48;
  r->f = t50 * t26 * t30 + t19 * t32;

  if(r->order < 1) return;

  t53 = t3 * t3;
  t54 = 0.1e1 / t53;
  t56 = 0.1e1 / t1;
  t58 = 0.1e1 + 0.18637200000000000000e1 * t56;
  t60 = -r->rs * t54 * t58 + t4;
  t61 = 0.1e1 / r->rs;
  t62 = t60 * t61;
  t65 = t9 * t9;
  t66 = 0.1e1 / t65;
  t69 = 0.37846991046400000000e2 * t66 + 0.1e1;
  t70 = 0.1e1 / t69;
  t73 = t14 * t4;
  t75 = t15 * t54;
  t77 = t73 * t56 - t75 * t58;
  t78 = 0.1e1 / t15;
  t79 = t77 * t78;
  t82 = 0.310907e-1 * t62 * t3 - 0.23859447405016062107e0 * t66 * t56 * t70 + 0.96902277115443742139e-3 * t79 * t3;
  t84 = t35 * t35;
  t85 = 0.1e1 / t84;
  t88 = 0.1e1 + 0.35302100000000000000e1 * t56;
  t90 = -r->rs * t85 * t88 + t36;
  t91 = t90 * t61;
  t94 = t40 * t40;
  t95 = 0.1e1 / t94;
  t98 = 0.22381669423600000000e2 * t95 + 0.1e1;
  t99 = 0.1e1 / t98;
  t102 = t45 * t36;
  t104 = t46 * t85;
  t106 = t102 * t56 - t104 * t88;
  t107 = 0.1e1 / t46;
  t108 = t106 * t107;
  t111 = 0.1554535e-1 * t91 * t35 - 0.24833294446721653957e0 * t95 * t56 * t99 + 0.22478670955426118383e-2 * t108 * t35;
  r->dfdrs = t111 * t26 * t30 + t82 * t32;
  t115 = 0.4e1 / 0.3e1 * t21 - 0.4e1 / 0.3e1 * t24;
  r->dfdz = -t19 * t115 * t30 + t50 * t115 * t30;

  if(r->order < 2) return;

  t123 = 0.1e1 / t53 / t3;
  t125 = t58 * t58;
  t130 = -0.2e1 * t54 * t58 + 0.2e1 * r->rs * t123 * t125 + 0.93186000000000000000e0 * t56 * t54;
  t131 = t130 * t61;
  t134 = r->rs * r->rs;
  t135 = 0.1e1 / t134;
  t136 = t60 * t135;
  t142 = 0.1e1 / t65 / t9;
  t147 = 0.1e1 / t1 / r->rs;
  t151 = t65 * t65;
  t153 = 0.1e1 / t151 / t9;
  t155 = t69 * t69;
  t156 = 0.1e1 / t155;
  t161 = t14 * t54;
  t162 = t56 * t58;
  t167 = t15 * t123;
  t172 = t61 * t4 / 0.2e1 - 0.2e1 * t161 * t162 - t73 * t147 / 0.2e1 + 0.2e1 * t167 * t125 + 0.93186000000000000000e0 * t75 * t147;
  t173 = t172 * t78;
  t177 = 0.1e1 / t15 / t14;
  t178 = t77 * t177;
  t179 = t3 * t56;
  t184 = 0.310907e-1 * t131 * t3 - 0.310907e-1 * t136 * t3 + 0.310907e-1 * t62 * t58 + 0.47718894810032124214e0 * t142 * t61 * t70 + 0.11929723702508031054e0 * t66 * t147 * t70 - 0.18060165846193892340e2 * t153 * t61 * t156 + 0.96902277115443742139e-3 * t173 * t3 - 0.96902277115443742139e-3 * t178 * t179 + 0.96902277115443742139e-3 * t79 * t58;
  t189 = 0.1e1 / t84 / t35;
  t191 = t88 * t88;
  t196 = -0.2e1 * t85 * t88 + 0.2e1 * r->rs * t189 * t191 + 0.17651050000000000000e1 * t56 * t85;
  t197 = t196 * t61;
  t200 = t90 * t135;
  t206 = 0.1e1 / t94 / t40;
  t213 = t94 * t94;
  t215 = 0.1e1 / t213 / t40;
  t217 = t98 * t98;
  t218 = 0.1e1 / t217;
  t223 = t45 * t85;
  t224 = t56 * t88;
  t229 = t46 * t189;
  t234 = t61 * t36 / 0.2e1 - 0.2e1 * t223 * t224 - t102 * t147 / 0.2e1 + 0.2e1 * t229 * t191 + 0.17651050000000000000e1 * t104 * t147;
  t235 = t234 * t107;
  t239 = 0.1e1 / t46 / t45;
  t240 = t106 * t239;
  t241 = t35 * t56;
  t246 = 0.1554535e-1 * t197 * t35 - 0.1554535e-1 * t200 * t35 + 0.1554535e-1 * t91 * t88 + 0.49666588893443307914e0 * t206 * t61 * t99 + 0.12416647223360826978e0 * t95 * t147 * t99 - 0.11116211740108914433e2 * t215 * t61 * t218 + 0.22478670955426118383e-2 * t235 * t35 - 0.22478670955426118383e-2 * t240 * t241 + 0.22478670955426118383e-2 * t108 * t88;
  r->d2fdrs2 = t246 * t26 * t30 + t184 * t32;
  r->d2fdrsz = t111 * t115 * t30 - t82 * t115 * t30;
  t253 = t21 * t21;
  t255 = t24 * t24;
  t258 = 0.4e1 / 0.9e1 / t253 + 0.4e1 / 0.9e1 / t255;
  r->d2fdz2 = -t19 * t258 * t30 + t50 * t258 * t30;

  if(r->order < 3) return;

  t270 = 0.1e1 / t134 / r->rs;
  t282 = 0.1e1 / t1 / t134;
  t291 = t15 * t15;
  t301 = t53 * t53;
  t302 = 0.1e1 / t301;
  t304 = t125 * t58;
  t326 = t151 * t151;
  t342 = t147 * t58;
  t366 = 0.48451138557721871070e-3 * t178 * t3 * t147 - 0.621814e-1 * t130 * t135 * t3 + 0.621814e-1 * t60 * t270 * t3 - 0.14315668443009637264e1 / t151 * t147 * t70 - 0.71578342215048186322e0 * t142 * t135 * t70 - 0.17894585553762046581e0 * t66 * t282 * t70 - 0.19380455423088748428e-2 * t172 * t177 * t179 - 0.19380455423088748428e-2 * t178 * t162 + 0.14535341567316561321e-2 * t77 / t291 * t3 * t61 + 0.310907e-1 * (0.6e1 * t123 * t125 + 0.13977900000000000000e1 * t54 * t147 - 0.6e1 * r->rs * t302 * t304 - 0.55911600000000000000e1 * t56 * t123 * t58) * t61 * t3 + 0.621814e-1 * t131 * t58 - 0.621814e-1 * t136 * t58 + 0.12642116092335724638e3 / t151 / t65 * t147 * t156 + 0.27090248769290838510e2 * t153 * t135 * t156 - 0.27340917403095972916e4 / t326 * t147 / t155 / t69 + 0.96902277115443742139e-3 * (-0.3e1 / 0.4e1 * t135 * t4 - 0.3e1 / 0.2e1 * t61 * t54 * t58 + 0.6e1 * t14 * t123 * t56 * t125 + 0.3e1 / 0.2e1 * t161 * t342 + 0.27955800000000000000e1 * t161 * t135 + 0.3e1 / 0.4e1 * t73 * t282 - 0.6e1 * t15 * t302 * t304 - 0.55911600000000000000e1 * t167 * t342 - 0.13977900000000000000e1 * t75 * t282) * t78 * t3 + 0.19380455423088748428e-2 * t173 * t58 - 0.90299355952797405550e-3 * t79 * t147 - 0.28972179702000000000e-1 * t60 * t282;
  t392 = t46 * t46;
  t402 = t84 * t84;
  t403 = 0.1e1 / t402;
  t405 = t191 * t88;
  t427 = t213 * t213;
  t443 = t147 * t88;
  t467 = 0.11239335477713059192e-2 * t240 * t35 * t147 - 0.3109070e-1 * t196 * t135 * t35 + 0.3109070e-1 * t90 * t270 * t35 - 0.14899976668032992374e1 / t213 * t147 * t99 - 0.74499883340164961870e0 * t206 * t135 * t99 - 0.18624970835041240467e0 * t95 * t282 * t99 - 0.44957341910852236766e-2 * t234 * t239 * t241 - 0.44957341910852236766e-2 * t240 * t224 + 0.33718006433139177574e-2 * t106 / t392 * t35 * t61 + 0.1554535e-1 * (0.6e1 * t189 * t191 + 0.26476575000000000000e1 * t85 * t147 - 0.6e1 * r->rs * t403 * t405 - 0.10590630000000000000e2 * t56 * t189 * t88) * t61 * t35 + 0.3109070e-1 * t197 * t88 - 0.3109070e-1 * t200 * t88 + 0.77813482180762401030e2 / t213 / t94 * t147 * t218 + 0.16674317610163371649e2 * t215 * t135 * t218 - 0.99519750563943615960e3 / t427 * t147 / t217 / t98 + 0.22478670955426118383e-2 * (-0.3e1 / 0.4e1 * t135 * t36 - 0.3e1 / 0.2e1 * t61 * t85 * t88 + 0.6e1 * t45 * t189 * t56 * t191 + 0.3e1 / 0.2e1 * t223 * t443 + 0.52953150000000000000e1 * t223 * t135 + 0.3e1 / 0.4e1 * t102 * t282 - 0.6e1 * t46 * t403 * t405 - 0.10590630000000000000e2 * t229 * t443 - 0.26476575000000000000e1 * t104 * t282) * t107 * t35 + 0.44957341910852236766e-2 * t235 * t88 - 0.39677214496777418688e-2 * t108 * t147 - 0.27439175011750000000e-1 * t90 * t282;
  r->d3fdrs3 = t467 * t26 * t30 + t366 * t32;
  r->d3fdrs2z = -t184 * t115 * t30 + t246 * t115 * t30;
  r->d3fdrsz2 = t111 * t258 * t30 - t82 * t258 * t30;
  t483 = -0.8e1 / 0.27e2 / t253 / t20 + 0.8e1 / 0.27e2 / t255 / t23;
  r->d3fdz3 = -t19 * t483 * t30 + t50 * t483 * t30;

  if(r->order < 4) return;


}

#ifdef DEVICE
__device__ void
xc_lda_c_vwn_1_func(const void *p, xc_lda_work_t *r)
{
  if(r->nspin == XC_UNPOLARIZED)
    xc_lda_c_vwn_1_func0(p, r)
  else
    xc_lda_c_vwn_1_func1(p, r)
}
#else
void 
xc_lda_c_vwn_1_func(const xc_func_type *p, xc_lda_work_t *r)
{
  if(p->nspin == XC_UNPOLARIZED)
    func0(p, r);
  else
    func1(p, r);
}
#endif

#ifndef DEVICE
#define maple2c_order 3
#define maple2c_func  xc_lda_c_vwn_1_func
#endif
