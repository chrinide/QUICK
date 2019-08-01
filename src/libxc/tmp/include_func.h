#include "maple2c/gga_c_am05.c"
#include "maple2c/gga_c_bcgp.c"
#include "maple2c/gga_c_bmk.c"
#include "maple2c/gga_c_cs1.c"
#include "maple2c/gga_c_ft97.c"
#include "maple2c/gga_c_gapc.c"
#include "maple2c/gga_c_gaploc.c"
#include "maple2c/gga_c_hcth_a.c"
#include "maple2c/gga_c_lm.c"
#include "maple2c/gga_c_lyp.c"
#include "maple2c/gga_c_op_b88.c"
#include "maple2c/gga_c_op_g96.c"
#include "maple2c/gga_c_op_pbe.c"
#include "maple2c/gga_c_op_pw91.c"
#include "maple2c/gga_c_optc.c"
#include "maple2c/gga_c_op_xalpha.c"
#include "maple2c/gga_c_p86.c"
#include "maple2c/gga_c_pbe.c"
#include "maple2c/gga_c_pbeloc.c"
#include "maple2c/gga_c_pw91.c"
#include "maple2c/gga_c_q2d.c"
#include "maple2c/gga_c_regtpss.c"
#include "maple2c/gga_c_revtca.c"
#include "maple2c/gga_c_scan_e0.c"
#include "maple2c/gga_c_sg4.c"
#include "maple2c/gga_c_sogga11.c"
#include "maple2c/gga_c_tca.c"
#include "maple2c/gga_c_w94.c"
#include "maple2c/gga_c_wi.c"
#include "maple2c/gga_c_wl.c"
#include "maple2c/gga_c_zpbeint.c"
#include "maple2c/gga_c_zvpbeint.c"
#include "maple2c/gga_k_dk.c"
#include "maple2c/gga_k_exp4.c"
#include "maple2c/gga_k_meyer.c"
#include "maple2c/gga_k_ol1.c"
#include "maple2c/gga_k_ol2.c"
#include "maple2c/gga_k_pearson.c"
#include "maple2c/gga_k_tflw.c"
#include "maple2c/gga_k_thakkar.c"
#include "maple2c/gga_x_2d_b86.c"
#include "maple2c/gga_x_2d_b86_mgc.c"
#include "maple2c/gga_x_2d_b88.c"
#include "maple2c/gga_x_2d_pbe.c"
#include "maple2c/gga_x_airy.c"
#include "maple2c/gga_x_ak13.c"
#include "maple2c/gga_x_am05.c"
#include "maple2c/gga_x_b86.c"
#include "maple2c/gga_x_b88.c"
#include "maple2c/gga_x_bayesian.c"
#include "maple2c/gga_x_beefvdw.c"
#include "maple2c/gga_x_bpccac.c"
#include "maple2c/gga_x_c09x.c"
#include "maple2c/gga_x_cap.c"
#include "maple2c/gga_xc_b97.c"
#include "maple2c/gga_x_chachiyo.c"
#include "maple2c/gga_xc_th1.c"
#include "maple2c/gga_xc_th2.c"
#include "maple2c/gga_xc_th3.c"
#include "maple2c/gga_x_dk87.c"
#include "maple2c/gga_x_eg93.c"
#include "maple2c/gga_x_ft97.c"
#include "maple2c/gga_x_g96.c"
#include "maple2c/gga_x_hcth_a.c"
#include "maple2c/gga_x_herman.c"
#include "maple2c/gga_x_hjs_b88_v2.c"
#include "maple2c/gga_x_hjs.c"
#include "maple2c/gga_x_htbs.c"
#include "maple2c/gga_x_kt.c"
#include "maple2c/gga_x_lag.c"
#include "maple2c/gga_x_lg93.c"
#include "maple2c/gga_x_lv_rpw86.c"
#include "maple2c/gga_x_mpbe.c"
#include "maple2c/gga_x_n12.c"
#include "maple2c/gga_x_optx.c"
#include "maple2c/gga_x_pbea.c"
#include "maple2c/gga_x_pbe.c"
#include "maple2c/gga_x_pbeint.c"
#include "maple2c/gga_x_pbepow.c"
#include "maple2c/gga_x_pbetrans.c"
#include "maple2c/gga_x_pw86.c"
#include "maple2c/gga_x_pw91.c"
#include "maple2c/gga_x_q2d.c"
#include "maple2c/gga_x_rge2.c"
#include "maple2c/gga_x_rpbe.c"
#include "maple2c/gga_x_sg4.c"
#include "maple2c/gga_x_sogga11.c"
#include "maple2c/gga_x_ssb_sw.c"
#include "maple2c/gga_x_vmt84.c"
#include "maple2c/gga_x_vmt.c"
#include "maple2c/gga_x_wc.c"
#include "maple2c/hyb_gga_xc_wb97.c"
#include "maple2c/hyb_mgga_xc_wb97mv.c"
#include "maple2c/hyb_mgga_x_dldf.c"
#include "maple2c/hyb_mgga_x_m05.c"
#include "maple2c/lda_c_1d_csc.c"
#include "maple2c/lda_c_1d_loos.c"
#include "maple2c/lda_c_2d_amgb.c"
#include "maple2c/lda_c_2d_prm.c"
#include "maple2c/lda_c_chachiyo.c"
#include "maple2c/lda_c_gk72.c"
#include "maple2c/lda_c_gombas.c"
#include "maple2c/lda_c_hl.c"
#include "maple2c/lda_c_lp96.c"
#include "maple2c/lda_c_ml1.c"
#include "maple2c/lda_c_pk09.c"
#include "maple2c/lda_c_pw.c"
#include "maple2c/lda_c_pz.c"
#include "maple2c/lda_c_rc04.c"
#include "maple2c/lda_c_rpa.c"
#include "maple2c/lda_c_vwn_1.c"
#include "maple2c/lda_c_vwn_2.c"
#include "maple2c/lda_c_vwn_3.c"
#include "maple2c/lda_c_vwn_4.c"
#include "maple2c/lda_c_vwn.c"
#include "maple2c/lda_c_vwn_rpa.c"
#include "maple2c/lda_c_wigner.c"
#include "maple2c/lda_k_tf.c"
#include "maple2c/lda_k_zlp.c"
#include "maple2c/lda_x_2d.c"
#include "maple2c/lda_x.c"
#include "maple2c/lda_xc_1d_ehwlrg.c"
#include "maple2c/lda_xc_ksdt.c"
#include "maple2c/lda_xc_teter93.c"
#include "maple2c/lda_xc_zlp.c"
#include "maple2c/lda_x_erf.c"
#include "maple2c/lda_x_rel.c"
#include "maple2c/mgga_c_b88.c"
#include "maple2c/mgga_c_bc95.c"
#include "maple2c/mgga_c_cs.c"
#include "maple2c/mgga_c_kcis.c"
#include "maple2c/mgga_c_m05.c"
#include "maple2c/mgga_c_m06l.c"
#include "maple2c/mgga_c_m08.c"
#include "maple2c/mgga_c_pkzb.c"
#include "maple2c/mgga_c_revscan.c"
#include "maple2c/mgga_c_revtpss.c"
#include "maple2c/mgga_c_scan.c"
#include "maple2c/mgga_c_tpss.c"
#include "maple2c/mgga_c_tpssloc.c"
#include "maple2c/mgga_c_vsxc.c"
#include "maple2c/mgga_k_pc07.c"
#include "maple2c/mgga_x_br89_explicit.c"
#include "maple2c/mgga_xc_b97mv.c"
#include "maple2c/mgga_xc_b98.c"
#include "maple2c/mgga_xc_cc06.c"
#include "maple2c/mgga_xc_lp90.c"
#include "maple2c/mgga_xc_zlp.c"
#include "maple2c/mgga_x_gvt4.c"
#include "maple2c/mgga_x_gx.c"
#include "maple2c/mgga_x_lta.c"
#include "maple2c/mgga_x_m06l.c"
#include "maple2c/mgga_x_m08.c"
#include "maple2c/mgga_x_m11.c"
#include "maple2c/mgga_x_m11_l.c"
#include "maple2c/mgga_x_mbeef.c"
#include "maple2c/mgga_x_mbeefvdw.c"
#include "maple2c/mgga_x_mk00.c"
#include "maple2c/mgga_x_mn12.c"
#include "maple2c/mgga_x_ms.c"
#include "maple2c/mgga_x_mvs.c"
#include "maple2c/mgga_x_pbe_gx.c"
#include "maple2c/mgga_x_pkzb.c"
#include "maple2c/mgga_x_sa_tpss.c"
#include "maple2c/mgga_x_scan.c"
#include "maple2c/mgga_x_tau_hcth.c"
#include "maple2c/mgga_x_tm.c"
#include "maple2c/mgga_x_tpss.c"
#include "maple2c/mgga_x_vt84.c"
