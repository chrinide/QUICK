/* 
  This file was generated automatically with /nfs/data-012/marques/software/source/libxc/svn/scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ../maple/gga_c_lyp.mpl
  Type of functional: work_gga_c
*/
#ifdef CUDA
__device__ void xc_gga_c_lyp_func
(const void *p,  xc_gga_work_c_t *r)
#else
void xc_gga_c_lyp_func
  (const xc_func_type *p, xc_gga_work_c_t *r)
#endif
{
  double t7, t8, t10, t11, t12, t13, t15, t16;
  double t17, t20, t21, t22, t26, t27, t28, t30;
  double t32, t34, t37, t39, t40, t41, t42, t43;
  double t44, t45, t46, t47, t48, t49, t50, t51;
  double t52, t53, t57, t58, t60, t61, t62, t63;
  double t64, t65, t66, t70, t72, t75, t77, t78;
  double t83, t86, t92, t93, t96, t97, t102, t103;
  double t104, t108, t111, t112, t115, t116, t117, t119;
  double t120, t121, t122, t127, t128, t131, t132, t136;
  double t137, t140, t141, t144, t146, t152, t153, t155;
  double t159, t162, t163, t165, t166, t172, t173, t178;
  double t183, t191, t192, t195, t196, t197, t198, t201;
  double t202, t203, t206, t207, t210, t212, t218, t220;
  double t221, t224, t225, t228, t230, t236, t239, t242;
  double t243, t246, t247, t248, t249, t253, t264, t267;
  double t271, t272, t274, t276, t278, t283, t284, t289;
  double t290, t293, t294, t304, t312, t317, t320, t321;
  double t327, t333, t334, t335, t339, t343, t347, t348;
  double t351, t352, t355, t356, t359, t363, t367, t368;
  double t371, t372, t375, t376, t388, t392, t397, t398;
  double t400, t401, t404, t410, t411, t429, t430, t438;
  double t443, t448, t455, t459, t464, t469, t476, t481;
  double t484, t493, t495, t498, t507, t509, t510, t522;
  double t553, t558, t560, t580, t651, t652, t852, t853;
  double t863, t864;

  gga_c_lyp_params *params;
#ifndef CUDA
  assert(p->params != NULL);
  params = (gga_c_lyp_params * )(p->params);
#else
  params = (gga_c_lyp_params * )(p);
#endif

  t7 = r->z * r->z;
  t8 = -t7 + 0.1e1;
  t10 = M_CBRT3;
  t11 = t10 * t10;
  t12 = M_CBRT4;
  t13 = t11 * t12;
  t15 = cbrt(0.1e1 / 0.31415926535897932385e1);
  t16 = 0.1e1 / t15;
  t17 = t13 * t16;
  t20 = 0.1e1 + params->d * r->rs * t17 / 0.3e1;
  t21 = 0.1e1 / t20;
  t22 = t8 * t21;
  t26 = exp(-params->c * r->rs * t17 / 0.3e1);
  t27 = params->B * t26;
  t28 = r->xt * r->xt;
  t30 = params->d * t21 + params->c;
  t32 = t30 * r->rs * t17;
  t34 = 0.47e2 - 0.7e1 / 0.3e1 * t32;
  t37 = t8 * t34 / 0.72e2 - 0.2e1 / 0.3e1;
  t39 = 0.31415926535897932385e1 * 0.31415926535897932385e1;
  t40 = cbrt(t39);
  t41 = t40 * t40;
  t42 = t11 * t41;
  t43 = 0.1e1 + r->z;
  t44 = t43 * t43;
  t45 = cbrt(t43);
  t46 = t45 * t45;
  t47 = t46 * t44;
  t48 = 0.1e1 - r->z;
  t49 = t48 * t48;
  t50 = cbrt(t48);
  t51 = t50 * t50;
  t52 = t51 * t49;
  t53 = t47 + t52;
  t57 = M_CBRT2;
  t58 = t57 * t8;
  t60 = 0.5e1 / 0.2e1 - t32 / 0.54e2;
  t61 = r->xs[0] * r->xs[0];
  t62 = t61 * t47;
  t63 = r->xs[1] * r->xs[1];
  t64 = t63 * t52;
  t65 = t62 + t64;
  t66 = t60 * t65;
  t70 = t32 / 0.3e1 - 0.11e2;
  t72 = t46 * t44 * t43;
  t75 = t51 * t49 * t48;
  t77 = t61 * t72 + t63 * t75;
  t78 = t70 * t77;
  t83 = t44 * t63;
  t86 = t49 * t61;
  t92 = -t28 * t37 - 0.3e1 / 0.20e2 * t42 * t8 * t53 + t58 * t66 / 0.32e2 + t58 * t78 / 0.576e3 - t57 * (0.2e1 / 0.3e1 * t62 + 0.2e1 / 0.3e1 * t64 - t83 * t52 / 0.4e1 - t86 * t47 / 0.4e1) / 0.8e1;
  t93 = t21 * t92;
  r->f = params->A * (t27 * t93 - t22);

  if(r->order < 1) return;

  t96 = t20 * t20;
  t97 = 0.1e1 / t96;
  t102 = params->B * params->c;
  t103 = t102 * t13;
  t104 = t16 * t26;
  t108 = t97 * t92;
  t111 = t12 * t16;
  t112 = params->d * t11 * t111;
  t115 = t28 * t8;
  t116 = params->d * params->d;
  t117 = t116 * t97;
  t119 = t12 * t12;
  t120 = t15 * t15;
  t121 = 0.1e1 / t120;
  t122 = t119 * t121;
  t127 = t117 * t10 * t122 * r->rs - t30 * t11 * t111;
  t128 = 0.7e1 / 0.3e1 * t127;
  t131 = t127 / 0.54e2;
  t132 = t131 * t65;
  t136 = -t127 / 0.3e1;
  t137 = t136 * t77;
  t140 = -t115 * t128 / 0.72e2 + t58 * t132 / 0.32e2 + t58 * t137 / 0.576e3;
  t141 = t21 * t140;
  r->dfdrs = params->A * (t8 * t97 * params->d * t17 / 0.3e1 - t103 * t104 * t93 / 0.3e1 - t27 * t108 * t112 / 0.3e1 + t27 * t141);
  t144 = r->z * t21;
  t146 = t28 * r->z;
  t152 = t46 * t43;
  t153 = t51 * t48;
  t155 = 0.8e1 / 0.3e1 * t152 - 0.8e1 / 0.3e1 * t153;
  t159 = t57 * r->z;
  t162 = t61 * t152;
  t163 = t63 * t153;
  t165 = 0.8e1 / 0.3e1 * t162 - 0.8e1 / 0.3e1 * t163;
  t166 = t60 * t165;
  t172 = 0.11e2 / 0.3e1 * t62 - 0.11e2 / 0.3e1 * t64;
  t173 = t70 * t172;
  t178 = t43 * t63;
  t183 = t48 * t61;
  t191 = t146 * t34 / 0.36e2 + 0.3e1 / 0.10e2 * t42 * r->z * t53 - 0.3e1 / 0.20e2 * t42 * t8 * t155 - t159 * t66 / 0.16e2 + t58 * t166 / 0.32e2 - t159 * t78 / 0.288e3 + t58 * t173 / 0.576e3 - t57 * (0.16e2 / 0.9e1 * t162 - 0.16e2 / 0.9e1 * t163 - t178 * t52 / 0.2e1 + 0.2e1 / 0.3e1 * t83 * t153 + t183 * t47 / 0.2e1 - 0.2e1 / 0.3e1 * t86 * t152) / 0.8e1;
  t192 = t21 * t191;
  r->dfdz = params->A * (t27 * t192 + 0.2e1 * t144);
  t195 = params->A * params->B;
  t196 = t195 * t26;
  t197 = t21 * r->xt;
  t198 = t197 * t37;
  r->dfdxt = -0.2e1 * t196 * t198;
  t201 = t26 * t21;
  t202 = t60 * r->xs[0];
  t203 = t202 * t47;
  t206 = t70 * r->xs[0];
  t207 = t206 * t72;
  t210 = r->xs[0] * t47;
  t212 = t49 * r->xs[0];
  t218 = t58 * t203 / 0.16e2 + t58 * t207 / 0.288e3 - t57 * (0.4e1 / 0.3e1 * t210 - t212 * t47 / 0.2e1) / 0.8e1;
  r->dfdxs[0] = t195 * t201 * t218;
  t220 = t60 * r->xs[1];
  t221 = t220 * t52;
  t224 = t70 * r->xs[1];
  t225 = t224 * t75;
  t228 = r->xs[1] * t52;
  t230 = t44 * r->xs[1];
  t236 = t58 * t221 / 0.16e2 + t58 * t225 / 0.288e3 - t57 * (0.4e1 / 0.3e1 * t228 - t230 * t52 / 0.2e1) / 0.8e1;
  r->dfdxs[1] = t195 * t201 * t236;

  if(r->order < 2) return;

  t239 = 0.1e1 / t96 / t20;
  t242 = t10 * t119;
  t243 = t242 * t121;
  t246 = params->c * params->c;
  t247 = params->B * t246;
  t248 = t247 * t242;
  t249 = t121 * t26;
  t253 = t102 * t242;
  t264 = t116 * t10 * t122;
  t267 = t97 * t140;
  t271 = t116 * params->d;
  t272 = t271 * t239;
  t274 = t272 * 0.31415926535897932385e1 * r->rs;
  t276 = t117 * t243;
  t278 = -0.56e2 / 0.3e1 * t274 + 0.14e2 / 0.3e1 * t276;
  t283 = -0.4e1 / 0.27e2 * t274 + t276 / 0.27e2;
  t284 = t283 * t65;
  t289 = 0.8e1 / 0.3e1 * t274 - 0.2e1 / 0.3e1 * t276;
  t290 = t289 * t77;
  t293 = -t115 * t278 / 0.72e2 + t58 * t284 / 0.32e2 + t58 * t290 / 0.576e3;
  t294 = t21 * t293;
  r->d2fdrs2 = params->A * (-0.2e1 / 0.3e1 * t8 * t239 * t116 * t243 + t248 * t249 * t93 / 0.3e1 + 0.2e1 / 0.3e1 * t253 * t249 * t108 * params->d - 0.2e1 / 0.3e1 * t103 * t104 * t141 + 0.2e1 / 0.3e1 * t27 * t239 * t92 * t264 - 0.2e1 / 0.3e1 * t27 * t267 * t112 + t27 * t294);
  t304 = t97 * t191;
  t312 = t131 * t165;
  t317 = t136 * t172;
  t320 = t146 * t128 / 0.36e2 - t159 * t132 / 0.16e2 + t58 * t312 / 0.32e2 - t159 * t137 / 0.288e3 + t58 * t317 / 0.576e3;
  t321 = t21 * t320;
  r->d2fdrsz = params->A * (-0.2e1 / 0.3e1 * r->z * t97 * params->d * t17 - t103 * t104 * t192 / 0.3e1 - t27 * t304 * t112 / 0.3e1 + t27 * t321);
  t327 = t97 * r->xt;
  t333 = t27 * t21;
  t334 = r->xt * t8;
  t335 = t334 * t128;
  r->d2fdrsxt = params->A * (0.2e1 / 0.3e1 * t103 * t104 * t198 + 0.2e1 / 0.3e1 * t27 * t327 * t37 * params->d * t17 - t333 * t335 / 0.36e2);
  t339 = t21 * t218;
  t343 = t97 * t218;
  t347 = t131 * r->xs[0];
  t348 = t347 * t47;
  t351 = t136 * r->xs[0];
  t352 = t351 * t72;
  t355 = t58 * t348 / 0.16e2 + t58 * t352 / 0.288e3;
  t356 = t21 * t355;
  r->d2fdrsxs[0] = params->A * (-t103 * t104 * t339 / 0.3e1 - t27 * t343 * t112 / 0.3e1 + t27 * t356);
  t359 = t21 * t236;
  t363 = t97 * t236;
  t367 = t131 * r->xs[1];
  t368 = t367 * t52;
  t371 = t136 * r->xs[1];
  t372 = t371 * t75;
  t375 = t58 * t368 / 0.16e2 + t58 * t372 / 0.288e3;
  t376 = t21 * t375;
  r->d2fdrsxs[1] = params->A * (-t103 * t104 * t359 / 0.3e1 - t27 * t363 * t112 / 0.3e1 + t27 * t376);
  t388 = 0.40e2 / 0.9e1 * t46 + 0.40e2 / 0.9e1 * t51;
  t392 = t57 * t60;
  t397 = t61 * t46;
  t398 = t63 * t51;
  t400 = 0.40e2 / 0.9e1 * t397 + 0.40e2 / 0.9e1 * t398;
  t401 = t60 * t400;
  t404 = t57 * t70;
  t410 = 0.88e2 / 0.9e1 * t162 + 0.88e2 / 0.9e1 * t163;
  t411 = t70 * t410;
  t429 = t28 * t34 / 0.36e2 + 0.3e1 / 0.10e2 * t42 * t53 + 0.3e1 / 0.5e1 * t42 * r->z * t155 - 0.3e1 / 0.20e2 * t42 * t8 * t388 - t392 * t65 / 0.16e2 - t159 * t166 / 0.8e1 + t58 * t401 / 0.32e2 - t404 * t77 / 0.288e3 - t159 * t173 / 0.144e3 + t58 * t411 / 0.576e3 - t57 * (0.80e2 / 0.27e2 * t397 + 0.80e2 / 0.27e2 * t398 - t64 / 0.2e1 + 0.8e1 / 0.3e1 * t178 * t153 - 0.10e2 / 0.9e1 * t83 * t51 - t62 / 0.2e1 + 0.8e1 / 0.3e1 * t183 * t152 - 0.10e2 / 0.9e1 * t86 * t46) / 0.8e1;
  t430 = t21 * t429;
  r->d2fdz2 = params->A * (t27 * t430 + 0.2e1 * t21);
  r->d2fdzxt = t196 * t197 * r->z * t34 / 0.18e2;
  t438 = t202 * t152;
  t443 = t206 * t47;
  t448 = t48 * r->xs[0];
  t455 = -t159 * t203 / 0.8e1 + t58 * t438 / 0.6e1 - t159 * t207 / 0.144e3 + 0.11e2 / 0.864e3 * t58 * t443 - t57 * (0.32e2 / 0.9e1 * r->xs[0] * t152 + t448 * t47 - 0.4e1 / 0.3e1 * t212 * t152) / 0.8e1;
  r->d2fdzxs[0] = t195 * t201 * t455;
  t459 = t220 * t153;
  t464 = t224 * t52;
  t469 = t43 * r->xs[1];
  t476 = -t159 * t221 / 0.8e1 - t58 * t459 / 0.6e1 - t159 * t225 / 0.144e3 - 0.11e2 / 0.864e3 * t58 * t464 - t57 * (-0.32e2 / 0.9e1 * r->xs[1] * t153 - t469 * t52 + 0.4e1 / 0.3e1 * t230 * t153) / 0.8e1;
  r->d2fdzxs[1] = t195 * t201 * t476;
  r->d2fdxt2 = -0.2e1 * t195 * t201 * t37;
  r->d2fdxtxs[0] = 0.0e0;
  r->d2fdxtxs[1] = 0.0e0;
  t481 = t60 * t47;
  t484 = t70 * t72;
  t493 = t58 * t481 / 0.16e2 + t58 * t484 / 0.288e3 - t57 * (0.4e1 / 0.3e1 * t47 - t49 * t47 / 0.2e1) / 0.8e1;
  r->d2fdxs2[0] = t195 * t201 * t493;
  r->d2fdxs2[1] = 0.0e0;
  t495 = t60 * t52;
  t498 = t70 * t75;
  t507 = t58 * t495 / 0.16e2 + t58 * t498 / 0.288e3 - t57 * (0.4e1 / 0.3e1 * t52 - t44 * t52 / 0.2e1) / 0.8e1;
  r->d2fdxs2[2] = t195 * t201 * t507;

  if(r->order < 3) return;

  t509 = t96 * t96;
  t510 = 0.1e1 / t509;
  t522 = t26 * t97;
  t553 = t116 * t116;
  t558 = t553 * t510 * 0.31415926535897932385e1 * r->rs * t11 * t111;
  t560 = t272 * 0.31415926535897932385e1;
  t580 = 0.8e1 * t8 * t510 * t271 * 0.31415926535897932385e1 - 0.4e1 / 0.3e1 * params->B * t246 * params->c * 0.31415926535897932385e1 * t201 * t92 - 0.4e1 * t247 * 0.31415926535897932385e1 * t522 * t92 * params->d + t248 * t249 * t141 - 0.8e1 * t102 * 0.31415926535897932385e1 * t26 * t239 * t92 * t116 + 0.2e1 * t253 * t249 * t267 * params->d - t103 * t104 * t294 - 0.8e1 * t27 * t510 * t92 * t271 * 0.31415926535897932385e1 + 0.2e1 * t27 * t239 * t140 * t264 - t27 * t97 * t293 * t112 + t27 * t21 * (-t115 * (0.56e2 / 0.3e1 * t558 - 0.56e2 * t560) / 0.72e2 + t58 * (0.4e1 / 0.27e2 * t558 - 0.4e1 / 0.9e1 * t560) * t65 / 0.32e2 + t58 * (-0.8e1 / 0.3e1 * t558 + 0.8e1 * t560) * t77 / 0.576e3);
  r->d3fdrs3 = params->A * t580;
  r->d3fdrs2z = params->A * (0.4e1 / 0.3e1 * r->z * t239 * t116 * t243 + t248 * t249 * t192 / 0.3e1 + 0.2e1 / 0.3e1 * t253 * t249 * t304 * params->d - 0.2e1 / 0.3e1 * t103 * t104 * t321 + 0.2e1 / 0.3e1 * t27 * t239 * t191 * t264 - 0.2e1 / 0.3e1 * t27 * t97 * t320 * t112 + t27 * t21 * (t146 * t278 / 0.36e2 - t159 * t284 / 0.16e2 + t58 * t283 * t165 / 0.32e2 - t159 * t290 / 0.288e3 + t58 * t289 * t172 / 0.576e3));
  r->d3fdrsz2 = params->A * (-0.2e1 / 0.3e1 * t97 * params->d * t17 - t103 * t104 * t430 / 0.3e1 - t27 * t97 * t429 * t112 / 0.3e1 + t27 * t21 * (t28 * t128 / 0.36e2 - t57 * t131 * t65 / 0.16e2 - t159 * t312 / 0.8e1 + t58 * t131 * t400 / 0.32e2 - t57 * t136 * t77 / 0.288e3 - t159 * t317 / 0.144e3 + t58 * t136 * t410 / 0.576e3));
  t651 = t102 * t17;
  t652 = r->xt * r->z;
  r->d3fdrszxt = params->A * (-t651 * t201 * t652 * t34 / 0.54e2 - t27 * t327 * r->z * t34 * params->d * t17 / 0.54e2 + t333 * t652 * t128 / 0.18e2);
  r->d3fdrszxs[0] = params->A * (-t103 * t104 * t21 * t455 / 0.3e1 - t27 * t97 * t455 * t112 / 0.3e1 + t27 * t21 * (-t159 * t348 / 0.8e1 + t58 * t347 * t152 / 0.6e1 - t159 * t352 / 0.144e3 + 0.11e2 / 0.864e3 * t58 * t351 * t47));
  r->d3fdrszxs[1] = params->A * (-t103 * t104 * t21 * t476 / 0.3e1 - t27 * t97 * t476 * t112 / 0.3e1 + t27 * t21 * (-t159 * t368 / 0.8e1 - t58 * t367 * t153 / 0.6e1 - t159 * t372 / 0.144e3 - 0.11e2 / 0.864e3 * t58 * t371 * t52));
  r->d3fdrs2xt = params->A * (-0.2e1 / 0.3e1 * t248 * t249 * t198 - 0.4e1 / 0.3e1 * t102 * t243 * t522 * r->xt * t37 * params->d + t651 * t201 * t335 / 0.54e2 - 0.4e1 / 0.3e1 * t27 * t239 * r->xt * t37 * t116 * t243 + t27 * t327 * t8 * t128 * params->d * t17 / 0.54e2 - t333 * t334 * t278 / 0.36e2);
  r->d3fdrsxt2 = params->A * (0.2e1 / 0.3e1 * t103 * t104 * t21 * t37 + 0.2e1 / 0.3e1 * t27 * t97 * t37 * t112 - t27 * t22 * t128 / 0.36e2);
  r->d3fdrsxtxs[0] = 0.0e0;
  r->d3fdrsxtxs[1] = 0.0e0;
  r->d3fdrs2xs[0] = params->A * (t248 * t249 * t339 / 0.3e1 + 0.2e1 / 0.3e1 * t253 * t249 * t343 * params->d - 0.2e1 / 0.3e1 * t103 * t104 * t356 + 0.2e1 / 0.3e1 * t27 * t239 * t218 * t264 - 0.2e1 / 0.3e1 * t27 * t97 * t355 * t112 + t27 * t21 * (t58 * t283 * r->xs[0] * t47 / 0.16e2 + t58 * t289 * r->xs[0] * t72 / 0.288e3));
  r->d3fdrs2xs[1] = params->A * (t248 * t249 * t359 / 0.3e1 + 0.2e1 / 0.3e1 * t253 * t249 * t363 * params->d - 0.2e1 / 0.3e1 * t103 * t104 * t376 + 0.2e1 / 0.3e1 * t27 * t239 * t236 * t264 - 0.2e1 / 0.3e1 * t27 * t97 * t375 * t112 + t27 * t21 * (t58 * t283 * r->xs[1] * t52 / 0.16e2 + t58 * t289 * r->xs[1] * t75 / 0.288e3));
  r->d3fdrsxs2[0] = params->A * (-t103 * t104 * t21 * t493 / 0.3e1 - t27 * t97 * t493 * t112 / 0.3e1 + t27 * t21 * (t58 * t131 * t47 / 0.16e2 + t58 * t136 * t72 / 0.288e3));
  r->d3fdrsxs2[1] = 0.0e0;
  r->d3fdrsxs2[2] = params->A * (-t103 * t104 * t21 * t507 / 0.3e1 - t27 * t97 * t507 * t112 / 0.3e1 + t27 * t21 * (t58 * t131 * t52 / 0.16e2 + t58 * t136 * t75 / 0.288e3));
  t852 = 0.1e1 / t45;
  t853 = 0.1e1 / t50;
  t863 = t61 * t852;
  t864 = t63 * t853;
  r->d3fdz3 = t195 * t201 * (0.9e1 / 0.10e2 * t42 * t155 + 0.9e1 / 0.10e2 * t42 * r->z * t388 - 0.3e1 / 0.20e2 * t42 * t8 * (0.80e2 / 0.27e2 * t852 - 0.80e2 / 0.27e2 * t853) - 0.3e1 / 0.16e2 * t392 * t165 - 0.3e1 / 0.16e2 * t159 * t401 + t58 * t60 * (0.80e2 / 0.27e2 * t863 - 0.80e2 / 0.27e2 * t864) / 0.32e2 - t404 * t172 / 0.96e2 - t159 * t411 / 0.96e2 + t58 * t70 * (0.440e3 / 0.27e2 * t397 - 0.440e3 / 0.27e2 * t398) / 0.576e3 - t57 * (0.160e3 / 0.81e2 * t863 - 0.160e3 / 0.81e2 * t864 + 0.4e1 * t163 - 0.20e2 / 0.3e1 * t178 * t51 + 0.20e2 / 0.27e2 * t83 * t853 - 0.4e1 * t162 + 0.20e2 / 0.3e1 * t183 * t46 - 0.20e2 / 0.27e2 * t86 * t852) / 0.8e1);
  r->d3fdz2xt = t196 * t197 * t34 / 0.18e2;
  r->d3fdzxt2 = t196 * t144 * t34 / 0.18e2;
  r->d3fdzxtxs[0] = 0.0e0;
  r->d3fdzxtxs[1] = 0.0e0;
  r->d3fdz2xs[0] = t195 * t201 * (-t392 * t210 / 0.8e1 - 0.2e1 / 0.3e1 * t159 * t438 + 0.5e1 / 0.18e2 * t58 * t202 * t46 - t404 * r->xs[0] * t72 / 0.144e3 - 0.11e2 / 0.216e3 * t159 * t443 + 0.11e2 / 0.324e3 * t58 * t206 * t152 - t57 * (0.160e3 / 0.27e2 * r->xs[0] * t46 - t210 + 0.16e2 / 0.3e1 * t448 * t152 - 0.20e2 / 0.9e1 * t212 * t46) / 0.8e1);
  r->d3fdz2xs[1] = t195 * t201 * (-t392 * t228 / 0.8e1 + 0.2e1 / 0.3e1 * t159 * t459 + 0.5e1 / 0.18e2 * t58 * t220 * t51 - t404 * r->xs[1] * t75 / 0.144e3 + 0.11e2 / 0.216e3 * t159 * t464 + 0.11e2 / 0.324e3 * t58 * t224 * t153 - t57 * (0.160e3 / 0.27e2 * r->xs[1] * t51 - t228 + 0.16e2 / 0.3e1 * t469 * t153 - 0.20e2 / 0.9e1 * t230 * t51) / 0.8e1);
  r->d3fdzxs2[0] = t195 * t201 * (-t159 * t481 / 0.8e1 + t58 * t60 * t152 / 0.6e1 - t159 * t484 / 0.144e3 + 0.11e2 / 0.864e3 * t58 * t70 * t47 - t57 * (0.32e2 / 0.9e1 * t152 + t48 * t47 - 0.4e1 / 0.3e1 * t49 * t152) / 0.8e1);
  r->d3fdzxs2[1] = 0.0e0;
  r->d3fdzxs2[2] = t195 * t201 * (-t159 * t495 / 0.8e1 - t58 * t60 * t153 / 0.6e1 - t159 * t498 / 0.144e3 - 0.11e2 / 0.864e3 * t58 * t70 * t52 - t57 * (-0.32e2 / 0.9e1 * t153 - t43 * t52 + 0.4e1 / 0.3e1 * t44 * t153) / 0.8e1);
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

#ifndef CUDA
#define maple2c_order 3
#define maple2c_func  xc_gga_c_lyp_func
#endif
