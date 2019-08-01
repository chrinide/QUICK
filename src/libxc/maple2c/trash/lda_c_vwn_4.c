/* 
  This file was generated automatically with ../scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ../maple/lda_c_vwn_4.mpl
  Type of functional: work_lda
*/

#ifdef DEVICE
__device__ static void
xc_lda_c_vwn_4_func0(const void *p, xc_lda_work_t *r)
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
xc_lda_c_vwn_4_func1(const void *p, xc_lda_work_t *r)
#else
static void
func1(const xc_func_type *p, xc_lda_work_t *r)
#endif
{
  double t1, t3, t4, t6, t7, t8, t9, t12;
  double t13, t14, t15, t17, t18, t19, t20, t22;
  double t23, t25, t26, t29, t31, t32, t34, t37;
  double t38, t39, t41, t42, t44, t45, t46, t47;
  double t49, t50, t51, t54, t55, t59, t60, t62;
  double t64, t67, t69, t70, t72, t74, t75, t76;
  double t78, t79, t81, t83, t85, t86, t87, t89;
  double t90, t91, t94, t95, t97, t98, t100, t102;
  double t103, t104, t106, t107, t108, t111, t113, t114;
  double t116, t117, t120, t121, t124, t126, t128, t129;
  double t130, t134, t135, t138, t139, t142, t144, t145;
  double t148, t149, t152, t153, t156, t158, t160, t161;
  double t162, t165, t166, t169, t170, t174, t175, t178;
  double t185, t187, t192, t193, t195, t196, t197, t198;
  double t200, t202, t204, t207, t209, t212, t213, t215;
  double t217, t218, t220, t223, t224, t229, t234, t235;
  double t237, t239, t240, t241, t243, t245, t249, t251;
  double t256, t257, t259, t263, t270, t272, t274, t275;
  double t280, t281, t286, t291, t292, t296, t297, t298;
  double t304, t305, t311, t313, t318, t319, t322, t328;
  double t335, t337, t339, t340, t345, t346, t351, t356;
  double t357, t361, t362, t363, t368, t369, t371, t376;
  double t380, t382, t385, t386, t391, t392, t395, t403;
  double t406, t408, t411, t415, t418, t420, t423, t426;
  double t428, t429, t434, t455, t456, t458, t467, t469;
  double t471, t476, t479, t480, t486, t496, t513, t515;
  double t517, t518, t523, t524, t526, t548, t564, t591;
  double t601, t604, t630, t640, t641, t643, t666, t682;
  double t707, t712, t740, t748;


  t1 = sqrt(r->rs);
  t3 = r->rs + 0.372744e1 * t1 + 0.129352e2;
  t4 = 0.1e1 / t3;
  t6 = log(r->rs * t4);
  t7 = 0.310907e-1 * t6;
  t8 = 0.2e1 * t1;
  t9 = t8 + 0.372744e1;
  t12 = atan(0.61519908197590802322e1 / t9);
  t13 = 0.38783294878113014393e-1 * t12;
  t14 = t1 + 0.10498e0;
  t15 = t14 * t14;
  t17 = log(t15 * t4);
  t18 = 0.96902277115443742139e-3 * t17;
  t19 = 0.31415926535897932385e1 * 0.31415926535897932385e1;
  t20 = 0.1e1 / t19;
  t22 = r->rs + 0.106835e1 * t1 + 0.114813e2;
  t23 = 0.1e1 / t22;
  t25 = log(r->rs * t23);
  t26 = t8 + 0.106835e1;
  t29 = atan(0.66920720466459414830e1 / t26);
  t31 = t1 + 0.228344e0;
  t32 = t31 * t31;
  t34 = log(t32 * t23);
  t37 = t20 * (t25 + 0.32323836906055067299e0 * t29 + 0.21608710360898267022e-1 * t34);
  t38 = 0.1e1 + r->z;
  t39 = cbrt(t38);
  t41 = 0.1e1 - r->z;
  t42 = cbrt(t41);
  t44 = t39 * t38 + t42 * t41 - 0.2e1;
  t45 = t37 * t44;
  t46 = M_CBRT2;
  t47 = t46 - 0.1e1;
  t49 = 0.1e1 / t47 / 0.2e1;
  t50 = r->z * r->z;
  t51 = t50 * t50;
  t54 = 0.9e1 * t47;
  t55 = t49 * (-t51 + 0.1e1) * t54;
  t59 = r->rs + 0.706042e1 * t1 + 0.180578e2;
  t60 = 0.1e1 / t59;
  t62 = log(r->rs * t60);
  t64 = t8 + 0.706042e1;
  t67 = atan(0.47309269095601128300e1 / t64);
  t69 = t1 + 0.32500e0;
  t70 = t69 * t69;
  t72 = log(t70 * t60);
  t74 = 0.1554535e-1 * t62 + 0.52491393169780936218e-1 * t67 + 0.22478670955426118383e-2 * t72 - t7 - t13 - t18;
  t75 = t74 * t44;
  t76 = t49 * t51;
  r->f = t7 + t13 + t18 - t45 * t55 / 0.24e2 + t75 * t76;

  if(r->order < 1) return;

  t78 = t3 * t3;
  t79 = 0.1e1 / t78;
  t81 = 0.1e1 / t1;
  t83 = 0.1e1 + 0.18637200000000000000e1 * t81;
  t85 = -r->rs * t79 * t83 + t4;
  t86 = 0.1e1 / r->rs;
  t87 = t85 * t86;
  t89 = 0.310907e-1 * t87 * t3;
  t90 = t9 * t9;
  t91 = 0.1e1 / t90;
  t94 = 0.37846991046400000000e2 * t91 + 0.1e1;
  t95 = 0.1e1 / t94;
  t97 = 0.23859447405016062107e0 * t91 * t81 * t95;
  t98 = t14 * t4;
  t100 = t15 * t79;
  t102 = -t100 * t83 + t98 * t81;
  t103 = 0.1e1 / t15;
  t104 = t102 * t103;
  t106 = 0.96902277115443742139e-3 * t104 * t3;
  t107 = t22 * t22;
  t108 = 0.1e1 / t107;
  t111 = 0.1e1 + 0.53417500000000000000e0 * t81;
  t113 = -r->rs * t108 * t111 + t23;
  t114 = t113 * t86;
  t116 = t26 * t26;
  t117 = 0.1e1 / t116;
  t120 = 0.44783828277500000000e2 * t117 + 0.1e1;
  t121 = 0.1e1 / t120;
  t124 = t31 * t23;
  t126 = t32 * t108;
  t128 = -t126 * t111 + t124 * t81;
  t129 = 0.1e1 / t32;
  t130 = t128 * t129;
  t134 = t20 * (t114 * t22 - 0.21631344539935355116e1 * t117 * t81 * t121 + 0.21608710360898267022e-1 * t130 * t22);
  t135 = t134 * t44;
  t138 = t59 * t59;
  t139 = 0.1e1 / t138;
  t142 = 0.1e1 + 0.35302100000000000000e1 * t81;
  t144 = -r->rs * t139 * t142 + t60;
  t145 = t144 * t86;
  t148 = t64 * t64;
  t149 = 0.1e1 / t148;
  t152 = 0.22381669423600000000e2 * t149 + 0.1e1;
  t153 = 0.1e1 / t152;
  t156 = t69 * t60;
  t158 = t70 * t139;
  t160 = -t158 * t142 + t156 * t81;
  t161 = 0.1e1 / t70;
  t162 = t160 * t161;
  t165 = 0.1554535e-1 * t145 * t59 - 0.24833294446721653957e0 * t149 * t81 * t153 + 0.22478670955426118383e-2 * t162 * t59 - t89 + t97 - t106;
  t166 = t165 * t44;
  r->dfdrs = t89 - t97 + t106 - t135 * t55 / 0.24e2 + t166 * t76;
  t169 = 0.4e1 / 0.3e1 * t39 - 0.4e1 / 0.3e1 * t42;
  t170 = t37 * t169;
  t174 = t49 * t50 * r->z;
  t175 = t174 * t54;
  t178 = t74 * t169;
  r->dfdz = -t170 * t55 / 0.24e2 + t45 * t175 / 0.6e1 + t178 * t76 + 0.4e1 * t75 * t174;

  if(r->order < 2) return;

  t185 = 0.1e1 / t78 / t3;
  t187 = t83 * t83;
  t192 = -0.2e1 * t79 * t83 + 0.2e1 * r->rs * t185 * t187 + 0.93186000000000000000e0 * t81 * t79;
  t193 = t192 * t86;
  t195 = 0.310907e-1 * t193 * t3;
  t196 = r->rs * r->rs;
  t197 = 0.1e1 / t196;
  t198 = t85 * t197;
  t200 = 0.310907e-1 * t198 * t3;
  t202 = 0.310907e-1 * t87 * t83;
  t204 = 0.1e1 / t90 / t9;
  t207 = 0.47718894810032124214e0 * t204 * t86 * t95;
  t209 = 0.1e1 / t1 / r->rs;
  t212 = 0.11929723702508031054e0 * t91 * t209 * t95;
  t213 = t90 * t90;
  t215 = 0.1e1 / t213 / t9;
  t217 = t94 * t94;
  t218 = 0.1e1 / t217;
  t220 = 0.18060165846193892340e2 * t215 * t86 * t218;
  t223 = t14 * t79;
  t224 = t81 * t83;
  t229 = t15 * t185;
  t234 = t86 * t4 / 0.2e1 - 0.2e1 * t223 * t224 - t98 * t209 / 0.2e1 + 0.2e1 * t229 * t187 + 0.93186000000000000000e0 * t100 * t209;
  t235 = t234 * t103;
  t237 = 0.96902277115443742139e-3 * t235 * t3;
  t239 = 0.1e1 / t15 / t14;
  t240 = t102 * t239;
  t241 = t3 * t81;
  t243 = 0.96902277115443742139e-3 * t240 * t241;
  t245 = 0.96902277115443742139e-3 * t104 * t83;
  t249 = 0.1e1 / t107 / t22;
  t251 = t111 * t111;
  t256 = -0.2e1 * t108 * t111 + 0.2e1 * r->rs * t249 * t251 + 0.26708750000000000000e0 * t81 * t108;
  t257 = t256 * t86;
  t259 = t113 * t197;
  t263 = 0.1e1 / t116 / t26;
  t270 = t116 * t116;
  t272 = 0.1e1 / t270 / t26;
  t274 = t120 * t120;
  t275 = 0.1e1 / t274;
  t280 = t31 * t108;
  t281 = t81 * t111;
  t286 = t32 * t249;
  t291 = t86 * t23 / 0.2e1 - 0.2e1 * t280 * t281 - t124 * t209 / 0.2e1 + 0.2e1 * t286 * t251 + 0.26708750000000000000e0 * t126 * t209;
  t292 = t291 * t129;
  t296 = 0.1e1 / t32 / t31;
  t297 = t128 * t296;
  t298 = t22 * t81;
  t304 = t20 * (t257 * t22 - t259 * t22 + t114 * t111 + 0.43262689079870710232e1 * t263 * t86 * t121 + 0.10815672269967677558e1 * t117 * t209 * t121 - 0.19374688385758043689e3 * t272 * t86 * t275 + 0.21608710360898267022e-1 * t292 * t22 - 0.21608710360898267022e-1 * t297 * t298 + 0.21608710360898267022e-1 * t130 * t111);
  t305 = t304 * t44;
  t311 = 0.1e1 / t138 / t59;
  t313 = t142 * t142;
  t318 = -0.2e1 * t139 * t142 + 0.2e1 * r->rs * t311 * t313 + 0.17651050000000000000e1 * t81 * t139;
  t319 = t318 * t86;
  t322 = t144 * t197;
  t328 = 0.1e1 / t148 / t64;
  t335 = t148 * t148;
  t337 = 0.1e1 / t335 / t64;
  t339 = t152 * t152;
  t340 = 0.1e1 / t339;
  t345 = t69 * t139;
  t346 = t81 * t142;
  t351 = t70 * t311;
  t356 = t86 * t60 / 0.2e1 - 0.2e1 * t345 * t346 - t156 * t209 / 0.2e1 + 0.2e1 * t351 * t313 + 0.17651050000000000000e1 * t158 * t209;
  t357 = t356 * t161;
  t361 = 0.1e1 / t70 / t69;
  t362 = t160 * t361;
  t363 = t59 * t81;
  t368 = 0.1554535e-1 * t319 * t59 - 0.1554535e-1 * t322 * t59 + 0.1554535e-1 * t145 * t142 + 0.49666588893443307914e0 * t328 * t86 * t153 + 0.12416647223360826978e0 * t149 * t209 * t153 - 0.11116211740108914433e2 * t337 * t86 * t340 + 0.22478670955426118383e-2 * t357 * t59 - 0.22478670955426118383e-2 * t362 * t363 + 0.22478670955426118383e-2 * t162 * t142 - t195 + t200 - t202 - t207 - t212 + t220 - t237 + t243 - t245;
  t369 = t368 * t44;
  r->d2fdrs2 = t195 - t200 + t202 + t207 + t212 - t220 + t237 - t243 + t245 - t305 * t55 / 0.24e2 + t369 * t76;
  t371 = t134 * t169;
  t376 = t165 * t169;
  r->d2fdrsz = -t371 * t55 / 0.24e2 + t135 * t175 / 0.6e1 + t376 * t76 + 0.4e1 * t166 * t174;
  t380 = t39 * t39;
  t382 = t42 * t42;
  t385 = 0.4e1 / 0.9e1 / t380 + 0.4e1 / 0.9e1 / t382;
  t386 = t37 * t385;
  t391 = t49 * t50;
  t392 = t391 * t54;
  t395 = t74 * t385;
  r->d2fdz2 = -t386 * t55 / 0.24e2 + t170 * t175 / 0.3e1 + t45 * t392 / 0.2e1 + t395 * t76 + 0.8e1 * t178 * t174 + 0.12e2 * t75 * t391;

  if(r->order < 3) return;

  t403 = 0.48451138557721871070e-3 * t240 * t3 * t209;
  t406 = 0.621814e-1 * t192 * t197 * t3;
  t408 = 0.1e1 / t196 / r->rs;
  t411 = 0.621814e-1 * t85 * t408 * t3;
  t415 = 0.14315668443009637264e1 / t213 * t209 * t95;
  t418 = 0.71578342215048186322e0 * t204 * t197 * t95;
  t420 = 0.1e1 / t1 / t196;
  t423 = 0.17894585553762046581e0 * t91 * t420 * t95;
  t426 = 0.19380455423088748428e-2 * t234 * t239 * t241;
  t428 = 0.19380455423088748428e-2 * t240 * t224;
  t429 = t15 * t15;
  t434 = 0.14535341567316561321e-2 * t102 / t429 * t3 * t86;
  t455 = t78 * t78;
  t456 = 0.1e1 / t455;
  t458 = t187 * t83;
  t467 = 0.310907e-1 * (0.6e1 * t185 * t187 + 0.13977900000000000000e1 * t79 * t209 - 0.6e1 * r->rs * t456 * t458 - 0.55911600000000000000e1 * t81 * t185 * t83) * t86 * t3;
  t469 = 0.621814e-1 * t193 * t83;
  t471 = 0.621814e-1 * t198 * t83;
  t476 = 0.12642116092335724638e3 / t213 / t90 * t209 * t218;
  t479 = 0.27090248769290838510e2 * t215 * t197 * t218;
  t480 = t213 * t213;
  t486 = 0.27340917403095972916e4 / t480 * t209 / t217 / t94;
  t496 = t209 * t83;
  t513 = 0.96902277115443742139e-3 * (-0.3e1 / 0.4e1 * t197 * t4 - 0.3e1 / 0.2e1 * t86 * t79 * t83 + 0.6e1 * t14 * t185 * t81 * t187 + 0.3e1 / 0.2e1 * t223 * t496 + 0.27955800000000000000e1 * t223 * t197 + 0.3e1 / 0.4e1 * t98 * t420 - 0.6e1 * t15 * t456 * t458 - 0.55911600000000000000e1 * t229 * t496 - 0.13977900000000000000e1 * t100 * t420) * t103 * t3;
  t515 = 0.19380455423088748428e-2 * t235 * t83;
  t517 = 0.90299355952797405550e-3 * t104 * t209;
  t518 = t406 - t411 + t415 + t418 + t423 - 0.3109070e-1 * t318 * t197 * t59 + 0.3109070e-1 * t144 * t408 * t59 - 0.14899976668032992374e1 / t335 * t209 * t153 - 0.74499883340164961870e0 * t328 * t197 * t153 - 0.18624970835041240467e0 * t149 * t420 * t153 - t467 - t469 + t471 - t476 - t479 + t486 - t513 - t515 + t517;
  t523 = t138 * t138;
  t524 = 0.1e1 / t523;
  t526 = t313 * t142;
  t548 = t335 * t335;
  t564 = t209 * t142;
  t591 = t70 * t70;
  t601 = 0.28972179702000000000e-1 * t85 * t420;
  t604 = 0.1554535e-1 * (0.6e1 * t311 * t313 + 0.26476575000000000000e1 * t139 * t209 - 0.6e1 * r->rs * t524 * t526 - 0.10590630000000000000e2 * t81 * t311 * t142) * t86 * t59 + 0.3109070e-1 * t319 * t142 - 0.3109070e-1 * t322 * t142 + 0.77813482180762401030e2 / t335 / t148 * t209 * t340 + 0.16674317610163371649e2 * t337 * t197 * t340 - 0.99519750563943615960e3 / t548 * t209 / t339 / t152 + 0.22478670955426118383e-2 * (-0.3e1 / 0.4e1 * t197 * t60 - 0.3e1 / 0.2e1 * t86 * t139 * t142 + 0.6e1 * t69 * t311 * t81 * t313 + 0.3e1 / 0.2e1 * t345 * t564 + 0.52953150000000000000e1 * t345 * t197 + 0.3e1 / 0.4e1 * t156 * t420 - 0.6e1 * t70 * t524 * t526 - 0.10590630000000000000e2 * t351 * t564 - 0.26476575000000000000e1 * t158 * t420) * t161 * t59 + 0.44957341910852236766e-2 * t357 * t142 - 0.39677214496777418688e-2 * t162 * t209 - t403 + t426 + t428 - t434 - 0.44957341910852236766e-2 * t356 * t361 * t363 - 0.44957341910852236766e-2 * t362 * t346 + 0.33718006433139177574e-2 * t160 / t591 * t59 * t86 + 0.11239335477713059192e-2 * t362 * t59 * t209 + t601 - 0.27439175011750000000e-1 * t144 * t420;
  t630 = t32 * t32;
  t640 = t107 * t107;
  t641 = 0.1e1 / t640;
  t643 = t251 * t111;
  t666 = t270 * t270;
  t682 = t209 * t111;
  t707 = -0.2e1 * t256 * t197 * t22 + 0.2e1 * t113 * t408 * t22 - 0.12978806723961213070e2 / t270 * t209 * t121 - 0.64894033619806065348e1 * t263 * t197 * t121 - 0.16223508404951516337e1 * t117 * t420 * t121 - 0.43217420721796534044e-1 * t291 * t296 * t298 - 0.43217420721796534044e-1 * t297 * t281 + 0.32413065541347400533e-1 * t128 / t630 * t22 * t86 + (0.6e1 * t249 * t251 + 0.40063125000000000000e0 * t108 * t209 - 0.6e1 * r->rs * t641 * t643 - 0.16025250000000000000e1 * t81 * t249 * t111) * t86 * t22 + 0.2e1 * t257 * t111 - 0.2e1 * t259 * t111 - 0.26708750000000000000e0 * t113 * t420 + 0.13562281870030630582e4 / t270 / t116 * t209 * t275 + 0.29062032578637065534e3 * t272 * t197 * t275 - 0.34706908703914476209e5 / t666 * t209 / t274 / t120 + 0.21608710360898267022e-1 * (-0.3e1 / 0.4e1 * t197 * t23 - 0.3e1 / 0.2e1 * t86 * t108 * t111 + 0.6e1 * t31 * t249 * t81 * t251 + 0.3e1 / 0.2e1 * t280 * t682 + 0.80126250000000000000e0 * t280 * t197 + 0.3e1 / 0.4e1 * t124 * t420 - 0.6e1 * t32 * t641 * t643 - 0.16025250000000000000e1 * t286 * t682 - 0.40063125000000000000e0 * t126 * t420) * t129 * t22 + 0.43217420721796534044e-1 * t292 * t111 - 0.57714164285164158932e-2 * t130 * t209 + 0.10804355180449133511e-1 * t297 * t22 * t209;
  t712 = t467 + t469 - t471 + t476 + t479 - t486 + t513 + t515 - t517 - t20 * t707 * t44 * t55 / 0.24e2 - t601;
  r->d3fdrs3 = t403 - t406 + t411 - t415 - t418 - t423 - t426 - t428 + t434 + (t518 + t604) * t44 * t76 + t712;
  r->d3fdrs2z = -t304 * t169 * t55 / 0.24e2 + t305 * t175 / 0.6e1 + t368 * t169 * t76 + 0.4e1 * t369 * t174;
  r->d3fdrsz2 = -t134 * t385 * t55 / 0.24e2 + t371 * t175 / 0.3e1 + t135 * t392 / 0.2e1 + t165 * t385 * t76 + 0.8e1 * t376 * t174 + 0.12e2 * t166 * t391;
  t740 = -0.8e1 / 0.27e2 / t380 / t38 + 0.8e1 / 0.27e2 / t382 / t41;
  t748 = t49 * r->z;
  r->d3fdz3 = -t37 * t740 * t55 / 0.24e2 + t386 * t175 / 0.2e1 + 0.3e1 / 0.2e1 * t170 * t392 + t45 * t748 * t54 + t74 * t740 * t76 + 0.12e2 * t395 * t174 + 0.36e2 * t178 * t391 + 0.24e2 * t75 * t748;

  if(r->order < 4) return;


}

#ifdef DEVICE
__device__ void
xc_lda_c_vwn_4_func(const void *p, xc_lda_work_t *r)
{
  if(r->nspin == XC_UNPOLARIZED)
    xc_lda_c_vwn_4_func0(p, r)
  else
    xc_lda_c_vwn_4_func1(p, r)
}
#else
void 
xc_lda_c_vwn_4_func(const xc_func_type *p, xc_lda_work_t *r)
{
  if(p->nspin == XC_UNPOLARIZED)
    func0(p, r);
  else
    func1(p, r);
}
#endif

#ifndef DEVICE
#define maple2c_order 3
#define maple2c_func  xc_lda_c_vwn_4_func
#endif
