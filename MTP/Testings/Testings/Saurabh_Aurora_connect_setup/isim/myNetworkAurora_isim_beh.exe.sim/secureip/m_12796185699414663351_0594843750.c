/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ddf5b5d */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/build/xfndry/isimco/hipsBuilds/P_hips_v05.0/rst/hips/gtp_dual_fast_postlava/RTL/gtp5f_gtpdual_top.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {2, 0};
static unsigned int ng3[] = {4U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {7U, 0U};
static unsigned int ng6[] = {2U, 0U};



static void Always_10325_0(char *t0)
{
    char t4[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 5720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(10325, ng0);
    t2 = (t0 + 7280);
    *((int *)t2) = 1;
    t3 = (t0 + 5752);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(10325, ng0);

LAB5:    xsi_set_current_line(10326, ng0);
    t5 = (t0 + 1688U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(10329, ng0);

LAB14:    xsi_set_current_line(10330, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t2 = (t0 + 4648);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t21, 0, 8);
    t12 = (t21 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 0);
    t9 = (t8 & 1);
    *((unsigned int *)t21) = t9;
    t10 = *((unsigned int *)t13);
    t11 = (t10 >> 0);
    t14 = (t11 & 1);
    *((unsigned int *)t12) = t14;
    xsi_vlogtype_concat(t4, 2, 2, 2U, t21, 1, t3, 1);
    t19 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t19, t4, 0, 0, 2, 50LL);
    xsi_set_current_line(10331, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t0 + 4808);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t21, 0, 8);
    t12 = (t21 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 0);
    t9 = (t8 & 1);
    *((unsigned int *)t21) = t9;
    t10 = *((unsigned int *)t13);
    t11 = (t10 >> 0);
    t14 = (t11 & 1);
    *((unsigned int *)t12) = t14;
    xsi_vlogtype_concat(t4, 2, 2, 2U, t21, 1, t3, 1);
    t19 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t19, t4, 0, 0, 2, 50LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(10326, ng0);

LAB13:    xsi_set_current_line(10327, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 2, 50LL);
    xsi_set_current_line(10328, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 50LL);
    goto LAB12;

}

static void Cont_10335_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 5968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(10335, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 7440);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 7296);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_10336_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 6216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(10336, ng0);
    t2 = (t0 + 4808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 7504);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 7312);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_10340_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
    char t25[8];
    char t26[8];
    char t29[8];
    char t67[8];
    char t68[8];
    char t76[8];
    char t77[8];
    char t95[8];
    char t96[8];
    char t99[8];
    char t118[8];
    char t121[8];
    char t131[8];
    char t144[8];
    char t145[8];
    char t163[8];
    char t166[8];
    char t176[8];
    char t184[8];
    char t218[8];
    char t228[8];
    char t236[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t27;
    char *t28;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t97;
    char *t98;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t119;
    char *t120;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    char *t130;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t146;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;
    char *t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    char *t164;
    char *t165;
    char *t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    char *t174;
    char *t175;
    char *t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    char *t188;
    char *t189;
    char *t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    char *t198;
    char *t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    int t208;
    int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    char *t216;
    char *t217;
    char *t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    char *t226;
    char *t227;
    char *t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    char *t240;
    char *t241;
    char *t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    char *t250;
    char *t251;
    char *t252;
    char *t253;
    char *t254;
    char *t255;
    unsigned int t256;
    unsigned int t257;
    char *t258;
    unsigned int t259;
    unsigned int t260;
    char *t261;
    unsigned int t262;
    unsigned int t263;
    char *t264;

LAB0:    t1 = (t0 + 6464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(10340, ng0);
    t2 = (t0 + 3288U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t12);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 8);

LAB16:    t251 = (t0 + 7568);
    t252 = (t251 + 56U);
    t253 = *((char **)t252);
    t254 = (t253 + 56U);
    t255 = *((char **)t254);
    memset(t255, 0, 8);
    t256 = 7U;
    t257 = t256;
    t258 = (t3 + 4);
    t259 = *((unsigned int *)t3);
    t256 = (t256 & t259);
    t260 = *((unsigned int *)t258);
    t257 = (t257 & t260);
    t261 = (t255 + 4);
    t262 = *((unsigned int *)t255);
    *((unsigned int *)t255) = (t262 | t256);
    t263 = *((unsigned int *)t261);
    *((unsigned int *)t261) = (t263 | t257);
    xsi_driver_vfirst_trans_delayed(t251, 0, 2, 150LL, 0);
    t264 = (t0 + 7328);
    *((int *)t264) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 4248U);
    t18 = *((char **)t17);
    t17 = (t0 + 4088U);
    t19 = *((char **)t17);
    t17 = (t0 + 3928U);
    t20 = *((char **)t17);
    xsi_vlogtype_concat(t16, 3, 3, 3U, t20, 1, t19, 1, t18, 1);
    goto LAB9;

LAB10:    t17 = (t0 + 3608U);
    t27 = *((char **)t17);
    t17 = (t0 + 3768U);
    t28 = *((char **)t17);
    t30 = *((unsigned int *)t27);
    t31 = *((unsigned int *)t28);
    t32 = (t30 | t31);
    *((unsigned int *)t29) = t32;
    t17 = (t27 + 4);
    t33 = (t28 + 4);
    t34 = (t29 + 4);
    t35 = *((unsigned int *)t17);
    t36 = *((unsigned int *)t33);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB17;

LAB18:
LAB19:    memset(t26, 0, 8);
    t56 = (t29 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t29);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t56) != 0)
        goto LAB22;

LAB23:    t63 = (t26 + 4);
    t64 = *((unsigned int *)t26);
    t65 = *((unsigned int *)t63);
    t66 = (t64 || t65);
    if (t66 > 0)
        goto LAB24;

LAB25:    t72 = *((unsigned int *)t26);
    t73 = (~(t72));
    t74 = *((unsigned int *)t63);
    t75 = (t73 || t74);
    if (t75 > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t63) > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t26) > 0)
        goto LAB30;

LAB31:    memcpy(t25, t76, 8);

LAB32:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 3, t16, 3, t25, 3);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB17:    t40 = *((unsigned int *)t29);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t29) = (t40 | t41);
    t42 = (t27 + 4);
    t43 = (t28 + 4);
    t44 = *((unsigned int *)t42);
    t45 = (~(t44));
    t46 = *((unsigned int *)t27);
    t47 = (t46 & t45);
    t48 = *((unsigned int *)t43);
    t49 = (~(t48));
    t50 = *((unsigned int *)t28);
    t51 = (t50 & t49);
    t52 = (~(t47));
    t53 = (~(t51));
    t54 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t54 & t52);
    t55 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t55 & t53);
    goto LAB19;

LAB20:    *((unsigned int *)t26) = 1;
    goto LAB23;

LAB22:    t62 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB23;

LAB24:    t69 = ((char*)((ng2)));
    t70 = (t0 + 3608U);
    t71 = *((char **)t70);
    xsi_vlog_mul_concat(t68, 2, 1, t69, 1U, t71, 1);
    t70 = ((char*)((ng1)));
    xsi_vlogtype_concat(t67, 3, 3, 2U, t70, 1, t68, 2);
    goto LAB25;

LAB26:    t78 = (t0 + 2328U);
    t79 = *((char **)t78);
    memset(t77, 0, 8);
    t78 = (t79 + 4);
    t80 = *((unsigned int *)t78);
    t81 = (~(t80));
    t82 = *((unsigned int *)t79);
    t83 = (t82 & t81);
    t84 = (t83 & 1U);
    if (t84 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t78) != 0)
        goto LAB35;

LAB36:    t86 = (t77 + 4);
    t87 = *((unsigned int *)t77);
    t88 = *((unsigned int *)t86);
    t89 = (t87 || t88);
    if (t89 > 0)
        goto LAB37;

LAB38:    t91 = *((unsigned int *)t77);
    t92 = (~(t91));
    t93 = *((unsigned int *)t86);
    t94 = (t92 || t93);
    if (t94 > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t86) > 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t77) > 0)
        goto LAB43;

LAB44:    memcpy(t76, t95, 8);

LAB45:    goto LAB27;

LAB28:    xsi_vlog_unsigned_bit_combine(t25, 3, t67, 3, t76, 3);
    goto LAB32;

LAB30:    memcpy(t25, t67, 8);
    goto LAB32;

LAB33:    *((unsigned int *)t77) = 1;
    goto LAB36;

LAB35:    t85 = (t77 + 4);
    *((unsigned int *)t77) = 1;
    *((unsigned int *)t85) = 1;
    goto LAB36;

LAB37:    t90 = ((char*)((ng3)));
    goto LAB38;

LAB39:    t97 = (t0 + 2648U);
    t98 = *((char **)t97);
    memset(t99, 0, 8);
    t97 = (t99 + 4);
    t100 = (t98 + 4);
    t101 = *((unsigned int *)t98);
    t102 = (t101 >> 2);
    t103 = (t102 & 1);
    *((unsigned int *)t99) = t103;
    t104 = *((unsigned int *)t100);
    t105 = (t104 >> 2);
    t106 = (t105 & 1);
    *((unsigned int *)t97) = t106;
    memset(t96, 0, 8);
    t107 = (t99 + 4);
    t108 = *((unsigned int *)t107);
    t109 = (~(t108));
    t110 = *((unsigned int *)t99);
    t111 = (t110 & t109);
    t112 = (t111 & 1U);
    if (t112 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t107) != 0)
        goto LAB48;

LAB49:    t114 = (t96 + 4);
    t115 = *((unsigned int *)t96);
    t116 = *((unsigned int *)t114);
    t117 = (t115 || t116);
    if (t117 > 0)
        goto LAB50;

LAB51:    t140 = *((unsigned int *)t96);
    t141 = (~(t140));
    t142 = *((unsigned int *)t114);
    t143 = (t141 || t142);
    if (t143 > 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t114) > 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t96) > 0)
        goto LAB56;

LAB57:    memcpy(t95, t144, 8);

LAB58:    goto LAB40;

LAB41:    xsi_vlog_unsigned_bit_combine(t76, 3, t90, 3, t95, 3);
    goto LAB45;

LAB43:    memcpy(t76, t90, 8);
    goto LAB45;

LAB46:    *((unsigned int *)t96) = 1;
    goto LAB49;

LAB48:    t113 = (t96 + 4);
    *((unsigned int *)t96) = 1;
    *((unsigned int *)t113) = 1;
    goto LAB49;

LAB50:    t119 = (t0 + 2648U);
    t120 = *((char **)t119);
    memset(t121, 0, 8);
    t119 = (t121 + 4);
    t122 = (t120 + 4);
    t123 = *((unsigned int *)t120);
    t124 = (t123 >> 1);
    t125 = (t124 & 1);
    *((unsigned int *)t121) = t125;
    t126 = *((unsigned int *)t122);
    t127 = (t126 >> 1);
    t128 = (t127 & 1);
    *((unsigned int *)t119) = t128;
    t129 = (t0 + 2648U);
    t130 = *((char **)t129);
    memset(t131, 0, 8);
    t129 = (t131 + 4);
    t132 = (t130 + 4);
    t133 = *((unsigned int *)t130);
    t134 = (t133 >> 0);
    t135 = (t134 & 1);
    *((unsigned int *)t131) = t135;
    t136 = *((unsigned int *)t132);
    t137 = (t136 >> 0);
    t138 = (t137 & 1);
    *((unsigned int *)t129) = t138;
    t139 = ((char*)((ng4)));
    xsi_vlogtype_concat(t118, 3, 3, 3U, t139, 1, t131, 1, t121, 1);
    goto LAB51;

LAB52:    t146 = (t0 + 2488U);
    t147 = *((char **)t146);
    memset(t145, 0, 8);
    t146 = (t147 + 4);
    t148 = *((unsigned int *)t146);
    t149 = (~(t148));
    t150 = *((unsigned int *)t147);
    t151 = (t150 & t149);
    t152 = (t151 & 1U);
    if (t152 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t146) != 0)
        goto LAB61;

LAB62:    t154 = (t145 + 4);
    t155 = *((unsigned int *)t145);
    t156 = *((unsigned int *)t154);
    t157 = (t155 || t156);
    if (t157 > 0)
        goto LAB63;

LAB64:    t159 = *((unsigned int *)t145);
    t160 = (~(t159));
    t161 = *((unsigned int *)t154);
    t162 = (t160 || t161);
    if (t162 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t154) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t145) > 0)
        goto LAB69;

LAB70:    memcpy(t144, t163, 8);

LAB71:    goto LAB53;

LAB54:    xsi_vlog_unsigned_bit_combine(t95, 3, t118, 3, t144, 3);
    goto LAB58;

LAB56:    memcpy(t95, t118, 8);
    goto LAB58;

LAB59:    *((unsigned int *)t145) = 1;
    goto LAB62;

LAB61:    t153 = (t145 + 4);
    *((unsigned int *)t145) = 1;
    *((unsigned int *)t153) = 1;
    goto LAB62;

LAB63:    t158 = ((char*)((ng5)));
    goto LAB64;

LAB65:    t164 = (t0 + 1848U);
    t165 = *((char **)t164);
    memset(t166, 0, 8);
    t164 = (t166 + 4);
    t167 = (t165 + 4);
    t168 = *((unsigned int *)t165);
    t169 = (t168 >> 1);
    t170 = (t169 & 1);
    *((unsigned int *)t166) = t170;
    t171 = *((unsigned int *)t167);
    t172 = (t171 >> 1);
    t173 = (t172 & 1);
    *((unsigned int *)t164) = t173;
    t174 = (t0 + 1848U);
    t175 = *((char **)t174);
    memset(t176, 0, 8);
    t174 = (t176 + 4);
    t177 = (t175 + 4);
    t178 = *((unsigned int *)t175);
    t179 = (t178 >> 0);
    t180 = (t179 & 1);
    *((unsigned int *)t176) = t180;
    t181 = *((unsigned int *)t177);
    t182 = (t181 >> 0);
    t183 = (t182 & 1);
    *((unsigned int *)t174) = t183;
    t185 = *((unsigned int *)t166);
    t186 = *((unsigned int *)t176);
    t187 = (t185 & t186);
    *((unsigned int *)t184) = t187;
    t188 = (t166 + 4);
    t189 = (t176 + 4);
    t190 = (t184 + 4);
    t191 = *((unsigned int *)t188);
    t192 = *((unsigned int *)t189);
    t193 = (t191 | t192);
    *((unsigned int *)t190) = t193;
    t194 = *((unsigned int *)t190);
    t195 = (t194 != 0);
    if (t195 == 1)
        goto LAB72;

LAB73:
LAB74:    t216 = (t0 + 1848U);
    t217 = *((char **)t216);
    memset(t218, 0, 8);
    t216 = (t218 + 4);
    t219 = (t217 + 4);
    t220 = *((unsigned int *)t217);
    t221 = (t220 >> 1);
    t222 = (t221 & 1);
    *((unsigned int *)t218) = t222;
    t223 = *((unsigned int *)t219);
    t224 = (t223 >> 1);
    t225 = (t224 & 1);
    *((unsigned int *)t216) = t225;
    t226 = (t0 + 1848U);
    t227 = *((char **)t226);
    memset(t228, 0, 8);
    t226 = (t228 + 4);
    t229 = (t227 + 4);
    t230 = *((unsigned int *)t227);
    t231 = (t230 >> 0);
    t232 = (t231 & 1);
    *((unsigned int *)t228) = t232;
    t233 = *((unsigned int *)t229);
    t234 = (t233 >> 0);
    t235 = (t234 & 1);
    *((unsigned int *)t226) = t235;
    t237 = *((unsigned int *)t218);
    t238 = *((unsigned int *)t228);
    t239 = (t237 ^ t238);
    *((unsigned int *)t236) = t239;
    t240 = (t218 + 4);
    t241 = (t228 + 4);
    t242 = (t236 + 4);
    t243 = *((unsigned int *)t240);
    t244 = *((unsigned int *)t241);
    t245 = (t243 | t244);
    *((unsigned int *)t242) = t245;
    t246 = *((unsigned int *)t242);
    t247 = (t246 != 0);
    if (t247 == 1)
        goto LAB75;

LAB76:
LAB77:    t250 = ((char*)((ng1)));
    xsi_vlogtype_concat(t163, 3, 3, 3U, t250, 1, t236, 1, t184, 1);
    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t144, 3, t158, 3, t163, 3);
    goto LAB71;

LAB69:    memcpy(t144, t158, 8);
    goto LAB71;

LAB72:    t196 = *((unsigned int *)t184);
    t197 = *((unsigned int *)t190);
    *((unsigned int *)t184) = (t196 | t197);
    t198 = (t166 + 4);
    t199 = (t176 + 4);
    t200 = *((unsigned int *)t166);
    t201 = (~(t200));
    t202 = *((unsigned int *)t198);
    t203 = (~(t202));
    t204 = *((unsigned int *)t176);
    t205 = (~(t204));
    t206 = *((unsigned int *)t199);
    t207 = (~(t206));
    t208 = (t201 & t203);
    t209 = (t205 & t207);
    t210 = (~(t208));
    t211 = (~(t209));
    t212 = *((unsigned int *)t190);
    *((unsigned int *)t190) = (t212 & t210);
    t213 = *((unsigned int *)t190);
    *((unsigned int *)t190) = (t213 & t211);
    t214 = *((unsigned int *)t184);
    *((unsigned int *)t184) = (t214 & t210);
    t215 = *((unsigned int *)t184);
    *((unsigned int *)t184) = (t215 & t211);
    goto LAB74;

LAB75:    t248 = *((unsigned int *)t236);
    t249 = *((unsigned int *)t242);
    *((unsigned int *)t236) = (t248 | t249);
    goto LAB77;

}

static void Cont_10360_4(char *t0)
{
    char t3[8];
    char t14[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;

LAB0:    t1 = (t0 + 6712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(10360, ng0);
    t2 = (t0 + 3288U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t0 + 3608U);
    t12 = *((char **)t11);
    t11 = (t0 + 3768U);
    t13 = *((char **)t11);
    t15 = *((unsigned int *)t12);
    t16 = *((unsigned int *)t13);
    t17 = (t15 | t16);
    *((unsigned int *)t14) = t17;
    t11 = (t12 + 4);
    t18 = (t13 + 4);
    t19 = (t14 + 4);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t18);
    t22 = (t20 | t21);
    *((unsigned int *)t19) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB8;

LAB9:
LAB10:    t42 = *((unsigned int *)t3);
    t43 = *((unsigned int *)t14);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t45 = (t3 + 4);
    t46 = (t14 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB11;

LAB12:
LAB13:    t73 = (t0 + 7632);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    memset(t77, 0, 8);
    t78 = 1U;
    t79 = t78;
    t80 = (t41 + 4);
    t81 = *((unsigned int *)t41);
    t78 = (t78 & t81);
    t82 = *((unsigned int *)t80);
    t79 = (t79 & t82);
    t83 = (t77 + 4);
    t84 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t84 | t78);
    t85 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t85 | t79);
    xsi_driver_vfirst_trans_delayed(t73, 0, 0, 100LL, 0);
    t86 = (t0 + 7344);
    *((int *)t86) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB8:    t25 = *((unsigned int *)t14);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t14) = (t25 | t26);
    t27 = (t12 + 4);
    t28 = (t13 + 4);
    t29 = *((unsigned int *)t27);
    t30 = (~(t29));
    t31 = *((unsigned int *)t12);
    t32 = (t31 & t30);
    t33 = *((unsigned int *)t28);
    t34 = (~(t33));
    t35 = *((unsigned int *)t13);
    t36 = (t35 & t34);
    t37 = (~(t32));
    t38 = (~(t36));
    t39 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t39 & t37);
    t40 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t40 & t38);
    goto LAB10;

LAB11:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t3 + 4);
    t56 = (t14 + 4);
    t57 = *((unsigned int *)t3);
    t58 = (~(t57));
    t59 = *((unsigned int *)t55);
    t60 = (~(t59));
    t61 = *((unsigned int *)t14);
    t62 = (~(t61));
    t63 = *((unsigned int *)t56);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t69 & t67);
    t70 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t70 & t68);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t68);
    goto LAB13;

}

static void Cont_10364_5(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;

LAB0:    t1 = (t0 + 6960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(10364, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    t20 = (t0 + 7696);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t24, 0, 8);
    t25 = 1U;
    t26 = t25;
    t27 = (t4 + 4);
    t28 = *((unsigned int *)t4);
    t25 = (t25 & t28);
    t29 = *((unsigned int *)t27);
    t26 = (t26 & t29);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 | t25);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t32 | t26);
    xsi_driver_vfirst_trans_delayed(t20, 0, 0, 50LL, 0);
    t33 = (t0 + 7360);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}


extern void secureip_m_12796185699414663351_0594843750_init()
{
	static char *pe[] = {(void *)Always_10325_0,(void *)Cont_10335_1,(void *)Cont_10336_2,(void *)Cont_10340_3,(void *)Cont_10360_4,(void *)Cont_10364_5};
	xsi_register_didat("secureip_m_12796185699414663351_0594843750", "isim/myNetworkAurora_isim_beh.exe.sim/secureip/m_12796185699414663351_0594843750.didat");
	xsi_register_executes(pe);
}
