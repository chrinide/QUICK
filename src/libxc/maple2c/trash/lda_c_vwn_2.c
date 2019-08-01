/* 
  This file was generated automatically with ../scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ../maple/lda_c_vwn_2.mpl
  Type of functional: work_lda
*/

#ifdef DEVICE
__device__ static void
xc_lda_c_vwn_2_func0(const void *p, xc_lda_work_t *r)
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
xc_lda_c_vwn_2_func1(const void *p, xc_lda_work_t *r)
#else
static void
func1(const xc_func_type *p, xc_lda_work_t *r)
#endif
{
  double t1, t3, t4, t6, t7, t8, t9, t12;
  double t13, t14, t15, t17, t18, t19, t20, t22;
  double t23, t25, t26, t29, t31, t32, t34, t37;
  double t38, t39, t41, t42, t44, t45, t46, t47;
  double t49, t50, t51, t53, t54, t55, t59, t60;
  double t62, t64, t67, t69, t70, t72, t75, t76;
  double t78, t80, t83, t85, t86, t88, t90, t91;
  double t94, t95, t97, t99, t102, t104, t105, t107;
  double t109, t112, t113, t115, t117, t119, t120, t121;
  double t123, t124, t125, t128, t129, t131, t132, t134;
  double t136, t137, t138, t140, t141, t142, t145, t147;
  double t148, t150, t151, t154, t155, t158, t160, t162;
  double t163, t164, t168, t169, t172, t173, t176, t178;
  double t179, t182, t183, t186, t187, t190, t192, t194;
  double t195, t196, t199, t200, t203, t205, t206, t209;
  double t210, t213, t214, t217, t219, t221, t222, t223;
  double t226, t227, t229, t230, t233, t235, t236, t239;
  double t240, t243, t244, t247, t249, t251, t252, t253;
  double t256, t260, t261, t265, t266, t269, t278, t280;
  double t285, t286, t288, t289, t290, t291, t293, t295;
  double t297, t300, t302, t305, t306, t308, t310, t311;
  double t313, t316, t317, t322, t327, t328, t330, t332;
  double t333, t334, t336, t338, t342, t344, t349, t350;
  double t352, t356, t363, t365, t367, t368, t373, t374;
  double t379, t384, t385, t389, t390, t391, t397, t398;
  double t404, t406, t411, t412, t415, t421, t428, t430;
  double t432, t433, t438, t439, t444, t449, t450, t454;
  double t455, t456, t464, t466, t471, t472, t475, t481;
  double t488, t490, t492, t493, t498, t499, t504, t509;
  double t510, t514, t515, t516, t521, t522, t527, t529;
  double t534, t535, t538, t544, t551, t553, t555, t556;
  double t561, t562, t567, t572, t573, t577, t578, t579;
  double t584, t587, t592, t598, t600, t603, t604, t609;
  double t610, t613, t623, t625, t628, t632, t635, t637;
  double t640, t643, t645, t646, t651, t688, t689, t691;
  double t713, t729, t751, t756, t757, t759, t781, t797;
  double t828, t839, t851, t876, t891, t892, t894, t915;
  double t931, t953, t959, t960, t963, t968, t969, t971;
  double t980, t982, t984, t989, t992, t993, t999, t1009;
  double t1026, t1028, t1030, t1047, t1052, t1053, t1055, t1077;
  double t1093, t1122, t1131, t1135, t1167, t1175;


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
  t53 = t49 * (-t51 + 0.1e1);
  t54 = 0.9e1 * t47;
  t55 = t53 * t54;
  t59 = r->rs + 0.201231e2 * t1 + 0.101578e3;
  t60 = 0.1e1 / t59;
  t62 = log(r->rs * t60);
  t64 = t8 + 0.201231e2;
  t67 = atan(0.11716852777089929792e1 / t64);
  t69 = t1 + 0.743294e0;
  t70 = t69 * t69;
  t72 = log(t70 * t60);
  t75 = r->rs + 0.130720e2 * t1 + 0.427198e2;
  t76 = 0.1e1 / t75;
  t78 = log(r->rs * t76);
  t80 = t8 + 0.130720e2;
  t83 = atan(0.44899888641287296627e-1 / t80);
  t85 = t1 + 0.409286e0;
  t86 = t85 * t85;
  t88 = log(t86 * t76);
  t90 = 0.1554535e-1 * t62 + 0.61881802979060631482e0 * t67 + 0.26673100072733151594e-2 * t72 - 0.310907e-1 * t78 - 0.20521972937837502661e2 * t83 - 0.44313737677495382697e-2 * t88;
  t91 = t90 * t44;
  t94 = r->rs + 0.706042e1 * t1 + 0.180578e2;
  t95 = 0.1e1 / t94;
  t97 = log(r->rs * t95);
  t99 = t8 + 0.706042e1;
  t102 = atan(0.47309269095601128300e1 / t99);
  t104 = t1 + 0.32500e0;
  t105 = t104 * t104;
  t107 = log(t105 * t95);
  t109 = 0.1554535e-1 * t97 + 0.52491393169780936218e-1 * t102 + 0.22478670955426118383e-2 * t107 - t7 - t13 - t18;
  r->f = t7 + t13 + t18 - t45 * t55 / 0.24e2 - t91 * t53 + t109 * t44 * t49;

  if(r->order < 1) return;

  t112 = t3 * t3;
  t113 = 0.1e1 / t112;
  t115 = 0.1e1 / t1;
  t117 = 0.1e1 + 0.18637200000000000000e1 * t115;
  t119 = -r->rs * t113 * t117 + t4;
  t120 = 0.1e1 / r->rs;
  t121 = t119 * t120;
  t123 = 0.310907e-1 * t121 * t3;
  t124 = t9 * t9;
  t125 = 0.1e1 / t124;
  t128 = 0.37846991046400000000e2 * t125 + 0.1e1;
  t129 = 0.1e1 / t128;
  t131 = 0.23859447405016062107e0 * t125 * t115 * t129;
  t132 = t14 * t4;
  t134 = t15 * t113;
  t136 = t132 * t115 - t134 * t117;
  t137 = 0.1e1 / t15;
  t138 = t136 * t137;
  t140 = 0.96902277115443742139e-3 * t138 * t3;
  t141 = t22 * t22;
  t142 = 0.1e1 / t141;
  t145 = 0.1e1 + 0.53417500000000000000e0 * t115;
  t147 = -r->rs * t142 * t145 + t23;
  t148 = t147 * t120;
  t150 = t26 * t26;
  t151 = 0.1e1 / t150;
  t154 = 0.44783828277500000000e2 * t151 + 0.1e1;
  t155 = 0.1e1 / t154;
  t158 = t31 * t23;
  t160 = t32 * t142;
  t162 = t158 * t115 - t160 * t145;
  t163 = 0.1e1 / t32;
  t164 = t162 * t163;
  t168 = t20 * (t148 * t22 - 0.21631344539935355116e1 * t151 * t115 * t155 + 0.21608710360898267022e-1 * t164 * t22);
  t169 = t168 * t44;
  t172 = t59 * t59;
  t173 = 0.1e1 / t172;
  t176 = 0.1e1 + 0.10061550000000000000e2 * t115;
  t178 = -r->rs * t173 * t176 + t60;
  t179 = t178 * t120;
  t182 = t64 * t64;
  t183 = 0.1e1 / t182;
  t186 = 0.13728463900000000000e1 * t183 + 0.1e1;
  t187 = 0.1e1 / t186;
  t190 = t69 * t60;
  t192 = t70 * t173;
  t194 = t190 * t115 - t192 * t176;
  t195 = 0.1e1 / t70;
  t196 = t194 * t195;
  t199 = t75 * t75;
  t200 = 0.1e1 / t199;
  t203 = 0.1e1 + 0.65360000000000000000e1 * t115;
  t205 = -r->rs * t200 * t203 + t76;
  t206 = t205 * t120;
  t209 = t80 * t80;
  t210 = 0.1e1 / t209;
  t213 = 0.20160000000000000000e-2 * t210 + 0.1e1;
  t214 = 0.1e1 / t213;
  t217 = t85 * t76;
  t219 = t86 * t200;
  t221 = t217 * t115 - t219 * t203;
  t222 = 0.1e1 / t86;
  t223 = t221 * t222;
  t226 = 0.1554535e-1 * t179 * t59 - 0.72505997508653845050e0 * t183 * t115 * t187 + 0.26673100072733151594e-2 * t196 * t59 - 0.310907e-1 * t206 * t75 + 0.92143429960841537844e0 * t210 * t115 * t214 - 0.44313737677495382697e-2 * t223 * t75;
  t227 = t226 * t44;
  t229 = t94 * t94;
  t230 = 0.1e1 / t229;
  t233 = 0.1e1 + 0.35302100000000000000e1 * t115;
  t235 = -r->rs * t230 * t233 + t95;
  t236 = t235 * t120;
  t239 = t99 * t99;
  t240 = 0.1e1 / t239;
  t243 = 0.22381669423600000000e2 * t240 + 0.1e1;
  t244 = 0.1e1 / t243;
  t247 = t104 * t95;
  t249 = t105 * t230;
  t251 = t247 * t115 - t249 * t233;
  t252 = 0.1e1 / t105;
  t253 = t251 * t252;
  t256 = 0.1554535e-1 * t236 * t94 - 0.24833294446721653957e0 * t240 * t115 * t244 + 0.22478670955426118383e-2 * t253 * t94 - t123 + t131 - t140;
  r->dfdrs = t123 - t131 + t140 - t169 * t55 / 0.24e2 - t227 * t53 + t256 * t44 * t49;
  t260 = 0.4e1 / 0.3e1 * t39 - 0.4e1 / 0.3e1 * t42;
  t261 = t37 * t260;
  t265 = t49 * t50 * r->z;
  t266 = t265 * t54;
  t269 = t90 * t260;
  r->dfdz = -t261 * t55 / 0.24e2 + t45 * t266 / 0.6e1 - t269 * t53 + 0.4e1 * t91 * t265 + t109 * t260 * t49;

  if(r->order < 2) return;

  t278 = 0.1e1 / t112 / t3;
  t280 = t117 * t117;
  t285 = -0.2e1 * t113 * t117 + 0.2e1 * r->rs * t278 * t280 + 0.93186000000000000000e0 * t115 * t113;
  t286 = t285 * t120;
  t288 = 0.310907e-1 * t286 * t3;
  t289 = r->rs * r->rs;
  t290 = 0.1e1 / t289;
  t291 = t119 * t290;
  t293 = 0.310907e-1 * t291 * t3;
  t295 = 0.310907e-1 * t121 * t117;
  t297 = 0.1e1 / t124 / t9;
  t300 = 0.47718894810032124214e0 * t297 * t120 * t129;
  t302 = 0.1e1 / t1 / r->rs;
  t305 = 0.11929723702508031054e0 * t125 * t302 * t129;
  t306 = t124 * t124;
  t308 = 0.1e1 / t306 / t9;
  t310 = t128 * t128;
  t311 = 0.1e1 / t310;
  t313 = 0.18060165846193892340e2 * t308 * t120 * t311;
  t316 = t14 * t113;
  t317 = t115 * t117;
  t322 = t15 * t278;
  t327 = t120 * t4 / 0.2e1 - 0.2e1 * t316 * t317 - t132 * t302 / 0.2e1 + 0.2e1 * t322 * t280 + 0.93186000000000000000e0 * t134 * t302;
  t328 = t327 * t137;
  t330 = 0.96902277115443742139e-3 * t328 * t3;
  t332 = 0.1e1 / t15 / t14;
  t333 = t136 * t332;
  t334 = t3 * t115;
  t336 = 0.96902277115443742139e-3 * t333 * t334;
  t338 = 0.96902277115443742139e-3 * t138 * t117;
  t342 = 0.1e1 / t141 / t22;
  t344 = t145 * t145;
  t349 = -0.2e1 * t142 * t145 + 0.2e1 * r->rs * t342 * t344 + 0.26708750000000000000e0 * t115 * t142;
  t350 = t349 * t120;
  t352 = t147 * t290;
  t356 = 0.1e1 / t150 / t26;
  t363 = t150 * t150;
  t365 = 0.1e1 / t363 / t26;
  t367 = t154 * t154;
  t368 = 0.1e1 / t367;
  t373 = t31 * t142;
  t374 = t115 * t145;
  t379 = t32 * t342;
  t384 = t120 * t23 / 0.2e1 - 0.2e1 * t373 * t374 - t158 * t302 / 0.2e1 + 0.2e1 * t379 * t344 + 0.26708750000000000000e0 * t160 * t302;
  t385 = t384 * t163;
  t389 = 0.1e1 / t32 / t31;
  t390 = t162 * t389;
  t391 = t22 * t115;
  t397 = t20 * (t350 * t22 - t352 * t22 + t148 * t145 + 0.43262689079870710232e1 * t356 * t120 * t155 + 0.10815672269967677558e1 * t151 * t302 * t155 - 0.19374688385758043689e3 * t365 * t120 * t368 + 0.21608710360898267022e-1 * t385 * t22 - 0.21608710360898267022e-1 * t390 * t391 + 0.21608710360898267022e-1 * t164 * t145);
  t398 = t397 * t44;
  t404 = 0.1e1 / t172 / t59;
  t406 = t176 * t176;
  t411 = -0.2e1 * t173 * t176 + 0.2e1 * r->rs * t404 * t406 + 0.50307750000000000000e1 * t115 * t173;
  t412 = t411 * t120;
  t415 = t178 * t290;
  t421 = 0.1e1 / t182 / t64;
  t428 = t182 * t182;
  t430 = 0.1e1 / t428 / t64;
  t432 = t186 * t186;
  t433 = 0.1e1 / t432;
  t438 = t69 * t173;
  t439 = t115 * t176;
  t444 = t70 * t404;
  t449 = t120 * t60 / 0.2e1 - 0.2e1 * t438 * t439 - t190 * t302 / 0.2e1 + 0.2e1 * t444 * t406 + 0.50307750000000000000e1 * t192 * t302;
  t450 = t449 * t195;
  t454 = 0.1e1 / t70 / t69;
  t455 = t194 * t454;
  t456 = t59 * t115;
  t464 = 0.1e1 / t199 / t75;
  t466 = t203 * t203;
  t471 = -0.2e1 * t200 * t203 + 0.2e1 * r->rs * t464 * t466 + 0.32680000000000000000e1 * t115 * t200;
  t472 = t471 * t120;
  t475 = t205 * t290;
  t481 = 0.1e1 / t209 / t80;
  t488 = t209 * t209;
  t490 = 0.1e1 / t488 / t80;
  t492 = t213 * t213;
  t493 = 0.1e1 / t492;
  t498 = t85 * t200;
  t499 = t115 * t203;
  t504 = t86 * t464;
  t509 = t120 * t76 / 0.2e1 - 0.2e1 * t498 * t499 - t217 * t302 / 0.2e1 + 0.2e1 * t504 * t466 + 0.32680000000000000000e1 * t219 * t302;
  t510 = t509 * t222;
  t514 = 0.1e1 / t86 / t85;
  t515 = t221 * t514;
  t516 = t75 * t115;
  t521 = 0.1554535e-1 * t412 * t59 - 0.1554535e-1 * t415 * t59 + 0.1554535e-1 * t179 * t176 + 0.14501199501730769010e1 * t421 * t120 * t187 + 0.36252998754326922525e0 * t183 * t302 * t187 - 0.19907919386620884987e1 * t430 * t120 * t433 + 0.26673100072733151594e-2 * t450 * t59 - 0.26673100072733151594e-2 * t455 * t456 + 0.26673100072733151594e-2 * t196 * t176 - 0.310907e-1 * t472 * t75 + 0.310907e-1 * t475 * t75 - 0.310907e-1 * t206 * t203 - 0.18428685992168307569e1 * t481 * t120 * t214 - 0.46071714980420768922e0 * t210 * t302 * t214 + 0.37152230960211308059e-2 * t490 * t120 * t493 - 0.44313737677495382697e-2 * t510 * t75 + 0.44313737677495382697e-2 * t515 * t516 - 0.44313737677495382697e-2 * t223 * t203;
  t522 = t521 * t44;
  t527 = 0.1e1 / t229 / t94;
  t529 = t233 * t233;
  t534 = -0.2e1 * t230 * t233 + 0.2e1 * r->rs * t527 * t529 + 0.17651050000000000000e1 * t115 * t230;
  t535 = t534 * t120;
  t538 = t235 * t290;
  t544 = 0.1e1 / t239 / t99;
  t551 = t239 * t239;
  t553 = 0.1e1 / t551 / t99;
  t555 = t243 * t243;
  t556 = 0.1e1 / t555;
  t561 = t104 * t230;
  t562 = t115 * t233;
  t567 = t105 * t527;
  t572 = t120 * t95 / 0.2e1 - 0.2e1 * t561 * t562 - t247 * t302 / 0.2e1 + 0.2e1 * t567 * t529 + 0.17651050000000000000e1 * t249 * t302;
  t573 = t572 * t252;
  t577 = 0.1e1 / t105 / t104;
  t578 = t251 * t577;
  t579 = t94 * t115;
  t584 = 0.1554535e-1 * t535 * t94 - 0.1554535e-1 * t538 * t94 + 0.1554535e-1 * t236 * t233 + 0.49666588893443307914e0 * t544 * t120 * t244 + 0.12416647223360826978e0 * t240 * t302 * t244 - 0.11116211740108914433e2 * t553 * t120 * t556 + 0.22478670955426118383e-2 * t573 * t94 - 0.22478670955426118383e-2 * t578 * t579 + 0.22478670955426118383e-2 * t253 * t233 - t288 + t293 - t295 - t300 - t305 + t313 - t330 + t336 - t338;
  r->d2fdrs2 = t288 - t293 + t295 + t300 + t305 - t313 + t330 - t336 + t338 - t398 * t55 / 0.24e2 - t522 * t53 + t584 * t44 * t49;
  t587 = t168 * t260;
  t592 = t226 * t260;
  r->d2fdrsz = -t587 * t55 / 0.24e2 + t169 * t266 / 0.6e1 - t592 * t53 + 0.4e1 * t227 * t265 + t256 * t260 * t49;
  t598 = t39 * t39;
  t600 = t42 * t42;
  t603 = 0.4e1 / 0.9e1 / t598 + 0.4e1 / 0.9e1 / t600;
  t604 = t37 * t603;
  t609 = t49 * t50;
  t610 = t609 * t54;
  t613 = t90 * t603;
  r->d2fdz2 = -t604 * t55 / 0.24e2 + t261 * t266 / 0.3e1 + t45 * t610 / 0.2e1 - t613 * t53 + 0.8e1 * t269 * t265 + 0.12e2 * t91 * t609 + t109 * t603 * t49;

  if(r->order < 3) return;

  t623 = 0.621814e-1 * t285 * t290 * t3;
  t625 = 0.1e1 / t289 / r->rs;
  t628 = 0.621814e-1 * t119 * t625 * t3;
  t632 = 0.14315668443009637264e1 / t306 * t302 * t129;
  t635 = 0.71578342215048186322e0 * t297 * t290 * t129;
  t637 = 0.1e1 / t1 / t289;
  t640 = 0.17894585553762046581e0 * t125 * t637 * t129;
  t643 = 0.19380455423088748428e-2 * t327 * t332 * t334;
  t645 = 0.19380455423088748428e-2 * t333 * t317;
  t646 = t15 * t15;
  t651 = 0.14535341567316561321e-2 * t136 / t646 * t3 * t120;
  t688 = t172 * t172;
  t689 = 0.1e1 / t688;
  t691 = t406 * t176;
  t713 = t428 * t428;
  t729 = t302 * t176;
  t751 = -0.3109070e-1 * t411 * t290 * t59 + 0.3109070e-1 * t178 * t625 * t59 - 0.43503598505192307030e1 / t428 * t302 * t187 - 0.21751799252596153515e1 * t421 * t290 * t187 - 0.54379498131490383788e0 * t183 * t637 * t187 + 0.621814e-1 * t471 * t290 * t75 - 0.621814e-1 * t205 * t625 * t75 + 0.55286057976504922707e1 / t488 * t302 * t214 + 0.27643028988252461353e1 * t481 * t290 * t214 + 0.69107572470631153383e0 * t210 * t637 * t214 + 0.1554535e-1 * (0.6e1 * t404 * t406 + 0.75461625000000000000e1 * t173 * t302 - 0.6e1 * r->rs * t689 * t691 - 0.30184650000000000000e2 * t115 * t404 * t176) * t120 * t59 + 0.3109070e-1 * t412 * t176 - 0.3109070e-1 * t415 * t176 + 0.13935543570634619491e2 / t428 / t182 * t302 * t433 + 0.29861879079931327481e1 * t430 * t290 * t433 - 0.10932206104933398501e2 / t713 * t302 / t432 / t186 + 0.26673100072733151594e-2 * (-0.3e1 / 0.4e1 * t290 * t60 - 0.3e1 / 0.2e1 * t120 * t173 * t176 + 0.6e1 * t69 * t404 * t115 * t406 + 0.3e1 / 0.2e1 * t438 * t729 + 0.15092325000000000000e2 * t438 * t290 + 0.3e1 / 0.4e1 * t190 * t637 - 0.6e1 * t70 * t689 * t691 - 0.30184650000000000000e2 * t444 * t729 - 0.75461625000000000000e1 * t192 * t637) * t195 * t59 + 0.53346200145466303188e-2 * t450 * t176 - 0.13418636501840412071e-1 * t196 * t302;
  t756 = t199 * t199;
  t757 = 0.1e1 / t756;
  t759 = t466 * t203;
  t781 = t488 * t488;
  t797 = t302 * t203;
  t828 = t70 * t70;
  t839 = t86 * t86;
  t851 = -0.310907e-1 * (0.6e1 * t464 * t466 + 0.49020000000000000000e1 * t200 * t302 - 0.6e1 * r->rs * t757 * t759 - 0.19608000000000000000e2 * t115 * t464 * t203) * t120 * t75 - 0.621814e-1 * t472 * t203 + 0.621814e-1 * t475 * t203 - 0.26006561672147915642e-1 / t488 / t209 * t302 * t493 - 0.55728346440316962088e-2 * t490 * t290 * t493 + 0.29959559046314398819e-4 / t781 * t302 / t492 / t213 - 0.44313737677495382697e-2 * (-0.3e1 / 0.4e1 * t290 * t76 - 0.3e1 / 0.2e1 * t120 * t200 * t203 + 0.6e1 * t85 * t464 * t115 * t466 + 0.3e1 / 0.2e1 * t498 * t797 + 0.98040000000000000000e1 * t498 * t290 + 0.3e1 / 0.4e1 * t217 * t637 - 0.6e1 * t86 * t757 * t759 - 0.19608000000000000000e2 * t504 * t797 - 0.49020000000000000000e1 * t219 * t637) * t222 * t75 - 0.88627475354990765394e-2 * t510 * t203 + 0.14481729473005491065e-1 * t223 * t302 - 0.78205158146250000000e-1 * t178 * t637 + 0.10160440760000000000e0 * t205 * t637 - 0.53346200145466303188e-2 * t449 * t454 * t456 - 0.53346200145466303188e-2 * t455 * t439 + 0.40009650109099727391e-2 * t194 / t828 * t59 * t120 + 0.88627475354990765394e-2 * t509 * t514 * t516 + 0.88627475354990765394e-2 * t515 * t499 - 0.66470606516243074046e-2 * t221 / t839 * t75 * t120 + 0.13336550036366575797e-2 * t455 * t59 * t302 - 0.22156868838747691348e-2 * t515 * t75 * t302;
  t876 = t32 * t32;
  t891 = t141 * t141;
  t892 = 0.1e1 / t891;
  t894 = t344 * t145;
  t915 = t363 * t363;
  t931 = t302 * t145;
  t953 = -0.2e1 * t349 * t290 * t22 + 0.2e1 * t147 * t625 * t22 - 0.12978806723961213070e2 / t363 * t302 * t155 - 0.64894033619806065348e1 * t356 * t290 * t155 - 0.16223508404951516337e1 * t151 * t637 * t155 - 0.43217420721796534044e-1 * t384 * t389 * t391 - 0.43217420721796534044e-1 * t390 * t374 + 0.32413065541347400533e-1 * t162 / t876 * t22 * t120 - 0.26708750000000000000e0 * t147 * t637 + 0.10804355180449133511e-1 * t390 * t22 * t302 + (0.6e1 * t342 * t344 + 0.40063125000000000000e0 * t142 * t302 - 0.6e1 * r->rs * t892 * t894 - 0.16025250000000000000e1 * t115 * t342 * t145) * t120 * t22 + 0.2e1 * t350 * t145 - 0.2e1 * t352 * t145 + 0.13562281870030630582e4 / t363 / t150 * t302 * t368 + 0.29062032578637065534e3 * t365 * t290 * t368 - 0.34706908703914476209e5 / t915 * t302 / t367 / t154 + 0.21608710360898267022e-1 * (-0.3e1 / 0.4e1 * t290 * t23 - 0.3e1 / 0.2e1 * t120 * t142 * t145 + 0.6e1 * t31 * t342 * t115 * t344 + 0.3e1 / 0.2e1 * t373 * t931 + 0.80126250000000000000e0 * t373 * t290 + 0.3e1 / 0.4e1 * t158 * t637 - 0.6e1 * t32 * t892 * t894 - 0.16025250000000000000e1 * t379 * t931 - 0.40063125000000000000e0 * t160 * t637) * t163 * t22 + 0.43217420721796534044e-1 * t385 * t145 - 0.57714164285164158932e-2 * t164 * t302;
  t959 = 0.28972179702000000000e-1 * t119 * t637;
  t960 = -t623 + t628 - t632 - t635 - t640 - t643 - t645 + t651 - (t751 + t851) * t44 * t53 - t20 * t953 * t44 * t55 / 0.24e2 - t959;
  t963 = 0.48451138557721871070e-3 * t333 * t3 * t302;
  t968 = t112 * t112;
  t969 = 0.1e1 / t968;
  t971 = t280 * t117;
  t980 = 0.310907e-1 * (0.6e1 * t278 * t280 + 0.13977900000000000000e1 * t113 * t302 - 0.6e1 * r->rs * t969 * t971 - 0.55911600000000000000e1 * t115 * t278 * t117) * t120 * t3;
  t982 = 0.621814e-1 * t286 * t117;
  t984 = 0.621814e-1 * t291 * t117;
  t989 = 0.12642116092335724638e3 / t306 / t124 * t302 * t311;
  t992 = 0.27090248769290838510e2 * t308 * t290 * t311;
  t993 = t306 * t306;
  t999 = 0.27340917403095972916e4 / t993 * t302 / t310 / t128;
  t1009 = t302 * t117;
  t1026 = 0.96902277115443742139e-3 * (-0.3e1 / 0.4e1 * t290 * t4 - 0.3e1 / 0.2e1 * t120 * t113 * t117 + 0.6e1 * t14 * t278 * t115 * t280 + 0.3e1 / 0.2e1 * t316 * t1009 + 0.27955800000000000000e1 * t316 * t290 + 0.3e1 / 0.4e1 * t132 * t637 - 0.6e1 * t15 * t969 * t971 - 0.55911600000000000000e1 * t322 * t1009 - 0.13977900000000000000e1 * t134 * t637) * t137 * t3;
  t1028 = 0.19380455423088748428e-2 * t328 * t117;
  t1030 = 0.90299355952797405550e-3 * t138 * t302;
  t1047 = t623 - t628 + t632 + t635 + t640 - t980 - t982 + t984 - t989 - t992 + t999 - t1026 - t1028 + t1030 - 0.3109070e-1 * t534 * t290 * t94 + 0.3109070e-1 * t235 * t625 * t94 - 0.14899976668032992374e1 / t551 * t302 * t244 - 0.74499883340164961870e0 * t544 * t290 * t244 - 0.18624970835041240467e0 * t240 * t637 * t244;
  t1052 = t229 * t229;
  t1053 = 0.1e1 / t1052;
  t1055 = t529 * t233;
  t1077 = t551 * t551;
  t1093 = t302 * t233;
  t1122 = t105 * t105;
  t1131 = 0.1554535e-1 * (0.6e1 * t527 * t529 + 0.26476575000000000000e1 * t230 * t302 - 0.6e1 * r->rs * t1053 * t1055 - 0.10590630000000000000e2 * t115 * t527 * t233) * t120 * t94 + 0.3109070e-1 * t535 * t233 - 0.3109070e-1 * t538 * t233 + 0.77813482180762401030e2 / t551 / t239 * t302 * t556 + 0.16674317610163371649e2 * t553 * t290 * t556 - 0.99519750563943615960e3 / t1077 * t302 / t555 / t243 + 0.22478670955426118383e-2 * (-0.3e1 / 0.4e1 * t290 * t95 - 0.3e1 / 0.2e1 * t120 * t230 * t233 + 0.6e1 * t104 * t527 * t115 * t529 + 0.3e1 / 0.2e1 * t561 * t1093 + 0.52953150000000000000e1 * t561 * t290 + 0.3e1 / 0.4e1 * t247 * t637 - 0.6e1 * t105 * t1053 * t1055 - 0.10590630000000000000e2 * t567 * t1093 - 0.26476575000000000000e1 * t249 * t637) * t252 * t94 + 0.44957341910852236766e-2 * t573 * t233 - 0.39677214496777418688e-2 * t253 * t302 + t959 - 0.27439175011750000000e-1 * t235 * t637 + t643 + t645 - t651 - t963 - 0.44957341910852236766e-2 * t572 * t577 * t579 - 0.44957341910852236766e-2 * t578 * t562 + 0.33718006433139177574e-2 * t251 / t1122 * t94 * t120 + 0.11239335477713059192e-2 * t578 * t94 * t302;
  t1135 = t963 + t980 + t982 - t984 + t989 + t992 - t999 + t1026 + t1028 - t1030 + (t1047 + t1131) * t44 * t49;
  r->d3fdrs3 = t960 + t1135;
  r->d3fdrs2z = -t397 * t260 * t55 / 0.24e2 + t398 * t266 / 0.6e1 - t521 * t260 * t53 + 0.4e1 * t522 * t265 + t584 * t260 * t49;
  r->d3fdrsz2 = -t168 * t603 * t55 / 0.24e2 + t587 * t266 / 0.3e1 + t169 * t610 / 0.2e1 - t226 * t603 * t53 + 0.8e1 * t592 * t265 + 0.12e2 * t227 * t609 + t256 * t603 * t49;
  t1167 = -0.8e1 / 0.27e2 / t598 / t38 + 0.8e1 / 0.27e2 / t600 / t41;
  t1175 = t49 * r->z;
  r->d3fdz3 = -t37 * t1167 * t55 / 0.24e2 + t604 * t266 / 0.2e1 + 0.3e1 / 0.2e1 * t261 * t610 + t45 * t1175 * t54 - t90 * t1167 * t53 + 0.12e2 * t613 * t265 + 0.36e2 * t269 * t609 + 0.24e2 * t91 * t1175 + t109 * t1167 * t49;

  if(r->order < 4) return;


}

#ifdef DEVICE
__device__ void
xc_lda_c_vwn_2_func(const void *p, xc_lda_work_t *r)
{
  if(r->nspin == XC_UNPOLARIZED)
    xc_lda_c_vwn_2_func0(p, r)
  else
    xc_lda_c_vwn_2_func1(p, r)
}
#else
void 
xc_lda_c_vwn_2_func(const xc_func_type *p, xc_lda_work_t *r)
{
  if(p->nspin == XC_UNPOLARIZED)
    func0(p, r);
  else
    func1(p, r);
}
#endif

#ifndef DEVICE
#define maple2c_order 3
#define maple2c_func  xc_lda_c_vwn_2_func
#endif
