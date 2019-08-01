/* 
  This file was generated automatically with /nfs/data-012/marques/software/source/libxc/svn/scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  This Source Code Form is subject to the terms of the Mozilla Public
  License, v. 2.0. If a copy of the MPL was not distributed with this
  file, You can obtain one at http://mozilla.org/MPL/2.0/.

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ../maple/gga_x_cap.mpl
  Type of functional: work_gga_x
*/

void xc_gga_x_cap_enhance
  (const xc_func_type *p,  xc_gga_work_x_t *r)
{
  double t1, t2, t3, t4, t5, t6, t9, t10;
  double t11, t13, t17, t18, t25, t26, t27, t28;
  double t35, t36, t37, t38, t47, t48, t49, t50;
  double t55, t58, t65, t66, t67, t69, t72, t74;
  double t93, t99, t122, t129;


  t1 = M_CBRT6;
  t2 = t1 * t1;
  t3 = 0.31415926535897932385e1 * 0.31415926535897932385e1;
  t4 = cbrt(t3);
  t5 = 0.1e1 / t4;
  t6 = t2 * t5;
  t9 = 0.1e1 + t6 * r->x / 0.12e2;
  t10 = log(t9);
  t11 = r->x * t10;
  t13 = cbrt(0.1e1 / 0.31415926535897932385e1);
  t17 = 0.1e1 + 0.16463622957338782500e0 * t13 * t5 * t10;
  t18 = 0.1e1 / t17;
  r->f = 0.1e1 + 0.18292914397043091667e-1 * t6 * t11 * t18;

  if(r->order < 1) return;

  t25 = t4 * t4;
  t26 = 0.1e1 / t25;
  t27 = t1 * t26;
  t28 = 0.1e1 / t9;
  t35 = t17 * t17;
  t36 = 0.1e1 / t35;
  t37 = t36 * t13;
  t38 = t37 * t28;
  r->dfdx = 0.18292914397043091667e-1 * t6 * t10 * t18 + 0.91464571985215458335e-2 * t27 * r->x * t28 * t18 - 0.15257331154557236649e-3 * t1 * r->x * t10 * t38;

  if(r->order < 2) return;

  t47 = 0.1e1 / t3;
  t48 = t47 * r->x;
  t49 = t9 * t9;
  t50 = 0.1e1 / t49;
  t55 = 0.1e1 / t4 / t3;
  t58 = t50 * t36 * t13;
  t65 = 0.1e1 / t35 / t17;
  t66 = t11 * t65;
  t67 = t13 * t13;
  t69 = t67 * t50 * t26;
  t72 = t11 * t36;
  t74 = t13 * t50 * t5;
  r->d2fdx2 = 0.18292914397043091667e-1 * t27 * t28 * t18 - 0.30514662309114473298e-3 * t1 * t10 * t38 - 0.45732285992607729168e-2 * t48 * t50 * t18 - 0.75291911355947944040e-3 * t55 * r->x * t58 - 0.76286655772786183245e-4 * r->x * t5 * t58 + 0.25119094746388875326e-4 * t66 * t69 + 0.76286655772786183245e-4 * t72 * t74;

  if(r->order < 3) return;

  t93 = 0.1e1 / t49 / t9;
  t99 = r->x * t93;
  t122 = t35 * t35;
  t129 = t67 * t93;
  r->d3fdx3 = -0.13719685797782318750e-1 * t47 * t50 * t18 - 0.22587573406784383212e-2 * t55 * t50 * t37 - 0.22885996731835854974e-3 * t5 * t50 * t37 + 0.75357284239166625977e-4 * t10 * t65 * t69 + 0.22885996731835854974e-3 * t10 * t36 * t74 + 0.76220476654346215280e-3 * t48 * t93 * t18 * t2 * t5 + 0.25428885257595394415e-4 * t99 * t36 * t13 * t26 * t2 + 0.12548651892657990673e-3 / t25 / t3 * r->x * t93 * t37 * t2 + 0.42418273528802486102e-6 * t99 * t65 * t67 * t2 + 0.20932578955324062772e-5 * r->x * t2 * t47 * t93 * t65 * t67 - 0.32909367201192092403e-6 * t11 / t122 * t93 * t55 * t2 - 0.41865157910648125543e-5 * t66 * t129 * t47 * t2 - 0.21209136764401243050e-6 * t66 * t129 * t2 - 0.12714442628797697208e-4 * t72 * t13 * t93 * t26 * t2;

  if(r->order < 4) return;


}

#define maple2c_order 3
#define maple2c_func  xc_gga_x_cap_enhance
