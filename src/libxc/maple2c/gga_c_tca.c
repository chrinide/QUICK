/*    
  This file was generated automatically with /nfs/data-012/marques/software/source/libxc/svn/scripts/maple2c.pl.   
  Do not edit this file directly as it can be overwritten!!   
   
  This Source Code Form is subject to the terms of the Mozilla Public   
  License, v. 2.0. If a copy of the MPL was not distributed with this   
  file, You can obtain one at http://mozilla.org/MPL/2.0/.   
   
  Maple version     : Maple 2016 (X86 64 LINUX)   
  Maple source      : ../maple/gga_c_tca.mpl   
  Type of functional: work_gga_c   
*/   
   
#ifdef DEVICE   
__device__ void xc_gga_c_tca_func   
  (const void *p, xc_gga_work_c_t *r)   
#else   
void xc_gga_c_tca_func   
  (const xc_func_type *p, xc_gga_work_c_t *r)   
#endif   
{   
  double t1, t2, t3, t4, t5, t6, t8, t9;   
  double t10, t12, t13, t15, t16, t17, t18, t19;   
  double t20, t21, t22, t23, t24, t26, t27, t29;   
  double t30, t31, t32, t33, t34, t35, t38, t39;   
  double t40, t42, t46, t47, t49, t50, t51, t52;   
  double t53, t56, t59, t60, t61, t63, t70, t71;   
  double t74, t77, t80, t83, t84, t87, t88, t89;   
  double t97, t98, t101, t103, t104, t108, t109, t111;   
  double t113, t114, t115, t116, t117, t120, t122, t128;   
  double t139, t204, t207, t227, t235, t238, t242, t243;   
  double t245, t252;   
   
   
  t1 = 0.1e1 + r->z;   
  t2 = cbrt(t1);   
  t3 = t2 * t2;   
  t4 = 0.1e1 - r->z;   
  t5 = cbrt(t4);   
  t6 = t5 * t5;   
  t8 = t3 / 0.2e1 + t6 / 0.2e1;   
  t9 = t8 * t8;   
  t10 = t9 * t8;   
  t12 = 0.4888270e1 + 0.3177037e1 * r->rs;   
  t13 = atan(t12);   
  t15 = -0.655868e0 * t13 + 0.897889e0;   
  t16 = t10 * t15;   
  t17 = 0.1e1 / r->rs;   
  t18 = M_CBRT6;   
  t19 = t18 * t18;   
  t20 = 0.31415926535897932385e1 * 0.31415926535897932385e1;   
  t21 = cbrt(t20);   
  t22 = 0.1e1 / t21;   
  t23 = t19 * t22;   
  t24 = M_CBRT2;   
  t26 = t23 * t24 * r->xt;   
  t27 = pow(t26, 0.230e1);   
  t29 = 0.1e1 + 0.47121507034422759993e-2 * t27;   
  t30 = 0.1e1 / t29;   
  t31 = t17 * t30;   
  r->f = t16 * t31;   
   
  if(r->order < 1) return;   
   
  t32 = t12 * t12;   
  t33 = t32 + 0.1e1;   
  t34 = 0.1e1 / t33;   
  t35 = t10 * t34;   
  t38 = r->rs * r->rs;   
  t39 = 0.1e1 / t38;   
  t40 = t39 * t30;   
  r->dfdrs = -0.2083716903116e1 * t35 * t31 - t16 * t40;   
  t42 = t9 * t15;   
  t46 = 0.1e1 / t2 / 0.3e1 - 0.1e1 / t5 / 0.3e1;   
  t47 = t31 * t46;   
  r->dfdz = 0.3e1 * t42 * t47;   
  t49 = t29 * t29;   
  t50 = 0.1e1 / t49;   
  t51 = t17 * t50;   
  t52 = t16 * t51;   
  t53 = pow(t26, 0.130e1);   
  t56 = t53 * t19 * t22 * t24;   
  r->dfdxt = -0.10837946617917234798e-1 * t52 * t56;   
  r->dfdxs[0] = 0.0e0;   
  r->dfdxs[1] = 0.0e0;   
   
  if(r->order < 2) return;   
   
  t59 = t33 * t33;   
  t60 = 0.1e1 / t59;   
  t61 = t10 * t60;   
  t63 = 0.31060429311980e2 + 0.20187128198738e2 * r->rs;   
  t70 = 0.1e1 / t38 / r->rs;   
  t71 = t70 * t30;   
  r->d2fdrs2 = 0.2083716903116e1 * t61 * t31 * t63 + 0.4167433806232e1 * t35 * t40 + 0.2e1 * t16 * t71;   
  t74 = t9 * t34;   
  t77 = t40 * t46;   
  r->d2fdrsz = -0.6251150709348e1 * t74 * t47 - 0.3e1 * t42 * t77;   
  t80 = t35 * t51;   
  t83 = t39 * t50;   
  t84 = t16 * t83;   
  r->d2fdrsxt = 0.22583212562823026611e-1 * t80 * t56 + 0.10837946617917234798e-1 * t84 * t56;   
  r->d2fdrsxs[0] = 0.0e0;   
  r->d2fdrsxs[1] = 0.0e0;   
  t87 = t8 * t15;   
  t88 = t46 * t46;   
  t89 = t31 * t88;   
  t97 = -0.1e1 / t2 / t1 / 0.9e1 - 0.1e1 / t5 / t4 / 0.9e1;   
  t98 = t31 * t97;   
  r->d2fdz2 = 0.3e1 * t42 * t98 + 0.6e1 * t87 * t89;   
  t101 = t42 * t51;   
  t103 = t23 * t24;   
  t104 = t46 * t53 * t103;   
  r->d2fdzxt = -0.32513839853751704394e-1 * t101 * t104;   
  r->d2fdzxs[0] = 0.0e0;   
  r->d2fdzxs[1] = 0.0e0;   
  t108 = 0.1e1 / t49 / t29;   
  t109 = t17 * t108;   
  t111 = pow(t26, 0.260e1);   
  t113 = t21 * t21;   
  t114 = 0.1e1 / t113;   
  t115 = t24 * t24;   
  t116 = t114 * t115;   
  t117 = t111 * t18 * t116;   
  t120 = pow(t26, 0.30e0);   
  t122 = t120 * t18 * t116;   
  r->d2fdxt2 = 0.14095330427138835389e-2 * t16 * t109 * t117 - 0.84535983619754431424e-1 * t52 * t122;   
  r->d2fdxtxs[0] = 0.0e0;   
  r->d2fdxtxs[1] = 0.0e0;   
  r->d2fdxs2[0] = 0.0e0;   
  r->d2fdxs2[1] = 0.0e0;   
  r->d2fdxs2[2] = 0.0e0;   
   
  if(r->order < 3) return;   
   
  t128 = t63 * t63;   
  t139 = t38 * t38;   
  r->d3fdrs3 = -0.4167433806232e1 * t10 / t59 / t33 * t31 * t128 - 0.6251150709348e1 * t61 * t40 * t63 + 0.42064260253080020739e2 * t61 * t31 - 0.12502301418696e2 * t35 * t71 - 0.6e1 * t16 / t139 * t30;   
  r->d3fdrs2z = 0.6251150709348e1 * t9 * t60 * t17 * t30 * t63 * t46 + 0.12502301418696e2 * t74 * t77 + 0.6e1 * t42 * t71 * t46;   
  r->d3fdrsz2 = -0.12502301418696e2 * t8 * t34 * t89 - 0.6251150709348e1 * t74 * t98 - 0.6e1 * t87 * t40 * t88 - 0.3e1 * t42 * t40 * t97;   
  r->d3fdrszxt = 0.67749637688469079834e-1 * t74 * t51 * t104 + 0.32513839853751704394e-1 * t42 * t83 * t104;   
  r->d3fdrszxs[0] = 0.0e0;   
  r->d3fdrszxs[1] = 0.0e0;   
  r->d3fdrs2xt = -0.22583212562823026611e-1 * t61 * t51 * t63 * t53 * t103 - 0.45166425125646053223e-1 * t35 * t83 * t56 - 0.21675893235834469596e-1 * t16 * t70 * t50 * t56;   
  r->d3fdrsxt2 = -0.29370678266034459558e-2 * t35 * t109 * t117 + 0.17614905799001960757e0 * t80 * t122 - 0.14095330427138835389e-2 * t16 * t39 * t108 * t117 + 0.84535983619754431424e-1 * t84 * t122;   
  r->d3fdrsxtxs[0] = 0.0e0;   
  r->d3fdrsxtxs[1] = 0.0e0;   
  r->d3fdrs2xs[0] = 0.0e0;   
  r->d3fdrs2xs[1] = 0.0e0;   
  r->d3fdrsxs2[0] = 0.0e0;   
  r->d3fdrsxs2[1] = 0.0e0;   
  r->d3fdrsxs2[2] = 0.0e0;   
  t204 = t1 * t1;   
  t207 = t4 * t4;   
  r->d3fdz3 = 0.6e1 * t88 * t46 * t15 * t31 + 0.18e2 * t87 * t17 * t30 * t46 * t97 + 0.3e1 * t42 * t31 * (0.4e1 / 0.27e2 / t2 / t204 - 0.4e1 / 0.27e2 / t5 / t207);   
  r->d3fdz2xt = -0.65027679707503408788e-1 * t87 * t51 * t88 * t53 * t103 - 0.32513839853751704394e-1 * t101 * t97 * t53 * t103;   
  t227 = t18 * t114 * t115;   
  r->d3fdzxt2 = 0.42285991281416506168e-2 * t42 * t109 * t46 * t111 * t227 - 0.25360795085926329427e0 * t101 * t46 * t120 * t227;   
  r->d3fdzxtxs[0] = 0.0e0;   
  r->d3fdzxtxs[1] = 0.0e0;   
  r->d3fdz2xs[0] = 0.0e0;   
  r->d3fdz2xs[1] = 0.0e0;   
  r->d3fdzxs2[0] = 0.0e0;   
  r->d3fdzxs2[1] = 0.0e0;   
  r->d3fdzxs2[2] = 0.0e0;   
  t235 = t49 * t49;   
  t238 = pow(t26, 0.390e1);   
  t242 = t16 * t17;   
  t243 = pow(t26, 0.160e1);   
  t245 = 0.1e1 / t20;   
  t252 = pow(t26, -0.70e0);   
  r->d3fdxt3 = -0.55721785502542111363e-4 * t16 * t17 / t235 * t238 + 0.43977430932673166414e-1 * t242 * t108 * t243 * t245 + 0.22279226778238017763e-2 * t16 * t109 * t243 - 0.30432954103111595313e0 * t242 * t50 * t252 * t245;   
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
#define maple2c_func  xc_gga_c_tca_func   
#define kernel_id 25 
#endif   
