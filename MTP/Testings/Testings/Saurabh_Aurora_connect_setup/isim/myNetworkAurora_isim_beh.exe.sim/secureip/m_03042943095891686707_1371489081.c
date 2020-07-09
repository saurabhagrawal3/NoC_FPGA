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
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {1U, 1U};
static unsigned int ng6[] = {0U, 1U};
static unsigned int ng7[] = {2U, 0U};
static int ng8[] = {0, 0, 0, 0};
static unsigned int ng9[] = {4U, 0U};
static int ng10[] = {2, 0};
static unsigned int ng11[] = {3U, 0U};
static unsigned int ng12[] = {6U, 0U};
static int ng13[] = {10, 0};
static unsigned int ng14[] = {5U, 0U};
static int ng15[] = {8, 0};
static int ng16[] = {100, 0};
static int ng17[] = {5, 0};
static int ng18[] = {16, 0};
static int ng19[] = {13, 0};
static unsigned int ng20[] = {3U, 3U};

static void NetReassign_30425_51(char *);
static void NetReassign_30427_52(char *);
static void NetReassign_30429_53(char *);
static void NetReassign_30431_54(char *);
static void NetReassign_30492_55(char *);
static void NetReassign_30493_56(char *);
static void NetReassign_30501_57(char *);
static void NetReassign_30502_58(char *);
static void NetReassign_30504_59(char *);
static void NetReassign_30505_60(char *);
static void NetReassign_30512_61(char *);
static void NetReassign_30513_62(char *);


static int sp_kill_rx(char *t1, char *t2)
{
    char t11[8];
    char t12[8];
    char t21[8];
    char t29[8];
    char t40[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3256);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(30599, ng0);

LAB5:    xsi_set_current_line(30600, ng0);
    t5 = (t1 + 576);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = xsi_vlog_namedbase_disable(t5, t7);
    if (t8 == 1)
        goto LAB1;

LAB6:    xsi_set_current_line(30603, ng0);
    xsi_set_current_line(30603, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 18048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB7:    t4 = (t1 + 18048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2608);
    t9 = *((char **)t7);
    t7 = (t1 + 1792);
    t10 = *((char **)t7);
    memset(t11, 0, 8);
    xsi_vlog_signed_add(t11, 32, t9, 32, t10, 32);
    memset(t12, 0, 8);
    xsi_vlog_signed_less(t12, 32, t6, 32, t11, 32);
    t7 = (t12 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB8;

LAB9:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB8:    xsi_set_current_line(30603, ng0);

LAB10:    xsi_set_current_line(30604, ng0);
    t18 = (t1 + 15328);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t22 = (t1 + 15328);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = (t1 + 18048);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_get_index_select_value(t21, 1, t20, t24, 2, t27, 32, 1);
    t28 = ((char*)((ng2)));
    memset(t29, 0, 8);
    if (*((unsigned int *)t21) != *((unsigned int *)t28))
        goto LAB12;

LAB11:    t30 = (t21 + 4);
    t31 = (t28 + 4);
    if (*((unsigned int *)t30) != *((unsigned int *)t31))
        goto LAB12;

LAB13:    t32 = (t29 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t29);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB14;

LAB15:
LAB16:    xsi_set_current_line(30603, ng0);
    t4 = (t1 + 18048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_signed_add(t11, 32, t6, 32, t7, 32);
    t9 = (t1 + 18048);
    xsi_vlogvar_assign_value(t9, t11, 0, 0, 32);
    goto LAB7;

LAB12:    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(30604, ng0);
    t38 = ((char*)((ng3)));
    t39 = (t1 + 15328);
    t41 = (t1 + 15328);
    t42 = (t41 + 72U);
    t43 = *((char **)t42);
    t44 = (t1 + 18048);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    xsi_vlog_generic_convert_bit_index(t40, t43, 2, t46, 32, 1);
    t47 = (t40 + 4);
    t48 = *((unsigned int *)t47);
    t8 = (!(t48));
    if (t8 == 1)
        goto LAB17;

LAB18:    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t39, t38, 0, *((unsigned int *)t40), 1);
    goto LAB18;

}

static void Cont_30022_0(char *t0)
{
    char t3[8];
    char t4[8];
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
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 18960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30022, ng0);
    t2 = (t0 + 9008U);
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

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t12);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t24, 8);

LAB16:    t23 = (t0 + 35648);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 1U;
    t30 = t29;
    t31 = (t3 + 4);
    t32 = *((unsigned int *)t3);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t23, 0, 0);
    t37 = (t0 + 34656);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 11328);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    goto LAB9;

LAB10:    t23 = (t0 + 4528U);
    t24 = *((char **)t23);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t18, 1, t24, 1);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Cont_30023_1(char *t0)
{
    char t3[8];
    char t4[8];
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
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 19208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30023, ng0);
    t2 = (t0 + 9008U);
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

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t12);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t24, 8);

LAB16:    t23 = (t0 + 35712);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 1U;
    t30 = t29;
    t31 = (t3 + 4);
    t32 = *((unsigned int *)t3);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t23, 0, 0);
    t37 = (t0 + 34672);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 11488);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    goto LAB9;

LAB10:    t23 = (t0 + 4688U);
    t24 = *((char **)t23);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t18, 1, t24, 1);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Initial_30027_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(30027, ng0);

LAB2:    xsi_set_current_line(30028, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 12448);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_30032_3(char *t0)
{
    char t6[8];
    char t9[8];
    char t24[8];
    char t27[8];
    char t35[8];
    char t63[8];
    char t78[8];
    char t81[8];
    char t89[8];
    char t117[8];
    char t132[8];
    char t135[8];
    char t143[8];
    char t171[8];
    char t184[8];
    char t203[8];
    char t211[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t79;
    char *t80;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    char *t133;
    char *t134;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    char *t147;
    char *t148;
    char *t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    char *t157;
    char *t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    char *t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    char *t178;
    char *t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    char *t185;
    char *t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;
    char *t193;
    char *t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    char *t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    char *t210;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    char *t215;
    char *t216;
    char *t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    char *t225;
    char *t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    char *t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    char *t245;
    char *t246;

LAB0:    t1 = (t0 + 19704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30032, ng0);
    t2 = (t0 + 34688);
    *((int *)t2) = 1;
    t3 = (t0 + 19736);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30032, ng0);

LAB5:    xsi_set_current_line(30034, ng0);
    t4 = (t0 + 9488U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng5)));
    memset(t6, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t4))
        goto LAB8;

LAB6:    t7 = (t5 + 4);
    t8 = (t4 + 4);
    if (*((unsigned int *)t7) != *((unsigned int *)t8))
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB8:    memset(t9, 0, 8);
    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t10) != 0)
        goto LAB11;

LAB12:    t17 = (t9 + 4);
    t18 = *((unsigned int *)t9);
    t19 = (!(t18));
    t20 = *((unsigned int *)t17);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB13;

LAB14:    memcpy(t35, t9, 8);

LAB15:    memset(t63, 0, 8);
    t64 = (t35 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t35);
    t68 = (t67 & t66);
    t69 = (t68 & 1U);
    if (t69 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t64) != 0)
        goto LAB28;

LAB29:    t71 = (t63 + 4);
    t72 = *((unsigned int *)t63);
    t73 = (!(t72));
    t74 = *((unsigned int *)t71);
    t75 = (t73 || t74);
    if (t75 > 0)
        goto LAB30;

LAB31:    memcpy(t89, t63, 8);

LAB32:    memset(t117, 0, 8);
    t118 = (t89 + 4);
    t119 = *((unsigned int *)t118);
    t120 = (~(t119));
    t121 = *((unsigned int *)t89);
    t122 = (t121 & t120);
    t123 = (t122 & 1U);
    if (t123 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t118) != 0)
        goto LAB45;

LAB46:    t125 = (t117 + 4);
    t126 = *((unsigned int *)t117);
    t127 = (!(t126));
    t128 = *((unsigned int *)t125);
    t129 = (t127 || t128);
    if (t129 > 0)
        goto LAB47;

LAB48:    memcpy(t143, t117, 8);

LAB49:    memset(t171, 0, 8);
    t172 = (t143 + 4);
    t173 = *((unsigned int *)t172);
    t174 = (~(t173));
    t175 = *((unsigned int *)t143);
    t176 = (t175 & t174);
    t177 = (t176 & 1U);
    if (t177 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t172) != 0)
        goto LAB62;

LAB63:    t179 = (t171 + 4);
    t180 = *((unsigned int *)t171);
    t181 = (!(t180));
    t182 = *((unsigned int *)t179);
    t183 = (t181 || t182);
    if (t183 > 0)
        goto LAB64;

LAB65:    memcpy(t211, t171, 8);

LAB66:    t239 = (t211 + 4);
    t240 = *((unsigned int *)t239);
    t241 = (~(t240));
    t242 = *((unsigned int *)t211);
    t243 = (t242 & t241);
    t244 = (t243 != 0);
    if (t244 > 0)
        goto LAB80;

LAB81:    xsi_set_current_line(30038, ng0);
    t2 = (t0 + 9648U);
    t3 = *((char **)t2);
    t2 = (t0 + 9488U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t6, 2, 2, 2U, t4, 1, t3, 1);
    t2 = ((char*)((ng2)));
    memset(t9, 0, 8);
    if (*((unsigned int *)t6) != *((unsigned int *)t2))
        goto LAB85;

LAB83:    t5 = (t6 + 4);
    t7 = (t2 + 4);
    if (*((unsigned int *)t5) != *((unsigned int *)t7))
        goto LAB85;

LAB84:    *((unsigned int *)t9) = 1;

LAB85:    t8 = (t9 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB86;

LAB87:    xsi_set_current_line(30040, ng0);
    t2 = (t0 + 9648U);
    t3 = *((char **)t2);
    t2 = (t0 + 9488U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t6, 2, 2, 2U, t4, 1, t3, 1);
    t2 = ((char*)((ng7)));
    memset(t9, 0, 8);
    if (*((unsigned int *)t6) != *((unsigned int *)t2))
        goto LAB91;

LAB89:    t5 = (t6 + 4);
    t7 = (t2 + 4);
    if (*((unsigned int *)t5) != *((unsigned int *)t7))
        goto LAB91;

LAB90:    *((unsigned int *)t9) = 1;

LAB91:    t8 = (t9 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB92;

LAB93:
LAB94:
LAB88:
LAB82:    goto LAB2;

LAB9:    *((unsigned int *)t9) = 1;
    goto LAB12;

LAB11:    t16 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB12;

LAB13:    t22 = (t0 + 9488U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng6)));
    memset(t24, 0, 8);
    if (*((unsigned int *)t23) != *((unsigned int *)t22))
        goto LAB18;

LAB16:    t25 = (t23 + 4);
    t26 = (t22 + 4);
    if (*((unsigned int *)t25) != *((unsigned int *)t26))
        goto LAB18;

LAB17:    *((unsigned int *)t24) = 1;

LAB18:    memset(t27, 0, 8);
    t28 = (t24 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t28) != 0)
        goto LAB21;

LAB22:    t36 = *((unsigned int *)t9);
    t37 = *((unsigned int *)t27);
    t38 = (t36 | t37);
    *((unsigned int *)t35) = t38;
    t39 = (t9 + 4);
    t40 = (t27 + 4);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t39);
    t43 = *((unsigned int *)t40);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB15;

LAB19:    *((unsigned int *)t27) = 1;
    goto LAB22;

LAB21:    t34 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB22;

LAB23:    t47 = *((unsigned int *)t35);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t35) = (t47 | t48);
    t49 = (t9 + 4);
    t50 = (t27 + 4);
    t51 = *((unsigned int *)t49);
    t52 = (~(t51));
    t53 = *((unsigned int *)t9);
    t54 = (t53 & t52);
    t55 = *((unsigned int *)t50);
    t56 = (~(t55));
    t57 = *((unsigned int *)t27);
    t58 = (t57 & t56);
    t59 = (~(t54));
    t60 = (~(t58));
    t61 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t61 & t59);
    t62 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t62 & t60);
    goto LAB25;

LAB26:    *((unsigned int *)t63) = 1;
    goto LAB29;

LAB28:    t70 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB29;

LAB30:    t76 = (t0 + 9648U);
    t77 = *((char **)t76);
    t76 = ((char*)((ng5)));
    memset(t78, 0, 8);
    if (*((unsigned int *)t77) != *((unsigned int *)t76))
        goto LAB35;

LAB33:    t79 = (t77 + 4);
    t80 = (t76 + 4);
    if (*((unsigned int *)t79) != *((unsigned int *)t80))
        goto LAB35;

LAB34:    *((unsigned int *)t78) = 1;

LAB35:    memset(t81, 0, 8);
    t82 = (t78 + 4);
    t83 = *((unsigned int *)t82);
    t84 = (~(t83));
    t85 = *((unsigned int *)t78);
    t86 = (t85 & t84);
    t87 = (t86 & 1U);
    if (t87 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t82) != 0)
        goto LAB38;

LAB39:    t90 = *((unsigned int *)t63);
    t91 = *((unsigned int *)t81);
    t92 = (t90 | t91);
    *((unsigned int *)t89) = t92;
    t93 = (t63 + 4);
    t94 = (t81 + 4);
    t95 = (t89 + 4);
    t96 = *((unsigned int *)t93);
    t97 = *((unsigned int *)t94);
    t98 = (t96 | t97);
    *((unsigned int *)t95) = t98;
    t99 = *((unsigned int *)t95);
    t100 = (t99 != 0);
    if (t100 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB32;

LAB36:    *((unsigned int *)t81) = 1;
    goto LAB39;

LAB38:    t88 = (t81 + 4);
    *((unsigned int *)t81) = 1;
    *((unsigned int *)t88) = 1;
    goto LAB39;

LAB40:    t101 = *((unsigned int *)t89);
    t102 = *((unsigned int *)t95);
    *((unsigned int *)t89) = (t101 | t102);
    t103 = (t63 + 4);
    t104 = (t81 + 4);
    t105 = *((unsigned int *)t103);
    t106 = (~(t105));
    t107 = *((unsigned int *)t63);
    t108 = (t107 & t106);
    t109 = *((unsigned int *)t104);
    t110 = (~(t109));
    t111 = *((unsigned int *)t81);
    t112 = (t111 & t110);
    t113 = (~(t108));
    t114 = (~(t112));
    t115 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t115 & t113);
    t116 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t116 & t114);
    goto LAB42;

LAB43:    *((unsigned int *)t117) = 1;
    goto LAB46;

LAB45:    t124 = (t117 + 4);
    *((unsigned int *)t117) = 1;
    *((unsigned int *)t124) = 1;
    goto LAB46;

LAB47:    t130 = (t0 + 9648U);
    t131 = *((char **)t130);
    t130 = ((char*)((ng6)));
    memset(t132, 0, 8);
    if (*((unsigned int *)t131) != *((unsigned int *)t130))
        goto LAB52;

LAB50:    t133 = (t131 + 4);
    t134 = (t130 + 4);
    if (*((unsigned int *)t133) != *((unsigned int *)t134))
        goto LAB52;

LAB51:    *((unsigned int *)t132) = 1;

LAB52:    memset(t135, 0, 8);
    t136 = (t132 + 4);
    t137 = *((unsigned int *)t136);
    t138 = (~(t137));
    t139 = *((unsigned int *)t132);
    t140 = (t139 & t138);
    t141 = (t140 & 1U);
    if (t141 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t136) != 0)
        goto LAB55;

LAB56:    t144 = *((unsigned int *)t117);
    t145 = *((unsigned int *)t135);
    t146 = (t144 | t145);
    *((unsigned int *)t143) = t146;
    t147 = (t117 + 4);
    t148 = (t135 + 4);
    t149 = (t143 + 4);
    t150 = *((unsigned int *)t147);
    t151 = *((unsigned int *)t148);
    t152 = (t150 | t151);
    *((unsigned int *)t149) = t152;
    t153 = *((unsigned int *)t149);
    t154 = (t153 != 0);
    if (t154 == 1)
        goto LAB57;

LAB58:
LAB59:    goto LAB49;

LAB53:    *((unsigned int *)t135) = 1;
    goto LAB56;

LAB55:    t142 = (t135 + 4);
    *((unsigned int *)t135) = 1;
    *((unsigned int *)t142) = 1;
    goto LAB56;

LAB57:    t155 = *((unsigned int *)t143);
    t156 = *((unsigned int *)t149);
    *((unsigned int *)t143) = (t155 | t156);
    t157 = (t117 + 4);
    t158 = (t135 + 4);
    t159 = *((unsigned int *)t157);
    t160 = (~(t159));
    t161 = *((unsigned int *)t117);
    t162 = (t161 & t160);
    t163 = *((unsigned int *)t158);
    t164 = (~(t163));
    t165 = *((unsigned int *)t135);
    t166 = (t165 & t164);
    t167 = (~(t162));
    t168 = (~(t166));
    t169 = *((unsigned int *)t149);
    *((unsigned int *)t149) = (t169 & t167);
    t170 = *((unsigned int *)t149);
    *((unsigned int *)t149) = (t170 & t168);
    goto LAB59;

LAB60:    *((unsigned int *)t171) = 1;
    goto LAB63;

LAB62:    t178 = (t171 + 4);
    *((unsigned int *)t171) = 1;
    *((unsigned int *)t178) = 1;
    goto LAB63;

LAB64:    t185 = (t0 + 5168U);
    t186 = *((char **)t185);
    memset(t184, 0, 8);
    t185 = (t186 + 4);
    t187 = *((unsigned int *)t185);
    t188 = (~(t187));
    t189 = *((unsigned int *)t186);
    t190 = (t189 & t188);
    t191 = (t190 & 1U);
    if (t191 != 0)
        goto LAB70;

LAB68:    if (*((unsigned int *)t185) == 0)
        goto LAB67;

LAB69:    t192 = (t184 + 4);
    *((unsigned int *)t184) = 1;
    *((unsigned int *)t192) = 1;

LAB70:    t193 = (t184 + 4);
    t194 = (t186 + 4);
    t195 = *((unsigned int *)t186);
    t196 = (~(t195));
    *((unsigned int *)t184) = t196;
    *((unsigned int *)t193) = 0;
    if (*((unsigned int *)t194) != 0)
        goto LAB72;

LAB71:    t201 = *((unsigned int *)t184);
    *((unsigned int *)t184) = (t201 & 1U);
    t202 = *((unsigned int *)t193);
    *((unsigned int *)t193) = (t202 & 1U);
    memset(t203, 0, 8);
    t204 = (t184 + 4);
    t205 = *((unsigned int *)t204);
    t206 = (~(t205));
    t207 = *((unsigned int *)t184);
    t208 = (t207 & t206);
    t209 = (t208 & 1U);
    if (t209 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t204) != 0)
        goto LAB75;

LAB76:    t212 = *((unsigned int *)t171);
    t213 = *((unsigned int *)t203);
    t214 = (t212 | t213);
    *((unsigned int *)t211) = t214;
    t215 = (t171 + 4);
    t216 = (t203 + 4);
    t217 = (t211 + 4);
    t218 = *((unsigned int *)t215);
    t219 = *((unsigned int *)t216);
    t220 = (t218 | t219);
    *((unsigned int *)t217) = t220;
    t221 = *((unsigned int *)t217);
    t222 = (t221 != 0);
    if (t222 == 1)
        goto LAB77;

LAB78:
LAB79:    goto LAB66;

LAB67:    *((unsigned int *)t184) = 1;
    goto LAB70;

LAB72:    t197 = *((unsigned int *)t184);
    t198 = *((unsigned int *)t194);
    *((unsigned int *)t184) = (t197 | t198);
    t199 = *((unsigned int *)t193);
    t200 = *((unsigned int *)t194);
    *((unsigned int *)t193) = (t199 | t200);
    goto LAB71;

LAB73:    *((unsigned int *)t203) = 1;
    goto LAB76;

LAB75:    t210 = (t203 + 4);
    *((unsigned int *)t203) = 1;
    *((unsigned int *)t210) = 1;
    goto LAB76;

LAB77:    t223 = *((unsigned int *)t211);
    t224 = *((unsigned int *)t217);
    *((unsigned int *)t211) = (t223 | t224);
    t225 = (t171 + 4);
    t226 = (t203 + 4);
    t227 = *((unsigned int *)t225);
    t228 = (~(t227));
    t229 = *((unsigned int *)t171);
    t230 = (t229 & t228);
    t231 = *((unsigned int *)t226);
    t232 = (~(t231));
    t233 = *((unsigned int *)t203);
    t234 = (t233 & t232);
    t235 = (~(t230));
    t236 = (~(t234));
    t237 = *((unsigned int *)t217);
    *((unsigned int *)t217) = (t237 & t235);
    t238 = *((unsigned int *)t217);
    *((unsigned int *)t217) = (t238 & t236);
    goto LAB79;

LAB80:    xsi_set_current_line(30037, ng0);
    t245 = ((char*)((ng5)));
    t246 = (t0 + 12448);
    xsi_vlogvar_assign_value(t246, t245, 0, 0, 1);
    goto LAB82;

LAB86:    xsi_set_current_line(30039, ng0);
    t10 = ((char*)((ng3)));
    t16 = (t0 + 12448);
    xsi_vlogvar_assign_value(t16, t10, 0, 0, 1);
    goto LAB88;

LAB92:    xsi_set_current_line(30041, ng0);
    t10 = ((char*)((ng2)));
    t16 = (t0 + 12448);
    xsi_vlogvar_assign_value(t16, t10, 0, 0, 1);
    goto LAB94;

}

static void Initial_30078_4(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(30078, ng0);
    t1 = ((char*)((ng8)));
    t2 = (t0 + 13248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 64);

LAB1:    return;
}

static void Initial_30079_5(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(30079, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 13408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 13);

LAB1:    return;
}

static void Always_30083_6(char *t0)
{
    char t4[16];
    char t9[16];
    char t11[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    double t17;
    double t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    double t32;
    double t33;

LAB0:    t1 = (t0 + 20448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30083, ng0);
    t2 = (t0 + 34704);
    *((int *)t2) = 1;
    t3 = (t0 + 20480);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30083, ng0);

LAB5:    xsi_set_current_line(30084, ng0);
    t5 = xsi_vlog_time(t4, 1.0000000000000000, 1.0000000000000000);
    t6 = (t0 + 13248);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_unsigned_minus(t9, 64, t4, 64, t8, 64);
    t10 = (t0 + 13408);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 13);
    xsi_set_current_line(30085, ng0);
    t2 = xsi_vlog_time(t4, 1.0000000000000000, 1.0000000000000000);
    t3 = (t0 + 13248);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 64);
    xsi_set_current_line(30086, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 12928);
    t5 = (t0 + 12928);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t11, t7, 2, t8, 32, 1);
    t10 = (t11 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (!(t12));
    if (t13 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(30087, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 12928);
    t5 = (t0 + 12928);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t11, t7, 2, t8, 32, 1);
    t10 = (t11 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (!(t12));
    if (t13 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(30088, ng0);
    t2 = (t0 + 13408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t11, 0, 8);
    t6 = (t11 + 4);
    t7 = (t5 + 4);
    t12 = *((unsigned int *)t5);
    t19 = (t12 >> 1);
    *((unsigned int *)t11) = t19;
    t20 = *((unsigned int *)t7);
    t21 = (t20 >> 1);
    *((unsigned int *)t6) = t21;
    t22 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t22 & 4095U);
    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 4095U);
    t17 = xsi_vlog_convert_to_real(t11, 12, 2);
    t18 = (t17 < 0.0000000000000000);
    if (t18 == 1)
        goto LAB16;

LAB17:    t17 = (t17 + 0.50000000000000000);
    t17 = ((int64)(t17));

LAB18:    t17 = (t17 * 1.0000000000000000);
    t8 = (t0 + 20256);
    xsi_process_wait(t8, t17);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB6:    t14 = (t0 + 13728);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = xsi_vlog_convert_to_real(t16, 13, 2);
    t18 = (t17 < 0.0000000000000000);
    if (t18 == 1)
        goto LAB8;

LAB9:    t17 = (t17 + 0.50000000000000000);
    t17 = ((int64)(t17));

LAB10:    t17 = (t17 * 1.0000000000000000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t11), 1, t17);
    goto LAB7;

LAB8:    t17 = 0.0000000000000000;
    goto LAB10;

LAB11:    t14 = (t0 + 13568);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = xsi_vlog_convert_to_real(t16, 13, 2);
    t18 = (t17 < 0.0000000000000000);
    if (t18 == 1)
        goto LAB13;

LAB14:    t17 = (t17 + 0.50000000000000000);
    t17 = ((int64)(t17));

LAB15:    t17 = (t17 * 1.0000000000000000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t11), 1, t17);
    goto LAB12;

LAB13:    t17 = 0.0000000000000000;
    goto LAB15;

LAB16:    t17 = 0.0000000000000000;
    goto LAB18;

LAB19:    xsi_set_current_line(30089, ng0);
    t10 = ((char*)((ng2)));
    t14 = (t0 + 12928);
    t15 = (t0 + 12928);
    t16 = (t15 + 72U);
    t25 = *((char **)t16);
    t26 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t24, t25, 2, t26, 32, 1);
    t27 = (t24 + 4);
    t28 = *((unsigned int *)t27);
    t13 = (!(t28));
    if (t13 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(30090, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 12928);
    t5 = (t0 + 12928);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t11, t7, 2, t8, 32, 1);
    t10 = (t11 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (!(t12));
    if (t13 == 1)
        goto LAB25;

LAB26:    goto LAB2;

LAB20:    t29 = (t0 + 13728);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = xsi_vlog_convert_to_real(t31, 13, 2);
    t33 = (t32 < 0.0000000000000000);
    if (t33 == 1)
        goto LAB22;

LAB23:    t32 = (t32 + 0.50000000000000000);
    t32 = ((int64)(t32));

LAB24:    t32 = (t32 * 1.0000000000000000);
    xsi_vlogvar_wait_assign_value(t14, t10, 0, *((unsigned int *)t24), 1, t32);
    goto LAB21;

LAB22:    t32 = 0.0000000000000000;
    goto LAB24;

LAB25:    t14 = (t0 + 13568);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = xsi_vlog_convert_to_real(t16, 13, 2);
    t18 = (t17 < 0.0000000000000000);
    if (t18 == 1)
        goto LAB27;

LAB28:    t17 = (t17 + 0.50000000000000000);
    t17 = ((int64)(t17));

LAB29:    t17 = (t17 * 1.0000000000000000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t11), 1, t17);
    goto LAB26;

LAB27:    t17 = 0.0000000000000000;
    goto LAB29;

}

static void Initial_30097_7(char *t0)
{
    char t4[8];
    char t15[16];
    char t17[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t16;
    char *t18;
    double t19;
    double t20;

LAB0:    t1 = (t0 + 20696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30097, ng0);

LAB4:    xsi_set_current_line(30098, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 13728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 13);
    xsi_set_current_line(30099, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 13568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 13);
    xsi_set_current_line(30100, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 13088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(30101, ng0);

LAB5:    xsi_set_current_line(30101, ng0);
    t2 = (t0 + 34720);
    *((int *)t2) = 1;
    t3 = (t0 + 20728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(30101, ng0);

LAB7:    xsi_set_current_line(30104, ng0);
    t5 = ((char*)((ng3)));
    t6 = (t0 + 13408);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlogtype_concat(t4, 14, 14, 2U, t8, 13, t5, 1);
    t9 = (t0 + 13888);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 14);
    xsi_set_current_line(30105, ng0);
    t2 = (t0 + 13088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(30114, ng0);

LAB17:    xsi_set_current_line(30115, ng0);
    t2 = xsi_vlog_time(t15, 1.0000000000000000, 1.0000000000000000);
    t3 = (t0 + 13248);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    xsi_vlog_unsigned_minus(t17, 64, t15, 64, t6, 64);
    t7 = (t0 + 13568);
    xsi_vlogvar_assign_value(t7, t17, 0, 0, 13);
    xsi_set_current_line(30117, ng0);
    t2 = (t0 + 13888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t19 = xsi_vlog_convert_to_real(t5, 14, 2);
    t20 = (t19 < 0.0000000000000000);
    if (t20 == 1)
        goto LAB18;

LAB19:    t19 = (t19 + 0.50000000000000000);
    t19 = ((int64)(t19));

LAB20:    t19 = (t19 * 1.0000000000000000);
    t6 = (t0 + 20504);
    xsi_process_wait(t6, t19);
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB8:    xsi_set_current_line(30105, ng0);

LAB11:    xsi_set_current_line(30106, ng0);
    t7 = xsi_vlog_time(t15, 1.0000000000000000, 1.0000000000000000);
    t8 = (t0 + 13248);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    xsi_vlog_unsigned_minus(t17, 64, t15, 64, t16, 64);
    t18 = (t0 + 13728);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 13);
    xsi_set_current_line(30110, ng0);
    t2 = (t0 + 13888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t19 = xsi_vlog_convert_to_real(t5, 14, 2);
    t20 = (t19 < 0.0000000000000000);
    if (t20 == 1)
        goto LAB12;

LAB13:    t19 = (t19 + 0.50000000000000000);
    t19 = ((int64)(t19));

LAB14:    t19 = (t19 * 1.0000000000000000);
    t6 = (t0 + 20504);
    xsi_process_wait(t6, t19);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB10:    goto LAB5;

LAB12:    t19 = 0.0000000000000000;
    goto LAB14;

LAB15:    xsi_set_current_line(30113, ng0);
    t7 = (t0 + 34736);
    *((int *)t7) = 1;
    t8 = (t0 + 20728);
    *((char **)t8) = t7;
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(30113, ng0);
    t9 = ((char*)((ng3)));
    t16 = (t0 + 13088);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 1);
    goto LAB10;

LAB18:    t19 = 0.0000000000000000;
    goto LAB20;

LAB21:    xsi_set_current_line(30118, ng0);
    t7 = (t0 + 34752);
    *((int *)t7) = 1;
    t8 = (t0 + 20728);
    *((char **)t8) = t7;
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    xsi_set_current_line(30118, ng0);
    t9 = ((char*)((ng2)));
    t16 = (t0 + 13088);
    xsi_vlogvar_assign_value(t16, t9, 0, 0, 1);
    goto LAB10;

LAB23:    goto LAB1;

}

static void NetDecl_30123_8(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 20944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30123, ng0);
    t2 = (t0 + 12928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 12928);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 13088);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    xsi_vlog_generic_get_index_select_value(t5, 1, t4, t8, 2, t11, 1, 2);
    t12 = (t0 + 35776);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1U;
    t18 = t17;
    t19 = (t5 + 4);
    t20 = *((unsigned int *)t5);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans_delayed(t12, 0, 0U, 1LL, 0);
    t25 = (t0 + 34768);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Initial_30128_9(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 21192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30128, ng0);

LAB4:    xsi_set_current_line(30129, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 12128);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(30130, ng0);

LAB5:    xsi_set_current_line(30130, ng0);
    t2 = (t0 + 34784);
    *((int *)t2) = 1;
    t3 = (t0 + 21224);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(30130, ng0);
    t5 = (t0 + 12128);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t8) == 0)
        goto LAB7;

LAB9:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB10:    t15 = (t4 + 4);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    *((unsigned int *)t4) = t18;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB12;

LAB11:    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 1U);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 1U);
    t25 = (t0 + 12128);
    xsi_vlogvar_assign_value(t25, t4, 0, 0, 1);
    goto LAB5;

LAB7:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB12:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t16);
    *((unsigned int *)t4) = (t19 | t20);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t21 | t22);
    goto LAB11;

LAB13:    goto LAB1;

}

static void NetDecl_30146_10(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
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
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;

LAB0:    t1 = (t0 + 21440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30146, ng0);
    t2 = (t0 + 7408U);
    t3 = *((char **)t2);
    t2 = (t0 + 5488U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 & t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t36 = (t0 + 35840);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memset(t40, 0, 8);
    t41 = 1U;
    t42 = t41;
    t43 = (t5 + 4);
    t44 = *((unsigned int *)t5);
    t41 = (t41 & t44);
    t45 = *((unsigned int *)t43);
    t42 = (t42 & t45);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t47 | t41);
    t48 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t48 | t42);
    xsi_driver_vfirst_trans(t36, 0, 0U);
    t49 = (t0 + 34800);
    *((int *)t49) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = (t21 & t23);
    t29 = (t25 & t27);
    t30 = (~(t28));
    t31 = (~(t29));
    t32 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t32 & t30);
    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & t31);
    t34 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t34 & t30);
    t35 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t35 & t31);
    goto LAB6;

}

static void Initial_30155_11(char *t0)
{
    char t4[8];
    char t21[8];
    char t22[8];
    char t26[8];
    char t27[8];
    char t28[8];
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
    char *t23;
    char *t24;
    unsigned int t25;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;

LAB0:    t1 = (t0 + 21688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30155, ng0);

LAB4:    xsi_set_current_line(30156, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 14048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(30157, ng0);

LAB5:    xsi_set_current_line(30157, ng0);
    t2 = (t0 + 34816);
    *((int *)t2) = 1;
    t3 = (t0 + 21720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(30157, ng0);

LAB7:    xsi_set_current_line(30158, ng0);
    t5 = (t0 + 10128U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t5) == 0)
        goto LAB8;

LAB10:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB11:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(30161, ng0);
    t2 = (t0 + 14208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(30163, ng0);

LAB20:    xsi_set_current_line(30165, ng0);
    t2 = (t0 + 8848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB23;

LAB21:    t5 = (t3 + 4);
    t6 = (t2 + 4);
    if (*((unsigned int *)t5) != *((unsigned int *)t6))
        goto LAB23;

LAB22:    *((unsigned int *)t4) = 1;

LAB23:    t12 = (t4 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(30168, ng0);
    t2 = (t0 + 8848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB40;

LAB38:    t5 = (t3 + 4);
    t6 = (t2 + 4);
    if (*((unsigned int *)t5) != *((unsigned int *)t6))
        goto LAB40;

LAB39:    *((unsigned int *)t4) = 1;

LAB40:    t12 = (t4 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB41;

LAB42:
LAB43:
LAB26:
LAB18:
LAB14:    goto LAB5;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB12:    xsi_set_current_line(30158, ng0);

LAB15:    xsi_set_current_line(30159, ng0);
    t19 = ((char*)((ng9)));
    t20 = (t0 + 14048);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 3);
    xsi_set_current_line(30160, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 14208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB14;

LAB16:    xsi_set_current_line(30161, ng0);

LAB19:    xsi_set_current_line(30162, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 14208);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 1);
    goto LAB18;

LAB24:    xsi_set_current_line(30165, ng0);

LAB27:    xsi_set_current_line(30166, ng0);
    t13 = (t0 + 14048);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    memset(t22, 0, 8);
    t23 = (t22 + 4);
    t24 = (t20 + 4);
    t14 = *((unsigned int *)t20);
    t15 = (t14 >> 1);
    *((unsigned int *)t22) = t15;
    t16 = *((unsigned int *)t24);
    t17 = (t16 >> 1);
    *((unsigned int *)t23) = t17;
    t18 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t18 & 3U);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 & 3U);
    t29 = (t0 + 14048);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memset(t28, 0, 8);
    t32 = (t28 + 4);
    t33 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 0);
    *((unsigned int *)t28) = t35;
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t32) = t37;
    t38 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t38 & 3U);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t39 & 3U);
    memset(t27, 0, 8);
    t40 = (t28 + 4);
    t41 = *((unsigned int *)t28);
    t42 = *((unsigned int *)t40);
    t43 = (t41 | t42);
    if (t43 != 3U)
        goto LAB29;

LAB28:    if (*((unsigned int *)t40) == 0)
        goto LAB30;

LAB31:    t44 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t44) = 1;

LAB29:    memset(t26, 0, 8);
    t45 = (t27 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t27);
    t49 = (t48 & t47);
    t50 = (t49 & 1U);
    if (t50 != 0)
        goto LAB35;

LAB33:    if (*((unsigned int *)t45) == 0)
        goto LAB32;

LAB34:    t51 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t51) = 1;

LAB35:    t52 = (t26 + 4);
    t53 = (t27 + 4);
    t54 = *((unsigned int *)t27);
    t55 = (~(t54));
    *((unsigned int *)t26) = t55;
    *((unsigned int *)t52) = 0;
    if (*((unsigned int *)t53) != 0)
        goto LAB37;

LAB36:    t60 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t60 & 1U);
    t61 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t61 & 1U);
    xsi_vlogtype_concat(t21, 3, 3, 2U, t26, 1, t22, 2);
    t62 = (t0 + 14048);
    xsi_vlogvar_assign_value(t62, t21, 0, 0, 3);
    goto LAB26;

LAB30:    *((unsigned int *)t27) = 1;
    goto LAB29;

LAB32:    *((unsigned int *)t26) = 1;
    goto LAB35;

LAB37:    t56 = *((unsigned int *)t26);
    t57 = *((unsigned int *)t53);
    *((unsigned int *)t26) = (t56 | t57);
    t58 = *((unsigned int *)t52);
    t59 = *((unsigned int *)t53);
    *((unsigned int *)t52) = (t58 | t59);
    goto LAB36;

LAB41:    xsi_set_current_line(30168, ng0);

LAB44:    xsi_set_current_line(30169, ng0);
    t13 = (t0 + 14048);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    memset(t22, 0, 8);
    t23 = (t22 + 4);
    t24 = (t20 + 4);
    t14 = *((unsigned int *)t20);
    t15 = (t14 >> 1);
    *((unsigned int *)t22) = t15;
    t16 = *((unsigned int *)t24);
    t17 = (t16 >> 1);
    *((unsigned int *)t23) = t17;
    t18 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t18 & 3U);
    t25 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t25 & 3U);
    t29 = (t0 + 14048);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memset(t27, 0, 8);
    t32 = (t27 + 4);
    t33 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 1);
    t36 = (t35 & 1);
    *((unsigned int *)t27) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 >> 1);
    t39 = (t38 & 1);
    *((unsigned int *)t32) = t39;
    memset(t26, 0, 8);
    t40 = (t27 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (~(t41));
    t43 = *((unsigned int *)t27);
    t46 = (t43 & t42);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB48;

LAB46:    if (*((unsigned int *)t40) == 0)
        goto LAB45;

LAB47:    t44 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t44) = 1;

LAB48:    t45 = (t26 + 4);
    t51 = (t27 + 4);
    t48 = *((unsigned int *)t27);
    t49 = (~(t48));
    *((unsigned int *)t26) = t49;
    *((unsigned int *)t45) = 0;
    if (*((unsigned int *)t51) != 0)
        goto LAB50;

LAB49:    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & 1U);
    t58 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t58 & 1U);
    xsi_vlogtype_concat(t21, 3, 3, 2U, t26, 1, t22, 2);
    t52 = (t0 + 14048);
    xsi_vlogvar_assign_value(t52, t21, 0, 0, 3);
    goto LAB43;

LAB45:    *((unsigned int *)t26) = 1;
    goto LAB48;

LAB50:    t50 = *((unsigned int *)t26);
    t54 = *((unsigned int *)t51);
    *((unsigned int *)t26) = (t50 | t54);
    t55 = *((unsigned int *)t45);
    t56 = *((unsigned int *)t51);
    *((unsigned int *)t45) = (t55 | t56);
    goto LAB49;

LAB51:    goto LAB1;

}

static void Initial_30180_12(char *t0)
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
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;

LAB0:    t1 = (t0 + 21936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30180, ng0);

LAB4:    xsi_set_current_line(30181, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 14368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(30182, ng0);

LAB5:    xsi_set_current_line(30182, ng0);
    t2 = (t0 + 34832);
    *((int *)t2) = 1;
    t3 = (t0 + 21968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(30182, ng0);

LAB7:    xsi_set_current_line(30183, ng0);
    t5 = (t0 + 10128U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t5) == 0)
        goto LAB8;

LAB10:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB11:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(30185, ng0);

LAB16:    xsi_set_current_line(30186, ng0);
    t2 = (t0 + 14368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t6) == 0)
        goto LAB17;

LAB19:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB20:    t13 = (t4 + 4);
    t19 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    *((unsigned int *)t4) = t15;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB22;

LAB21:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t23 & 1U);
    t20 = (t0 + 14368);
    xsi_vlogvar_assign_value(t20, t4, 0, 0, 1);

LAB14:    goto LAB5;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB12:    xsi_set_current_line(30183, ng0);

LAB15:    xsi_set_current_line(30184, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 14368);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 1);
    goto LAB14;

LAB17:    *((unsigned int *)t4) = 1;
    goto LAB20;

LAB22:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t19);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = *((unsigned int *)t13);
    t21 = *((unsigned int *)t19);
    *((unsigned int *)t13) = (t18 | t21);
    goto LAB21;

LAB23:    goto LAB1;

}

static void Initial_30195_13(char *t0)
{
    char t4[8];
    char t17[8];
    char t21[8];
    char t25[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    double t18;
    double t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;

LAB0:    t1 = (t0 + 22184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30195, ng0);

LAB4:    xsi_set_current_line(30196, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 14528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(30197, ng0);
    t2 = (t0 + 1656);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t3, 32, t2, 32);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(30204, ng0);

LAB17:    xsi_set_current_line(30205, ng0);

LAB18:    xsi_set_current_line(30205, ng0);

LAB19:    xsi_set_current_line(30206, ng0);
    t2 = (t0 + 34864);
    *((int *)t2) = 1;
    t3 = (t0 + 22216);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB20;

LAB1:    return;
LAB5:    xsi_set_current_line(30197, ng0);

LAB8:    xsi_set_current_line(30198, ng0);

LAB9:    xsi_set_current_line(30198, ng0);

LAB10:    xsi_set_current_line(30199, ng0);
    t11 = (t0 + 34848);
    *((int *)t11) = 1;
    t12 = (t0 + 22216);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB7:    goto LAB1;

LAB11:    xsi_set_current_line(30200, ng0);
    t13 = (t0 + 13408);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng10)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_divide(t17, 32, t15, 13, t16, 32);
    t18 = xsi_vlog_convert_to_real(t17, 32, 2);
    t19 = (t18 < 0.0000000000000000);
    if (t19 == 1)
        goto LAB12;

LAB13:    t18 = (t18 + 0.50000000000000000);
    t18 = ((int64)(t18));

LAB14:    t18 = (t18 * 1.0000000000000000);
    t20 = (t0 + 21992);
    xsi_process_wait(t20, t18);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB12:    t18 = 0.0000000000000000;
    goto LAB14;

LAB15:    xsi_set_current_line(30201, ng0);
    t22 = (t0 + 14048);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t25, 0, 8);
    t26 = (t25 + 4);
    t27 = (t24 + 4);
    t28 = *((unsigned int *)t24);
    t29 = (t28 >> 0);
    t30 = (t29 & 1);
    *((unsigned int *)t25) = t30;
    t31 = *((unsigned int *)t27);
    t32 = (t31 >> 0);
    t33 = (t32 & 1);
    *((unsigned int *)t26) = t33;
    t35 = (t0 + 14528);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memset(t34, 0, 8);
    t38 = (t34 + 4);
    t39 = (t37 + 4);
    t40 = *((unsigned int *)t37);
    t41 = (t40 >> 0);
    *((unsigned int *)t34) = t41;
    t42 = *((unsigned int *)t39);
    t43 = (t42 >> 0);
    *((unsigned int *)t38) = t43;
    t44 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t44 & 15U);
    t45 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t45 & 15U);
    xsi_vlogtype_concat(t21, 5, 5, 2U, t34, 4, t25, 1);
    t46 = (t0 + 14528);
    xsi_vlogvar_assign_value(t46, t21, 0, 0, 5);
    goto LAB9;

LAB16:    goto LAB7;

LAB20:    xsi_set_current_line(30207, ng0);
    t5 = (t0 + 13408);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng10)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_divide(t4, 32, t12, 13, t13, 32);
    t18 = xsi_vlog_convert_to_real(t4, 32, 2);
    t19 = (t18 < 0.0000000000000000);
    if (t19 == 1)
        goto LAB21;

LAB22:    t18 = (t18 + 0.50000000000000000);
    t18 = ((int64)(t18));

LAB23:    t18 = (t18 * 1.0000000000000000);
    t14 = (t0 + 21992);
    xsi_process_wait(t14, t18);
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB21:    t18 = 0.0000000000000000;
    goto LAB23;

LAB24:    xsi_set_current_line(30208, ng0);
    t15 = (t0 + 14368);
    t16 = (t15 + 56U);
    t20 = *((char **)t16);
    t22 = (t0 + 14528);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t21, 0, 8);
    t26 = (t21 + 4);
    t27 = (t24 + 4);
    t6 = *((unsigned int *)t24);
    t7 = (t6 >> 0);
    *((unsigned int *)t21) = t7;
    t8 = *((unsigned int *)t27);
    t9 = (t8 >> 0);
    *((unsigned int *)t26) = t9;
    t10 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t10 & 15U);
    t28 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t28 & 15U);
    xsi_vlogtype_concat(t17, 5, 5, 2U, t21, 4, t20, 1);
    t35 = (t0 + 14528);
    xsi_vlogvar_assign_value(t35, t17, 0, 0, 5);
    goto LAB18;

LAB25:    goto LAB7;

}

static void Initial_30217_14(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(30217, ng0);
    t1 = ((char*)((ng8)));
    t2 = (t0 + 14688);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 64);

LAB1:    return;
}

static void Always_30219_15(char *t0)
{
    char t4[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;

LAB0:    t1 = (t0 + 22680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30219, ng0);
    t2 = (t0 + 34880);
    *((int *)t2) = 1;
    t3 = (t0 + 22712);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30219, ng0);
    t5 = xsi_vlog_time(t4, 1.0000000000000000, 1.0000000000000000);
    t6 = (t0 + 14688);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 64);
    goto LAB2;

}

static void Initial_30223_16(char *t0)
{
    char t4[8];
    char t5[8];
    char t18[8];
    char t23[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 22928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30223, ng0);

LAB4:    xsi_set_current_line(30224, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 14848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(30225, ng0);

LAB5:    xsi_set_current_line(30225, ng0);
    t2 = (t0 + 34896);
    *((int *)t2) = 1;
    t3 = (t0 + 22960);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(30225, ng0);

LAB7:    xsi_set_current_line(30226, ng0);
    t6 = (t0 + 10128U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t6) != 0)
        goto LAB10;

LAB11:    t14 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB12;

LAB13:    t32 = *((unsigned int *)t5);
    t33 = (~(t32));
    t34 = *((unsigned int *)t14);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t14) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t5) > 0)
        goto LAB18;

LAB19:    memcpy(t4, t36, 8);

LAB20:    t37 = (t0 + 14848);
    xsi_vlogvar_wait_assign_value(t37, t4, 0, 0, 2, 50LL);
    goto LAB5;

LAB8:    *((unsigned int *)t5) = 1;
    goto LAB11;

LAB10:    t13 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB11;

LAB12:    t19 = (t0 + 6128U);
    t20 = *((char **)t19);
    t19 = (t0 + 14848);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    memset(t23, 0, 8);
    t24 = (t23 + 4);
    t25 = (t22 + 4);
    t26 = *((unsigned int *)t22);
    t27 = (t26 >> 0);
    t28 = (t27 & 1);
    *((unsigned int *)t23) = t28;
    t29 = *((unsigned int *)t25);
    t30 = (t29 >> 0);
    t31 = (t30 & 1);
    *((unsigned int *)t24) = t31;
    xsi_vlogtype_concat(t18, 2, 2, 2U, t23, 1, t20, 1);
    goto LAB13;

LAB14:    t36 = ((char*)((ng3)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t4, 2, t18, 2, t36, 2);
    goto LAB20;

LAB18:    memcpy(t4, t18, 8);
    goto LAB20;

LAB21:    goto LAB1;

}

static void NetDecl_30239_17(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char t40[8];
    char t41[8];
    char t46[8];
    char t78[8];
    char t79[8];
    char t84[8];
    char t116[8];
    char t117[8];
    char t122[8];
    char t154[8];
    char t155[8];
    char t160[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    char *t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t156;
    char *t157;
    char *t158;
    char *t159;
    char *t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    char *t175;
    char *t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    char *t182;
    char *t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    char *t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;
    char *t193;
    char *t194;
    char *t195;
    char *t196;
    char *t197;
    char *t198;
    char *t199;
    unsigned int t200;
    unsigned int t201;
    char *t202;
    unsigned int t203;
    unsigned int t204;
    char *t205;
    unsigned int t206;
    unsigned int t207;
    char *t208;

LAB0:    t1 = (t0 + 23176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30239, ng0);
    t2 = (t0 + 15008);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t195 = (t0 + 35904);
    t196 = (t195 + 56U);
    t197 = *((char **)t196);
    t198 = (t197 + 56U);
    t199 = *((char **)t198);
    memset(t199, 0, 8);
    t200 = 15U;
    t201 = t200;
    t202 = (t3 + 4);
    t203 = *((unsigned int *)t3);
    t200 = (t200 & t203);
    t204 = *((unsigned int *)t202);
    t201 = (t201 & t204);
    t205 = (t199 + 4);
    t206 = *((unsigned int *)t199);
    *((unsigned int *)t199) = (t206 | t200);
    t207 = *((unsigned int *)t205);
    *((unsigned int *)t205) = (t207 | t201);
    xsi_driver_vfirst_trans(t195, 0, 3U);
    t208 = (t0 + 34912);
    *((int *)t208) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = ((char*)((ng9)));
    goto LAB13;

LAB14:    t42 = (t0 + 15008);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = ((char*)((ng2)));
    memset(t46, 0, 8);
    t47 = (t44 + 4);
    t48 = (t45 + 4);
    t49 = *((unsigned int *)t44);
    t50 = *((unsigned int *)t45);
    t51 = (t49 ^ t50);
    t52 = *((unsigned int *)t47);
    t53 = *((unsigned int *)t48);
    t54 = (t52 ^ t53);
    t55 = (t51 | t54);
    t56 = *((unsigned int *)t47);
    t57 = *((unsigned int *)t48);
    t58 = (t56 | t57);
    t59 = (~(t58));
    t60 = (t55 & t59);
    if (t60 != 0)
        goto LAB24;

LAB21:    if (t58 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t46) = 1;

LAB24:    memset(t41, 0, 8);
    t62 = (t46 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t46);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t62) != 0)
        goto LAB27;

LAB28:    t69 = (t41 + 4);
    t70 = *((unsigned int *)t41);
    t71 = *((unsigned int *)t69);
    t72 = (t70 || t71);
    if (t72 > 0)
        goto LAB29;

LAB30:    t74 = *((unsigned int *)t41);
    t75 = (~(t74));
    t76 = *((unsigned int *)t69);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t69) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t41) > 0)
        goto LAB35;

LAB36:    memcpy(t40, t78, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 4, t35, 4, t40, 4);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

LAB23:    t61 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t41) = 1;
    goto LAB28;

LAB27:    t68 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB28;

LAB29:    t73 = ((char*)((ng3)));
    goto LAB30;

LAB31:    t80 = (t0 + 15008);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    t83 = ((char*)((ng7)));
    memset(t84, 0, 8);
    t85 = (t82 + 4);
    t86 = (t83 + 4);
    t87 = *((unsigned int *)t82);
    t88 = *((unsigned int *)t83);
    t89 = (t87 ^ t88);
    t90 = *((unsigned int *)t85);
    t91 = *((unsigned int *)t86);
    t92 = (t90 ^ t91);
    t93 = (t89 | t92);
    t94 = *((unsigned int *)t85);
    t95 = *((unsigned int *)t86);
    t96 = (t94 | t95);
    t97 = (~(t96));
    t98 = (t93 & t97);
    if (t98 != 0)
        goto LAB41;

LAB38:    if (t96 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t84) = 1;

LAB41:    memset(t79, 0, 8);
    t100 = (t84 + 4);
    t101 = *((unsigned int *)t100);
    t102 = (~(t101));
    t103 = *((unsigned int *)t84);
    t104 = (t103 & t102);
    t105 = (t104 & 1U);
    if (t105 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t100) != 0)
        goto LAB44;

LAB45:    t107 = (t79 + 4);
    t108 = *((unsigned int *)t79);
    t109 = *((unsigned int *)t107);
    t110 = (t108 || t109);
    if (t110 > 0)
        goto LAB46;

LAB47:    t112 = *((unsigned int *)t79);
    t113 = (~(t112));
    t114 = *((unsigned int *)t107);
    t115 = (t113 || t114);
    if (t115 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t107) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t79) > 0)
        goto LAB52;

LAB53:    memcpy(t78, t116, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t40, 4, t73, 4, t78, 4);
    goto LAB37;

LAB35:    memcpy(t40, t73, 8);
    goto LAB37;

LAB40:    t99 = (t84 + 4);
    *((unsigned int *)t84) = 1;
    *((unsigned int *)t99) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t79) = 1;
    goto LAB45;

LAB44:    t106 = (t79 + 4);
    *((unsigned int *)t79) = 1;
    *((unsigned int *)t106) = 1;
    goto LAB45;

LAB46:    t111 = ((char*)((ng2)));
    goto LAB47;

LAB48:    t118 = (t0 + 15008);
    t119 = (t118 + 56U);
    t120 = *((char **)t119);
    t121 = ((char*)((ng11)));
    memset(t122, 0, 8);
    t123 = (t120 + 4);
    t124 = (t121 + 4);
    t125 = *((unsigned int *)t120);
    t126 = *((unsigned int *)t121);
    t127 = (t125 ^ t126);
    t128 = *((unsigned int *)t123);
    t129 = *((unsigned int *)t124);
    t130 = (t128 ^ t129);
    t131 = (t127 | t130);
    t132 = *((unsigned int *)t123);
    t133 = *((unsigned int *)t124);
    t134 = (t132 | t133);
    t135 = (~(t134));
    t136 = (t131 & t135);
    if (t136 != 0)
        goto LAB58;

LAB55:    if (t134 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t122) = 1;

LAB58:    memset(t117, 0, 8);
    t138 = (t122 + 4);
    t139 = *((unsigned int *)t138);
    t140 = (~(t139));
    t141 = *((unsigned int *)t122);
    t142 = (t141 & t140);
    t143 = (t142 & 1U);
    if (t143 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t138) != 0)
        goto LAB61;

LAB62:    t145 = (t117 + 4);
    t146 = *((unsigned int *)t117);
    t147 = *((unsigned int *)t145);
    t148 = (t146 || t147);
    if (t148 > 0)
        goto LAB63;

LAB64:    t150 = *((unsigned int *)t117);
    t151 = (~(t150));
    t152 = *((unsigned int *)t145);
    t153 = (t151 || t152);
    if (t153 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t145) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t117) > 0)
        goto LAB69;

LAB70:    memcpy(t116, t154, 8);

LAB71:    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t78, 4, t111, 4, t116, 4);
    goto LAB54;

LAB52:    memcpy(t78, t111, 8);
    goto LAB54;

LAB57:    t137 = (t122 + 4);
    *((unsigned int *)t122) = 1;
    *((unsigned int *)t137) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t117) = 1;
    goto LAB62;

LAB61:    t144 = (t117 + 4);
    *((unsigned int *)t117) = 1;
    *((unsigned int *)t144) = 1;
    goto LAB62;

LAB63:    t149 = ((char*)((ng7)));
    goto LAB64;

LAB65:    t156 = (t0 + 15008);
    t157 = (t156 + 56U);
    t158 = *((char **)t157);
    t159 = ((char*)((ng9)));
    memset(t160, 0, 8);
    t161 = (t158 + 4);
    t162 = (t159 + 4);
    t163 = *((unsigned int *)t158);
    t164 = *((unsigned int *)t159);
    t165 = (t163 ^ t164);
    t166 = *((unsigned int *)t161);
    t167 = *((unsigned int *)t162);
    t168 = (t166 ^ t167);
    t169 = (t165 | t168);
    t170 = *((unsigned int *)t161);
    t171 = *((unsigned int *)t162);
    t172 = (t170 | t171);
    t173 = (~(t172));
    t174 = (t169 & t173);
    if (t174 != 0)
        goto LAB75;

LAB72:    if (t172 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t160) = 1;

LAB75:    memset(t155, 0, 8);
    t176 = (t160 + 4);
    t177 = *((unsigned int *)t176);
    t178 = (~(t177));
    t179 = *((unsigned int *)t160);
    t180 = (t179 & t178);
    t181 = (t180 & 1U);
    if (t181 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t176) != 0)
        goto LAB78;

LAB79:    t183 = (t155 + 4);
    t184 = *((unsigned int *)t155);
    t185 = *((unsigned int *)t183);
    t186 = (t184 || t185);
    if (t186 > 0)
        goto LAB80;

LAB81:    t188 = *((unsigned int *)t155);
    t189 = (~(t188));
    t190 = *((unsigned int *)t183);
    t191 = (t189 || t190);
    if (t191 > 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t183) > 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t155) > 0)
        goto LAB86;

LAB87:    memcpy(t154, t194, 8);

LAB88:    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t116, 4, t149, 4, t154, 4);
    goto LAB71;

LAB69:    memcpy(t116, t149, 8);
    goto LAB71;

LAB74:    t175 = (t160 + 4);
    *((unsigned int *)t160) = 1;
    *((unsigned int *)t175) = 1;
    goto LAB75;

LAB76:    *((unsigned int *)t155) = 1;
    goto LAB79;

LAB78:    t182 = (t155 + 4);
    *((unsigned int *)t155) = 1;
    *((unsigned int *)t182) = 1;
    goto LAB79;

LAB80:    t187 = ((char*)((ng11)));
    goto LAB81;

LAB82:    t192 = (t0 + 15008);
    t193 = (t192 + 56U);
    t194 = *((char **)t193);
    goto LAB83;

LAB84:    xsi_vlog_unsigned_bit_combine(t154, 4, t187, 4, t194, 4);
    goto LAB88;

LAB86:    memcpy(t154, t187, 8);
    goto LAB88;

}

static void Cont_30247_18(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t20[8];
    char t25[8];
    char t26[8];
    char t42[8];
    char t44[8];
    char t53[8];
    char t55[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t54;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;

LAB0:    t1 = (t0 + 23424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30247, ng0);
    t2 = (t0 + 1656);
    t5 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t2, 32);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t14);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 8);

LAB16:    t56 = (t0 + 35968);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    memset(t60, 0, 8);
    t61 = 15U;
    t62 = t61;
    t63 = (t3 + 4);
    t64 = *((unsigned int *)t3);
    t61 = (t61 & t64);
    t65 = *((unsigned int *)t63);
    t62 = (t62 & t65);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t67 | t61);
    t68 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t68 | t62);
    xsi_driver_vfirst_trans(t56, 0, 3);
    t69 = (t0 + 34928);
    *((int *)t69) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 10448U);
    t19 = *((char **)t18);
    memcpy(t20, t19, 8);
    goto LAB9;

LAB10:    t18 = (t0 + 8848U);
    t27 = *((char **)t18);
    memset(t26, 0, 8);
    t18 = (t27 + 4);
    t28 = *((unsigned int *)t18);
    t29 = (~(t28));
    t30 = *((unsigned int *)t27);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t18) != 0)
        goto LAB19;

LAB20:    t34 = (t26 + 4);
    t35 = *((unsigned int *)t26);
    t36 = *((unsigned int *)t34);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB21;

LAB22:    t45 = *((unsigned int *)t26);
    t46 = (~(t45));
    t47 = *((unsigned int *)t34);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t34) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t26) > 0)
        goto LAB27;

LAB28:    memcpy(t25, t55, 8);

LAB29:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t20, 32, t25, 32);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t26) = 1;
    goto LAB20;

LAB19:    t33 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB20;

LAB21:    t38 = (t0 + 15008);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng12)));
    memset(t42, 0, 8);
    xsi_vlog_unsigned_add(t42, 32, t40, 4, t41, 32);
    t43 = ((char*)((ng13)));
    memset(t44, 0, 8);
    xsi_vlog_unsigned_mod(t44, 32, t42, 32, t43, 32);
    goto LAB22;

LAB23:    t49 = (t0 + 15008);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    t52 = ((char*)((ng14)));
    memset(t53, 0, 8);
    xsi_vlog_unsigned_add(t53, 32, t51, 4, t52, 32);
    t54 = ((char*)((ng15)));
    memset(t55, 0, 8);
    xsi_vlog_unsigned_mod(t55, 32, t53, 32, t54, 32);
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t25, 32, t44, 32, t55, 32);
    goto LAB29;

LAB27:    memcpy(t25, t44, 8);
    goto LAB29;

}

static void Initial_30251_19(char *t0)
{
    char t6[8];
    char t21[8];
    char t25[8];
    char t30[8];
    char t68[8];
    char t69[8];
    char t74[8];
    char t92[8];
    char t99[16];
    char t100[16];
    char t101[16];
    char t102[16];
    char t103[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    char *t22;
    char *t23;
    char *t24;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;
    char *t91;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;

LAB0:    t1 = (t0 + 23672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30251, ng0);

LAB4:    t2 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t2, &&LAB5);
    t3 = (t0 + 23480);
    xsi_vlog_namedbase_pushprocess(t2, t3);

LAB6:    xsi_set_current_line(30254, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 15008);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(30255, ng0);

LAB7:    xsi_set_current_line(30255, ng0);
    t2 = (t0 + 34944);
    *((int *)t2) = 1;
    t3 = (t0 + 23704);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB8;

LAB1:    return;
LAB5:    t3 = (t0 + 23480);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB1;

LAB8:    xsi_set_current_line(30255, ng0);

LAB9:    xsi_set_current_line(30256, ng0);
    t4 = (t0 + 10128U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t4) == 0)
        goto LAB10;

LAB12:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;

LAB13:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(30258, ng0);
    t2 = (t0 + 14848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    if (*((unsigned int *)t4) != *((unsigned int *)t5))
        goto LAB20;

LAB18:    t12 = (t4 + 4);
    t13 = (t5 + 4);
    if (*((unsigned int *)t12) != *((unsigned int *)t13))
        goto LAB20;

LAB19:    *((unsigned int *)t6) = 1;

LAB20:    memset(t21, 0, 8);
    t19 = (t6 + 4);
    t7 = *((unsigned int *)t19);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t19) != 0)
        goto LAB23;

LAB24:    t22 = (t21 + 4);
    t14 = *((unsigned int *)t21);
    t15 = *((unsigned int *)t22);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB25;

LAB26:    memcpy(t30, t21, 8);

LAB27:    t62 = (t30 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t30);
    t66 = (t65 & t64);
    t67 = (t66 != 0);
    if (t67 > 0)
        goto LAB35;

LAB36:
LAB37:
LAB16:    goto LAB7;

LAB10:    *((unsigned int *)t6) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(30256, ng0);

LAB17:    xsi_set_current_line(30257, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 15008);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 4);
    goto LAB16;

LAB21:    *((unsigned int *)t21) = 1;
    goto LAB24;

LAB23:    t20 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB24;

LAB25:    t23 = (t0 + 5968U);
    t24 = *((char **)t23);
    memset(t25, 0, 8);
    t23 = (t24 + 4);
    t17 = *((unsigned int *)t23);
    t18 = (~(t17));
    t26 = *((unsigned int *)t24);
    t27 = (t26 & t18);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t23) != 0)
        goto LAB30;

LAB31:    t31 = *((unsigned int *)t21);
    t32 = *((unsigned int *)t25);
    t33 = (t31 & t32);
    *((unsigned int *)t30) = t33;
    t34 = (t21 + 4);
    t35 = (t25 + 4);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t34);
    t38 = *((unsigned int *)t35);
    t39 = (t37 | t38);
    *((unsigned int *)t36) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB32;

LAB33:
LAB34:    goto LAB27;

LAB28:    *((unsigned int *)t25) = 1;
    goto LAB31;

LAB30:    t29 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB31;

LAB32:    t42 = *((unsigned int *)t30);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t30) = (t42 | t43);
    t44 = (t21 + 4);
    t45 = (t25 + 4);
    t46 = *((unsigned int *)t21);
    t47 = (~(t46));
    t48 = *((unsigned int *)t44);
    t49 = (~(t48));
    t50 = *((unsigned int *)t25);
    t51 = (~(t50));
    t52 = *((unsigned int *)t45);
    t53 = (~(t52));
    t54 = (t47 & t49);
    t55 = (t51 & t53);
    t56 = (~(t54));
    t57 = (~(t55));
    t58 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t58 & t56);
    t59 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t59 & t57);
    t60 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t60 & t56);
    t61 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t61 & t57);
    goto LAB34;

LAB35:    xsi_set_current_line(30258, ng0);

LAB38:    xsi_set_current_line(30260, ng0);
    t70 = (t0 + 13408);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    t73 = ((char*)((ng16)));
    memset(t74, 0, 8);
    t75 = (t72 + 4);
    if (*((unsigned int *)t75) != 0)
        goto LAB40;

LAB39:    t76 = (t73 + 4);
    if (*((unsigned int *)t76) != 0)
        goto LAB40;

LAB43:    if (*((unsigned int *)t72) > *((unsigned int *)t73))
        goto LAB41;

LAB42:    memset(t69, 0, 8);
    t78 = (t74 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (~(t79));
    t81 = *((unsigned int *)t74);
    t82 = (t81 & t80);
    t83 = (t82 & 1U);
    if (t83 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t78) != 0)
        goto LAB46;

LAB47:    t85 = (t69 + 4);
    t86 = *((unsigned int *)t69);
    t87 = *((unsigned int *)t85);
    t88 = (t86 || t87);
    if (t88 > 0)
        goto LAB48;

LAB49:    t93 = *((unsigned int *)t69);
    t94 = (~(t93));
    t95 = *((unsigned int *)t85);
    t96 = (t94 || t95);
    if (t96 > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t85) > 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t69) > 0)
        goto LAB54;

LAB55:    memcpy(t68, t97, 8);

LAB56:    t98 = (t0 + 17568);
    xsi_vlogvar_assign_value(t98, t68, 0, 0, 32);
    xsi_set_current_line(30261, ng0);
    t2 = xsi_vlog_time(t99, 1.0000000000000000, 1.0000000000000000);
    t3 = (t0 + 17568);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    xsi_vlog_unsigned_add(t100, 64, t99, 64, t5, 32);
    t12 = (t0 + 14688);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    xsi_vlog_unsigned_minus(t101, 64, t100, 64, t19, 64);
    t20 = ((char*)((ng3)));
    t22 = (t0 + 17568);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlogtype_concat(t102, 64, 33, 2U, t24, 32, t20, 1);
    xsi_vlog_unsigned_divide(t103, 64, t101, 64, t102, 64);
    t29 = (t0 + 17408);
    xsi_vlogvar_assign_value(t29, t103, 0, 0, 32);
    xsi_set_current_line(30263, ng0);
    t2 = (t0 + 1656);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t3, 32, t2, 32);
    t4 = (t6 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(30270, ng0);
    t2 = (t0 + 8848U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(30277, ng0);

LAB75:    xsi_set_current_line(30278, ng0);
    t2 = (t0 + 17408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng15)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greater(t6, 32, t4, 32, t5, 32);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(30281, ng0);

LAB80:    xsi_set_current_line(30282, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 17408);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t2, 32, t5, 32);
    t12 = ((char*)((ng15)));
    memset(t21, 0, 8);
    xsi_vlog_signed_mod(t21, 32, t6, 32, t12, 32);
    t13 = (t0 + 15008);
    xsi_vlogvar_assign_value(t13, t21, 0, 0, 4);

LAB78:
LAB68:
LAB59:    goto LAB37;

LAB40:    t77 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB42;

LAB41:    *((unsigned int *)t74) = 1;
    goto LAB42;

LAB44:    *((unsigned int *)t69) = 1;
    goto LAB47;

LAB46:    t84 = (t69 + 4);
    *((unsigned int *)t69) = 1;
    *((unsigned int *)t84) = 1;
    goto LAB47;

LAB48:    t89 = (t0 + 13408);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    memcpy(t92, t91, 8);
    goto LAB49;

LAB50:    t97 = ((char*)((ng16)));
    goto LAB51;

LAB52:    xsi_vlog_unsigned_bit_combine(t68, 32, t92, 32, t97, 32);
    goto LAB56;

LAB54:    memcpy(t68, t92, 8);
    goto LAB56;

LAB57:    xsi_set_current_line(30263, ng0);

LAB60:    xsi_set_current_line(30264, ng0);
    t5 = (t0 + 17408);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    t19 = ((char*)((ng17)));
    memset(t21, 0, 8);
    xsi_vlog_signed_greater(t21, 32, t13, 32, t19, 32);
    t20 = (t21 + 4);
    t14 = *((unsigned int *)t20);
    t15 = (~(t14));
    t16 = *((unsigned int *)t21);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(30267, ng0);

LAB65:    xsi_set_current_line(30268, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 17408);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t2, 32, t5, 32);
    t12 = ((char*)((ng17)));
    memset(t21, 0, 8);
    xsi_vlog_signed_mod(t21, 32, t6, 32, t12, 32);
    t13 = (t0 + 15008);
    xsi_vlogvar_assign_value(t13, t21, 0, 0, 4);

LAB63:    goto LAB59;

LAB61:    xsi_set_current_line(30264, ng0);

LAB64:    xsi_set_current_line(30266, ng0);
    t22 = ((char*)((ng3)));
    t23 = (t0 + 15008);
    xsi_vlogvar_assign_value(t23, t22, 0, 0, 4);
    goto LAB63;

LAB66:    xsi_set_current_line(30270, ng0);

LAB69:    xsi_set_current_line(30271, ng0);
    t4 = (t0 + 17408);
    t5 = (t4 + 56U);
    t12 = *((char **)t5);
    t13 = ((char*)((ng13)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greater(t6, 32, t12, 32, t13, 32);
    t19 = (t6 + 4);
    t14 = *((unsigned int *)t19);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(30274, ng0);

LAB74:    xsi_set_current_line(30275, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 17408);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t2, 32, t5, 32);
    t12 = ((char*)((ng13)));
    memset(t21, 0, 8);
    xsi_vlog_signed_mod(t21, 32, t6, 32, t12, 32);
    t13 = (t0 + 15008);
    xsi_vlogvar_assign_value(t13, t21, 0, 0, 4);

LAB72:    goto LAB68;

LAB70:    xsi_set_current_line(30271, ng0);

LAB73:    xsi_set_current_line(30273, ng0);
    t20 = ((char*)((ng3)));
    t22 = (t0 + 15008);
    xsi_vlogvar_assign_value(t22, t20, 0, 0, 4);
    goto LAB72;

LAB76:    xsi_set_current_line(30278, ng0);

LAB79:    xsi_set_current_line(30280, ng0);
    t13 = ((char*)((ng3)));
    t19 = (t0 + 15008);
    xsi_vlogvar_assign_value(t19, t13, 0, 0, 4);
    goto LAB78;

LAB81:    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);
    goto LAB5;

}

static void Cont_30290_20(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;

LAB0:    t1 = (t0 + 23920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30290, ng0);
    t2 = (t0 + 14528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 14528);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 10288U);
    t10 = *((char **)t9);
    xsi_vlog_generic_get_index_select_value(t5, 1, t4, t8, 2, t10, 4, 2);
    t9 = (t0 + 36032);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t14, 0, 8);
    t15 = 1U;
    t16 = t15;
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t5);
    t15 = (t15 & t18);
    t19 = *((unsigned int *)t17);
    t16 = (t16 & t19);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t21 | t15);
    t22 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t22 | t16);
    xsi_driver_vfirst_trans_delayed(t9, 0, 0, 1LL, 0);
    t23 = (t0 + 34960);
    *((int *)t23) = 1;

LAB1:    return;
}

static void Cont_30291_21(char *t0)
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

LAB0:    t1 = (t0 + 24168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30291, ng0);
    t2 = (t0 + 14528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 36096);
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
    t27 = (t0 + 34976);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Initial_30296_22(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(30296, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 15168);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_30298_23(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;

LAB0:    t1 = (t0 + 24664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30298, ng0);
    t2 = (t0 + 34992);
    *((int *)t2) = 1;
    t3 = (t0 + 24696);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30298, ng0);

LAB5:    xsi_set_current_line(30299, ng0);
    t4 = (t0 + 10128U);
    t5 = *((char **)t4);
    t4 = (t0 + 6288U);
    t6 = *((char **)t4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 & t9);
    *((unsigned int *)t7) = t10;
    t4 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB6;

LAB7:
LAB8:    t38 = (t0 + 15168);
    xsi_vlogvar_wait_assign_value(t38, t7, 0, 0, 1, 50LL);
    goto LAB2;

LAB6:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = (t5 + 4);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (~(t28));
    t30 = (t23 & t25);
    t31 = (t27 & t29);
    t32 = (~(t30));
    t33 = (~(t31));
    t34 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t34 & t32);
    t35 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t35 & t33);
    t36 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t36 & t32);
    t37 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t37 & t33);
    goto LAB8;

}

static void Always_30302_24(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 24912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30302, ng0);
    t2 = (t0 + 35008);
    *((int *)t2) = 1;
    t3 = (t0 + 24944);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30302, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 14208);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB2;

}

static void Initial_30312_25(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(30312, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 15328);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);

LAB1:    return;
}

static void Always_30315_26(char *t0)
{
    char t8[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 25408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30315, ng0);
    t2 = (t0 + 35024);
    *((int *)t2) = 1;
    t3 = (t0 + 25440);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30315, ng0);

LAB5:    t4 = (t0 + 576);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 25216);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(30316, ng0);

LAB8:    xsi_set_current_line(30316, ng0);
    t6 = (t0 + 35040);
    *((int *)t6) = 1;
    t7 = (t0 + 25440);
    *((char **)t7) = t6;
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB6:    t3 = (t0 + 25216);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB9:    xsi_set_current_line(30316, ng0);

LAB10:    xsi_set_current_line(30317, ng0);
    t9 = (t0 + 12448);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t13 = (t0 + 15328);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t12, 0, 8);
    t16 = (t12 + 4);
    t17 = (t15 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 0);
    *((unsigned int *)t12) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 0);
    *((unsigned int *)t16) = t21;
    t22 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t22 & 32767U);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 32767U);
    xsi_vlogtype_concat(t8, 16, 16, 2U, t12, 15, t11, 1);
    t24 = (t0 + 15328);
    xsi_vlogvar_assign_value(t24, t8, 0, 0, 16);
    goto LAB8;

LAB11:    t2 = (t0 + 576);
    xsi_vlog_namedbase_popprocess(t2);
    goto LAB6;

}

static void Always_30328_27(char *t0)
{
    char t4[8];
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;

LAB0:    t1 = (t0 + 25656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30328, ng0);
    t2 = (t0 + 35056);
    *((int *)t2) = 1;
    t3 = (t0 + 25688);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30328, ng0);

LAB5:    xsi_set_current_line(30332, ng0);
    t5 = (t0 + 6928U);
    t6 = *((char **)t5);
    t5 = (t0 + 8848U);
    t7 = *((char **)t5);
    xsi_vlogtype_concat(t4, 3, 3, 2U, t7, 1, t6, 2);

LAB6:    t5 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(30333, ng0);
    t10 = (t0 + 15328);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t9, 0, 8);
    t13 = (t9 + 4);
    t14 = (t12 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 3);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 3);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t19 & 1023U);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 1023U);
    t21 = (t0 + 11968);
    xsi_vlogvar_wait_assign_value(t21, t9, 0, 0, 10, 5LL);
    goto LAB19;

LAB9:    xsi_set_current_line(30334, ng0);
    t3 = (t0 + 15328);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t7 = (t9 + 4);
    t10 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (t15 >> 3);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t10);
    t18 = (t17 >> 3);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t19 & 1023U);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 1023U);
    t11 = (t0 + 11968);
    xsi_vlogvar_wait_assign_value(t11, t9, 0, 0, 10, 5LL);
    goto LAB19;

LAB11:    xsi_set_current_line(30335, ng0);
    t3 = (t0 + 15328);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t7 = (t9 + 4);
    t10 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (t15 >> 2);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t10);
    t18 = (t17 >> 2);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t19 & 1023U);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 1023U);
    t11 = (t0 + 11968);
    xsi_vlogvar_wait_assign_value(t11, t9, 0, 0, 10, 5LL);
    goto LAB19;

LAB13:    xsi_set_current_line(30336, ng0);
    t3 = (t0 + 15328);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t7 = (t9 + 4);
    t10 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (t15 >> 3);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t10);
    t18 = (t17 >> 3);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t19 & 1023U);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 1023U);
    t11 = (t0 + 11968);
    xsi_vlogvar_wait_assign_value(t11, t9, 0, 0, 10, 5LL);
    goto LAB19;

LAB15:    xsi_set_current_line(30337, ng0);
    t3 = (t0 + 15328);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t7 = (t9 + 4);
    t10 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (t15 >> 3);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t10);
    t18 = (t17 >> 3);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t19 & 1023U);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 1023U);
    t11 = (t0 + 11968);
    xsi_vlogvar_wait_assign_value(t11, t9, 0, 0, 10, 5LL);
    goto LAB19;

LAB17:    xsi_set_current_line(30338, ng0);
    t3 = (t0 + 15328);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t7 = (t9 + 4);
    t10 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (t15 >> 3);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t10);
    t18 = (t17 >> 3);
    *((unsigned int *)t7) = t18;
    t19 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t19 & 1023U);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 1023U);
    t11 = (t0 + 11968);
    xsi_vlogvar_wait_assign_value(t11, t9, 0, 0, 10, 5LL);
    goto LAB19;

}

static void Initial_30353_28(char *t0)
{
    char t4[16];
    char t9[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;

LAB0:    t1 = (t0 + 25904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30353, ng0);

LAB4:    xsi_set_current_line(30354, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 15648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(30355, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 15488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(30356, ng0);

LAB5:    xsi_set_current_line(30356, ng0);
    t2 = (t0 + 35072);
    *((int *)t2) = 1;
    t3 = (t0 + 25936);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(30356, ng0);

LAB7:    xsi_set_current_line(30357, ng0);
    t5 = xsi_vlog_time(t4, 1.0000000000000000, 1.0000000000000000);
    t6 = (t0 + 15488);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_unsigned_minus(t9, 64, t4, 64, t8, 64);
    t10 = (t0 + 15648);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 32);
    xsi_set_current_line(30358, ng0);
    t2 = xsi_vlog_time(t4, 1.0000000000000000, 1.0000000000000000);
    t3 = (t0 + 15488);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 64);
    goto LAB5;

LAB8:    goto LAB1;

}

static void NetDecl_30370_29(char *t0)
{
    char t3[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;

LAB0:    t1 = (t0 + 26152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30370, ng0);
    t2 = (t0 + 7888U);
    t4 = *((char **)t2);
    t2 = (t0 + 7408U);
    t5 = *((char **)t2);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 & t8);
    *((unsigned int *)t6) = t9;
    t2 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t10);
    t14 = (t12 | t13);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB4;

LAB5:
LAB6:    memset(t3, 0, 8);
    t37 = (t6 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t6);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t37) == 0)
        goto LAB7;

LAB9:    t43 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t43) = 1;

LAB10:    t44 = (t3 + 4);
    t45 = (t6 + 4);
    t46 = *((unsigned int *)t6);
    t47 = (~(t46));
    *((unsigned int *)t3) = t47;
    *((unsigned int *)t44) = 0;
    if (*((unsigned int *)t45) != 0)
        goto LAB12;

LAB11:    t52 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t52 & 1U);
    t53 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t53 & 1U);
    t54 = (t0 + 36160);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    memset(t58, 0, 8);
    t59 = 1U;
    t60 = t59;
    t61 = (t3 + 4);
    t62 = *((unsigned int *)t3);
    t59 = (t59 & t62);
    t63 = *((unsigned int *)t61);
    t60 = (t60 & t63);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t65 | t59);
    t66 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t66 | t60);
    xsi_driver_vfirst_trans(t54, 0, 0U);
    t67 = (t0 + 35088);
    *((int *)t67) = 1;

LAB1:    return;
LAB4:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t6) = (t17 | t18);
    t19 = (t4 + 4);
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t26 = (~(t25));
    t27 = *((unsigned int *)t20);
    t28 = (~(t27));
    t29 = (t22 & t24);
    t30 = (t26 & t28);
    t31 = (~(t29));
    t32 = (~(t30));
    t33 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t33 & t31);
    t34 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t34 & t32);
    t35 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t35 & t31);
    t36 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t36 & t32);
    goto LAB6;

LAB7:    *((unsigned int *)t3) = 1;
    goto LAB10;

LAB12:    t48 = *((unsigned int *)t3);
    t49 = *((unsigned int *)t45);
    *((unsigned int *)t3) = (t48 | t49);
    t50 = *((unsigned int *)t44);
    t51 = *((unsigned int *)t45);
    *((unsigned int *)t44) = (t50 | t51);
    goto LAB11;

}

static void Initial_30372_30(char *t0)
{
    char t13[8];
    char t14[8];
    char t28[8];
    char t29[8];
    char t37[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;

LAB0:    t1 = (t0 + 26400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30372, ng0);

LAB4:    xsi_set_current_line(30373, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 15808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(30374, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 15968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(30375, ng0);

LAB5:    xsi_set_current_line(30375, ng0);
    t2 = (t0 + 35104);
    *((int *)t2) = 1;
    t3 = (t0 + 26432);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(30375, ng0);

LAB7:    xsi_set_current_line(30376, ng0);
    t4 = (t0 + 10608U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(30379, ng0);
    t2 = (t0 + 7728U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB15;

LAB13:    if (*((unsigned int *)t2) == 0)
        goto LAB12;

LAB14:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB15:    memset(t14, 0, 8);
    t5 = (t13 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t5) != 0)
        goto LAB18;

LAB19:    t12 = (t14 + 4);
    t20 = *((unsigned int *)t14);
    t21 = (!(t20));
    t22 = *((unsigned int *)t12);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB20;

LAB21:    memcpy(t37, t14, 8);

LAB22:    t65 = (t37 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (~(t66));
    t68 = *((unsigned int *)t37);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(30382, ng0);
    t2 = (t0 + 7568U);
    t3 = *((char **)t2);
    t2 = (t0 + 8048U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 ^ t7);
    *((unsigned int *)t13) = t8;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t11 = (t13 + 4);
    t9 = *((unsigned int *)t2);
    t10 = *((unsigned int *)t5);
    t15 = (t9 | t10);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t11);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB34;

LAB35:
LAB36:    t12 = (t13 + 4);
    t20 = *((unsigned int *)t12);
    t21 = (~(t20));
    t22 = *((unsigned int *)t13);
    t23 = (t22 & t21);
    t31 = (t23 != 0);
    if (t31 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(30388, ng0);

LAB45:    xsi_set_current_line(30389, ng0);
    t2 = (t0 + 15808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng17)));
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 15808);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    xsi_set_current_line(30390, ng0);
    t2 = (t0 + 15808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB46;

LAB47:
LAB48:
LAB39:
LAB32:
LAB10:    goto LAB5;

LAB8:    xsi_set_current_line(30376, ng0);

LAB11:    xsi_set_current_line(30377, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 15808);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    xsi_set_current_line(30378, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 15968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB10;

LAB12:    *((unsigned int *)t13) = 1;
    goto LAB15;

LAB16:    *((unsigned int *)t14) = 1;
    goto LAB19;

LAB18:    t11 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB19;

LAB20:    t24 = (t0 + 15968);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng1)));
    memset(t28, 0, 8);
    xsi_vlog_signed_not_equal(t28, 32, t26, 32, t27, 32);
    memset(t29, 0, 8);
    t30 = (t28 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (~(t31));
    t33 = *((unsigned int *)t28);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t30) != 0)
        goto LAB25;

LAB26:    t38 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t29);
    t40 = (t38 | t39);
    *((unsigned int *)t37) = t40;
    t41 = (t14 + 4);
    t42 = (t29 + 4);
    t43 = (t37 + 4);
    t44 = *((unsigned int *)t41);
    t45 = *((unsigned int *)t42);
    t46 = (t44 | t45);
    *((unsigned int *)t43) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB22;

LAB23:    *((unsigned int *)t29) = 1;
    goto LAB26;

LAB25:    t36 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB26;

LAB27:    t49 = *((unsigned int *)t37);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t37) = (t49 | t50);
    t51 = (t14 + 4);
    t52 = (t29 + 4);
    t53 = *((unsigned int *)t51);
    t54 = (~(t53));
    t55 = *((unsigned int *)t14);
    t56 = (t55 & t54);
    t57 = *((unsigned int *)t52);
    t58 = (~(t57));
    t59 = *((unsigned int *)t29);
    t60 = (t59 & t58);
    t61 = (~(t56));
    t62 = (~(t60));
    t63 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t63 & t61);
    t64 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t64 & t62);
    goto LAB29;

LAB30:    xsi_set_current_line(30379, ng0);

LAB33:    goto LAB32;

LAB34:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t18 | t19);
    goto LAB36;

LAB37:    xsi_set_current_line(30382, ng0);

LAB40:    xsi_set_current_line(30383, ng0);
    t24 = (t0 + 15808);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng17)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t26, 32, t27, 32);
    t30 = (t0 + 15808);
    xsi_vlogvar_assign_value(t30, t14, 0, 0, 32);
    xsi_set_current_line(30384, ng0);
    t2 = (t0 + 15808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15648);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    xsi_vlog_signed_greatereq(t13, 32, t4, 32, t12, 32);
    t24 = (t13 + 4);
    t6 = *((unsigned int *)t24);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB41;

LAB42:
LAB43:    goto LAB39;

LAB41:    xsi_set_current_line(30384, ng0);

LAB44:    xsi_set_current_line(30385, ng0);
    t25 = (t0 + 15808);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t30 = (t0 + 15648);
    t36 = (t30 + 56U);
    t41 = *((char **)t36);
    memset(t14, 0, 8);
    xsi_vlog_signed_minus(t14, 32, t27, 32, t41, 32);
    t42 = (t0 + 15808);
    xsi_vlogvar_assign_value(t42, t14, 0, 0, 32);
    xsi_set_current_line(30386, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 15968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB43;

LAB46:    xsi_set_current_line(30390, ng0);

LAB49:    xsi_set_current_line(30391, ng0);
    t12 = (t0 + 15808);
    t24 = (t12 + 56U);
    t25 = *((char **)t24);
    t26 = (t0 + 15648);
    t27 = (t26 + 56U);
    t30 = *((char **)t27);
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t25, 32, t30, 32);
    t36 = (t0 + 15808);
    xsi_vlogvar_assign_value(t36, t14, 0, 0, 32);
    xsi_set_current_line(30393, ng0);
    t2 = (t0 + 15808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB50;

LAB51:
LAB52:    xsi_set_current_line(30394, ng0);
    t2 = ((char*)((ng10)));
    memset(t13, 0, 8);
    xsi_vlog_signed_unary_minus(t13, 32, t2, 32);
    t3 = (t0 + 15968);
    xsi_vlogvar_assign_value(t3, t13, 0, 0, 32);
    goto LAB48;

LAB50:    xsi_set_current_line(30393, ng0);
    t12 = ((char*)((ng1)));
    t24 = (t0 + 15808);
    xsi_vlogvar_assign_value(t24, t12, 0, 0, 32);
    goto LAB52;

LAB53:    goto LAB1;

}

static void Always_30402_31(char *t0)
{
    char t8[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    double t21;
    double t22;

LAB0:    t1 = (t0 + 26648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30402, ng0);
    t2 = (t0 + 35120);
    *((int *)t2) = 1;
    t3 = (t0 + 26680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30402, ng0);

LAB5:    xsi_set_current_line(30403, ng0);
    t4 = (t0 + 15968);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_greater(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(30407, ng0);

LAB10:    xsi_set_current_line(30408, ng0);
    t2 = (t0 + 6608U);
    t3 = *((char **)t2);
    t2 = (t0 + 11808);
    t4 = (t0 + 15808);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t21 = xsi_vlog_convert_to_real(t6, 32, 1);
    t22 = (t21 < 0.0000000000000000);
    if (t22 == 1)
        goto LAB11;

LAB12:    t21 = (t21 + 0.50000000000000000);
    t21 = ((int64)(t21));

LAB13:    t21 = (t21 * 1.0000000000000000);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, t21);
    xsi_set_current_line(30409, ng0);
    t2 = (t0 + 15968);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t4, 32, t5, 32);
    t6 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(30403, ng0);

LAB9:    xsi_set_current_line(30406, ng0);
    t15 = (t0 + 15968);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng4)));
    memset(t19, 0, 8);
    xsi_vlog_signed_minus(t19, 32, t17, 32, t18, 32);
    t20 = (t0 + 15968);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 32);
    goto LAB8;

LAB11:    t21 = 0.0000000000000000;
    goto LAB13;

LAB14:    xsi_set_current_line(30409, ng0);

LAB17:    xsi_set_current_line(30411, ng0);
    t7 = (t0 + 6608U);
    t9 = *((char **)t7);
    t7 = (t0 + 11808);
    xsi_vlogvar_wait_assign_value(t7, t9, 0, 0, 1, 0LL);
    xsi_set_current_line(30412, ng0);
    t2 = (t0 + 15968);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 15968);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    goto LAB16;

}

static void Always_30423_32(char *t0)
{
    char t7[8];
    char t40[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;

LAB0:    t1 = (t0 + 26896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30423, ng0);
    t2 = (t0 + 35136);
    *((int *)t2) = 1;
    t3 = (t0 + 26928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30423, ng0);

LAB5:    xsi_set_current_line(30424, ng0);
    t4 = (t0 + 9168U);
    t5 = *((char **)t4);
    t4 = (t0 + 9328U);
    t6 = *((char **)t4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 & t9);
    *((unsigned int *)t7) = t10;
    t4 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB6;

LAB7:
LAB8:    t38 = (t0 + 2744);
    t39 = *((char **)t38);
    t41 = *((unsigned int *)t7);
    t42 = *((unsigned int *)t39);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t38 = (t7 + 4);
    t44 = (t39 + 4);
    t45 = (t40 + 4);
    t46 = *((unsigned int *)t38);
    t47 = *((unsigned int *)t44);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t49 = *((unsigned int *)t45);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB9;

LAB10:
LAB11:    t71 = (t40 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t40);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(30426, ng0);
    t2 = (t0 + 9168U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t13 = (t10 & t9);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(30428, ng0);
    t2 = (t0 + 9328U);
    t3 = *((char **)t2);
    t2 = (t0 + 2744);
    t4 = *((char **)t2);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t4);
    t10 = (t8 & t9);
    *((unsigned int *)t7) = t10;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = (t7 + 4);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t5);
    t15 = (t13 | t14);
    *((unsigned int *)t6) = t15;
    t16 = *((unsigned int *)t6);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB20;

LAB21:
LAB22:    t20 = (t7 + 4);
    t41 = *((unsigned int *)t20);
    t42 = (~(t41));
    t43 = *((unsigned int *)t7);
    t46 = (t43 & t42);
    t47 = (t46 != 0);
    if (t47 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(30430, ng0);

LAB27:    xsi_set_current_line(30431, ng0);
    t2 = (t0 + 16128);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 41196);
    *((int *)t3) = 1;
    NetReassign_30431_54(t0);

LAB25:
LAB18:
LAB14:    goto LAB2;

LAB6:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = (t5 + 4);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (~(t28));
    t30 = (t23 & t25);
    t31 = (t27 & t29);
    t32 = (~(t30));
    t33 = (~(t31));
    t34 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t34 & t32);
    t35 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t35 & t33);
    t36 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t36 & t32);
    t37 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t37 & t33);
    goto LAB8;

LAB9:    t51 = *((unsigned int *)t40);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t40) = (t51 | t52);
    t53 = (t7 + 4);
    t54 = (t39 + 4);
    t55 = *((unsigned int *)t7);
    t56 = (~(t55));
    t57 = *((unsigned int *)t53);
    t58 = (~(t57));
    t59 = *((unsigned int *)t39);
    t60 = (~(t59));
    t61 = *((unsigned int *)t54);
    t62 = (~(t61));
    t63 = (t56 & t58);
    t64 = (t60 & t62);
    t65 = (~(t63));
    t66 = (~(t64));
    t67 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t67 & t65);
    t68 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t68 & t66);
    t69 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t69 & t65);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    goto LAB11;

LAB12:    xsi_set_current_line(30424, ng0);

LAB15:    xsi_set_current_line(30425, ng0);
    t77 = (t0 + 16128);
    xsi_set_assignedflag(t77);
    t78 = (t0 + 41184);
    *((int *)t78) = 1;
    NetReassign_30425_51(t0);
    goto LAB14;

LAB16:    xsi_set_current_line(30426, ng0);

LAB19:    xsi_set_current_line(30427, ng0);
    t4 = (t0 + 16128);
    xsi_set_assignedflag(t4);
    t5 = (t0 + 41188);
    *((int *)t5) = 1;
    NetReassign_30427_52(t0);
    goto LAB18;

LAB20:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t6);
    *((unsigned int *)t7) = (t18 | t19);
    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t22 = *((unsigned int *)t3);
    t23 = (~(t22));
    t24 = *((unsigned int *)t11);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (~(t26));
    t28 = *((unsigned int *)t12);
    t29 = (~(t28));
    t30 = (t23 & t25);
    t31 = (t27 & t29);
    t32 = (~(t30));
    t33 = (~(t31));
    t34 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t34 & t32);
    t35 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t35 & t33);
    t36 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t36 & t32);
    t37 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t37 & t33);
    goto LAB22;

LAB23:    xsi_set_current_line(30428, ng0);

LAB26:    xsi_set_current_line(30429, ng0);
    t21 = (t0 + 16128);
    xsi_set_assignedflag(t21);
    t38 = (t0 + 41192);
    *((int *)t38) = 1;
    NetReassign_30429_53(t0);
    goto LAB25;

}

static void Initial_30436_33(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(30436, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 16288);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);

LAB1:    return;
}

static void Always_30438_34(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;

LAB0:    t1 = (t0 + 27392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30438, ng0);
    t2 = (t0 + 35152);
    *((int *)t2) = 1;
    t3 = (t0 + 27424);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30438, ng0);
    t4 = (t0 + 16288);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 2, t6, 2, t7, 2);
    t9 = (t0 + 16288);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 2);
    goto LAB2;

}

static void Cont_30442_35(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t28[8];
    char t41[8];
    char t42[8];
    char t45[8];
    char t67[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t43;
    char *t44;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;

LAB0:    t1 = (t0 + 27640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30442, ng0);
    t2 = (t0 + 6768U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t37 = *((unsigned int *)t4);
    t38 = (~(t37));
    t39 = *((unsigned int *)t21);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t41, 8);

LAB16:    t83 = (t0 + 36224);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    t86 = (t85 + 56U);
    t87 = *((char **)t86);
    memset(t87, 0, 8);
    t88 = 1U;
    t89 = t88;
    t90 = (t3 + 4);
    t91 = *((unsigned int *)t3);
    t88 = (t88 & t91);
    t92 = *((unsigned int *)t90);
    t89 = (t89 & t92);
    t93 = (t87 + 4);
    t94 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t94 | t88);
    t95 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t95 | t89);
    xsi_driver_vfirst_trans_delayed(t83, 0, 0, 50LL, 0);
    t96 = (t0 + 35168);
    *((int *)t96) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t25 = (t0 + 16288);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t28, 0, 8);
    t29 = (t28 + 4);
    t30 = (t27 + 4);
    t31 = *((unsigned int *)t27);
    t32 = (t31 >> 1);
    t33 = (t32 & 1);
    *((unsigned int *)t28) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 >> 1);
    t36 = (t35 & 1);
    *((unsigned int *)t29) = t36;
    goto LAB9;

LAB10:    t43 = (t0 + 6768U);
    t44 = *((char **)t43);
    memset(t45, 0, 8);
    t43 = (t45 + 4);
    t46 = (t44 + 4);
    t47 = *((unsigned int *)t44);
    t48 = (t47 >> 0);
    t49 = (t48 & 1);
    *((unsigned int *)t45) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 >> 0);
    t52 = (t51 & 1);
    *((unsigned int *)t43) = t52;
    memset(t42, 0, 8);
    t53 = (t45 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t45);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t53) != 0)
        goto LAB19;

LAB20:    t60 = (t42 + 4);
    t61 = *((unsigned int *)t42);
    t62 = *((unsigned int *)t60);
    t63 = (t61 || t62);
    if (t63 > 0)
        goto LAB21;

LAB22:    t76 = *((unsigned int *)t42);
    t77 = (~(t76));
    t78 = *((unsigned int *)t60);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t60) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t42) > 0)
        goto LAB27;

LAB28:    memcpy(t41, t82, 8);

LAB29:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t28, 1, t41, 1);
    goto LAB16;

LAB14:    memcpy(t3, t28, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t42) = 1;
    goto LAB20;

LAB19:    t59 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB20;

LAB21:    t64 = (t0 + 16288);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    memset(t67, 0, 8);
    t68 = (t67 + 4);
    t69 = (t66 + 4);
    t70 = *((unsigned int *)t66);
    t71 = (t70 >> 0);
    t72 = (t71 & 1);
    *((unsigned int *)t67) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 >> 0);
    t75 = (t74 & 1);
    *((unsigned int *)t68) = t75;
    goto LAB22;

LAB23:    t80 = (t0 + 16128);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t41, 1, t67, 1, t82, 1);
    goto LAB29;

LAB27:    memcpy(t41, t67, 8);
    goto LAB29;

}

static void Always_30465_36(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 27888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30465, ng0);
    t2 = (t0 + 35184);
    *((int *)t2) = 1;
    t3 = (t0 + 27920);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30465, ng0);

LAB5:    xsi_set_current_line(30466, ng0);
    t4 = (t0 + 8848U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(30469, ng0);

LAB10:    xsi_set_current_line(30470, ng0);
    t2 = (t0 + 1792);
    t3 = *((char **)t2);
    t2 = (t0 + 1928);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t3, 32, t4, 32);
    t2 = (t0 + 16928);
    xsi_vlogvar_assign_value(t2, t13, 0, 0, 32);
    xsi_set_current_line(30471, ng0);
    t2 = (t0 + 2200);
    t3 = *((char **)t2);
    t2 = (t0 + 17088);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(30466, ng0);

LAB9:    xsi_set_current_line(30467, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 16928);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    xsi_set_current_line(30468, ng0);
    t2 = (t0 + 2064);
    t3 = *((char **)t2);
    t2 = (t0 + 17088);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB8;

}

static void Always_30478_37(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;

LAB0:    t1 = (t0 + 28136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30478, ng0);

LAB4:    t2 = (t0 + 872);
    xsi_vlog_namedbase_setdisablestate(t2, &&LAB5);
    t3 = (t0 + 27944);
    xsi_vlog_namedbase_pushprocess(t2, t3);

LAB6:    xsi_set_current_line(30480, ng0);
    t4 = (t0 + 35200);
    *((int *)t4) = 1;
    t5 = (t0 + 28168);
    *((char **)t5) = t4;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB5:    t3 = (t0 + 27944);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB7:    xsi_set_current_line(30481, ng0);
    t2 = (t0 + 7408U);
    t3 = *((char **)t2);
    t2 = (t0 + 11648);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(30482, ng0);
    xsi_set_current_line(30482, ng0);
    t2 = (t0 + 1792);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t3, 32, t2, 32);
    t4 = (t0 + 17728);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 32);

LAB8:    t2 = (t0 + 17728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 17088);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_signed_greater(t6, 32, t4, 32, t8, 32);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t6);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(30483, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 11648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(30484, ng0);
    xsi_set_current_line(30484, ng0);
    t2 = (t0 + 17088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 17728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB12:    t2 = (t0 + 17728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 16928);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_signed_greater(t6, 32, t4, 32, t8, 32);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t6);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB13;

LAB14:    t2 = (t0 + 872);
    xsi_vlog_namedbase_popprocess(t2);
    goto LAB5;

LAB9:    xsi_set_current_line(30482, ng0);
    t15 = (t0 + 35216);
    *((int *)t15) = 1;
    t16 = (t0 + 28168);
    *((char **)t16) = t15;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(30482, ng0);
    t2 = (t0 + 17728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 17728);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB8;

LAB13:    xsi_set_current_line(30484, ng0);
    t15 = (t0 + 35232);
    *((int *)t15) = 1;
    t16 = (t0 + 28168);
    *((char **)t16) = t15;
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(30484, ng0);
    t2 = (t0 + 17728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 17728);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB12;

}

static void Always_30487_38(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 28384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30487, ng0);
    t2 = (t0 + 35248);
    *((int *)t2) = 1;
    t3 = (t0 + 28416);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30487, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 11648);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB2;

}

static void Initial_30491_39(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(30491, ng0);

LAB2:    xsi_set_current_line(30492, ng0);
    t1 = (t0 + 11328);
    xsi_set_assignedflag(t1);
    t2 = (t0 + 41200);
    *((int *)t2) = 1;
    NetReassign_30492_55(t0);
    xsi_set_current_line(30493, ng0);
    t1 = (t0 + 11488);
    xsi_set_assignedflag(t1);
    t2 = (t0 + 41204);
    *((int *)t2) = 1;
    NetReassign_30493_56(t0);

LAB1:    return;
}

static void Always_30497_40(char *t0)
{
    char t4[8];
    char t23[8];
    char t42[8];
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
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;

LAB0:    t1 = (t0 + 28880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30497, ng0);
    t2 = (t0 + 35264);
    *((int *)t2) = 1;
    t3 = (t0 + 28912);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30497, ng0);

LAB5:    xsi_set_current_line(30498, ng0);
    t5 = (t0 + 7248U);
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
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t24 = (t0 + 7408U);
    t25 = *((char **)t24);
    memset(t23, 0, 8);
    t24 = (t25 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t25);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB15;

LAB13:    if (*((unsigned int *)t24) == 0)
        goto LAB12;

LAB14:    t31 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t31) = 1;

LAB15:    t32 = (t23 + 4);
    t33 = (t25 + 4);
    t34 = *((unsigned int *)t25);
    t35 = (~(t34));
    *((unsigned int *)t23) = t35;
    *((unsigned int *)t32) = 0;
    if (*((unsigned int *)t33) != 0)
        goto LAB17;

LAB16:    t40 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t40 & 1U);
    t41 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t41 & 1U);
    t43 = *((unsigned int *)t4);
    t44 = *((unsigned int *)t23);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = (t4 + 4);
    t47 = (t23 + 4);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t46);
    t50 = *((unsigned int *)t47);
    t51 = (t49 | t50);
    *((unsigned int *)t48) = t51;
    t52 = *((unsigned int *)t48);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB18;

LAB19:
LAB20:    t70 = (t42 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t42);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(30503, ng0);
    t2 = (t0 + 8208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(30506, ng0);

LAB29:    xsi_set_current_line(30512, ng0);
    t2 = (t0 + 11328);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 41224);
    *((int *)t3) = 1;
    NetReassign_30512_61(t0);
    xsi_set_current_line(30513, ng0);
    t2 = (t0 + 11488);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 41228);
    *((int *)t3) = 1;
    NetReassign_30513_62(t0);

LAB27:
LAB23:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    *((unsigned int *)t23) = 1;
    goto LAB15;

LAB17:    t36 = *((unsigned int *)t23);
    t37 = *((unsigned int *)t33);
    *((unsigned int *)t23) = (t36 | t37);
    t38 = *((unsigned int *)t32);
    t39 = *((unsigned int *)t33);
    *((unsigned int *)t32) = (t38 | t39);
    goto LAB16;

LAB18:    t54 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t42) = (t54 | t55);
    t56 = (t4 + 4);
    t57 = (t23 + 4);
    t58 = *((unsigned int *)t56);
    t59 = (~(t58));
    t60 = *((unsigned int *)t4);
    t61 = (t60 & t59);
    t62 = *((unsigned int *)t57);
    t63 = (~(t62));
    t64 = *((unsigned int *)t23);
    t65 = (t64 & t63);
    t66 = (~(t61));
    t67 = (~(t65));
    t68 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t68 & t66);
    t69 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t69 & t67);
    goto LAB20;

LAB21:    xsi_set_current_line(30498, ng0);

LAB24:    xsi_set_current_line(30501, ng0);
    t76 = (t0 + 11328);
    xsi_set_assignedflag(t76);
    t77 = (t0 + 41208);
    *((int *)t77) = 1;
    NetReassign_30501_57(t0);
    xsi_set_current_line(30502, ng0);
    t2 = (t0 + 11488);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 41212);
    *((int *)t3) = 1;
    NetReassign_30502_58(t0);
    goto LAB23;

LAB25:    xsi_set_current_line(30503, ng0);

LAB28:    xsi_set_current_line(30504, ng0);
    t5 = (t0 + 11328);
    xsi_set_assignedflag(t5);
    t6 = (t0 + 41216);
    *((int *)t6) = 1;
    NetReassign_30504_59(t0);
    xsi_set_current_line(30505, ng0);
    t2 = (t0 + 11488);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 41220);
    *((int *)t3) = 1;
    NetReassign_30505_60(t0);
    goto LAB27;

}

static void Cont_30523_41(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t33[8];
    char t49[8];
    char t50[8];
    char t53[8];
    char t80[8];
    char t96[8];
    char t97[8];
    char t100[8];
    char t127[8];
    char t143[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
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
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t51;
    char *t52;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t98;
    char *t99;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t128;
    char *t129;
    char *t130;
    char *t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t144;
    char *t145;
    char *t146;
    char *t147;
    char *t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    char *t155;
    char *t156;
    char *t157;
    char *t158;
    char *t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;

LAB0:    t1 = (t0 + 29128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30523, ng0);
    t2 = (t0 + 6768U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t45 = *((unsigned int *)t4);
    t46 = (~(t45));
    t47 = *((unsigned int *)t29);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t49, 8);

LAB20:    t155 = (t0 + 36288);
    t156 = (t155 + 56U);
    t157 = *((char **)t156);
    t158 = (t157 + 56U);
    t159 = *((char **)t158);
    memset(t159, 0, 8);
    t160 = 1023U;
    t161 = t160;
    t162 = (t3 + 4);
    t163 = *((unsigned int *)t3);
    t160 = (t160 & t163);
    t164 = *((unsigned int *)t162);
    t161 = (t161 & t164);
    t165 = (t159 + 4);
    t166 = *((unsigned int *)t159);
    *((unsigned int *)t159) = (t166 | t160);
    t167 = *((unsigned int *)t165);
    *((unsigned int *)t165) = (t167 | t161);
    xsi_driver_vfirst_trans(t155, 0, 9);
    t168 = (t0 + 35280);
    *((int *)t168) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t34 = (t0 + 16448);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memset(t33, 0, 8);
    t37 = (t33 + 4);
    t38 = (t36 + 4);
    t39 = *((unsigned int *)t36);
    t40 = (t39 >> 3);
    *((unsigned int *)t33) = t40;
    t41 = *((unsigned int *)t38);
    t42 = (t41 >> 3);
    *((unsigned int *)t37) = t42;
    t43 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t43 & 1023U);
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t44 & 1023U);
    goto LAB13;

LAB14:    t51 = (t0 + 6768U);
    t52 = *((char **)t51);
    t51 = ((char*)((ng2)));
    memset(t53, 0, 8);
    t54 = (t52 + 4);
    t55 = (t51 + 4);
    t56 = *((unsigned int *)t52);
    t57 = *((unsigned int *)t51);
    t58 = (t56 ^ t57);
    t59 = *((unsigned int *)t54);
    t60 = *((unsigned int *)t55);
    t61 = (t59 ^ t60);
    t62 = (t58 | t61);
    t63 = *((unsigned int *)t54);
    t64 = *((unsigned int *)t55);
    t65 = (t63 | t64);
    t66 = (~(t65));
    t67 = (t62 & t66);
    if (t67 != 0)
        goto LAB24;

LAB21:    if (t65 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t53) = 1;

LAB24:    memset(t50, 0, 8);
    t69 = (t53 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (~(t70));
    t72 = *((unsigned int *)t53);
    t73 = (t72 & t71);
    t74 = (t73 & 1U);
    if (t74 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t69) != 0)
        goto LAB27;

LAB28:    t76 = (t50 + 4);
    t77 = *((unsigned int *)t50);
    t78 = *((unsigned int *)t76);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB29;

LAB30:    t92 = *((unsigned int *)t50);
    t93 = (~(t92));
    t94 = *((unsigned int *)t76);
    t95 = (t93 || t94);
    if (t95 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t76) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t50) > 0)
        goto LAB35;

LAB36:    memcpy(t49, t96, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 10, t33, 10, t49, 10);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

LAB23:    t68 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t50) = 1;
    goto LAB28;

LAB27:    t75 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB28;

LAB29:    t81 = (t0 + 16448);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    memset(t80, 0, 8);
    t84 = (t80 + 4);
    t85 = (t83 + 4);
    t86 = *((unsigned int *)t83);
    t87 = (t86 >> 3);
    *((unsigned int *)t80) = t87;
    t88 = *((unsigned int *)t85);
    t89 = (t88 >> 3);
    *((unsigned int *)t84) = t89;
    t90 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t90 & 1023U);
    t91 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t91 & 1023U);
    goto LAB30;

LAB31:    t98 = (t0 + 6768U);
    t99 = *((char **)t98);
    t98 = ((char*)((ng7)));
    memset(t100, 0, 8);
    t101 = (t99 + 4);
    t102 = (t98 + 4);
    t103 = *((unsigned int *)t99);
    t104 = *((unsigned int *)t98);
    t105 = (t103 ^ t104);
    t106 = *((unsigned int *)t101);
    t107 = *((unsigned int *)t102);
    t108 = (t106 ^ t107);
    t109 = (t105 | t108);
    t110 = *((unsigned int *)t101);
    t111 = *((unsigned int *)t102);
    t112 = (t110 | t111);
    t113 = (~(t112));
    t114 = (t109 & t113);
    if (t114 != 0)
        goto LAB41;

LAB38:    if (t112 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t100) = 1;

LAB41:    memset(t97, 0, 8);
    t116 = (t100 + 4);
    t117 = *((unsigned int *)t116);
    t118 = (~(t117));
    t119 = *((unsigned int *)t100);
    t120 = (t119 & t118);
    t121 = (t120 & 1U);
    if (t121 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t116) != 0)
        goto LAB44;

LAB45:    t123 = (t97 + 4);
    t124 = *((unsigned int *)t97);
    t125 = *((unsigned int *)t123);
    t126 = (t124 || t125);
    if (t126 > 0)
        goto LAB46;

LAB47:    t139 = *((unsigned int *)t97);
    t140 = (~(t139));
    t141 = *((unsigned int *)t123);
    t142 = (t140 || t141);
    if (t142 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t123) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t97) > 0)
        goto LAB52;

LAB53:    memcpy(t96, t143, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t49, 10, t80, 10, t96, 10);
    goto LAB37;

LAB35:    memcpy(t49, t80, 8);
    goto LAB37;

LAB40:    t115 = (t100 + 4);
    *((unsigned int *)t100) = 1;
    *((unsigned int *)t115) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t97) = 1;
    goto LAB45;

LAB44:    t122 = (t97 + 4);
    *((unsigned int *)t97) = 1;
    *((unsigned int *)t122) = 1;
    goto LAB45;

LAB46:    t128 = (t0 + 16448);
    t129 = (t128 + 56U);
    t130 = *((char **)t129);
    memset(t127, 0, 8);
    t131 = (t127 + 4);
    t132 = (t130 + 4);
    t133 = *((unsigned int *)t130);
    t134 = (t133 >> 3);
    *((unsigned int *)t127) = t134;
    t135 = *((unsigned int *)t132);
    t136 = (t135 >> 3);
    *((unsigned int *)t131) = t136;
    t137 = *((unsigned int *)t127);
    *((unsigned int *)t127) = (t137 & 1023U);
    t138 = *((unsigned int *)t131);
    *((unsigned int *)t131) = (t138 & 1023U);
    goto LAB47;

LAB48:    t144 = (t0 + 16448);
    t145 = (t144 + 56U);
    t146 = *((char **)t145);
    memset(t143, 0, 8);
    t147 = (t143 + 4);
    t148 = (t146 + 4);
    t149 = *((unsigned int *)t146);
    t150 = (t149 >> 7);
    *((unsigned int *)t143) = t150;
    t151 = *((unsigned int *)t148);
    t152 = (t151 >> 7);
    *((unsigned int *)t147) = t152;
    t153 = *((unsigned int *)t143);
    *((unsigned int *)t143) = (t153 & 1023U);
    t154 = *((unsigned int *)t147);
    *((unsigned int *)t147) = (t154 & 1023U);
    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t96, 10, t127, 10, t143, 10);
    goto LAB54;

LAB52:    memcpy(t96, t127, 8);
    goto LAB54;

}

static void Always_30529_42(char *t0)
{
    char t8[8];
    char t25[8];
    char t26[8];
    char t27[8];
    char t30[8];
    char t46[8];
    char t47[8];
    char t57[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    int t24;
    char *t28;
    unsigned int t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;

LAB0:    t1 = (t0 + 29376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30529, ng0);
    t2 = (t0 + 35296);
    *((int *)t2) = 1;
    t3 = (t0 + 29408);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30529, ng0);

LAB5:    t4 = (t0 + 1168);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 29184);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(30531, ng0);

LAB8:    xsi_set_current_line(30531, ng0);

LAB9:    xsi_set_current_line(30537, ng0);
    t6 = (t0 + 35312);
    *((int *)t6) = 1;
    t7 = (t0 + 29408);
    *((char **)t7) = t6;
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB6:    t4 = (t0 + 29184);
    xsi_vlog_dispose_process_subprogram_invocation(t4);
    goto LAB2;

LAB10:    xsi_set_current_line(30538, ng0);
    t2 = (t0 + 10928U);
    t3 = *((char **)t2);
    t2 = (t0 + 10888U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 16928);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    xsi_vlog_generic_get_index_select_value(t8, 1, t3, t5, 2, t9, 32, 1);
    t10 = (t0 + 16608);
    xsi_vlogvar_assign_value(t10, t8, 0, 0, 1);
    xsi_set_current_line(30539, ng0);
    t2 = (t0 + 16608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t5) == 0)
        goto LAB11;

LAB13:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;

LAB14:    t7 = (t8 + 4);
    t9 = (t4 + 4);
    t16 = *((unsigned int *)t4);
    t17 = (~(t16));
    *((unsigned int *)t8) = t17;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB16;

LAB15:    t22 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t22 & 1U);
    t23 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t23 & 1U);
    t10 = (t0 + 16768);
    xsi_vlogvar_assign_value(t10, t8, 0, 0, 1);
    xsi_set_current_line(30547, ng0);
    t2 = (t0 + 6768U);
    t3 = *((char **)t2);

LAB17:    t2 = ((char*)((ng3)));
    t24 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t24 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng2)));
    t24 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t24 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng7)));
    t24 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t24 == 1)
        goto LAB22;

LAB23:
LAB24:    xsi_set_current_line(30568, ng0);
    xsi_set_current_line(30568, ng0);
    t2 = (t0 + 1792);
    t4 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_minus(t8, 32, t4, 32, t2, 32);
    t5 = (t0 + 17888);
    xsi_vlogvar_assign_value(t5, t8, 0, 0, 32);

LAB64:    t2 = (t0 + 17888);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 16928);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memset(t8, 0, 8);
    xsi_vlog_signed_greater(t8, 32, t5, 32, t9, 32);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB65;

LAB66:    goto LAB8;

LAB11:    *((unsigned int *)t8) = 1;
    goto LAB14;

LAB16:    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    *((unsigned int *)t8) = (t18 | t19);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t9);
    *((unsigned int *)t7) = (t20 | t21);
    goto LAB15;

LAB18:    xsi_set_current_line(30548, ng0);
    t4 = (t0 + 8848U);
    t5 = *((char **)t4);
    memset(t25, 0, 8);
    t4 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t4) != 0)
        goto LAB27;

LAB28:    t7 = (t25 + 4);
    t16 = *((unsigned int *)t25);
    t17 = *((unsigned int *)t7);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB29;

LAB30:    t42 = *((unsigned int *)t25);
    t43 = (~(t42));
    t44 = *((unsigned int *)t7);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t7) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t25) > 0)
        goto LAB35;

LAB36:    memcpy(t8, t46, 8);

LAB37:    t69 = (t0 + 16448);
    xsi_vlogvar_assign_value(t69, t8, 0, 0, 17);
    goto LAB24;

LAB20:    xsi_set_current_line(30553, ng0);
    t4 = (t0 + 8848U);
    t5 = *((char **)t4);
    memset(t25, 0, 8);
    t4 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t4) != 0)
        goto LAB40;

LAB41:    t7 = (t25 + 4);
    t16 = *((unsigned int *)t25);
    t17 = *((unsigned int *)t7);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB42;

LAB43:    t42 = *((unsigned int *)t25);
    t43 = (~(t42));
    t44 = *((unsigned int *)t7);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t7) > 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t25) > 0)
        goto LAB48;

LAB49:    memcpy(t8, t46, 8);

LAB50:    t69 = (t0 + 16448);
    xsi_vlogvar_assign_value(t69, t8, 0, 0, 17);
    goto LAB24;

LAB22:    xsi_set_current_line(30559, ng0);
    t4 = (t0 + 8848U);
    t5 = *((char **)t4);
    memset(t25, 0, 8);
    t4 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t4) != 0)
        goto LAB53;

LAB54:    t7 = (t25 + 4);
    t16 = *((unsigned int *)t25);
    t17 = *((unsigned int *)t7);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB55;

LAB56:    t42 = *((unsigned int *)t25);
    t43 = (~(t42));
    t44 = *((unsigned int *)t7);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t7) > 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t25) > 0)
        goto LAB61;

LAB62:    memcpy(t8, t46, 8);

LAB63:    t69 = (t0 + 16448);
    xsi_vlogvar_assign_value(t69, t8, 0, 0, 17);
    goto LAB24;

LAB25:    *((unsigned int *)t25) = 1;
    goto LAB28;

LAB27:    t6 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB28;

LAB29:    t9 = (t0 + 6448U);
    t10 = *((char **)t9);
    memset(t27, 0, 8);
    t9 = (t27 + 4);
    t28 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = (t19 >> 0);
    *((unsigned int *)t27) = t20;
    t21 = *((unsigned int *)t28);
    t22 = (t21 >> 0);
    *((unsigned int *)t9) = t22;
    t23 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t23 & 1023U);
    t29 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t29 & 1023U);
    t31 = (t0 + 16448);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t30, 0, 8);
    t34 = (t30 + 4);
    t35 = (t33 + 4);
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t30) = t37;
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t34) = t39;
    t40 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t40 & 7U);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t41 & 7U);
    xsi_vlogtype_concat(t26, 17, 13, 2U, t30, 3, t27, 10);
    goto LAB30;

LAB31:    t48 = (t0 + 6448U);
    t49 = *((char **)t48);
    memset(t47, 0, 8);
    t48 = (t47 + 4);
    t50 = (t49 + 4);
    t51 = *((unsigned int *)t49);
    t52 = (t51 >> 0);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t50);
    t54 = (t53 >> 0);
    *((unsigned int *)t48) = t54;
    t55 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t55 & 1023U);
    t56 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t56 & 1023U);
    t58 = (t0 + 16448);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    memset(t57, 0, 8);
    t61 = (t57 + 4);
    t62 = (t60 + 4);
    t63 = *((unsigned int *)t60);
    t64 = (t63 >> 2);
    *((unsigned int *)t57) = t64;
    t65 = *((unsigned int *)t62);
    t66 = (t65 >> 2);
    *((unsigned int *)t61) = t66;
    t67 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t67 & 7U);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t68 & 7U);
    xsi_vlogtype_concat(t46, 17, 13, 2U, t57, 3, t47, 10);
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t8, 17, t26, 17, t46, 17);
    goto LAB37;

LAB35:    memcpy(t8, t26, 8);
    goto LAB37;

LAB38:    *((unsigned int *)t25) = 1;
    goto LAB41;

LAB40:    t6 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB41;

LAB42:    t9 = (t0 + 6448U);
    t10 = *((char **)t9);
    memset(t27, 0, 8);
    t9 = (t27 + 4);
    t28 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = (t19 >> 0);
    *((unsigned int *)t27) = t20;
    t21 = *((unsigned int *)t28);
    t22 = (t21 >> 0);
    *((unsigned int *)t9) = t22;
    t23 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t23 & 1023U);
    t29 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t29 & 1023U);
    t31 = (t0 + 16448);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t30, 0, 8);
    t34 = (t30 + 4);
    t35 = (t33 + 4);
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t30) = t37;
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t34) = t39;
    t40 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t40 & 7U);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t41 & 7U);
    xsi_vlogtype_concat(t26, 17, 13, 2U, t30, 3, t27, 10);
    goto LAB43;

LAB44:    t48 = (t0 + 6448U);
    t49 = *((char **)t48);
    memset(t47, 0, 8);
    t48 = (t47 + 4);
    t50 = (t49 + 4);
    t51 = *((unsigned int *)t49);
    t52 = (t51 >> 0);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t50);
    t54 = (t53 >> 0);
    *((unsigned int *)t48) = t54;
    t55 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t55 & 1023U);
    t56 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t56 & 1023U);
    t58 = (t0 + 16448);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    memset(t57, 0, 8);
    t61 = (t57 + 4);
    t62 = (t60 + 4);
    t63 = *((unsigned int *)t60);
    t64 = (t63 >> 2);
    *((unsigned int *)t57) = t64;
    t65 = *((unsigned int *)t62);
    t66 = (t65 >> 2);
    *((unsigned int *)t61) = t66;
    t67 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t67 & 7U);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t68 & 7U);
    xsi_vlogtype_concat(t46, 17, 13, 2U, t57, 3, t47, 10);
    goto LAB45;

LAB46:    xsi_vlog_unsigned_bit_combine(t8, 17, t26, 17, t46, 17);
    goto LAB50;

LAB48:    memcpy(t8, t26, 8);
    goto LAB50;

LAB51:    *((unsigned int *)t25) = 1;
    goto LAB54;

LAB53:    t6 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB54;

LAB55:    t9 = (t0 + 6448U);
    t10 = *((char **)t9);
    memset(t27, 0, 8);
    t9 = (t27 + 4);
    t28 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = (t19 >> 0);
    *((unsigned int *)t27) = t20;
    t21 = *((unsigned int *)t28);
    t22 = (t21 >> 0);
    *((unsigned int *)t9) = t22;
    t23 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t23 & 1023U);
    t29 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t29 & 1023U);
    t31 = (t0 + 16448);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t30, 0, 8);
    t34 = (t30 + 4);
    t35 = (t33 + 4);
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t30) = t37;
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t34) = t39;
    t40 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t40 & 15U);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t41 & 15U);
    xsi_vlogtype_concat(t26, 17, 14, 2U, t30, 4, t27, 10);
    goto LAB56;

LAB57:    t48 = (t0 + 6448U);
    t49 = *((char **)t48);
    memset(t47, 0, 8);
    t48 = (t47 + 4);
    t50 = (t49 + 4);
    t51 = *((unsigned int *)t49);
    t52 = (t51 >> 0);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t50);
    t54 = (t53 >> 0);
    *((unsigned int *)t48) = t54;
    t55 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t55 & 1023U);
    t56 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t56 & 1023U);
    t58 = (t0 + 16448);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    memset(t57, 0, 8);
    t61 = (t57 + 4);
    t62 = (t60 + 4);
    t63 = *((unsigned int *)t60);
    t64 = (t63 >> 2);
    *((unsigned int *)t57) = t64;
    t65 = *((unsigned int *)t62);
    t66 = (t65 >> 2);
    *((unsigned int *)t61) = t66;
    t67 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t67 & 7U);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t68 & 7U);
    xsi_vlogtype_concat(t46, 17, 13, 2U, t57, 3, t47, 10);
    goto LAB58;

LAB59:    xsi_vlog_unsigned_bit_combine(t8, 17, t26, 17, t46, 17);
    goto LAB63;

LAB61:    memcpy(t8, t26, 8);
    goto LAB63;

LAB65:    xsi_set_current_line(30568, ng0);

LAB67:    xsi_set_current_line(30569, ng0);
    t28 = (t0 + 35328);
    *((int *)t28) = 1;
    t31 = (t0 + 29408);
    *((char **)t31) = t28;
    *((char **)t1) = &&LAB68;
    goto LAB1;

LAB68:    xsi_set_current_line(30570, ng0);
    t32 = (t0 + 10928U);
    t33 = *((char **)t32);
    t32 = (t0 + 10888U);
    t34 = (t32 + 72U);
    t35 = *((char **)t34);
    t48 = (t0 + 17888);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    xsi_vlog_generic_get_index_select_value(t25, 1, t33, t35, 2, t50, 32, 1);
    t58 = (t0 + 16608);
    xsi_vlogvar_assign_value(t58, t25, 0, 0, 1);
    xsi_set_current_line(30571, ng0);
    t2 = (t0 + 16608);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t6 = (t5 + 4);
    t11 = *((unsigned int *)t6);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB72;

LAB70:    if (*((unsigned int *)t6) == 0)
        goto LAB69;

LAB71:    t7 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t7) = 1;

LAB72:    t9 = (t8 + 4);
    t10 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    *((unsigned int *)t8) = t17;
    *((unsigned int *)t9) = 0;
    if (*((unsigned int *)t10) != 0)
        goto LAB74;

LAB73:    t22 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t22 & 1U);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t23 & 1U);
    t28 = (t0 + 16768);
    xsi_vlogvar_assign_value(t28, t8, 0, 0, 1);
    xsi_set_current_line(30568, ng0);
    t2 = (t0 + 17888);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_minus(t8, 32, t5, 32, t6, 32);
    t7 = (t0 + 17888);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB64;

LAB69:    *((unsigned int *)t8) = 1;
    goto LAB72;

LAB74:    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t10);
    *((unsigned int *)t8) = (t18 | t19);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t10);
    *((unsigned int *)t9) = (t20 | t21);
    goto LAB73;

LAB75:    t2 = (t0 + 1168);
    xsi_vlog_namedbase_popprocess(t2);
    goto LAB6;

}

static void Always_30582_43(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 29624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30582, ng0);
    t2 = (t0 + 35344);
    *((int *)t2) = 1;
    t3 = (t0 + 29656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30582, ng0);

LAB5:    xsi_set_current_line(30589, ng0);
    t4 = (t0 + 7088U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(30589, ng0);

LAB9:    xsi_set_current_line(30590, ng0);
    t11 = (t0 + 29432);
    xsi_process_wait(t11, 0LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(30592, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 12768);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 1);
    xsi_set_current_line(30593, ng0);
    t2 = (t0 + 29432);
    xsi_process_wait(t2, 1LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(30593, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 12768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB8;

}

static void Always_30609_44(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 29872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30609, ng0);
    t2 = (t0 + 35360);
    *((int *)t2) = 1;
    t3 = (t0 + 29904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30609, ng0);

LAB5:    xsi_set_current_line(30610, ng0);
    t4 = (t0 + 29680);
    t5 = (t0 + 3256);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);

LAB8:    t7 = (t0 + 29776);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB10:    if (t15 != 0)
        goto LAB11;

LAB6:    t8 = (t0 + 3256);
    xsi_vlog_subprogram_popinvocation(t8);

LAB7:    t16 = (t0 + 29776);
    t17 = *((char **)t16);
    t16 = (t0 + 3256);
    t18 = (t0 + 29680);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    goto LAB2;

LAB9:;
LAB11:    t7 = (t0 + 29872U);
    *((char **)t7) = &&LAB8;
    goto LAB1;

}

static void Always_30613_45(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;

LAB0:    t1 = (t0 + 30120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30613, ng0);
    t2 = (t0 + 35376);
    *((int *)t2) = 1;
    t3 = (t0 + 30152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30613, ng0);

LAB5:    xsi_set_current_line(30614, ng0);
    t4 = (t0 + 5488U);
    t5 = *((char **)t4);
    t4 = (t0 + 5328U);
    t6 = *((char **)t4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 & t9);
    *((unsigned int *)t7) = t10;
    t4 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB6;

LAB7:
LAB8:    t38 = (t7 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t7);
    t42 = (t41 & t40);
    t43 = (t42 != 0);
    if (t43 > 0)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB6:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = (t5 + 4);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t5);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (~(t28));
    t30 = (t23 & t25);
    t31 = (t27 & t29);
    t32 = (~(t30));
    t33 = (~(t31));
    t34 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t34 & t32);
    t35 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t35 & t33);
    t36 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t36 & t32);
    t37 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t37 & t33);
    goto LAB8;

LAB9:    xsi_set_current_line(30614, ng0);

LAB12:    xsi_set_current_line(30615, ng0);
    t44 = (t0 + 29928);
    t45 = (t0 + 3256);
    t46 = xsi_create_subprogram_invocation(t44, 0, t0, t45, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t45, t46);

LAB15:    t47 = (t0 + 30024);
    t48 = *((char **)t47);
    t49 = (t48 + 80U);
    t50 = *((char **)t49);
    t51 = (t50 + 272U);
    t52 = *((char **)t51);
    t53 = (t52 + 0U);
    t54 = *((char **)t53);
    t55 = ((int  (*)(char *, char *))t54)(t0, t48);

LAB17:    if (t55 != 0)
        goto LAB18;

LAB13:    t48 = (t0 + 3256);
    xsi_vlog_subprogram_popinvocation(t48);

LAB14:    t56 = (t0 + 30024);
    t57 = *((char **)t56);
    t56 = (t0 + 3256);
    t58 = (t0 + 29928);
    t59 = 0;
    xsi_delete_subprogram_invocation(t56, t57, t0, t58, t59);
    xsi_set_current_line(30616, ng0);
    t2 = (t0 + 29928);
    xsi_process_wait(t2, 0LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB16:;
LAB18:    t47 = (t0 + 30120U);
    *((char **)t47) = &&LAB15;
    goto LAB1;

LAB19:    xsi_set_current_line(30618, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 12608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(30619, ng0);
    t2 = (t0 + 29928);
    xsi_process_wait(t2, 1LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(30619, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 12608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB11;

}

static void Cont_30635_46(char *t0)
{
    char t5[8];
    char t36[8];
    char t55[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
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
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    int t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;

LAB0:    t1 = (t0 + 30368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30635, ng0);
    t2 = (t0 + 8368U);
    t3 = *((char **)t2);
    t2 = (t0 + 8528U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 & t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t37 = (t0 + 8688U);
    t38 = *((char **)t37);
    memset(t36, 0, 8);
    t37 = (t38 + 4);
    t39 = *((unsigned int *)t37);
    t40 = (~(t39));
    t41 = *((unsigned int *)t38);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t37) == 0)
        goto LAB7;

LAB9:    t44 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t44) = 1;

LAB10:    t45 = (t36 + 4);
    t46 = (t38 + 4);
    t47 = *((unsigned int *)t38);
    t48 = (~(t47));
    *((unsigned int *)t36) = t48;
    *((unsigned int *)t45) = 0;
    if (*((unsigned int *)t46) != 0)
        goto LAB12;

LAB11:    t53 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t53 & 1U);
    t54 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t54 & 1U);
    t56 = *((unsigned int *)t5);
    t57 = *((unsigned int *)t36);
    t58 = (t56 & t57);
    *((unsigned int *)t55) = t58;
    t59 = (t5 + 4);
    t60 = (t36 + 4);
    t61 = (t55 + 4);
    t62 = *((unsigned int *)t59);
    t63 = *((unsigned int *)t60);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = *((unsigned int *)t61);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB13;

LAB14:
LAB15:    t87 = (t0 + 36352);
    t88 = (t87 + 56U);
    t89 = *((char **)t88);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    memset(t91, 0, 8);
    t92 = 1U;
    t93 = t92;
    t94 = (t55 + 4);
    t95 = *((unsigned int *)t55);
    t92 = (t92 & t95);
    t96 = *((unsigned int *)t94);
    t93 = (t93 & t96);
    t97 = (t91 + 4);
    t98 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t98 | t92);
    t99 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t99 | t93);
    xsi_driver_vfirst_trans_delayed(t87, 0, 0, 50LL, 0);
    t100 = (t0 + 35392);
    *((int *)t100) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = (t21 & t23);
    t29 = (t25 & t27);
    t30 = (~(t28));
    t31 = (~(t29));
    t32 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t32 & t30);
    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & t31);
    t34 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t34 & t30);
    t35 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t35 & t31);
    goto LAB6;

LAB7:    *((unsigned int *)t36) = 1;
    goto LAB10;

LAB12:    t49 = *((unsigned int *)t36);
    t50 = *((unsigned int *)t46);
    *((unsigned int *)t36) = (t49 | t50);
    t51 = *((unsigned int *)t45);
    t52 = *((unsigned int *)t46);
    *((unsigned int *)t45) = (t51 | t52);
    goto LAB11;

LAB13:    t67 = *((unsigned int *)t55);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t55) = (t67 | t68);
    t69 = (t5 + 4);
    t70 = (t36 + 4);
    t71 = *((unsigned int *)t5);
    t72 = (~(t71));
    t73 = *((unsigned int *)t69);
    t74 = (~(t73));
    t75 = *((unsigned int *)t36);
    t76 = (~(t75));
    t77 = *((unsigned int *)t70);
    t78 = (~(t77));
    t79 = (t72 & t74);
    t80 = (t76 & t78);
    t81 = (~(t79));
    t82 = (~(t80));
    t83 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t83 & t81);
    t84 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t84 & t82);
    t85 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t85 & t81);
    t86 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t86 & t82);
    goto LAB15;

}

static void Cont_30637_47(char *t0)
{
    char t5[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
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
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;

LAB0:    t1 = (t0 + 30616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30637, ng0);
    t2 = (t0 + 8368U);
    t3 = *((char **)t2);
    t2 = (t0 + 8528U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 & t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t36 = (t0 + 8688U);
    t37 = *((char **)t36);
    t39 = *((unsigned int *)t5);
    t40 = *((unsigned int *)t37);
    t41 = (t39 & t40);
    *((unsigned int *)t38) = t41;
    t36 = (t5 + 4);
    t42 = (t37 + 4);
    t43 = (t38 + 4);
    t44 = *((unsigned int *)t36);
    t45 = *((unsigned int *)t42);
    t46 = (t44 | t45);
    *((unsigned int *)t43) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB7;

LAB8:
LAB9:    t69 = (t0 + 36416);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    memset(t73, 0, 8);
    t74 = 1U;
    t75 = t74;
    t76 = (t38 + 4);
    t77 = *((unsigned int *)t38);
    t74 = (t74 & t77);
    t78 = *((unsigned int *)t76);
    t75 = (t75 & t78);
    t79 = (t73 + 4);
    t80 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t80 | t74);
    t81 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t81 | t75);
    xsi_driver_vfirst_trans_delayed(t69, 0, 0, 50LL, 0);
    t82 = (t0 + 35408);
    *((int *)t82) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = (t21 & t23);
    t29 = (t25 & t27);
    t30 = (~(t28));
    t31 = (~(t29));
    t32 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t32 & t30);
    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & t31);
    t34 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t34 & t30);
    t35 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t35 & t31);
    goto LAB6;

LAB7:    t49 = *((unsigned int *)t38);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t38) = (t49 | t50);
    t51 = (t5 + 4);
    t52 = (t37 + 4);
    t53 = *((unsigned int *)t5);
    t54 = (~(t53));
    t55 = *((unsigned int *)t51);
    t56 = (~(t55));
    t57 = *((unsigned int *)t37);
    t58 = (~(t57));
    t59 = *((unsigned int *)t52);
    t60 = (~(t59));
    t61 = (t54 & t56);
    t62 = (t58 & t60);
    t63 = (~(t61));
    t64 = (~(t62));
    t65 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t65 & t63);
    t66 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t66 & t64);
    t67 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t67 & t63);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t64);
    goto LAB9;

}

static void Always_30651_48(char *t0)
{
    char t6[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;

LAB0:    t1 = (t0 + 30864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30651, ng0);
    t2 = (t0 + 35424);
    *((int *)t2) = 1;
    t3 = (t0 + 30896);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30651, ng0);

LAB5:    xsi_set_current_line(30652, ng0);
    t4 = (t0 + 9008U);
    t5 = *((char **)t4);
    t4 = (t0 + 5168U);
    t7 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t7 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t4) == 0)
        goto LAB6;

LAB8:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;

LAB9:    t14 = (t6 + 4);
    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (~(t16));
    *((unsigned int *)t6) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB11;

LAB10:    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t25 = *((unsigned int *)t5);
    t26 = *((unsigned int *)t6);
    t27 = (t25 | t26);
    *((unsigned int *)t24) = t27;
    t28 = (t5 + 4);
    t29 = (t6 + 4);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t28);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB12;

LAB13:
LAB14:    t52 = (t24 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t24);
    t56 = (t55 & t54);
    t57 = (t56 != 0);
    if (t57 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(30654, ng0);
    t2 = (t0 + 4688U);
    t3 = *((char **)t2);
    t2 = (t0 + 4528U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t6, 2, 2, 2U, t4, 1, t3, 1);

LAB19:    t2 = ((char*)((ng3)));
    t43 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t43 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng2)));
    t43 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t43 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng7)));
    t43 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t43 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng11)));
    t43 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t43 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng20)));
    t43 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t43 == 1)
        goto LAB28;

LAB29:
LAB31:
LAB30:    xsi_set_current_line(30660, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 17248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB32:
LAB17:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB11:    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t6) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB10;

LAB12:    t36 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t24) = (t36 | t37);
    t38 = (t5 + 4);
    t39 = (t6 + 4);
    t40 = *((unsigned int *)t38);
    t41 = (~(t40));
    t42 = *((unsigned int *)t5);
    t43 = (t42 & t41);
    t44 = *((unsigned int *)t39);
    t45 = (~(t44));
    t46 = *((unsigned int *)t6);
    t47 = (t46 & t45);
    t48 = (~(t43));
    t49 = (~(t47));
    t50 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t50 & t48);
    t51 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t51 & t49);
    goto LAB14;

LAB15:    xsi_set_current_line(30652, ng0);

LAB18:    xsi_set_current_line(30653, ng0);
    t58 = ((char*)((ng3)));
    t59 = (t0 + 17248);
    xsi_vlogvar_assign_value(t59, t58, 0, 0, 1);
    goto LAB17;

LAB20:    xsi_set_current_line(30655, ng0);
    t5 = ((char*)((ng3)));
    t7 = (t0 + 17248);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    goto LAB32;

LAB22:    xsi_set_current_line(30656, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 17248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB32;

LAB24:    xsi_set_current_line(30657, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 17248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB32;

LAB26:    xsi_set_current_line(30658, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 17248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB32;

LAB28:    xsi_set_current_line(30659, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 17248);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB32;

}

static void Cont_30668_49(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 31112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30668, ng0);
    t2 = (t0 + 17248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 36480);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans_delayed(t5, 0, 0, 20LL, 0);
    t18 = (t0 + 35440);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_30673_50(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    int t20;

LAB0:    t1 = (t0 + 31360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30673, ng0);
    t2 = (t0 + 35456);
    *((int *)t2) = 1;
    t3 = (t0 + 31392);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30673, ng0);

LAB5:    xsi_set_current_line(30674, ng0);
    t4 = (t0 + 5648U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(30676, ng0);

LAB12:    xsi_set_current_line(30677, ng0);
    t2 = (t0 + 4368U);
    t3 = *((char **)t2);
    t2 = (t0 + 12288);
    t4 = (t0 + 12288);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t14 = (t13 + 4);
    t6 = *((unsigned int *)t14);
    t20 = (!(t6));
    if (t20 == 1)
        goto LAB13;

LAB14:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(30674, ng0);

LAB9:    xsi_set_current_line(30675, ng0);
    t11 = (t0 + 4368U);
    t12 = *((char **)t11);
    t11 = (t0 + 12288);
    t14 = (t0 + 12288);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t13, t16, 2, t17, 32, 1);
    t18 = (t13 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    if (t20 == 1)
        goto LAB10;

LAB11:    goto LAB8;

LAB10:    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t13), 1, 50LL);
    goto LAB11;

LAB13:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t13), 1, 50LL);
    goto LAB14;

}

static void NetReassign_30425_51(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 31608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30425, ng0);
    t3 = 0;
    t2 = ((char*)((ng5)));
    t4 = (t0 + 41184);
    if (*((int *)t4) > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    t5 = (t0 + 16128);
    xsi_vlogvar_assignassignvalue(t5, t2, 0, 0, 0, 1, ((int*)(t4)));
    t3 = 1;
    goto LAB5;

}

static void NetReassign_30427_52(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 31856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30427, ng0);
    t3 = 0;
    t2 = (t0 + 12128);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 41188);
    if (*((int *)t6) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t9 = (t0 + 35472);
    *((int *)t9) = 0;

LAB8:
LAB1:    return;
LAB4:    t7 = (t0 + 16128);
    xsi_vlogvar_assignassignvalue(t7, t5, 0, 0, 0, 1, ((int*)(t6)));
    t3 = 1;
    goto LAB5;

LAB6:    t8 = (t0 + 35472);
    *((int *)t8) = 1;
    goto LAB8;

}

static void NetReassign_30429_53(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 32104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30429, ng0);
    t3 = 0;
    t2 = (t0 + 5008U);
    t4 = *((char **)t2);
    t2 = (t0 + 41192);
    if (*((int *)t2) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t7 = (t0 + 35488);
    *((int *)t7) = 0;

LAB8:
LAB1:    return;
LAB4:    t5 = (t0 + 16128);
    xsi_vlogvar_assignassignvalue(t5, t4, 0, 0, 0, 1, ((int*)(t2)));
    t3 = 1;
    goto LAB5;

LAB6:    t6 = (t0 + 35488);
    *((int *)t6) = 1;
    goto LAB8;

}

static void NetReassign_30431_54(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 32352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30431, ng0);
    t3 = 0;
    t2 = (t0 + 11808);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 41196);
    if (*((int *)t6) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t9 = (t0 + 35504);
    *((int *)t9) = 0;

LAB8:
LAB1:    return;
LAB4:    t7 = (t0 + 16128);
    xsi_vlogvar_assignassignvalue(t7, t5, 0, 0, 0, 1, ((int*)(t6)));
    t3 = 1;
    goto LAB5;

LAB6:    t8 = (t0 + 35504);
    *((int *)t8) = 1;
    goto LAB8;

}

static void NetReassign_30492_55(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 32600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30492, ng0);
    t3 = 0;
    t2 = (t0 + 16608);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 41200);
    if (*((int *)t6) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t9 = (t0 + 35520);
    *((int *)t9) = 0;

LAB8:
LAB1:    return;
LAB4:    t7 = (t0 + 11328);
    xsi_vlogvar_assignassignvalue(t7, t5, 0, 0, 0, 1, ((int*)(t6)));
    t3 = 1;
    goto LAB5;

LAB6:    t8 = (t0 + 35520);
    *((int *)t8) = 1;
    goto LAB8;

}

static void NetReassign_30493_56(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 32848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30493, ng0);
    t3 = 0;
    t2 = (t0 + 16768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 41204);
    if (*((int *)t6) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t9 = (t0 + 35536);
    *((int *)t9) = 0;

LAB8:
LAB1:    return;
LAB4:    t7 = (t0 + 11488);
    xsi_vlogvar_assignassignvalue(t7, t5, 0, 0, 0, 1, ((int*)(t6)));
    t3 = 1;
    goto LAB5;

LAB6:    t8 = (t0 + 35536);
    *((int *)t8) = 1;
    goto LAB8;

}

static void NetReassign_30501_57(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 33096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30501, ng0);
    t3 = 0;
    t2 = ((char*)((ng2)));
    t4 = (t0 + 41208);
    if (*((int *)t4) > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    t5 = (t0 + 11328);
    xsi_vlogvar_assignassignvalue(t5, t2, 0, 0, 0, 1, ((int*)(t4)));
    t3 = 1;
    goto LAB5;

}

static void NetReassign_30502_58(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 33344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30502, ng0);
    t3 = 0;
    t2 = ((char*)((ng2)));
    t4 = (t0 + 41212);
    if (*((int *)t4) > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    t5 = (t0 + 11488);
    xsi_vlogvar_assignassignvalue(t5, t2, 0, 0, 0, 1, ((int*)(t4)));
    t3 = 1;
    goto LAB5;

}

static void NetReassign_30504_59(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 33592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30504, ng0);
    t3 = 0;
    t2 = ((char*)((ng2)));
    t4 = (t0 + 41216);
    if (*((int *)t4) > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    t5 = (t0 + 11328);
    xsi_vlogvar_assignassignvalue(t5, t2, 0, 0, 0, 1, ((int*)(t4)));
    t3 = 1;
    goto LAB5;

}

static void NetReassign_30505_60(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 33840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30505, ng0);
    t3 = 0;
    t2 = ((char*)((ng2)));
    t4 = (t0 + 41220);
    if (*((int *)t4) > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    t5 = (t0 + 11488);
    xsi_vlogvar_assignassignvalue(t5, t2, 0, 0, 0, 1, ((int*)(t4)));
    t3 = 1;
    goto LAB5;

}

static void NetReassign_30512_61(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 34088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30512, ng0);
    t3 = 0;
    t2 = (t0 + 16608);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 41224);
    if (*((int *)t6) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t9 = (t0 + 35552);
    *((int *)t9) = 0;

LAB8:
LAB1:    return;
LAB4:    t7 = (t0 + 11328);
    xsi_vlogvar_assignassignvalue(t7, t5, 0, 0, 0, 1, ((int*)(t6)));
    t3 = 1;
    goto LAB5;

LAB6:    t8 = (t0 + 35552);
    *((int *)t8) = 1;
    goto LAB8;

}

static void NetReassign_30513_62(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 34336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30513, ng0);
    t3 = 0;
    t2 = (t0 + 16768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 41228);
    if (*((int *)t6) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t9 = (t0 + 35568);
    *((int *)t9) = 0;

LAB8:
LAB1:    return;
LAB4:    t7 = (t0 + 11488);
    xsi_vlogvar_assignassignvalue(t7, t5, 0, 0, 0, 1, ((int*)(t6)));
    t3 = 1;
    goto LAB5;

LAB6:    t8 = (t0 + 35568);
    *((int *)t8) = 1;
    goto LAB8;

}


extern void secureip_m_03042943095891686707_1371489081_init()
{
	static char *pe[] = {(void *)Cont_30022_0,(void *)Cont_30023_1,(void *)Initial_30027_2,(void *)Always_30032_3,(void *)Initial_30078_4,(void *)Initial_30079_5,(void *)Always_30083_6,(void *)Initial_30097_7,(void *)NetDecl_30123_8,(void *)Initial_30128_9,(void *)NetDecl_30146_10,(void *)Initial_30155_11,(void *)Initial_30180_12,(void *)Initial_30195_13,(void *)Initial_30217_14,(void *)Always_30219_15,(void *)Initial_30223_16,(void *)NetDecl_30239_17,(void *)Cont_30247_18,(void *)Initial_30251_19,(void *)Cont_30290_20,(void *)Cont_30291_21,(void *)Initial_30296_22,(void *)Always_30298_23,(void *)Always_30302_24,(void *)Initial_30312_25,(void *)Always_30315_26,(void *)Always_30328_27,(void *)Initial_30353_28,(void *)NetDecl_30370_29,(void *)Initial_30372_30,(void *)Always_30402_31,(void *)Always_30423_32,(void *)Initial_30436_33,(void *)Always_30438_34,(void *)Cont_30442_35,(void *)Always_30465_36,(void *)Always_30478_37,(void *)Always_30487_38,(void *)Initial_30491_39,(void *)Always_30497_40,(void *)Cont_30523_41,(void *)Always_30529_42,(void *)Always_30582_43,(void *)Always_30609_44,(void *)Always_30613_45,(void *)Cont_30635_46,(void *)Cont_30637_47,(void *)Always_30651_48,(void *)Cont_30668_49,(void *)Always_30673_50,(void *)NetReassign_30425_51,(void *)NetReassign_30427_52,(void *)NetReassign_30429_53,(void *)NetReassign_30431_54,(void *)NetReassign_30492_55,(void *)NetReassign_30493_56,(void *)NetReassign_30501_57,(void *)NetReassign_30502_58,(void *)NetReassign_30504_59,(void *)NetReassign_30505_60,(void *)NetReassign_30512_61,(void *)NetReassign_30513_62};
	static char *se[] = {(void *)sp_kill_rx};
	xsi_register_didat("secureip_m_03042943095891686707_1371489081", "isim/myNetworkAurora_isim_beh.exe.sim/secureip/m_03042943095891686707_1371489081.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
