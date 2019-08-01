/* 
  This file was generated automatically with /nfs/data-012/marques/software/source/libxc/svn/scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ../maple/mgga_xc_cc06.mpl
  Type of functional: work_mgga_c
*/

#ifdef CUDA
__device__ void xc_mgga_xc_cc06_func
  (const void *p, xc_mgga_work_c_t *r)
#else
void xc_mgga_xc_cc06_func
  (const xc_func_type *p, xc_mgga_work_c_t *r)
#endif
{
  double t1, t2, t3, t4, t5, t6, t7, t8;
  double t9, t10, t11, t12, t13, t14, t15, t16;
  double t18, t19, t24, t25, t28, t30, t32, t35;
  double t36, t38, t39, t40, t41, t42, t45, t47;
  double t52, t55, t56, t60, t65, t68, t69, t70;
  double t73, t75, t78, t79, t80, t81, t82, t84;
  double t85, t86, t87, t91, t93, t95, t96, t98;
  double t99, t103, t104, t105, t106, t107, t109, t112;
  double t113, t114, t116, t118, t119, t120, t124, t125;
  double t126, t130, t131, t132, t136, t137, t138, t142;
  double t146, t148, t151, t153, t154, t158, t159, t162;
  double t164, t167, t172, t177, t178, t180, t181, t185;
  double t194, t202, t204, t210, t212, t213, t214, t217;
  double t219, t221, t223, t226, t227, t228, t229, t230;
  double t231, t234, t239, t240, t241, t247, t251, t252;
  double t253, t254, t255, t261, t262, t263, t269, t270;
  double t273, t274, t275, t276, t277, t281, t282, t287;
  double t291, t295, t298, t307, t310, t313, t315, t318;
  double t319, t323, t326, t329, t331, t334, t338, t340;
  double t343, t348, t349, t350, t351, t357, t359, t360;
  double t367, t374, t375, t379, t386, t403, t405, t407;
  double t415, t420, t424, t425, t427, t435, t436, t444;
  double t445, t451, t453, t455, t461, t464, t483, t486;
  double t487, t490, t493, t497, t504, t510, t516, t524;
  double t547, t555, t590, t594, t639, t671, t676, t680;
  double t683, t685, t710, t761, t766, t802, t817, t818;
  double t838, t839;


  t1 = M_CBRT3;
  t2 = t1 * t1;
  t3 = M_CBRT4;
  t4 = t2 * t3;
  t5 = 0.1e1 / 0.31415926535897932385e1;
  t6 = POW_1_3(t5);
  t7 = t6 * t6;
  t8 = t4 * t7;
  t9 = M_CBRT2;
  t10 = t9 * t9;
  t11 = 0.1e1 + r->z;
  t12 = POW_1_3(t11);
  t13 = t12 * t11;
  t14 = 0.1e1 - r->z;
  t15 = POW_1_3(t14);
  t16 = t15 * t14;
  t18 = t10 * (t13 + t16);
  t19 = 0.1e1 / r->rs;
  t24 = 0.1e1 + 0.21370e0 * r->rs;
  t25 = sqrt(r->rs);
  t28 = POW_3_2(r->rs);
  t30 = r->rs * r->rs;
  t32 = 0.75957e1 * t25 + 0.35876e1 * r->rs + 0.16382e1 * t28 + 0.49294e0 * t30;
  t35 = 0.1e1 + 0.16081824322151104822e2 / t32;
  t36 = log(t35);
  t38 = 0.62182e-1 * t24 * t36;
  t39 = r->z * r->z;
  t40 = t39 * t39;
  t41 = t13 + t16 - 0.2e1;
  t42 = t40 * t41;
  t45 = 0.1e1 / (0.2e1 * t9 - 0.2e1);
  t47 = 0.1e1 + 0.20548e0 * r->rs;
  t52 = 0.141189e2 * t25 + 0.61977e1 * r->rs + 0.33662e1 * t28 + 0.62517e0 * t30;
  t55 = 0.1e1 + 0.32164683177870697974e2 / t52;
  t56 = log(t55);
  t60 = 0.1e1 + 0.11125e0 * r->rs;
  t65 = 0.10357e2 * t25 + 0.36231e1 * r->rs + 0.88026e0 * t28 + 0.49671e0 * t30;
  t68 = 0.1e1 + 0.29608574643216675549e2 / t65;
  t69 = log(t68);
  t70 = t60 * t69;
  t73 = t45 * (-0.31090e-1 * t47 * t56 + t38 - 0.19751789702565206229e-1 * t70);
  t75 = t41 * t45;
  t78 = -0.3e1 / 0.32e2 * t8 * t18 * t19 - t38 + t42 * t73 + 0.19751789702565206229e-1 * t75 * t70;
  t79 = t11 / 0.2e1;
  t80 = POW_1_3(t79);
  t81 = t80 * t80;
  t82 = t81 * t79;
  t84 = t14 / 0.2e1;
  t85 = POW_1_3(t84);
  t86 = t85 * t85;
  t87 = t86 * t84;
  t91 = t4 * t7 * (r->us[0] * t82 + r->us[1] * t87);
  t93 = -0.7e-3 + 0.20000000000000000000e-2 * t91;
  t95 = 0.1e1 + 0.65000000000000000000e-2 * t91;
  t96 = 0.1e1 / t95;
  t98 = t93 * t96 + 0.1e1;
  r->f = t78 * t98;

  if(r->order < 1) return;

  t99 = 0.1e1 / t30;
  t103 = 0.1328829340e-1 * t36;
  t104 = t32 * t32;
  t105 = 0.1e1 / t104;
  t106 = t24 * t105;
  t107 = 0.1e1 / t25;
  t109 = sqrt(r->rs);
  t112 = 0.37978500000000000000e1 * t107 + 0.35876e1 + 0.245730e1 * t109 + 0.98588e0 * r->rs;
  t113 = 0.1e1 / t35;
  t114 = t112 * t113;
  t116 = 0.10000000000000000000e1 * t106 * t114;
  t118 = t52 * t52;
  t119 = 0.1e1 / t118;
  t120 = t47 * t119;
  t124 = 0.70594500000000000000e1 * t107 + 0.61977e1 + 0.504930e1 * t109 + 0.125034e1 * r->rs;
  t125 = 0.1e1 / t55;
  t126 = t124 * t125;
  t130 = t65 * t65;
  t131 = 0.1e1 / t130;
  t132 = t60 * t131;
  t136 = 0.51785000000000000000e1 * t107 + 0.36231e1 + 0.1320390e1 * t109 + 0.99342e0 * r->rs;
  t137 = 0.1e1 / t68;
  t138 = t136 * t137;
  t142 = t45 * (-0.638837320e-2 * t56 + 0.10000000000000000000e1 * t120 * t126 + t103 - t116 - 0.21973866044103791930e-2 * t69 + 0.58482233974552040708e0 * t132 * t138);
  t146 = t75 * t60;
  t148 = t131 * t136 * t137;
  t151 = 0.3e1 / 0.32e2 * t8 * t18 * t99 - t103 + t116 + t42 * t142 + 0.21973866044103791930e-2 * t75 * t69 - 0.58482233974552040708e0 * t146 * t148;
  r->dfdrs = t151 * t98;
  t153 = 0.4e1 / 0.3e1 * t12 - 0.4e1 / 0.3e1 * t15;
  t154 = t10 * t153;
  t158 = t39 * r->z;
  t159 = t158 * t41;
  t162 = t40 * t153;
  t164 = t153 * t45;
  t167 = -0.3e1 / 0.32e2 * t8 * t154 * t19 + 0.4e1 * t159 * t73 + t162 * t73 + 0.19751789702565206229e-1 * t164 * t70;
  t172 = 0.5e1 / 0.6e1 * r->us[0] * t81 - 0.5e1 / 0.6e1 * r->us[1] * t86;
  t177 = t95 * t95;
  t178 = 0.1e1 / t177;
  t180 = t93 * t178 * t2;
  t181 = t3 * t7;
  t185 = 0.20000000000000000000e-2 * t4 * t7 * t172 * t96 - 0.65000000000000000000e-2 * t180 * t181 * t172;
  r->dfdz = t167 * t98 + t78 * t185;
  r->dfdxt = 0.0e0;
  r->dfdxs[0] = 0.0e0;
  r->dfdxs[1] = 0.0e0;
  r->dfdts[0] = 0.0e0;
  r->dfdts[1] = 0.0e0;
  t194 = 0.20000000000000000000e-2 * t4 * t7 * t82 * t96 - 0.65000000000000000000e-2 * t180 * t181 * t82;
  r->dfdus[0] = t78 * t194;
  t202 = 0.20000000000000000000e-2 * t4 * t7 * t87 * t96 - 0.65000000000000000000e-2 * t180 * t181 * t87;
  r->dfdus[1] = t78 * t202;

  if(r->order < 2) return;

  t204 = 0.1e1 / t30 / r->rs;
  t210 = 0.42740000000000000001e0 * t105 * t112 * t113;
  t212 = 0.1e1 / t104 / t32;
  t213 = t24 * t212;
  t214 = t112 * t112;
  t217 = 0.20000000000000000000e1 * t213 * t214 * t113;
  t219 = 0.1e1 / t25 / r->rs;
  t221 = 0.1e1/sqrt(r->rs);
  t223 = -0.18989250000000000000e1 * t219 + 0.1228650e1 * t221 + 0.98588e0;
  t226 = 0.10000000000000000000e1 * t106 * t223 * t113;
  t227 = t104 * t104;
  t228 = 0.1e1 / t227;
  t229 = t24 * t228;
  t230 = t35 * t35;
  t231 = 0.1e1 / t230;
  t234 = 0.16081824322151104822e2 * t229 * t214 * t231;
  t239 = 0.1e1 / t118 / t52;
  t240 = t47 * t239;
  t241 = t124 * t124;
  t247 = -0.35297250000000000000e1 * t219 + 0.2524650e1 * t221 + 0.125034e1;
  t251 = t118 * t118;
  t252 = 0.1e1 / t251;
  t253 = t47 * t252;
  t254 = t55 * t55;
  t255 = 0.1e1 / t254;
  t261 = 0.1e1 / t130 / t65;
  t262 = t60 * t261;
  t263 = t136 * t136;
  t269 = -0.25892500000000000000e1 * t219 + 0.6601950e0 * t221 + 0.99342e0;
  t270 = t269 * t137;
  t273 = t130 * t130;
  t274 = 0.1e1 / t273;
  t275 = t60 * t274;
  t276 = t68 * t68;
  t277 = 0.1e1 / t276;
  t281 = 0.41096000000000000000e0 * t119 * t124 * t125 - 0.20000000000000000000e1 * t240 * t241 * t125 + 0.10000000000000000000e1 * t120 * t247 * t125 + 0.32164683177870697974e2 * t253 * t241 * t255 - t210 + t217 - t226 - t234 + 0.13012297059337829058e0 * t148 - 0.11696446794910408142e1 * t262 * t263 * t137 + 0.58482233974552040708e0 * t132 * t270 + 0.17315755899375863299e2 * t275 * t263 * t277;
  t282 = t45 * t281;
  t287 = t261 * t263 * t137;
  t291 = t131 * t269 * t137;
  t295 = t274 * t263 * t277;
  t298 = -0.3e1 / 0.16e2 * t8 * t18 * t204 + t210 - t217 + t226 + t234 + t42 * t282 - 0.13012297059337829058e0 * t75 * t148 + 0.11696446794910408142e1 * t146 * t287 - 0.58482233974552040708e0 * t146 * t291 - 0.17315755899375863299e2 * t146 * t295;
  r->d2fdrs2 = t298 * t98;
  t307 = t164 * t60;
  t310 = 0.3e1 / 0.32e2 * t8 * t154 * t99 + 0.4e1 * t159 * t142 + t162 * t142 + 0.21973866044103791930e-2 * t164 * t69 - 0.58482233974552040708e0 * t307 * t148;
  r->d2fdrsz = t151 * t185 + t310 * t98;
  r->d2fdrsxt = 0.0e0;
  r->d2fdrsxs[0] = 0.0e0;
  r->d2fdrsxs[1] = 0.0e0;
  r->d2fdrsts[0] = 0.0e0;
  r->d2fdrsts[1] = 0.0e0;
  r->d2fdrsus[0] = t151 * t194;
  r->d2fdrsus[1] = t151 * t202;
  t313 = t12 * t12;
  t315 = t15 * t15;
  t318 = 0.4e1 / 0.9e1 / t313 + 0.4e1 / 0.9e1 / t315;
  t319 = t10 * t318;
  t323 = t39 * t41;
  t326 = t158 * t153;
  t329 = t40 * t318;
  t331 = t318 * t45;
  t334 = -0.3e1 / 0.32e2 * t8 * t319 * t19 + 0.12e2 * t323 * t73 + 0.8e1 * t326 * t73 + t329 * t73 + 0.19751789702565206229e-1 * t331 * t70;
  t338 = 0.1e1 / t80;
  t340 = 0.1e1 / t85;
  t343 = 0.5e1 / 0.18e2 * r->us[0] * t338 + 0.5e1 / 0.18e2 * r->us[1] * t340;
  t348 = t3 * t3;
  t349 = t1 * t348;
  t350 = t6 * t5;
  t351 = t172 * t172;
  t357 = 0.1e1 / t177 / t95;
  t359 = t93 * t357 * t1;
  t360 = t348 * t350;
  t367 = 0.20000000000000000000e-2 * t4 * t7 * t343 * t96 - 0.78000000000000000000e-4 * t349 * t350 * t351 * t178 + 0.25350000000000000000e-3 * t359 * t360 * t351 - 0.65000000000000000000e-2 * t180 * t181 * t343;
  r->d2fdz2 = 0.2e1 * t167 * t185 + t334 * t98 + t78 * t367;
  r->d2fdzxt = 0.0e0;
  r->d2fdzxs[0] = 0.0e0;
  r->d2fdzxs[1] = 0.0e0;
  r->d2fdzts[0] = 0.0e0;
  r->d2fdzts[1] = 0.0e0;
  t374 = t349 * t350;
  t375 = t172 * t178;
  t379 = t172 * t82;
  t386 = 0.16666666666666666667e-2 * t4 * t7 * t81 * t96 - 0.78000000000000000000e-4 * t374 * t375 * t82 + 0.25350000000000000000e-3 * t359 * t360 * t379 - 0.54166666666666666667e-2 * t180 * t181 * t81;
  r->d2fdzus[0] = t167 * t194 + t78 * t386;
  t403 = -0.16666666666666666667e-2 * t4 * t7 * t86 * t96 - 0.78000000000000000000e-4 * t374 * t375 * t87 + 0.25350000000000000000e-3 * t359 * t360 * t172 * t87 + 0.54166666666666666667e-2 * t180 * t181 * t86;
  r->d2fdzus[1] = t167 * t202 + t78 * t403;
  r->d2fdxt2 = 0.0e0;
  r->d2fdxtxs[0] = 0.0e0;
  r->d2fdxtxs[1] = 0.0e0;
  r->d2fdxtts[0] = 0.0e0;
  r->d2fdxtts[1] = 0.0e0;
  r->d2fdxtus[0] = 0.0e0;
  r->d2fdxtus[1] = 0.0e0;
  r->d2fdxs2[0] = 0.0e0;
  r->d2fdxs2[1] = 0.0e0;
  r->d2fdxs2[2] = 0.0e0;
  r->d2fdxsts[0] = 0.0e0;
  r->d2fdxsts[1] = 0.0e0;
  r->d2fdxsts[2] = 0.0e0;
  r->d2fdxsts[3] = 0.0e0;
  r->d2fdxsus[0] = 0.0e0;
  r->d2fdxsus[1] = 0.0e0;
  r->d2fdxsus[2] = 0.0e0;
  r->d2fdxsus[3] = 0.0e0;
  r->d2fdts2[0] = 0.0e0;
  r->d2fdts2[1] = 0.0e0;
  r->d2fdts2[2] = 0.0e0;
  r->d2fdtsus[0] = 0.0e0;
  r->d2fdtsus[1] = 0.0e0;
  r->d2fdtsus[2] = 0.0e0;
  r->d2fdtsus[3] = 0.0e0;
  t405 = t79 * t79;
  t407 = t80 * t405 * t79;
  t415 = -0.78000000000000000000e-4 * t349 * t350 * t407 * t178 + 0.25350000000000000000e-3 * t359 * t360 * t407;
  r->d2fdus2[0] = t78 * t415;
  t420 = t82 * t87;
  t424 = -0.78000000000000000000e-4 * t374 * t82 * t178 * t87 + 0.25350000000000000000e-3 * t359 * t360 * t420;
  r->d2fdus2[1] = t78 * t424;
  t425 = t84 * t84;
  t427 = t85 * t425 * t84;
  t435 = -0.78000000000000000000e-4 * t349 * t350 * t427 * t178 + 0.25350000000000000000e-3 * t359 * t360 * t427;
  r->d2fdus2[2] = t78 * t435;

  if(r->order < 3) return;

  t436 = t30 * t30;
  t444 = 0.1e1 / t273 / t65;
  t445 = t263 * t136;
  t451 = 0.1e1 / t25 / t30;
  t453 = 0.1e1/POW_3_2(r->rs);
  t455 = 0.38838750000000000000e1 * t451 - 0.33009750e0 * t453;
  t461 = 0.1e1 / t273 / t130;
  t464 = 0.1e1 / t276 / t68;
  t483 = 0.64110000000000000001e0 * t105 * t223 * t113;
  t486 = 0.10310057572931073302e2 * t228 * t214 * t231;
  t487 = t214 * t112;
  t490 = 0.60000000000000000000e1 * t229 * t487 * t113;
  t493 = 0.60000000000000000000e1 * t213 * t114 * t223;
  t497 = 0.48245472966453314466e2 * t229 * t223 * t231 * t112;
  t504 = 0.12822000000000000000e1 * t212 * t214 * t113;
  t510 = 0.96490945932906628932e2 * t24 / t227 / t32 * t487 * t231;
  t516 = 0.10000000000000000000e1 * t106 * (0.28483875000000000000e1 * t451 - 0.6143250e0 * t453) * t113;
  t524 = 0.51725014705706168417e3 * t24 / t227 / t104 * t487 / t230 / t35;
  t547 = -0.60000000000000000000e1 * t240 * t126 * t247 + 0.96494049533612093922e2 * t253 * t247 * t255 * t124 - 0.35089340384731224426e1 * t262 * t138 * t269 + 0.51947267698127589897e2 * t275 * t269 * t277 * t136 + t493 - t497 - t483 - t486 + t504 + 0.61644000000000000000e0 * t119 * t247 * t125 + 0.19827597298166613059e2 * t252 * t241 * t255 + 0.19518445589006743587e0 * t291 + 0.57791335314166943763e1 * t295;
  t555 = t241 * t124;
  t590 = -0.12328800000000000000e1 * t239 * t241 * t125 - 0.39036891178013487174e0 * t287 - 0.19298809906722418785e3 * t47 / t251 / t52 * t555 * t255 + 0.10000000000000000000e1 * t120 * (0.52945875000000000000e1 * t451 - 0.12623250e1 * t453) * t125 + 0.20691336878655965246e4 * t47 / t251 / t118 * t555 / t254 / t55 - 0.10389453539625517980e3 * t60 * t444 * t445 * t277 + 0.58482233974552040708e0 * t132 * t455 * t137 + 0.10253897021007794930e4 * t60 * t461 * t445 * t464 + 0.60000000000000000000e1 * t253 * t555 * t125 + 0.35089340384731224426e1 * t275 * t445 * t137 - t490 + t510 - t516 - t524;
  t594 = 0.9e1 / 0.16e2 * t8 * t18 / t436 + 0.39036891178013487174e0 * t75 * t287 + 0.10389453539625517980e3 * t146 * t444 * t445 * t277 - 0.58482233974552040708e0 * t146 * t131 * t455 * t137 - 0.10253897021007794930e4 * t146 * t461 * t445 * t464 - 0.35089340384731224426e1 * t146 * t274 * t445 * t137 + 0.35089340384731224426e1 * t146 * t261 * t136 * t270 - 0.51947267698127589897e2 * t146 * t274 * t269 * t277 * t136 + t483 + t486 + t490 - t493 + t497 - 0.19518445589006743587e0 * t75 * t291 - 0.57791335314166943763e1 * t75 * t295 - t504 - t510 + t516 + t524 + t42 * t45 * (t547 + t590);
  r->d3fdrs3 = t594 * t98;
  r->d3fdrs2z = (-0.3e1 / 0.16e2 * t8 * t154 * t204 + 0.4e1 * t159 * t282 + t162 * t282 - 0.13012297059337829058e0 * t164 * t148 + 0.11696446794910408142e1 * t307 * t287 - 0.58482233974552040708e0 * t307 * t291 - 0.17315755899375863299e2 * t307 * t295) * t98 + t298 * t185;
  r->d3fdrsz2 = (0.3e1 / 0.32e2 * t8 * t319 * t99 + 0.12e2 * t323 * t142 + 0.8e1 * t326 * t142 + t329 * t142 + 0.21973866044103791930e-2 * t331 * t69 - 0.58482233974552040708e0 * t331 * t60 * t148) * t98 + 0.2e1 * t310 * t185 + t151 * t367;
  r->d3fdrszxt = 0.0e0;
  r->d3fdrszxs[0] = 0.0e0;
  r->d3fdrszxs[1] = 0.0e0;
  r->d3fdrszts[0] = 0.0e0;
  r->d3fdrszts[1] = 0.0e0;
  r->d3fdrszus[0] = t151 * t386 + t310 * t194;
  r->d3fdrszus[1] = t151 * t403 + t310 * t202;
  r->d3fdrs2xt = 0.0e0;
  r->d3fdrsxt2 = 0.0e0;
  r->d3fdrsxtxs[0] = 0.0e0;
  r->d3fdrsxtxs[1] = 0.0e0;
  r->d3fdrsxtts[0] = 0.0e0;
  r->d3fdrsxtts[1] = 0.0e0;
  r->d3fdrsxtus[0] = 0.0e0;
  r->d3fdrsxtus[1] = 0.0e0;
  r->d3fdrs2xs[0] = 0.0e0;
  r->d3fdrs2xs[1] = 0.0e0;
  r->d3fdrsxs2[0] = 0.0e0;
  r->d3fdrsxs2[1] = 0.0e0;
  r->d3fdrsxs2[2] = 0.0e0;
  r->d3fdrsxsts[0] = 0.0e0;
  r->d3fdrsxsts[1] = 0.0e0;
  r->d3fdrsxsts[2] = 0.0e0;
  r->d3fdrsxsts[3] = 0.0e0;
  r->d3fdrsxsus[0] = 0.0e0;
  r->d3fdrsxsus[1] = 0.0e0;
  r->d3fdrsxsus[2] = 0.0e0;
  r->d3fdrsxsus[3] = 0.0e0;
  r->d3fdrs2ts[0] = 0.0e0;
  r->d3fdrs2ts[1] = 0.0e0;
  r->d3fdrsts2[0] = 0.0e0;
  r->d3fdrsts2[1] = 0.0e0;
  r->d3fdrsts2[2] = 0.0e0;
  r->d3fdrstsus[0] = 0.0e0;
  r->d3fdrstsus[1] = 0.0e0;
  r->d3fdrstsus[2] = 0.0e0;
  r->d3fdrstsus[3] = 0.0e0;
  r->d3fdrs2us[0] = t298 * t194;
  r->d3fdrs2us[1] = t298 * t202;
  r->d3fdrsus2[0] = t151 * t415;
  r->d3fdrsus2[1] = t151 * t424;
  r->d3fdrsus2[2] = t151 * t435;
  t639 = -0.8e1 / 0.27e2 / t313 / t11 + 0.8e1 / 0.27e2 / t315 / t14;
  t671 = -0.5e1 / 0.108e3 * r->us[0] / t80 / t79 + 0.5e1 / 0.108e3 * r->us[1] / t85 / t84;
  t676 = t343 * t178;
  t680 = t351 * t172;
  t683 = t177 * t177;
  t685 = t93 / t683;
  r->d3fdz3 = (-0.3e1 / 0.32e2 * t8 * t10 * t639 * t19 + 0.24e2 * r->z * t41 * t73 + 0.36e2 * t39 * t153 * t73 + 0.12e2 * t158 * t318 * t73 + t40 * t639 * t73 + 0.19751789702565206229e-1 * t639 * t45 * t70) * t98 + 0.3e1 * t334 * t185 + 0.3e1 * t167 * t367 + t78 * (0.20000000000000000000e-2 * t4 * t7 * t671 * t96 - 0.23400000000000000000e-3 * t374 * t676 * t172 + 0.18493142438399490044e-5 * t680 * t357 - 0.60102712924798342641e-5 * t685 * t680 + 0.76050000000000000000e-3 * t359 * t360 * t172 * t343 - 0.65000000000000000000e-2 * t180 * t181 * t671);
  r->d3fdz2xt = 0.0e0;
  r->d3fdzxt2 = 0.0e0;
  r->d3fdzxtxs[0] = 0.0e0;
  r->d3fdzxtxs[1] = 0.0e0;
  r->d3fdzxtts[0] = 0.0e0;
  r->d3fdzxtts[1] = 0.0e0;
  r->d3fdzxtus[0] = 0.0e0;
  r->d3fdzxtus[1] = 0.0e0;
  r->d3fdz2xs[0] = 0.0e0;
  r->d3fdz2xs[1] = 0.0e0;
  r->d3fdzxs2[0] = 0.0e0;
  r->d3fdzxs2[1] = 0.0e0;
  r->d3fdzxs2[2] = 0.0e0;
  r->d3fdzxsts[0] = 0.0e0;
  r->d3fdzxsts[1] = 0.0e0;
  r->d3fdzxsts[2] = 0.0e0;
  r->d3fdzxsts[3] = 0.0e0;
  r->d3fdzxsus[0] = 0.0e0;
  r->d3fdzxsus[1] = 0.0e0;
  r->d3fdzxsus[2] = 0.0e0;
  r->d3fdzxsus[3] = 0.0e0;
  r->d3fdz2ts[0] = 0.0e0;
  r->d3fdz2ts[1] = 0.0e0;
  r->d3fdzts2[0] = 0.0e0;
  r->d3fdzts2[1] = 0.0e0;
  r->d3fdzts2[2] = 0.0e0;
  r->d3fdztsus[0] = 0.0e0;
  r->d3fdztsus[1] = 0.0e0;
  r->d3fdztsus[2] = 0.0e0;
  r->d3fdztsus[3] = 0.0e0;
  t710 = t351 * t357;
  r->d3fdz2us[0] = t334 * t194 + 0.2e1 * t167 * t386 + t78 * (0.55555555555555555556e-3 * t4 * t7 * t338 * t96 - 0.78000000000000000000e-4 * t374 * t676 * t82 - 0.13000000000000000000e-3 * t374 * t375 * t81 + 0.18493142438399490044e-5 * t710 * t82 - 0.60102712924798342641e-5 * t685 * t351 * t82 + 0.42250000000000000000e-3 * t359 * t360 * t172 * t81 + 0.25350000000000000000e-3 * t359 * t360 * t343 * t82 - 0.18055555555555555556e-2 * t180 * t181 * t338);
  r->d3fdz2us[1] = t334 * t202 + 0.2e1 * t167 * t403 + t78 * (0.55555555555555555556e-3 * t4 * t7 * t340 * t96 - 0.78000000000000000000e-4 * t374 * t676 * t87 + 0.13000000000000000000e-3 * t374 * t375 * t86 + 0.18493142438399490044e-5 * t710 * t87 - 0.60102712924798342641e-5 * t685 * t351 * t87 - 0.42250000000000000000e-3 * t359 * t360 * t172 * t86 + 0.25350000000000000000e-3 * t359 * t360 * t343 * t87 - 0.18055555555555555556e-2 * t180 * t181 * t340);
  t761 = t80 * t405;
  t766 = t172 * t357;
  r->d3fdzus2[0] = t167 * t415 + t78 * (-0.13000000000000000000e-3 * t349 * t350 * t761 * t178 + 0.18493142438399490044e-5 * t766 * t407 - 0.60102712924798342641e-5 * t685 * t172 * t407 + 0.42250000000000000000e-3 * t359 * t360 * t761);
  r->d3fdzus2[1] = t167 * t424 + t78 * (-0.65000000000000000001e-4 * t374 * t81 * t178 * t87 + 0.65000000000000000000e-4 * t374 * t86 * t178 * t82 + 0.18493142438399490044e-5 * t766 * t420 - 0.60102712924798342641e-5 * t685 * t379 * t87 - 0.21125000000000000000e-3 * t359 * t360 * t86 * t82 + 0.21125000000000000000e-3 * t359 * t360 * t81 * t87);
  t802 = t85 * t425;
  r->d3fdzus2[2] = t167 * t435 + t78 * (0.13000000000000000000e-3 * t349 * t350 * t802 * t178 + 0.18493142438399490044e-5 * t766 * t427 - 0.60102712924798342641e-5 * t685 * t172 * t427 - 0.42250000000000000000e-3 * t359 * t360 * t802);
  r->d3fdxt3 = 0.0e0;
  r->d3fdxt2xs[0] = 0.0e0;
  r->d3fdxt2xs[1] = 0.0e0;
  r->d3fdxtxs2[0] = 0.0e0;
  r->d3fdxtxs2[1] = 0.0e0;
  r->d3fdxtxs2[2] = 0.0e0;
  r->d3fdxtxsts[0] = 0.0e0;
  r->d3fdxtxsts[1] = 0.0e0;
  r->d3fdxtxsts[2] = 0.0e0;
  r->d3fdxtxsts[3] = 0.0e0;
  r->d3fdxtxsus[0] = 0.0e0;
  r->d3fdxtxsus[1] = 0.0e0;
  r->d3fdxtxsus[2] = 0.0e0;
  r->d3fdxtxsus[3] = 0.0e0;
  r->d3fdxt2ts[0] = 0.0e0;
  r->d3fdxt2ts[1] = 0.0e0;
  r->d3fdxtts2[0] = 0.0e0;
  r->d3fdxtts2[1] = 0.0e0;
  r->d3fdxtts2[2] = 0.0e0;
  r->d3fdxttsus[0] = 0.0e0;
  r->d3fdxttsus[1] = 0.0e0;
  r->d3fdxttsus[2] = 0.0e0;
  r->d3fdxttsus[3] = 0.0e0;
  r->d3fdxt2us[0] = 0.0e0;
  r->d3fdxt2us[1] = 0.0e0;
  r->d3fdxtus2[0] = 0.0e0;
  r->d3fdxtus2[1] = 0.0e0;
  r->d3fdxtus2[2] = 0.0e0;
  r->d3fdxs3[0] = 0.0e0;
  r->d3fdxs3[1] = 0.0e0;
  r->d3fdxs3[2] = 0.0e0;
  r->d3fdxs3[3] = 0.0e0;
  r->d3fdxs2ts[0] = 0.0e0;
  r->d3fdxs2ts[1] = 0.0e0;
  r->d3fdxs2ts[2] = 0.0e0;
  r->d3fdxs2ts[3] = 0.0e0;
  r->d3fdxs2ts[4] = 0.0e0;
  r->d3fdxs2ts[5] = 0.0e0;
  r->d3fdxs2us[0] = 0.0e0;
  r->d3fdxs2us[1] = 0.0e0;
  r->d3fdxs2us[2] = 0.0e0;
  r->d3fdxs2us[3] = 0.0e0;
  r->d3fdxs2us[4] = 0.0e0;
  r->d3fdxs2us[5] = 0.0e0;
  r->d3fdxsts2[0] = 0.0e0;
  r->d3fdxsts2[1] = 0.0e0;
  r->d3fdxsts2[2] = 0.0e0;
  r->d3fdxsts2[3] = 0.0e0;
  r->d3fdxsts2[4] = 0.0e0;
  r->d3fdxsts2[5] = 0.0e0;
  r->d3fdxstsus[0] = 0.0e0;
  r->d3fdxstsus[1] = 0.0e0;
  r->d3fdxstsus[2] = 0.0e0;
  r->d3fdxstsus[3] = 0.0e0;
  r->d3fdxstsus[4] = 0.0e0;
  r->d3fdxstsus[5] = 0.0e0;
  r->d3fdxstsus[6] = 0.0e0;
  r->d3fdxstsus[7] = 0.0e0;
  r->d3fdxsus2[0] = 0.0e0;
  r->d3fdxsus2[1] = 0.0e0;
  r->d3fdxsus2[2] = 0.0e0;
  r->d3fdxsus2[3] = 0.0e0;
  r->d3fdxsus2[4] = 0.0e0;
  r->d3fdxsus2[5] = 0.0e0;
  r->d3fdts3[0] = 0.0e0;
  r->d3fdts3[1] = 0.0e0;
  r->d3fdts3[2] = 0.0e0;
  r->d3fdts3[3] = 0.0e0;
  r->d3fdts2us[0] = 0.0e0;
  r->d3fdts2us[1] = 0.0e0;
  r->d3fdts2us[2] = 0.0e0;
  r->d3fdts2us[3] = 0.0e0;
  r->d3fdts2us[4] = 0.0e0;
  r->d3fdts2us[5] = 0.0e0;
  r->d3fdtsus2[0] = 0.0e0;
  r->d3fdtsus2[1] = 0.0e0;
  r->d3fdtsus2[2] = 0.0e0;
  r->d3fdtsus2[3] = 0.0e0;
  r->d3fdtsus2[4] = 0.0e0;
  r->d3fdtsus2[5] = 0.0e0;
  t817 = t405 * t405;
  t818 = t817 * t79;
  r->d3fdus3[0] = t78 * (0.18493142438399490044e-5 * t818 * t357 - 0.60102712924798342641e-5 * t685 * t818);
  r->d3fdus3[1] = t78 * (0.18493142438399490044e-5 * t407 * t357 * t87 - 0.60102712924798342641e-5 * t685 * t407 * t87);
  r->d3fdus3[2] = t78 * (0.18493142438399490044e-5 * t82 * t357 * t427 - 0.60102712924798342641e-5 * t685 * t82 * t427);
  t838 = t425 * t425;
  t839 = t838 * t84;
  r->d3fdus3[3] = t78 * (0.18493142438399490044e-5 * t839 * t357 - 0.60102712924798342641e-5 * t685 * t839);

  if(r->order < 4) return;


}

#ifndef CUDA
#define maple2c_order 3
#define maple2c_func  xc_mgga_xc_cc06_func
#endif
