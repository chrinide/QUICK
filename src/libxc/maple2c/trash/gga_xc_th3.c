/* 
  This file was generated automatically with /nfs/data-012/marques/software/source/libxc/svn/scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ../maple/gga_xc_th3.mpl
  Type of functional: work_gga_c
*/

#ifdef DEVICE
__device__ void xc_gga_xc_th3_func
  (const void *p, xc_gga_work_c_t *r)
#else
void xc_gga_xc_th3_func
  (const xc_func_type *p, xc_gga_work_c_t *r)
#endif
{
  double t1, t2, t3, t4, t5, t7, t8, t9;
  double t10, t11, t12, t13, t14, t15, t16, t18;
  double t19, t20, t21, t22, t25, t27, t28, t29;
  double t30, t31, t32, t33, t35, t36, t39, t41;
  double t42, t43, t44, t45, t46, t48, t49, t52;
  double t54, t55, t56, t57, t58, t60, t61, t64;
  double t66, t67, t68, t69, t71, t72, t74, t76;
  double t77, t78, t79, t80, t83, t84, t85, t86;
  double t91, t92, t93, t94, t96, t97, t98, t100;
  double t103, t104, t107, t108, t111, t112, t113, t115;
  double t116, t117, t118, t119, t121, t122, t123, t124;
  double t127, t128, t131, t132, t133, t134, t135, t136;
  double t137, t138, t139, t140, t141, t142, t143, t146;
  double t147, t150, t151, t152, t153, t154, t155, t157;
  double t159, t160, t163, t164, t167, t168, t171, t172;
  double t174, t175, t177, t178, t180, t181, t182, t184;
  double t185, t187, t188, t190, t191, t193, t194, t196;
  double t200, t201, t203, t204, t205, t207, t208, t211;
  double t213, t215, t218, t220, t222, t225, t227, t229;
  double t232, t234, t236, t240, t243, t246, t249, t251;
  double t254, t255, t258, t261, t265, t269, t270, t273;
  double t275, t277, t279, t281, t283, t285, t287, t288;
  double t289, t292, t293, t298, t299, t304, t306, t308;
  double t309, t311, t314, t318, t319, t322, t324, t327;
  double t328, t331, t334, t338, t339, t341, t344, t348;
  double t349, t351, t354, t358, t359, t361, t364, t368;
  double t369, t371, t377, t380, t385, t390, t393, t394;
  double t397, t402, t407, t417, t420, t425, t434, t437;
  double t442, t444, t451, t461, t472, t482, t493, t495;
  double t496, t497, t498, t499, t503, t504, t507, t508;
  double t509, t512, t515, t517, t518, t523, t524, t529;
  double t531, t532, t537, t538, t543, t545, t546, t551;
  double t552, t557, t560, t561, t562, t568, t569, t570;
  double t576, t579, t582, t585, t586, t591, t592, t597;
  double t598, t601, t604, t608, t609, t612, t614, t616;
  double t618, t620, t622, t624, t626, t627, t628, t631;
  double t634, t635, t642, t643, t650, t656, t662, t674;
  double t686, t698, t700, t701, t706, t714, t716, t718;
  double t720, t722, t737, t738, t743, t748, t749, t755;
  double t756, t761, t764, t767, t788, t793, t798, t800;
  double t810, t833, t856, t863, t864, t867, t870, t874;
  double t875, t879, t881, t884, t888, t889, t897, t900;
  double t904, t905, t907, t910, t914, t915, t917, t918;
  double t921, t925, t926, t928, t930, t932, t935, t938;
  double t944, t950, t956, t958, t972, t975, t980, t990;
  double t993, t998, t1004, t1008, t1012, t1016, t1019, t1026;
  double t1045, t1066, t1067, t1086, t1107, t1108, t1112, t1124;
  double t1136, t1138, t1139, t1140, t1142, t1145, t1146, t1150;
  double t1151, t1154, t1157, t1158, t1159, t1161, t1164, t1167;
  double t1170, t1172, t1173, t1180, t1181, t1188, t1190, t1191;
  double t1198, t1199, t1206, t1208, t1209, t1216, t1217, t1224;
  double t1227, t1228, t1236, t1237, t1254, t1255, t1262, t1263;
  double t1270, t1281, t1299, t1301, t1304, t1307, t1310, t1320;
  double t1331, t1332, t1335, t1342, t1345, t1351, t1354, t1384;
  double t1400, t1416, t1436, t1443, t1457, t1511, t1526, t1527;
  double t1534, t1560, t1577, t1581, t1595, t1614, t1639, t1652;
  double t1661, t1669, t1691, t1746, t1789, t1903, t1912, t1921;
  double t1930, t1949, t1959, t1965, t2004, t2017, t2018, t2041;
  double t2043, t2072, t2115, t2121, t2148, t2153, t2184, t2187;
  double t2214, t2219, t2244, t2268;

  gga_xc_th3_params *params;

#ifndef DEVICE
  assert(p->params != NULL);
  params = (gga_xc_th3_params * )(p->params);
#else
  params = (gga_xc_th3_params * )(p);
#endif

  t1 = params->omega[0];
  t2 = pow(0.3e1, 0.1e1 / 0.6e1);
  t3 = pow(0.8e1, 0.1e1 / 0.6e1);
  t4 = t3 * t3;
  t5 = t4 * t4;
  t7 = t2 * t5 * t3;
  t8 = 0.1e1 + r->z;
  t9 = 0.1e1 / 0.31415926535897932385e1;
  t10 = t8 * t9;
  t11 = r->rs * r->rs;
  t12 = t11 * r->rs;
  t13 = 0.1e1 / t12;
  t14 = t10 * t13;
  t15 = pow(t14, 0.1e1 / 0.6e1);
  t16 = t15 * t14;
  t18 = 0.1e1 - r->z;
  t19 = t18 * t9;
  t20 = t19 * t13;
  t21 = pow(t20, 0.1e1 / 0.6e1);
  t22 = t21 * t20;
  t25 = 0.3e1 / 0.64e2 * t7 * t16 + 0.3e1 / 0.64e2 * t7 * t22;
  t27 = params->omega[1];
  t28 = M_CBRT3;
  t29 = cbrt(0.8e1);
  t30 = t29 * t29;
  t31 = t28 * t30;
  t32 = cbrt(t14);
  t33 = t32 * t14;
  t35 = cbrt(t20);
  t36 = t35 * t20;
  t39 = 0.3e1 / 0.64e2 * t31 * t33 + 0.3e1 / 0.64e2 * t31 * t36;
  t41 = params->omega[2];
  t42 = sqrt(0.3e1);
  t43 = sqrt(0.8e1);
  t44 = t42 * t43;
  t45 = sqrt(t14);
  t46 = t45 * t14;
  t48 = sqrt(t20);
  t49 = t48 * t20;
  t52 = 0.3e1 / 0.64e2 * t44 * t46 + 0.3e1 / 0.64e2 * t44 * t49;
  t54 = params->omega[3];
  t55 = t28 * t28;
  t56 = t55 * t29;
  t57 = t32 * t32;
  t58 = t57 * t14;
  t60 = t35 * t35;
  t61 = t60 * t20;
  t64 = 0.3e1 / 0.64e2 * t56 * t58 + 0.3e1 / 0.64e2 * t56 * t61;
  t66 = params->omega[4];
  t67 = pow(0.3e1, 0.1e1 / 0.12e2);
  t68 = t67 * t67;
  t69 = t68 * t68;
  t71 = pow(0.8e1, 0.1e1 / 0.12e2);
  t72 = t71 * t71;
  t74 = t72 * t72;
  t76 = t69 * t67 * t74 * t72 * t71;
  t77 = pow(t14, 0.1e1 / 0.12e2);
  t78 = t77 * t77;
  t79 = t78 * t78;
  t80 = t79 * t77;
  t83 = pow(t20, 0.1e1 / 0.12e2);
  t84 = t83 * t83;
  t85 = t84 * t84;
  t86 = t85 * t83;
  t91 = t66 * (0.3e1 / 0.64e2 * t76 * t80 * t14 + 0.3e1 / 0.64e2 * t76 * t86 * t20);
  t92 = t8 / 0.2e1;
  t93 = cbrt(t92);
  t94 = t93 * t92;
  t96 = t18 / 0.2e1;
  t97 = cbrt(t96);
  t98 = t97 * t96;
  t100 = r->xs[0] * t94 + r->xs[1] * t98;
  t103 = params->omega[5];
  t104 = t103 * t52;
  t107 = params->omega[6];
  t108 = t107 * t64;
  t111 = params->omega[7];
  t112 = t2 * t2;
  t113 = t112 * t112;
  t115 = t113 * t2 * t3;
  t116 = t15 * t15;
  t117 = t116 * t116;
  t118 = t117 * t15;
  t119 = t118 * t14;
  t121 = t21 * t21;
  t122 = t121 * t121;
  t123 = t122 * t21;
  t124 = t123 * t20;
  t127 = 0.3e1 / 0.64e2 * t115 * t119 + 0.3e1 / 0.64e2 * t115 * t124;
  t128 = t111 * t127;
  t131 = params->omega[8];
  t132 = t131 * t64;
  t133 = r->xs[0] * r->xs[0];
  t134 = t92 * t92;
  t135 = t93 * t93;
  t136 = t135 * t134;
  t137 = t133 * t136;
  t138 = r->xs[1] * r->xs[1];
  t139 = t96 * t96;
  t140 = t97 * t97;
  t141 = t140 * t139;
  t142 = t138 * t141;
  t143 = t137 + t142;
  t146 = params->omega[9];
  t147 = t146 * t127;
  t150 = params->omega[10];
  t151 = t8 * t8;
  t152 = 0.31415926535897932385e1 * 0.31415926535897932385e1;
  t153 = 0.1e1 / t152;
  t154 = t151 * t153;
  t155 = t11 * t11;
  t157 = 0.1e1 / t155 / t11;
  t159 = t18 * t18;
  t160 = t159 * t153;
  t163 = 0.9e1 / 0.64e2 * t154 * t157 + 0.9e1 / 0.64e2 * t160 * t157;
  t164 = t150 * t163;
  t167 = params->omega[11];
  t168 = t167 * t64;
  t171 = r->xt * r->xt;
  t172 = 0.2e1 * t137 + 0.2e1 * t142 - t171;
  t174 = params->omega[12];
  t175 = t174 * t127;
  t177 = params->omega[13];
  t178 = t177 * t163;
  t180 = params->omega[14];
  t181 = t180 * t25;
  t182 = r->z * r->z;
  t184 = params->omega[15];
  t185 = t184 * t39;
  t187 = params->omega[16];
  t188 = t187 * t52;
  t190 = params->omega[17];
  t191 = t190 * t64;
  t193 = params->omega[18];
  t194 = pow(t14, 0.10833333333333333333e1);
  t196 = pow(t20, 0.10833333333333333333e1);
  t200 = t1 * t25 + t27 * t39 + t41 * t52 + t54 * t64 + t91 * t100 / 0.2e1 + t104 * t100 / 0.2e1 + t108 * t100 / 0.2e1 + t128 * t100 / 0.2e1 + t132 * t143 / 0.2e1 + t147 * t143 / 0.2e1 + t164 * t143 / 0.2e1 + t168 * t172 + t175 * t172 + t178 * t172 + t181 * t182 + t185 * t182 + t188 * t182 + t191 * t182 + t193 * (0.34556828158127554444e0 * t194 + 0.34556828158127554444e0 * t196);
  t201 = t200 * 0.31415926535897932385e1;
  r->f = 0.4e1 / 0.3e1 * t201 * t12;

  if(r->order < 1) return;

  t203 = t7 * t15;
  t204 = 0.1e1 / t155;
  t205 = t10 * t204;
  t207 = t7 * t21;
  t208 = t19 * t204;
  t211 = -0.21e2 / 0.128e3 * t203 * t205 - 0.21e2 / 0.128e3 * t207 * t208;
  t213 = t31 * t32;
  t215 = t31 * t35;
  t218 = -0.3e1 / 0.16e2 * t213 * t205 - 0.3e1 / 0.16e2 * t215 * t208;
  t220 = t44 * t45;
  t222 = t44 * t48;
  t225 = -0.27e2 / 0.128e3 * t220 * t205 - 0.27e2 / 0.128e3 * t222 * t208;
  t227 = t56 * t57;
  t229 = t56 * t60;
  t232 = -0.15e2 / 0.64e2 * t227 * t205 - 0.15e2 / 0.64e2 * t229 * t208;
  t234 = t76 * t80;
  t236 = t76 * t86;
  t240 = t66 * (-0.51e2 / 0.256e3 * t234 * t205 - 0.51e2 / 0.256e3 * t236 * t208);
  t243 = t103 * t225;
  t246 = t107 * t232;
  t249 = t115 * t118;
  t251 = t115 * t123;
  t254 = -0.33e2 / 0.128e3 * t249 * t205 - 0.33e2 / 0.128e3 * t251 * t208;
  t255 = t111 * t254;
  t258 = t131 * t232;
  t261 = t146 * t254;
  t265 = 0.1e1 / t155 / t12;
  t269 = -0.27e2 / 0.32e2 * t154 * t265 - 0.27e2 / 0.32e2 * t160 * t265;
  t270 = t150 * t269;
  t273 = t167 * t232;
  t275 = t174 * t254;
  t277 = t177 * t269;
  t279 = t180 * t211;
  t281 = t184 * t218;
  t283 = t187 * t225;
  t285 = t190 * t232;
  t287 = pow(t14, 0.833333333333333333e-1);
  t288 = t287 * t8;
  t289 = t9 * t204;
  t292 = pow(t20, 0.833333333333333333e-1);
  t293 = t292 * t18;
  t298 = t1 * t211 + t27 * t218 + t41 * t225 + t54 * t232 + t240 * t100 / 0.2e1 + t243 * t100 / 0.2e1 + t246 * t100 / 0.2e1 + t255 * t100 / 0.2e1 + t258 * t143 / 0.2e1 + t261 * t143 / 0.2e1 + t270 * t143 / 0.2e1 + t273 * t172 + t275 * t172 + t277 * t172 + t279 * t182 + t281 * t182 + t283 * t182 + t285 * t182 + t193 * (-0.11230969151391455194e1 * t288 * t289 - 0.11230969151391455194e1 * t293 * t289);
  t299 = t298 * 0.31415926535897932385e1;
  r->dfdrs = 0.4e1 / 0.3e1 * t299 * t12 + 0.4e1 * t201 * t11;
  t304 = t135 * t92;
  t306 = t140 * t96;
  t308 = t133 * t304 - t138 * t306;
  t309 = 0.8e1 / 0.3e1 * t308;
  t311 = t118 * t9;
  t314 = t123 * t9;
  t318 = 0.11e2 / 0.128e3 * t115 * t311 * t13 - 0.11e2 / 0.128e3 * t115 * t314 * t13;
  t319 = t174 * t318;
  t322 = t8 * t153;
  t324 = t18 * t153;
  t327 = 0.9e1 / 0.32e2 * t322 * t157 - 0.9e1 / 0.32e2 * t324 * t157;
  t328 = t177 * t327;
  t331 = t15 * t9;
  t334 = t21 * t9;
  t338 = 0.7e1 / 0.128e3 * t7 * t331 * t13 - 0.7e1 / 0.128e3 * t7 * t334 * t13;
  t339 = t180 * t338;
  t341 = t32 * t9;
  t344 = t35 * t9;
  t348 = t31 * t341 * t13 / 0.16e2 - t31 * t344 * t13 / 0.16e2;
  t349 = t184 * t348;
  t351 = t45 * t9;
  t354 = t48 * t9;
  t358 = 0.9e1 / 0.128e3 * t44 * t351 * t13 - 0.9e1 / 0.128e3 * t44 * t354 * t13;
  t359 = t187 * t358;
  t361 = t57 * t9;
  t364 = t60 * t9;
  t368 = 0.5e1 / 0.64e2 * t56 * t361 * t13 - 0.5e1 / 0.64e2 * t56 * t364 * t13;
  t369 = t190 * t368;
  t371 = t103 * t358;
  t377 = 0.2e1 / 0.3e1 * r->xs[0] * t93 - 0.2e1 / 0.3e1 * r->xs[1] * t97;
  t380 = t107 * t368;
  t385 = t111 * t318;
  t390 = t131 * t368;
  t393 = t168 * t309 + t319 * t172 + t175 * t309 + t328 * t172 + t178 * t309 + t339 * t182 + t349 * t182 + t359 * t182 + t369 * t182 + t371 * t100 / 0.2e1 + t104 * t377 / 0.2e1 + t380 * t100 / 0.2e1 + t108 * t377 / 0.2e1 + t385 * t100 / 0.2e1 + t128 * t377 / 0.2e1 + t390 * t143 / 0.2e1;
  t394 = 0.4e1 / 0.3e1 * t308;
  t397 = t146 * t318;
  t402 = t150 * t327;
  t407 = t167 * t368;
  t417 = t80 * t9;
  t420 = t86 * t9;
  t425 = t66 * (0.17e2 / 0.256e3 * t76 * t417 * t13 - 0.17e2 / 0.256e3 * t76 * t420 * t13);
  t434 = t287 * t9;
  t437 = t292 * t9;
  t442 = t132 * t394 / 0.2e1 + t397 * t143 / 0.2e1 + t147 * t394 / 0.2e1 + t402 * t143 / 0.2e1 + t164 * t394 / 0.2e1 + t407 * t172 + 0.2e1 * t181 * r->z + 0.2e1 * t185 * r->z + 0.2e1 * t188 * r->z + 0.2e1 * t191 * r->z + t425 * t100 / 0.2e1 + t91 * t377 / 0.2e1 + t1 * t338 + t27 * t348 + t41 * t358 + t54 * t368 + t193 * (0.37436563837971517313e0 * t434 * t13 - 0.37436563837971517313e0 * t437 * t13);
  t444 = (t393 + t442) * 0.31415926535897932385e1;
  r->dfdz = 0.4e1 / 0.3e1 * t444 * t12;
  t451 = (-0.2e1 * t168 * r->xt - 0.2e1 * t175 * r->xt - 0.2e1 * t178 * r->xt) * 0.31415926535897932385e1;
  r->dfdxt = 0.4e1 / 0.3e1 * t451 * t12;
  t461 = r->xs[0] * t136;
  t472 = (t91 * t94 / 0.2e1 + t104 * t94 / 0.2e1 + t108 * t94 / 0.2e1 + t128 * t94 / 0.2e1 + t132 * t461 + t147 * t461 + t164 * t461 + 0.4e1 * t168 * t461 + 0.4e1 * t175 * t461 + 0.4e1 * t178 * t461) * 0.31415926535897932385e1;
  r->dfdxs[0] = 0.4e1 / 0.3e1 * t472 * t12;
  t482 = r->xs[1] * t141;
  t493 = (t91 * t98 / 0.2e1 + t104 * t98 / 0.2e1 + t108 * t98 / 0.2e1 + t128 * t98 / 0.2e1 + t132 * t482 + t147 * t482 + t164 * t482 + 0.4e1 * t168 * t482 + 0.4e1 * t175 * t482 + 0.4e1 * t178 * t482) * 0.31415926535897932385e1;
  r->dfdxs[1] = 0.4e1 / 0.3e1 * t493 * t12;

  if(r->order < 2) return;

  t495 = 0.1e1 / t118;
  t496 = t7 * t495;
  t497 = t155 * t155;
  t498 = 0.1e1 / t497;
  t499 = t154 * t498;
  t503 = 0.1e1 / t155 / r->rs;
  t504 = t10 * t503;
  t507 = 0.1e1 / t123;
  t508 = t7 * t507;
  t509 = t160 * t498;
  t512 = t19 * t503;
  t515 = 0.21e2 / 0.256e3 * t496 * t499 + 0.21e2 / 0.32e2 * t203 * t504 + 0.21e2 / 0.256e3 * t508 * t509 + 0.21e2 / 0.32e2 * t207 * t512;
  t517 = 0.1e1 / t57;
  t518 = t31 * t517;
  t523 = 0.1e1 / t60;
  t524 = t31 * t523;
  t529 = 0.3e1 / 0.16e2 * t518 * t499 + 0.3e1 / 0.4e1 * t213 * t504 + 0.3e1 / 0.16e2 * t524 * t509 + 0.3e1 / 0.4e1 * t215 * t512;
  t531 = 0.1e1 / t45;
  t532 = t44 * t531;
  t537 = 0.1e1 / t48;
  t538 = t44 * t537;
  t543 = 0.81e2 / 0.256e3 * t532 * t499 + 0.27e2 / 0.32e2 * t220 * t504 + 0.81e2 / 0.256e3 * t538 * t509 + 0.27e2 / 0.32e2 * t222 * t512;
  t545 = 0.1e1 / t32;
  t546 = t56 * t545;
  t551 = 0.1e1 / t35;
  t552 = t56 * t551;
  t557 = 0.15e2 / 0.32e2 * t546 * t499 + 0.15e2 / 0.16e2 * t227 * t504 + 0.15e2 / 0.32e2 * t552 * t509 + 0.15e2 / 0.16e2 * t229 * t512;
  t560 = t79 * t78 * t77;
  t561 = 0.1e1 / t560;
  t562 = t76 * t561;
  t568 = t85 * t84 * t83;
  t569 = 0.1e1 / t568;
  t570 = t76 * t569;
  t576 = t66 * (0.255e3 / 0.1024e4 * t562 * t499 + 0.51e2 / 0.64e2 * t234 * t504 + 0.255e3 / 0.1024e4 * t570 * t509 + 0.51e2 / 0.64e2 * t236 * t512);
  t579 = t103 * t543;
  t582 = t107 * t557;
  t585 = 0.1e1 / t15;
  t586 = t115 * t585;
  t591 = 0.1e1 / t21;
  t592 = t115 * t591;
  t597 = 0.165e3 / 0.256e3 * t586 * t499 + 0.33e2 / 0.32e2 * t249 * t504 + 0.165e3 / 0.256e3 * t592 * t509 + 0.33e2 / 0.32e2 * t251 * t512;
  t598 = t111 * t597;
  t601 = t131 * t557;
  t604 = t146 * t597;
  t608 = 0.189e3 / 0.32e2 * t499 + 0.189e3 / 0.32e2 * t509;
  t609 = t150 * t608;
  t612 = t167 * t557;
  t614 = t174 * t597;
  t616 = t177 * t608;
  t618 = t180 * t515;
  t620 = t184 * t529;
  t622 = t187 * t543;
  t624 = t190 * t557;
  t626 = pow(t14, -0.9166666666666666667e0);
  t627 = t626 * t151;
  t628 = t153 * t498;
  t631 = t9 * t503;
  t634 = pow(t20, -0.9166666666666666667e0);
  t635 = t634 * t159;
  t642 = t1 * t515 + t27 * t529 + t41 * t543 + t54 * t557 + t576 * t100 / 0.2e1 + t579 * t100 / 0.2e1 + t582 * t100 / 0.2e1 + t598 * t100 / 0.2e1 + t601 * t143 / 0.2e1 + t604 * t143 / 0.2e1 + t609 * t143 / 0.2e1 + t612 * t172 + t614 * t172 + t616 * t172 + t618 * t182 + t620 * t182 + t622 * t182 + t624 * t182 + t193 * (0.28077422878478637974e0 * t627 * t628 + 0.44923876605565820776e1 * t288 * t631 + 0.28077422878478637974e0 * t635 * t628 + 0.44923876605565820776e1 * t293 * t631);
  t643 = t642 * 0.31415926535897932385e1;
  r->d2fdrs2 = 0.4e1 / 0.3e1 * t643 * t12 + 0.8e1 * t299 * t11 + 0.8e1 * t201 * r->rs;
  t650 = t322 * t265;
  t656 = t324 * t265;
  t662 = -0.7e1 / 0.256e3 * t496 * t650 - 0.21e2 / 0.128e3 * t7 * t331 * t204 + 0.7e1 / 0.256e3 * t508 * t656 + 0.21e2 / 0.128e3 * t7 * t334 * t204;
  t674 = -t518 * t650 / 0.16e2 - 0.3e1 / 0.16e2 * t31 * t341 * t204 + t524 * t656 / 0.16e2 + 0.3e1 / 0.16e2 * t31 * t344 * t204;
  t686 = -0.27e2 / 0.256e3 * t532 * t650 - 0.27e2 / 0.128e3 * t44 * t351 * t204 + 0.27e2 / 0.256e3 * t538 * t656 + 0.27e2 / 0.128e3 * t44 * t354 * t204;
  t698 = -0.5e1 / 0.32e2 * t546 * t650 - 0.15e2 / 0.64e2 * t56 * t361 * t204 + 0.5e1 / 0.32e2 * t552 * t656 + 0.15e2 / 0.64e2 * t56 * t364 * t204;
  t700 = t626 * t8;
  t701 = t153 * t265;
  t706 = t634 * t18;
  t714 = t180 * t662;
  t716 = t184 * t674;
  t718 = t187 * t686;
  t720 = t190 * t698;
  t722 = t107 * t698;
  t737 = -0.55e2 / 0.256e3 * t586 * t650 - 0.33e2 / 0.128e3 * t115 * t311 * t204 + 0.55e2 / 0.256e3 * t592 * t656 + 0.33e2 / 0.128e3 * t115 * t314 * t204;
  t738 = t111 * t737;
  t743 = t131 * t698;
  t748 = t1 * t662 + t27 * t674 + t41 * t686 + t54 * t698 + t193 * (-0.93591409594928793246e-1 * t700 * t701 - 0.11230969151391455194e1 * t434 * t204 + 0.93591409594928793246e-1 * t706 * t701 + 0.11230969151391455194e1 * t437 * t204) + t277 * t309 + t714 * t182 + t716 * t182 + t718 * t182 + t720 * t182 + t722 * t100 / 0.2e1 + t246 * t377 / 0.2e1 + t738 * t100 / 0.2e1 + t255 * t377 / 0.2e1 + t743 * t143 / 0.2e1 + t258 * t394 / 0.2e1;
  t749 = t146 * t737;
  t755 = -0.27e2 / 0.16e2 * t650 + 0.27e2 / 0.16e2 * t656;
  t756 = t150 * t755;
  t761 = t167 * t698;
  t764 = t174 * t737;
  t767 = t177 * t755;
  t788 = t66 * (-0.85e2 / 0.1024e4 * t562 * t650 - 0.51e2 / 0.256e3 * t76 * t417 * t204 + 0.85e2 / 0.1024e4 * t570 * t656 + 0.51e2 / 0.256e3 * t76 * t420 * t204);
  t793 = t103 * t686;
  t798 = t749 * t143 / 0.2e1 + t261 * t394 / 0.2e1 + t756 * t143 / 0.2e1 + t270 * t394 / 0.2e1 + t761 * t172 + t273 * t309 + t764 * t172 + t275 * t309 + t767 * t172 + 0.2e1 * t279 * r->z + 0.2e1 * t281 * r->z + 0.2e1 * t283 * r->z + 0.2e1 * t285 * r->z + t788 * t100 / 0.2e1 + t240 * t377 / 0.2e1 + t793 * t100 / 0.2e1 + t243 * t377 / 0.2e1;
  t800 = (t748 + t798) * 0.31415926535897932385e1;
  r->d2fdrsz = 0.4e1 / 0.3e1 * t800 * t12 + 0.4e1 * t444 * t11;
  t810 = (-0.2e1 * t273 * r->xt - 0.2e1 * t275 * r->xt - 0.2e1 * t277 * r->xt) * 0.31415926535897932385e1;
  r->d2fdrsxt = 0.4e1 / 0.3e1 * t810 * t12 + 0.4e1 * t451 * t11;
  t833 = (t240 * t94 / 0.2e1 + t243 * t94 / 0.2e1 + t246 * t94 / 0.2e1 + t255 * t94 / 0.2e1 + t258 * t461 + t261 * t461 + t270 * t461 + 0.4e1 * t273 * t461 + 0.4e1 * t275 * t461 + 0.4e1 * t277 * t461) * 0.31415926535897932385e1;
  r->d2fdrsxs[0] = 0.4e1 / 0.3e1 * t833 * t12 + 0.4e1 * t472 * t11;
  t856 = (t240 * t98 / 0.2e1 + t243 * t98 / 0.2e1 + t246 * t98 / 0.2e1 + t255 * t98 / 0.2e1 + t258 * t482 + t261 * t482 + t270 * t482 + 0.4e1 * t273 * t482 + 0.4e1 * t275 * t482 + 0.4e1 * t277 * t482) * 0.31415926535897932385e1;
  r->d2fdrsxs[1] = 0.4e1 / 0.3e1 * t856 * t12 + 0.4e1 * t493 * t11;
  t863 = t133 * t135 + t138 * t140;
  t864 = 0.10e2 / 0.9e1 * t863;
  t867 = t545 * t153;
  t870 = t551 * t153;
  t874 = 0.5e1 / 0.96e2 * t56 * t867 * t157 + 0.5e1 / 0.96e2 * t56 * t870 * t157;
  t875 = t167 * t874;
  t879 = 0.20e2 / 0.9e1 * t863;
  t881 = t585 * t153;
  t884 = t591 * t153;
  t888 = 0.55e2 / 0.768e3 * t115 * t881 * t157 + 0.55e2 / 0.768e3 * t115 * t884 * t157;
  t889 = t174 * t888;
  t897 = t495 * t153;
  t900 = t507 * t153;
  t904 = 0.7e1 / 0.768e3 * t7 * t897 * t157 + 0.7e1 / 0.768e3 * t7 * t900 * t157;
  t905 = t180 * t904;
  t907 = t517 * t153;
  t910 = t523 * t153;
  t914 = t31 * t907 * t157 / 0.48e2 + t31 * t910 * t157 / 0.48e2;
  t915 = t184 * t914;
  t917 = t164 * t864 / 0.2e1 + t875 * t172 + 0.2e1 * t407 * t309 + t168 * t879 + t889 * t172 + 0.2e1 * t319 * t309 + t175 * t879 + 0.2e1 * t328 * t309 + t178 * t879 + t905 * t182 + t915 * t182;
  t918 = t531 * t153;
  t921 = t537 * t153;
  t925 = 0.9e1 / 0.256e3 * t44 * t918 * t157 + 0.9e1 / 0.256e3 * t44 * t921 * t157;
  t926 = t187 * t925;
  t928 = t190 * t874;
  t930 = 0.1e1 / t135;
  t932 = 0.1e1 / t140;
  t935 = r->xs[0] * t930 / 0.9e1 + r->xs[1] * t932 / 0.9e1;
  t938 = t107 * t874;
  t944 = t111 * t888;
  t950 = t131 * t874;
  t956 = t926 * t182 + t928 * t182 + t104 * t935 / 0.2e1 + t938 * t100 / 0.2e1 + t380 * t377 + t108 * t935 / 0.2e1 + t944 * t100 / 0.2e1 + t385 * t377 + t128 * t935 / 0.2e1 + t950 * t143 / 0.2e1 + t390 * t394 + t132 * t864 / 0.2e1;
  t958 = t146 * t888;
  t972 = t626 * t153;
  t975 = t634 * t153;
  t980 = t958 * t143 / 0.2e1 + t397 * t394 + t147 * t864 / 0.2e1 + t402 * t394 + 0.2e1 * t185 + 0.2e1 * t188 + 0.2e1 * t191 + t1 * t904 + t27 * t914 + t41 * t925 + t54 * t874 + t193 * (0.31197136531642931082e-1 * t972 * t157 + 0.31197136531642931082e-1 * t975 * t157);
  t990 = t561 * t153;
  t993 = t569 * t153;
  t998 = t66 * (0.85e2 / 0.3072e4 * t76 * t990 * t157 + 0.85e2 / 0.3072e4 * t76 * t993 * t157);
  t1004 = t103 * t925;
  t1008 = t150 * t153;
  t1012 = t177 * t153;
  t1016 = 0.2e1 * t181 + 0.4e1 * t339 * r->z + 0.4e1 * t349 * r->z + 0.4e1 * t359 * r->z + 0.4e1 * t369 * r->z + t998 * t100 / 0.2e1 + t425 * t377 + t91 * t935 / 0.2e1 + t1004 * t100 / 0.2e1 + t371 * t377 + 0.9e1 / 0.32e2 * t1008 * t157 * t143 + 0.9e1 / 0.16e2 * t1012 * t157 * t172;
  t1019 = (t917 + t956 + t980 + t1016) * 0.31415926535897932385e1;
  r->d2fdz2 = 0.4e1 / 0.3e1 * t1019 * t12;
  t1026 = (-0.2e1 * t319 * r->xt - 0.2e1 * t328 * r->xt - 0.2e1 * t407 * r->xt) * 0.31415926535897932385e1;
  r->d2fdzxt = 0.4e1 / 0.3e1 * t1026 * t12;
  t1045 = r->xs[0] * t304;
  t1066 = t425 * t94 / 0.2e1 + t91 * t93 / 0.3e1 + t371 * t94 / 0.2e1 + t104 * t93 / 0.3e1 + t380 * t94 / 0.2e1 + t108 * t93 / 0.3e1 + t385 * t94 / 0.2e1 + t128 * t93 / 0.3e1 + t390 * t461 + 0.4e1 / 0.3e1 * t132 * t1045 + t397 * t461 + 0.4e1 / 0.3e1 * t147 * t1045 + t402 * t461 + 0.4e1 / 0.3e1 * t164 * t1045 + 0.4e1 * t407 * t461 + 0.16e2 / 0.3e1 * t168 * t1045 + 0.4e1 * t319 * t461 + 0.16e2 / 0.3e1 * t175 * t1045 + 0.4e1 * t328 * t461 + 0.16e2 / 0.3e1 * t178 * t1045;
  t1067 = t1066 * 0.31415926535897932385e1;
  r->d2fdzxs[0] = 0.4e1 / 0.3e1 * t1067 * t12;
  t1086 = r->xs[1] * t306;
  t1107 = t425 * t98 / 0.2e1 - t91 * t97 / 0.3e1 + t371 * t98 / 0.2e1 - t104 * t97 / 0.3e1 + t380 * t98 / 0.2e1 - t108 * t97 / 0.3e1 + t385 * t98 / 0.2e1 - t128 * t97 / 0.3e1 + t390 * t482 - 0.4e1 / 0.3e1 * t132 * t1086 + t397 * t482 - 0.4e1 / 0.3e1 * t147 * t1086 + t402 * t482 - 0.4e1 / 0.3e1 * t164 * t1086 + 0.4e1 * t407 * t482 - 0.16e2 / 0.3e1 * t168 * t1086 + 0.4e1 * t319 * t482 - 0.16e2 / 0.3e1 * t175 * t1086 + 0.4e1 * t328 * t482 - 0.16e2 / 0.3e1 * t178 * t1086;
  t1108 = t1107 * 0.31415926535897932385e1;
  r->d2fdzxs[1] = 0.4e1 / 0.3e1 * t1108 * t12;
  t1112 = (-0.2e1 * t168 - 0.2e1 * t175 - 0.2e1 * t178) * 0.31415926535897932385e1;
  r->d2fdxt2 = 0.4e1 / 0.3e1 * t1112 * t12;
  r->d2fdxtxs[0] = 0.0e0;
  r->d2fdxtxs[1] = 0.0e0;
  t1124 = (t132 * t136 + t147 * t136 + t164 * t136 + 0.4e1 * t168 * t136 + 0.4e1 * t175 * t136 + 0.4e1 * t178 * t136) * 0.31415926535897932385e1;
  r->d2fdxs2[0] = 0.4e1 / 0.3e1 * t1124 * t12;
  r->d2fdxs2[1] = 0.0e0;
  t1136 = (t132 * t141 + t147 * t141 + t164 * t141 + 0.4e1 * t168 * t141 + 0.4e1 * t175 * t141 + 0.4e1 * t178 * t141) * 0.31415926535897932385e1;
  r->d2fdxs2[2] = 0.4e1 / 0.3e1 * t1136 * t12;

  if(r->order < 3) return;

  t1138 = 0.1e1 / t119;
  t1139 = t7 * t1138;
  t1140 = t151 * t8;
  t1142 = 0.1e1 / t152 / 0.31415926535897932385e1;
  t1145 = 0.1e1 / t497 / t155;
  t1146 = t1140 * t1142 * t1145;
  t1150 = 0.1e1 / t497 / r->rs;
  t1151 = t154 * t1150;
  t1154 = t10 * t157;
  t1157 = 0.1e1 / t124;
  t1158 = t7 * t1157;
  t1159 = t159 * t18;
  t1161 = t1159 * t1142 * t1145;
  t1164 = t160 * t1150;
  t1167 = t19 * t157;
  t1170 = 0.105e3 / 0.512e3 * t1139 * t1146 - 0.63e2 / 0.64e2 * t496 * t1151 - 0.105e3 / 0.32e2 * t203 * t1154 + 0.105e3 / 0.512e3 * t1158 * t1161 - 0.63e2 / 0.64e2 * t508 * t1164 - 0.105e3 / 0.32e2 * t207 * t1167;
  t1172 = 0.1e1 / t58;
  t1173 = t31 * t1172;
  t1180 = 0.1e1 / t61;
  t1181 = t31 * t1180;
  t1188 = 0.3e1 / 0.8e1 * t1173 * t1146 - 0.9e1 / 0.4e1 * t518 * t1151 - 0.15e2 / 0.4e1 * t213 * t1154 + 0.3e1 / 0.8e1 * t1181 * t1161 - 0.9e1 / 0.4e1 * t524 * t1164 - 0.15e2 / 0.4e1 * t215 * t1167;
  t1190 = 0.1e1 / t46;
  t1191 = t44 * t1190;
  t1198 = 0.1e1 / t49;
  t1199 = t44 * t1198;
  t1206 = 0.243e3 / 0.512e3 * t1191 * t1146 - 0.243e3 / 0.64e2 * t532 * t1151 - 0.135e3 / 0.32e2 * t220 * t1154 + 0.243e3 / 0.512e3 * t1199 * t1161 - 0.243e3 / 0.64e2 * t538 * t1164 - 0.135e3 / 0.32e2 * t222 * t1167;
  t1208 = 0.1e1 / t33;
  t1209 = t56 * t1208;
  t1216 = 0.1e1 / t36;
  t1217 = t56 * t1216;
  t1224 = 0.15e2 / 0.32e2 * t1209 * t1146 - 0.45e2 / 0.8e1 * t546 * t1151 - 0.75e2 / 0.16e2 * t227 * t1154 + 0.15e2 / 0.32e2 * t1217 * t1161 - 0.45e2 / 0.8e1 * t552 * t1164 - 0.75e2 / 0.16e2 * t229 * t1167;
  t1227 = 0.1e1 / t560 / t14;
  t1228 = t76 * t1227;
  t1236 = 0.1e1 / t568 / t20;
  t1237 = t76 * t1236;
  t1254 = 0.1e1 / t16;
  t1255 = t115 * t1254;
  t1262 = 0.1e1 / t22;
  t1263 = t115 * t1262;
  t1270 = 0.165e3 / 0.512e3 * t1255 * t1146 - 0.495e3 / 0.64e2 * t586 * t1151 - 0.165e3 / 0.32e2 * t249 * t1154 + 0.165e3 / 0.512e3 * t1263 * t1161 - 0.495e3 / 0.64e2 * t592 * t1164 - 0.165e3 / 0.32e2 * t251 * t1167;
  t1281 = -0.189e3 / 0.4e1 * t1151 - 0.189e3 / 0.4e1 * t1164;
  t1299 = pow(t14, -0.19166666666666666667e1);
  t1301 = t1142 * t1145;
  t1304 = t153 * t1150;
  t1307 = t9 * t157;
  t1310 = pow(t20, -0.19166666666666666667e1);
  t1320 = t1 * t1170 + t27 * t1188 + t41 * t1206 + t54 * t1224 + t66 * (0.1785e4 / 0.4096e4 * t1228 * t1146 - 0.765e3 / 0.256e3 * t562 * t1151 - 0.255e3 / 0.64e2 * t234 * t1154 + 0.1785e4 / 0.4096e4 * t1237 * t1161 - 0.765e3 / 0.256e3 * t570 * t1164 - 0.255e3 / 0.64e2 * t236 * t1167) * t100 / 0.2e1 + t103 * t1206 * t100 / 0.2e1 + t107 * t1224 * t100 / 0.2e1 + t111 * t1270 * t100 / 0.2e1 + t131 * t1224 * t143 / 0.2e1 + t146 * t1270 * t143 / 0.2e1 + t150 * t1281 * t143 / 0.2e1 + t167 * t1224 * t172 + t174 * t1270 * t172 + t177 * t1281 * t172 + t180 * t1170 * t182 + t184 * t1188 * t182 + t187 * t1206 * t182 + t190 * t1224 * t182 + t193 * (0.77212912915816254431e0 * t1299 * t1140 * t1301 - 0.33692907454174365569e1 * t627 * t1304 - 0.22461938302782910388e2 * t288 * t1307 + 0.77212912915816254431e0 * t1310 * t1159 * t1301 - 0.33692907454174365569e1 * t635 * t1304 - 0.22461938302782910388e2 * t293 * t1307);
  r->d3fdrs3 = 0.4e1 / 0.3e1 * t1320 * 0.31415926535897932385e1 * t12 + 0.12e2 * t643 * t11 + 0.24e2 * t299 * r->rs + 0.8e1 * t201;
  t1331 = 0.1e1 / t497 / t12;
  t1332 = t151 * t1142 * t1331;
  t1335 = t322 * t498;
  t1342 = t159 * t1142 * t1331;
  t1345 = t324 * t498;
  t1351 = -0.5e1 / 0.32e2 * t1209 * t1332 + 0.25e2 / 0.16e2 * t546 * t1335 + 0.15e2 / 0.16e2 * t56 * t361 * t503 + 0.5e1 / 0.32e2 * t1217 * t1342 - 0.25e2 / 0.16e2 * t552 * t1345 - 0.15e2 / 0.16e2 * t56 * t364 * t503;
  t1354 = t1142 * t1331;
  t1384 = -0.35e2 / 0.512e3 * t1139 * t1332 + 0.35e2 / 0.128e3 * t496 * t1335 + 0.21e2 / 0.32e2 * t7 * t331 * t503 + 0.35e2 / 0.512e3 * t1158 * t1342 - 0.35e2 / 0.128e3 * t508 * t1345 - 0.21e2 / 0.32e2 * t7 * t334 * t503;
  t1400 = -t1173 * t1332 / 0.8e1 + 0.5e1 / 0.8e1 * t518 * t1335 + 0.3e1 / 0.4e1 * t31 * t341 * t503 + t1181 * t1342 / 0.8e1 - 0.5e1 / 0.8e1 * t524 * t1345 - 0.3e1 / 0.4e1 * t31 * t344 * t503;
  t1416 = -0.81e2 / 0.512e3 * t1191 * t1332 + 0.135e3 / 0.128e3 * t532 * t1335 + 0.27e2 / 0.32e2 * t44 * t351 * t503 + 0.81e2 / 0.512e3 * t1199 * t1342 - 0.135e3 / 0.128e3 * t538 * t1345 - 0.27e2 / 0.32e2 * t44 * t354 * t503;
  t1436 = -0.55e2 / 0.512e3 * t1255 * t1332 + 0.275e3 / 0.128e3 * t586 * t1335 + 0.33e2 / 0.32e2 * t115 * t311 * t503 + 0.55e2 / 0.512e3 * t1263 * t1342 - 0.275e3 / 0.128e3 * t592 * t1345 - 0.33e2 / 0.32e2 * t115 * t314 * t503;
  t1443 = 0.189e3 / 0.16e2 * t1335 - 0.189e3 / 0.16e2 * t1345;
  t1457 = t54 * t1351 + t193 * (-0.25737637638605418144e0 * t1299 * t151 * t1354 + 0.93591409594928793246e0 * t700 * t628 + 0.44923876605565820776e1 * t434 * t503 + 0.25737637638605418144e0 * t1310 * t159 * t1354 - 0.93591409594928793246e0 * t706 * t628 - 0.44923876605565820776e1 * t437 * t503) + t1 * t1384 + t27 * t1400 + t41 * t1416 + t187 * t1416 * t182 + t190 * t1351 * t182 + t146 * t1436 * t143 / 0.2e1 + t604 * t394 / 0.2e1 + t150 * t1443 * t143 / 0.2e1 + t609 * t394 / 0.2e1 + t167 * t1351 * t172 + t612 * t309 + t174 * t1436 * t172 + t614 * t309 + t177 * t1443 * t172;
  t1511 = t616 * t309 + t180 * t1384 * t182 + t184 * t1400 * t182 + t66 * (-0.595e3 / 0.4096e4 * t1228 * t1332 + 0.425e3 / 0.512e3 * t562 * t1335 + 0.51e2 / 0.64e2 * t76 * t417 * t503 + 0.595e3 / 0.4096e4 * t1237 * t1342 - 0.425e3 / 0.512e3 * t570 * t1345 - 0.51e2 / 0.64e2 * t76 * t420 * t503) * t100 / 0.2e1 + t576 * t377 / 0.2e1 + t103 * t1416 * t100 / 0.2e1 + t579 * t377 / 0.2e1 + t107 * t1351 * t100 / 0.2e1 + t582 * t377 / 0.2e1 + t111 * t1436 * t100 / 0.2e1 + t598 * t377 / 0.2e1 + t131 * t1351 * t143 / 0.2e1 + t601 * t394 / 0.2e1 + 0.2e1 * t618 * r->z + 0.2e1 * t620 * r->z + 0.2e1 * t622 * r->z + 0.2e1 * t624 * r->z;
  r->d3fdrs2z = 0.4e1 / 0.3e1 * (t1457 + t1511) * 0.31415926535897932385e1 * t12 + 0.8e1 * t800 * t11 + 0.8e1 * t444 * r->rs;
  t1526 = 0.1e1 / t497 / t11;
  t1527 = t8 * t1142 * t1526;
  t1534 = t18 * t1142 * t1526;
  t1560 = 0.27e2 / 0.512e3 * t1191 * t1527 - 0.27e2 / 0.128e3 * t44 * t918 * t265 + 0.27e2 / 0.512e3 * t1199 * t1534 - 0.27e2 / 0.128e3 * t44 * t921 * t265;
  t1577 = 0.5e1 / 0.96e2 * t1209 * t1527 - 0.5e1 / 0.16e2 * t56 * t867 * t265 + 0.5e1 / 0.96e2 * t1217 * t1534 - 0.5e1 / 0.16e2 * t56 * t870 * t265;
  t1581 = 0.4e1 * t718 * r->z + 0.4e1 * t720 * r->z + t66 * (0.595e3 / 0.12288e5 * t1228 * t1527 - 0.85e2 / 0.512e3 * t76 * t990 * t265 + 0.595e3 / 0.12288e5 * t1237 * t1534 - 0.85e2 / 0.512e3 * t76 * t993 * t265) * t100 / 0.2e1 + t788 * t377 + t261 * t864 / 0.2e1 + t756 * t394 + t240 * t935 / 0.2e1 + t103 * t1560 * t100 / 0.2e1 + t793 * t377 + t243 * t935 / 0.2e1 + t107 * t1577 * t100 / 0.2e1;
  t1595 = 0.55e2 / 0.1536e4 * t1255 * t1527 - 0.55e2 / 0.128e3 * t115 * t881 * t265 + 0.55e2 / 0.1536e4 * t1263 * t1534 - 0.55e2 / 0.128e3 * t115 * t884 * t265;
  t1614 = t722 * t377 + t246 * t935 / 0.2e1 + t111 * t1595 * t100 / 0.2e1 + t738 * t377 + 0.4e1 * t714 * r->z + 0.4e1 * t716 * r->z + 0.2e1 * t761 * t309 + t273 * t879 + t174 * t1595 * t172 + 0.2e1 * t764 * t309 + t275 * t879 + t255 * t935 / 0.2e1;
  t1639 = 0.35e2 / 0.1536e4 * t1139 * t1527 - 0.7e1 / 0.128e3 * t7 * t897 * t265 + 0.35e2 / 0.1536e4 * t1158 * t1534 - 0.7e1 / 0.128e3 * t7 * t900 * t265;
  t1652 = t1173 * t1527 / 0.24e2 - t31 * t907 * t265 / 0.8e1 + t1181 * t1534 / 0.24e2 - t31 * t910 * t265 / 0.8e1;
  t1661 = t131 * t1577 * t143 / 0.2e1 + t743 * t394 + t258 * t864 / 0.2e1 + t146 * t1595 * t143 / 0.2e1 + t749 * t394 + 0.2e1 * t767 * t309 + t277 * t879 + t180 * t1639 * t182 + t184 * t1652 * t182 + t187 * t1560 * t182 + t190 * t1577 * t182 + t270 * t864 / 0.2e1;
  t1669 = t1142 * t1526;
  t1691 = t167 * t1577 * t172 + t1 * t1639 + t27 * t1652 + t41 * t1560 + t54 * t1577 + t193 * (0.85792125462018060479e-1 * t1299 * t8 * t1669 - 0.18718281918985758649e0 * t972 * t265 + 0.85792125462018060479e-1 * t1310 * t18 * t1669 - 0.18718281918985758649e0 * t975 * t265) + 0.2e1 * t279 + 0.2e1 * t281 + 0.2e1 * t283 + 0.2e1 * t285 - 0.27e2 / 0.8e1 * t1012 * t265 * t172 - 0.27e2 / 0.16e2 * t1008 * t265 * t143;
  r->d3fdrsz2 = 0.4e1 / 0.3e1 * (t1581 + t1614 + t1661 + t1691) * 0.31415926535897932385e1 * t12 + 0.4e1 * t1019 * t11;
  r->d3fdrszxt = 0.4e1 / 0.3e1 * (-0.2e1 * t761 * r->xt - 0.2e1 * t764 * r->xt - 0.2e1 * t767 * r->xt) * 0.31415926535897932385e1 * t12 + 0.4e1 * t1026 * t11;
  t1746 = t788 * t94 / 0.2e1 + t240 * t93 / 0.3e1 + t793 * t94 / 0.2e1 + t243 * t93 / 0.3e1 + t722 * t94 / 0.2e1 + t246 * t93 / 0.3e1 + t738 * t94 / 0.2e1 + t255 * t93 / 0.3e1 + t743 * t461 + 0.4e1 / 0.3e1 * t258 * t1045 + t749 * t461 + 0.4e1 / 0.3e1 * t261 * t1045 + t756 * t461 + 0.4e1 / 0.3e1 * t270 * t1045 + 0.4e1 * t761 * t461 + 0.16e2 / 0.3e1 * t273 * t1045 + 0.4e1 * t764 * t461 + 0.16e2 / 0.3e1 * t275 * t1045 + 0.4e1 * t767 * t461 + 0.16e2 / 0.3e1 * t277 * t1045;
  r->d3fdrszxs[0] = 0.4e1 / 0.3e1 * t1746 * 0.31415926535897932385e1 * t12 + 0.4e1 * t1067 * t11;
  t1789 = t788 * t98 / 0.2e1 - t240 * t97 / 0.3e1 + t793 * t98 / 0.2e1 - t243 * t97 / 0.3e1 + t722 * t98 / 0.2e1 - t246 * t97 / 0.3e1 + t738 * t98 / 0.2e1 - t255 * t97 / 0.3e1 + t743 * t482 - 0.4e1 / 0.3e1 * t258 * t1086 + t749 * t482 - 0.4e1 / 0.3e1 * t261 * t1086 + t756 * t482 - 0.4e1 / 0.3e1 * t270 * t1086 + 0.4e1 * t761 * t482 - 0.16e2 / 0.3e1 * t273 * t1086 + 0.4e1 * t764 * t482 - 0.16e2 / 0.3e1 * t275 * t1086 + 0.4e1 * t767 * t482 - 0.16e2 / 0.3e1 * t277 * t1086;
  r->d3fdrszxs[1] = 0.4e1 / 0.3e1 * t1789 * 0.31415926535897932385e1 * t12 + 0.4e1 * t1108 * t11;
  r->d3fdrs2xt = 0.4e1 / 0.3e1 * (-0.2e1 * t612 * r->xt - 0.2e1 * t614 * r->xt - 0.2e1 * t616 * r->xt) * 0.31415926535897932385e1 * t12 + 0.8e1 * t810 * t11 + 0.8e1 * t451 * r->rs;
  r->d3fdrsxt2 = 0.4e1 / 0.3e1 * (-0.2e1 * t273 - 0.2e1 * t275 - 0.2e1 * t277) * 0.31415926535897932385e1 * t12 + 0.4e1 * t1112 * t11;
  r->d3fdrsxtxs[0] = 0.0e0;
  r->d3fdrsxtxs[1] = 0.0e0;
  r->d3fdrs2xs[0] = 0.4e1 / 0.3e1 * (t576 * t94 / 0.2e1 + t579 * t94 / 0.2e1 + t582 * t94 / 0.2e1 + t598 * t94 / 0.2e1 + t601 * t461 + t604 * t461 + t609 * t461 + 0.4e1 * t612 * t461 + 0.4e1 * t614 * t461 + 0.4e1 * t616 * t461) * 0.31415926535897932385e1 * t12 + 0.8e1 * t833 * t11 + 0.8e1 * t472 * r->rs;
  r->d3fdrs2xs[1] = 0.4e1 / 0.3e1 * (t576 * t98 / 0.2e1 + t579 * t98 / 0.2e1 + t582 * t98 / 0.2e1 + t598 * t98 / 0.2e1 + t601 * t482 + t604 * t482 + t609 * t482 + 0.4e1 * t612 * t482 + 0.4e1 * t614 * t482 + 0.4e1 * t616 * t482) * 0.31415926535897932385e1 * t12 + 0.8e1 * t856 * t11 + 0.8e1 * t493 * r->rs;
  r->d3fdrsxs2[0] = 0.4e1 / 0.3e1 * (t258 * t136 + t261 * t136 + t270 * t136 + 0.4e1 * t273 * t136 + 0.4e1 * t275 * t136 + 0.4e1 * t277 * t136) * 0.31415926535897932385e1 * t12 + 0.4e1 * t1124 * t11;
  r->d3fdrsxs2[1] = 0.0e0;
  r->d3fdrsxs2[2] = 0.4e1 / 0.3e1 * (t258 * t141 + t261 * t141 + t270 * t141 + 0.4e1 * t273 * t141 + 0.4e1 * t275 * t141 + 0.4e1 * t277 * t141) * 0.31415926535897932385e1 * t12 + 0.4e1 * t1136 * t11;
  t1903 = -0.35e2 / 0.4608e4 * t7 * t1138 * t1142 * t1150 + 0.35e2 / 0.4608e4 * t7 * t1157 * t1142 * t1150;
  t1912 = -t31 * t1172 * t1142 * t1150 / 0.72e2 + t31 * t1180 * t1142 * t1150 / 0.72e2;
  t1921 = -0.9e1 / 0.512e3 * t44 * t1190 * t1142 * t1150 + 0.9e1 / 0.512e3 * t44 * t1198 * t1142 * t1150;
  t1930 = -0.5e1 / 0.288e3 * t56 * t1208 * t1142 * t1150 + 0.5e1 / 0.288e3 * t56 * t1216 * t1142 * t1150;
  t1949 = -r->xs[0] / t304 / 0.27e2 + r->xs[1] / t306 / 0.27e2;
  t1959 = -0.55e2 / 0.4608e4 * t115 * t1254 * t1142 * t1150 + 0.55e2 / 0.4608e4 * t115 * t1262 * t1142 * t1150;
  t1965 = 0.6e1 * t339 + 0.6e1 * t349 + t1 * t1903 + t27 * t1912 + t41 * t1921 + t54 * t1930 + t193 * (-0.28597375154006020160e-1 * t1299 * t1142 * t1150 + 0.28597375154006020160e-1 * t1310 * t1142 * t1150) + 0.6e1 * t359 + 0.6e1 * t369 + 0.3e1 / 0.2e1 * t380 * t935 + t108 * t1949 / 0.2e1 + t111 * t1959 * t100 / 0.2e1 + 0.3e1 / 0.2e1 * t944 * t377;
  t2004 = 0.3e1 / 0.2e1 * t385 * t935 + 0.6e1 * t926 * r->z + 0.6e1 * t928 * r->z + t66 * (-0.595e3 / 0.36864e5 * t76 * t1227 * t1142 * t1150 + 0.595e3 / 0.36864e5 * t76 * t1236 * t1142 * t1150) * t100 / 0.2e1 + 0.3e1 / 0.2e1 * t998 * t377 + 0.3e1 / 0.2e1 * t425 * t935 + t91 * t1949 / 0.2e1 + t103 * t1921 * t100 / 0.2e1 + 0.3e1 / 0.2e1 * t1004 * t377 + 0.6e1 * t905 * r->z + 0.6e1 * t915 * r->z + 0.3e1 * t875 * t309 + 0.3e1 * t407 * t879 + t128 * t1949 / 0.2e1;
  t2017 = t133 / t93 - t138 / t97;
  t2018 = 0.10e2 / 0.27e2 * t2017;
  t2041 = 0.20e2 / 0.27e2 * t2017;
  t2043 = t131 * t1930 * t143 / 0.2e1 + 0.3e1 / 0.2e1 * t950 * t394 + 0.3e1 / 0.2e1 * t390 * t864 + t132 * t2018 / 0.2e1 + t146 * t1959 * t143 / 0.2e1 + 0.3e1 / 0.2e1 * t958 * t394 + 0.3e1 / 0.2e1 * t397 * t864 + 0.3e1 / 0.2e1 * t371 * t935 + t104 * t1949 / 0.2e1 + t107 * t1930 * t100 / 0.2e1 + 0.3e1 / 0.2e1 * t938 * t377 + t187 * t1921 * t182 + t190 * t1930 * t182 + t168 * t2041;
  t2072 = t174 * t1959 * t172 + 0.3e1 * t889 * t309 + 0.3e1 * t319 * t879 + t175 * t2041 + 0.3e1 * t328 * t879 + t178 * t2041 + t180 * t1903 * t182 + t147 * t2018 / 0.2e1 + 0.3e1 / 0.2e1 * t402 * t864 + t164 * t2018 / 0.2e1 + t167 * t1930 * t172 + t184 * t1912 * t182 + 0.27e2 / 0.16e2 * t1012 * t157 * t309 + 0.27e2 / 0.32e2 * t1008 * t157 * t394;
  r->d3fdz3 = 0.4e1 / 0.3e1 * (t1965 + t2004 + t2043 + t2072) * 0.31415926535897932385e1 * t12;
  r->d3fdz2xt = 0.4e1 / 0.3e1 * (-0.9e1 / 0.8e1 * t1012 * t157 * r->xt - 0.2e1 * t875 * r->xt - 0.2e1 * t889 * r->xt) * 0.31415926535897932385e1 * t12;
  r->d3fdzxt2 = 0.4e1 / 0.3e1 * (-0.2e1 * t407 - 0.2e1 * t319 - 0.2e1 * t328) * 0.31415926535897932385e1 * t12;
  r->d3fdzxtxs[0] = 0.0e0;
  r->d3fdzxtxs[1] = 0.0e0;
  t2115 = r->xs[0] * t135;
  t2121 = t108 * t930 / 0.18e2 + t944 * t94 / 0.2e1 + 0.2e1 / 0.3e1 * t385 * t93 + t128 * t930 / 0.18e2 + t998 * t94 / 0.2e1 + 0.2e1 / 0.3e1 * t425 * t93 + t91 * t930 / 0.18e2 + t1004 * t94 / 0.2e1 + 0.2e1 / 0.3e1 * t371 * t93 + t104 * t930 / 0.18e2 + t938 * t94 / 0.2e1 + 0.2e1 / 0.3e1 * t380 * t93 + 0.10e2 / 0.9e1 * t132 * t2115 + t958 * t461 + 0.8e1 / 0.3e1 * t397 * t1045;
  t2148 = t157 * r->xs[0] * t136;
  t2153 = 0.10e2 / 0.9e1 * t147 * t2115 + 0.8e1 / 0.3e1 * t402 * t1045 + 0.10e2 / 0.9e1 * t164 * t2115 + 0.4e1 * t875 * t461 + 0.32e2 / 0.3e1 * t407 * t1045 + 0.40e2 / 0.9e1 * t168 * t2115 + 0.4e1 * t889 * t461 + 0.32e2 / 0.3e1 * t319 * t1045 + 0.40e2 / 0.9e1 * t175 * t2115 + 0.32e2 / 0.3e1 * t328 * t1045 + 0.40e2 / 0.9e1 * t178 * t2115 + t950 * t461 + 0.8e1 / 0.3e1 * t390 * t1045 + 0.9e1 / 0.16e2 * t1008 * t2148 + 0.9e1 / 0.4e1 * t1012 * t2148;
  r->d3fdz2xs[0] = 0.4e1 / 0.3e1 * (t2121 + t2153) * 0.31415926535897932385e1 * t12;
  t2184 = r->xs[1] * t140;
  t2187 = -0.2e1 / 0.3e1 * t425 * t97 + t91 * t932 / 0.18e2 + t1004 * t98 / 0.2e1 - 0.2e1 / 0.3e1 * t371 * t97 + t104 * t932 / 0.18e2 + t938 * t98 / 0.2e1 - 0.2e1 / 0.3e1 * t380 * t97 + t108 * t932 / 0.18e2 + t944 * t98 / 0.2e1 - 0.2e1 / 0.3e1 * t385 * t97 + t128 * t932 / 0.18e2 + t998 * t98 / 0.2e1 + t950 * t482 - 0.8e1 / 0.3e1 * t390 * t1086 + 0.10e2 / 0.9e1 * t132 * t2184;
  t2214 = t157 * r->xs[1] * t141;
  t2219 = t958 * t482 - 0.8e1 / 0.3e1 * t397 * t1086 + 0.10e2 / 0.9e1 * t147 * t2184 - 0.8e1 / 0.3e1 * t402 * t1086 + 0.10e2 / 0.9e1 * t164 * t2184 + 0.4e1 * t875 * t482 - 0.32e2 / 0.3e1 * t407 * t1086 + 0.40e2 / 0.9e1 * t168 * t2184 + 0.4e1 * t889 * t482 - 0.32e2 / 0.3e1 * t319 * t1086 + 0.40e2 / 0.9e1 * t175 * t2184 - 0.32e2 / 0.3e1 * t328 * t1086 + 0.40e2 / 0.9e1 * t178 * t2184 + 0.9e1 / 0.16e2 * t1008 * t2214 + 0.9e1 / 0.4e1 * t1012 * t2214;
  r->d3fdz2xs[1] = 0.4e1 / 0.3e1 * (t2187 + t2219) * 0.31415926535897932385e1 * t12;
  t2244 = t390 * t136 + 0.4e1 / 0.3e1 * t132 * t304 + t397 * t136 + 0.4e1 / 0.3e1 * t147 * t304 + t402 * t136 + 0.4e1 / 0.3e1 * t164 * t304 + 0.4e1 * t407 * t136 + 0.16e2 / 0.3e1 * t168 * t304 + 0.4e1 * t319 * t136 + 0.16e2 / 0.3e1 * t175 * t304 + 0.4e1 * t328 * t136 + 0.16e2 / 0.3e1 * t178 * t304;
  r->d3fdzxs2[0] = 0.4e1 / 0.3e1 * t2244 * 0.31415926535897932385e1 * t12;
  r->d3fdzxs2[1] = 0.0e0;
  t2268 = t390 * t141 - 0.4e1 / 0.3e1 * t132 * t306 + t397 * t141 - 0.4e1 / 0.3e1 * t147 * t306 + t402 * t141 - 0.4e1 / 0.3e1 * t164 * t306 + 0.4e1 * t407 * t141 - 0.16e2 / 0.3e1 * t168 * t306 + 0.4e1 * t319 * t141 - 0.16e2 / 0.3e1 * t175 * t306 + 0.4e1 * t328 * t141 - 0.16e2 / 0.3e1 * t178 * t306;
  r->d3fdzxs2[2] = 0.4e1 / 0.3e1 * t2268 * 0.31415926535897932385e1 * t12;
  r->d3fdxt3 = 0.0e0;
  r->d3fdxt2xs[0] = 0.0e0;
  r->d3fdxt2xs[1] = 0.0e0;
  r->d3fdxtxs2[0] = 0.0e0;
  r->d3fdxtxs2[1] = 0.0e0;
  r->d3fdxtxs2[2] = 0.0e0;
  r->d3fdxs3[0] = 0.0e0;
  r->d3fdxs3[1] = 0.0e0;
  r->d3fdxs3[2] = 0.0e0;
  r->d3fdxs3[3] = 0.0e0;

  if(r->order < 4) return;


}

#ifndef DEVICE
#define maple2c_order 3
#define maple2c_func  xc_gga_xc_th3_func
#endif
