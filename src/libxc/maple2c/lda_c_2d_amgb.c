/*    
  This file was generated automatically with /nfs/data-012/marques/software/source/libxc/svn/scripts/maple2c.pl.   
  Do not edit this file directly as it can be overwritten!!   
   
  This Source Code Form is subject to the terms of the Mozilla Public   
  License, v. 2.0. If a copy of the MPL was not distributed with this   
  file, You can obtain one at http://mozilla.org/MPL/2.0/.   
   
  Maple version     : Maple 2016 (X86 64 LINUX)   
  Maple source      : ../maple/lda_c_2d_amgb.mpl   
  Type of functional: work_lda   
*/   
   
#ifdef DEVICE   
__device__ static void   
xc_lda_c_2d_amgb_func0(const void *p, xc_lda_work_t *r)   
#else   
static void   
func0(const xc_func_type *p, xc_lda_work_t *r)   
#endif   
{   
  double t2, t4, t6, t8, t12, t14, t15, t19;   
  double t21, t22, t23, t24, t28, t29, t30, t33;   
  double t35, t39, t40, t41, t42, t45, t48, t49;   
  double t51, t52, t53, t54, t55, t56, t70, t83;   
   
   
  t2 = r->rs * r->rs;   
  t4 = t2 * r->rs;   
  t6 = 0.863136e-1 * r->rs + 0.572384e-1 * t2 + 0.3362975e-2 * t4;   
  t8 = POW_3_2(r->rs);   
  t12 = 0.10022e1 * r->rs - 0.2069e-1 * t8 + 0.33997e0 * t2 + 0.1747e-1 * t4;   
  t14 = 0.1e1 + 0.1e1 / t12;   
  t15 = log(t14);   
  r->f = -0.1925e0 + t6 * t15;   
   
  if(r->order < 1) return;   
   
  t19 = 0.863136e-1 + 0.1144768e0 * r->rs + 0.10088925e-1 * t2;   
  t21 = t12 * t12;   
  t22 = 0.1e1 / t21;   
  t23 = t6 * t22;   
  t24 = sqrt(r->rs);   
  t28 = 0.10022e1 - 0.31035e-1 * t24 + 0.67994e0 * r->rs + 0.5241e-1 * t2;   
  t29 = 0.1e1 / t14;   
  t30 = t28 * t29;   
  r->dfdrs = t19 * t15 - t23 * t30;   
   
  if(r->order < 2) return;   
   
  t33 = 0.1144768e0 + 0.20177850e-1 * r->rs;   
  t35 = t19 * t22;   
  t39 = 0.1e1 / t21 / t12;   
  t40 = t6 * t39;   
  t41 = t28 * t28;   
  t42 = t41 * t29;   
  t45 = 0.1e1/sqrt(r->rs);   
  t48 = -0.155175e-1 * t45 + 0.67994e0 + 0.10482e0 * r->rs;   
  t49 = t48 * t29;   
  t51 = t21 * t21;   
  t52 = 0.1e1 / t51;   
  t53 = t6 * t52;   
  t54 = t14 * t14;   
  t55 = 0.1e1 / t54;   
  t56 = t41 * t55;   
  r->d2fdrs2 = t33 * t15 - t23 * t49 - 0.2e1 * t35 * t30 + 0.2e1 * t40 * t42 - t53 * t56;   
   
  if(r->order < 3) return;   
   
  t70 = t41 * t28;   
  t83 = 0.1e1/POW_3_2(r->rs);   
  r->d3fdrs3 = 0.20177850e-1 * t15 - 0.3e1 * t33 * t22 * t30 + 0.6e1 * t19 * t39 * t42 - 0.3e1 * t35 * t49 - 0.3e1 * t19 * t52 * t56 - 0.6e1 * t53 * t70 * t29 + 0.6e1 * t40 * t30 * t48 + 0.6e1 * t6 / t51 / t12 * t70 * t55 - t23 * (0.775875e-2 * t83 + 0.10482e0) * t29 - 0.3e1 * t53 * t48 * t55 * t28 - 0.2e1 * t6 / t51 / t21 * t70 / t54 / t14;   
   
  if(r->order < 4) return;   
   
   
}   
   
#ifdef DEVICE   
__device__ static void   
xc_lda_c_2d_amgb_func1(const void *p, xc_lda_work_t *r)   
#else   
static void   
func1(const xc_func_type *p, xc_lda_work_t *r)   
#endif   
{   
  double t2, t4, t6, t8, t12, t14, t15, t20;   
  double t24, t26, t27, t28, t29, t30, t35, t38;   
  double t40, t41, t43, t44, t47, t49, t50, t51;   
  double t52, t53, t54, t55, t56, t58, t59, t60;   
  double t64, t70, t72, t73, t74, t75, t79, t80;   
  double t81, t85, t86, t87, t88, t89, t92, t93;   
  double t94, t95, t96, t100, t102, t103, t104, t106;   
  double t107, t108, t110, t112, t114, t116, t117, t123;   
  double t130, t135, t137, t141, t142, t143, t144, t147;   
  double t150, t151, t153, t154, t155, t156, t157, t158;   
  double t161, t163, t167, t168, t169, t170, t174, t175;   
  double t177, t178, t179, t180, t181, t182, t184, t187;   
  double t189, t193, t194, t195, t196, t199, t202, t203;   
  double t204, t205, t206, t207, t209, t213, t215, t216;   
  double t225, t238, t254, t281, t295, t322, t328, t357;   
  double t371;   
   
   
  t2 = r->rs * r->rs;   
  t4 = t2 * r->rs;   
  t6 = 0.863136e-1 * r->rs + 0.572384e-1 * t2 + 0.3362975e-2 * t4;   
  t8 = POW_3_2(r->rs);   
  t12 = 0.10022e1 * r->rs - 0.2069e-1 * t8 + 0.33997e0 * t2 + 0.1747e-1 * t4;   
  t14 = 0.1e1 + 0.1e1 / t12;   
  t15 = log(t14);   
  t20 = -0.3394e-1 * r->rs - 0.766765e-2 * t2 - 0.915064469e-4 * t4;   
  t24 = 0.4133e0 * r->rs + 0.668467e-1 * t2 + 0.7799e-3 * t4;   
  t26 = 0.1e1 + 0.1e1 / t24;   
  t27 = log(t26);   
  t28 = t20 * t27;   
  t29 = 0.117331e0 + t28;   
  t30 = r->z * r->z;   
  t35 = -0.37093e-1 * r->rs + 0.163618e-1 * t2 - 0.272383828612e-1 * t4;   
  t38 = 0.1424301e1 * r->rs + 0.1163099e1 * t4;   
  t40 = 0.1e1 + 0.1e1 / t38;   
  t41 = log(t40);   
  t43 = 0.234188e-1 + t35 * t41;   
  t44 = t30 * t30;   
  t47 = exp(-0.13386e1 * r->rs);   
  t49 = M_SQRT2;   
  t50 = (t47 - 0.1e1) * t49;   
  t51 = 0.1e1 / 0.31415926535897932385e1;   
  t52 = 0.1e1 / r->rs;   
  t53 = t51 * t52;   
  t54 = 0.1e1 + r->z;   
  t55 = sqrt(t54);   
  t56 = t55 * t54;   
  t58 = 0.1e1 - r->z;   
  t59 = sqrt(t58);   
  t60 = t59 * t58;   
  t64 = t56 / 0.2e1 + t60 / 0.2e1 - 0.1e1 - 0.3e1 / 0.8e1 * t30 - 0.3e1 / 0.128e3 * t44;   
  r->f = -0.1925e0 + t6 * t15 + t29 * t30 + t43 * t44 - 0.4e1 / 0.3e1 * t50 * t53 * t64;   
   
  if(r->order < 1) return;   
   
  t70 = 0.863136e-1 + 0.1144768e0 * r->rs + 0.10088925e-1 * t2;   
  t72 = t12 * t12;   
  t73 = 0.1e1 / t72;   
  t74 = t6 * t73;   
  t75 = sqrt(r->rs);   
  t79 = 0.10022e1 - 0.31035e-1 * t75 + 0.67994e0 * r->rs + 0.5241e-1 * t2;   
  t80 = 0.1e1 / t14;   
  t81 = t79 * t80;   
  t85 = -0.3394e-1 - 0.1533530e-1 * r->rs - 0.2745193407e-3 * t2;   
  t86 = t85 * t27;   
  t87 = t24 * t24;   
  t88 = 0.1e1 / t87;   
  t89 = t20 * t88;   
  t92 = 0.4133e0 + 0.1336934e0 * r->rs + 0.23397e-2 * t2;   
  t93 = 0.1e1 / t26;   
  t94 = t92 * t93;   
  t95 = t89 * t94;   
  t96 = t86 - t95;   
  t100 = -0.37093e-1 + 0.327236e-1 * r->rs - 0.817151485836e-1 * t2;   
  t102 = t38 * t38;   
  t103 = 0.1e1 / t102;   
  t104 = t35 * t103;   
  t106 = 0.1424301e1 + 0.3489297e1 * t2;   
  t107 = 0.1e1 / t40;   
  t108 = t106 * t107;   
  t110 = t100 * t41 - t104 * t108;   
  t112 = t47 * t49;   
  t114 = t112 * t52 * t64;   
  t116 = 0.1e1 / t2;   
  t117 = t51 * t116;   
  r->dfdrs = t70 * t15 - t74 * t81 + t96 * t30 + t110 * t44 + 0.56811948486082959056e0 * t114 + 0.4e1 / 0.3e1 * t50 * t117 * t64;   
  t123 = t30 * r->z;   
  t130 = 0.3e1 / 0.4e1 * t55 - 0.3e1 / 0.4e1 * t59 - 0.3e1 / 0.4e1 * r->z - 0.3e1 / 0.32e2 * t123;   
  r->dfdz = 0.2e1 * t29 * r->z + 0.4e1 * t43 * t123 - 0.4e1 / 0.3e1 * t50 * t53 * t130;   
   
  if(r->order < 2) return;   
   
  t135 = 0.1144768e0 + 0.20177850e-1 * r->rs;   
  t137 = t70 * t73;   
  t141 = 0.1e1 / t72 / t12;   
  t142 = t6 * t141;   
  t143 = t79 * t79;   
  t144 = t143 * t80;   
  t147 = 0.1e1/sqrt(r->rs);   
  t150 = -0.155175e-1 * t147 + 0.67994e0 + 0.10482e0 * r->rs;   
  t151 = t150 * t80;   
  t153 = t72 * t72;   
  t154 = 0.1e1 / t153;   
  t155 = t6 * t154;   
  t156 = t14 * t14;   
  t157 = 0.1e1 / t156;   
  t158 = t143 * t157;   
  t161 = -0.1533530e-1 - 0.5490386814e-3 * r->rs;   
  t163 = t85 * t88;   
  t167 = 0.1e1 / t87 / t24;   
  t168 = t20 * t167;   
  t169 = t92 * t92;   
  t170 = t169 * t93;   
  t174 = 0.1336934e0 + 0.46794e-2 * r->rs;   
  t175 = t174 * t93;   
  t177 = t87 * t87;   
  t178 = 0.1e1 / t177;   
  t179 = t20 * t178;   
  t180 = t26 * t26;   
  t181 = 0.1e1 / t180;   
  t182 = t169 * t181;   
  t184 = t161 * t27 - 0.2e1 * t163 * t94 + 0.2e1 * t168 * t170 - t89 * t175 - t179 * t182;   
  t187 = 0.327236e-1 - 0.1634302971672e0 * r->rs;   
  t189 = t100 * t103;   
  t193 = 0.1e1 / t102 / t38;   
  t194 = t35 * t193;   
  t195 = t106 * t106;   
  t196 = t195 * t107;   
  t199 = r->rs * t107;   
  t202 = t102 * t102;   
  t203 = 0.1e1 / t202;   
  t204 = t35 * t203;   
  t205 = t40 * t40;   
  t206 = 0.1e1 / t205;   
  t207 = t195 * t206;   
  t209 = t187 * t41 - 0.2e1 * t189 * t108 + 0.2e1 * t194 * t196 - 0.6978594e1 * t104 * t199 - t204 * t207;   
  t213 = t112 * t116 * t64;   
  t215 = 0.1e1 / t4;   
  t216 = t51 * t215;   
  r->d2fdrs2 = t135 * t15 - 0.2e1 * t137 * t81 + 0.2e1 * t142 * t144 - t74 * t151 - t155 * t158 + t184 * t30 + t209 * t44 - 0.76048474243470648992e0 * t114 - 0.11362389697216591811e1 * t213 - 0.8e1 / 0.3e1 * t50 * t216 * t64;   
  t225 = t112 * t52 * t130;   
  r->d2fdrsz = 0.2e1 * t96 * r->z + 0.4e1 * t110 * t123 + 0.56811948486082959056e0 * t225 + 0.4e1 / 0.3e1 * t50 * t117 * t130;   
  t238 = 0.3e1 / 0.8e1 / t55 + 0.3e1 / 0.8e1 / t59 - 0.3e1 / 0.4e1 - 0.9e1 / 0.32e2 * t30;   
  r->d2fdz2 = 0.234662e0 + 0.2e1 * t28 + 0.12e2 * t43 * t30 - 0.4e1 / 0.3e1 * t50 * t53 * t238;   
   
  if(r->order < 3) return;   
   
  t254 = t169 * t92;   
  t281 = -0.5490386814e-3 * t27 - 0.3e1 * t161 * t88 * t94 + 0.6e1 * t85 * t167 * t170 - 0.3e1 * t163 * t175 - 0.3e1 * t85 * t178 * t182 - 0.6e1 * t179 * t254 * t93 + 0.6e1 * t168 * t94 * t174 + 0.6e1 * t20 / t177 / t24 * t254 * t181 - 0.46794e-2 * t89 * t93 - 0.3e1 * t179 * t174 * t181 * t92 - 0.2e1 * t20 / t177 / t87 * t254 / t180 / t26;   
  t295 = t195 * t106;   
  t322 = -0.1634302971672e0 * t41 - 0.3e1 * t187 * t103 * t108 + 0.6e1 * t100 * t193 * t196 - 0.20935782e2 * t189 * t199 - 0.3e1 * t100 * t203 * t207 - 0.6e1 * t204 * t295 * t107 + 0.41871564e2 * t194 * t108 * r->rs + 0.6e1 * t35 / t202 / t38 * t295 * t206 - 0.6978594e1 * t104 * t107 - 0.20935782e2 * t204 * r->rs * t206 * t106 - 0.2e1 * t35 / t202 / t102 * t295 / t205 / t40;   
  t328 = t143 * t79;   
  t357 = 0.1e1/POW_3_2(r->rs);   
  t371 = t2 * t2;   
  r->d3fdrs3 = t281 * t30 + t322 * t44 + 0.22814542273041194697e1 * t213 + 0.6e1 * t70 * t141 * t144 - 0.6e1 * t155 * t328 * t80 + 0.6e1 * t142 * t81 * t150 - 0.3e1 * t155 * t150 * t157 * t79 + 0.34087169091649775433e1 * t112 * t215 * t64 + 0.10179848762230981074e1 * t114 - 0.3e1 * t135 * t73 * t81 - 0.3e1 * t137 * t151 - 0.3e1 * t70 * t154 * t158 + 0.6e1 * t6 / t153 / t12 * t328 * t157 - t74 * (0.775875e-2 * t357 + 0.10482e0) * t80 - 0.2e1 * t6 / t153 / t72 * t328 / t156 / t14 + 0.20177850e-1 * t15 + 0.8e1 * t50 * t51 / t371 * t64;   
  r->d3fdrs2z = 0.2e1 * t184 * r->z + 0.4e1 * t209 * t123 - 0.76048474243470648992e0 * t225 - 0.11362389697216591811e1 * t112 * t116 * t130 - 0.8e1 / 0.3e1 * t50 * t216 * t130;   
  r->d3fdrsz2 = 0.2e1 * t86 - 0.2e1 * t95 + 0.12e2 * t110 * t30 + 0.56811948486082959056e0 * t112 * t52 * t238 + 0.4e1 / 0.3e1 * t50 * t117 * t238;   
  r->d3fdz3 = 0.24e2 * t43 * r->z - 0.4e1 / 0.3e1 * t50 * t53 * (-0.3e1 / 0.16e2 / t56 + 0.3e1 / 0.16e2 / t60 - 0.9e1 / 0.16e2 * r->z);   
   
  if(r->order < 4) return;   
   
   
}   
   
#ifdef DEVICE   
__device__ void   
xc_lda_c_2d_amgb_func(const void *p, xc_lda_work_t *r)   
{   
  if(r->nspin == XC_UNPOLARIZED)   
    xc_lda_c_2d_amgb_func0(p, r);   
  else   
    xc_lda_c_2d_amgb_func1(p, r);   
}   
#else   
void    
xc_lda_c_2d_amgb_func(const xc_func_type *p, xc_lda_work_t *r)   
{   
  if(p->nspin == XC_UNPOLARIZED)   
    func0(p, r);   
  else   
    func1(p, r);   
}   
#endif   
   
#ifndef DEVICE   
#define maple2c_order 3   
#define maple2c_func  xc_lda_c_2d_amgb_func   
#define kernel_id 2 
#endif   
