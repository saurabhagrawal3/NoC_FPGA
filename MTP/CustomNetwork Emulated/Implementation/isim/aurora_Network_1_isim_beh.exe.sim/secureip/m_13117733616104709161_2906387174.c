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
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {14U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {9U, 0U};
static unsigned int ng12[] = {10U, 0U};
static unsigned int ng13[] = {11U, 0U};
static unsigned int ng14[] = {12U, 0U};
static unsigned int ng15[] = {13U, 0U};
static unsigned int ng16[] = {15U, 0U};
static int ng17[] = {1, 0};
static int ng18[] = {0, 0};



static void NetDecl_15239_0(char *t0)
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

LAB0:    t1 = (t0 + 12824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15239, ng0);
    t2 = (t0 + 4952U);
    t4 = *((char **)t2);
    t2 = (t0 + 5112U);
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
    t54 = (t0 + 23488);
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
    xsi_driver_vfirst_trans_delayed(t54, 0, 0U, 50LL, 0);
    t67 = (t0 + 22816);
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

static void NetDecl_15255_1(char *t0)
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

LAB0:    t1 = (t0 + 13072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15255, ng0);
    t2 = (t0 + 3192U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
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

LAB7:    t20 = (t0 + 23552);
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
    xsi_driver_vfirst_trans_delayed(t20, 0, 0U, 50LL, 0);
    t33 = (t0 + 22832);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}

static void NetDecl_15256_2(char *t0)
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

LAB0:    t1 = (t0 + 13320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15256, ng0);
    t2 = (t0 + 3192U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
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

LAB7:    t20 = (t0 + 23616);
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
    xsi_driver_vfirst_trans_delayed(t20, 0, 0U, 50LL, 0);
    t33 = (t0 + 22848);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}

static void NetDecl_15257_3(char *t0)
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

LAB0:    t1 = (t0 + 13568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15257, ng0);
    t2 = (t0 + 3192U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
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

LAB7:    t20 = (t0 + 23680);
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
    xsi_driver_vfirst_trans_delayed(t20, 0, 0U, 50LL, 0);
    t33 = (t0 + 22864);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}

static void NetDecl_15258_4(char *t0)
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

LAB0:    t1 = (t0 + 13816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15258, ng0);
    t2 = (t0 + 3192U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
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

LAB7:    t20 = (t0 + 23744);
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
    xsi_driver_vfirst_trans_delayed(t20, 0, 0U, 50LL, 0);
    t33 = (t0 + 22880);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}

static void NetDecl_15260_5(char *t0)
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

LAB0:    t1 = (t0 + 14064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15260, ng0);
    t2 = (t0 + 3352U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
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

LAB7:    t20 = (t0 + 23808);
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
    xsi_driver_vfirst_trans_delayed(t20, 0, 0U, 50LL, 0);
    t33 = (t0 + 22896);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}

static void NetDecl_15261_6(char *t0)
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

LAB0:    t1 = (t0 + 14312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15261, ng0);
    t2 = (t0 + 3352U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
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

LAB7:    t20 = (t0 + 23872);
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
    xsi_driver_vfirst_trans_delayed(t20, 0, 0U, 50LL, 0);
    t33 = (t0 + 22912);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}

static void NetDecl_15262_7(char *t0)
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

LAB0:    t1 = (t0 + 14560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15262, ng0);
    t2 = (t0 + 3352U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
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

LAB7:    t20 = (t0 + 23936);
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
    xsi_driver_vfirst_trans_delayed(t20, 0, 0U, 50LL, 0);
    t33 = (t0 + 22928);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}

static void NetDecl_15263_8(char *t0)
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

LAB0:    t1 = (t0 + 14808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15263, ng0);
    t2 = (t0 + 3352U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
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

LAB7:    t20 = (t0 + 24000);
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
    xsi_driver_vfirst_trans_delayed(t20, 0, 0U, 50LL, 0);
    t33 = (t0 + 22944);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}

static void NetDecl_15273_9(char *t0)
{
    char t3[8];
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
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 15056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15273, ng0);
    t2 = (t0 + 3672U);
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

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t21 = (t0 + 24064);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 1U;
    t27 = t26;
    t28 = (t3 + 4);
    t29 = *((unsigned int *)t3);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans_delayed(t21, 0, 0U, 50LL, 0);
    t34 = (t0 + 22960);
    *((int *)t34) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

}

static void NetDecl_15279_10(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 15304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15279, ng0);
    t2 = (t0 + 5912U);
    t4 = *((char **)t2);
    t2 = (t0 + 5752U);
    t5 = *((char **)t2);
    t2 = (t0 + 5592U);
    t6 = *((char **)t2);
    t2 = (t0 + 5432U);
    t7 = *((char **)t2);
    xsi_vlogtype_concat(t3, 4, 4, 4U, t7, 1, t6, 1, t5, 1, t4, 1);
    t2 = (t0 + 24128);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 15U;
    t13 = t12;
    t14 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t14);
    t13 = (t13 & t16);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 | t12);
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 | t13);
    xsi_driver_vfirst_trans(t2, 0, 3U);
    t20 = (t0 + 22976);
    *((int *)t20) = 1;

LAB1:    return;
}

static void NetDecl_15280_11(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 15552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15280, ng0);
    t2 = (t0 + 6552U);
    t4 = *((char **)t2);
    t2 = (t0 + 6392U);
    t5 = *((char **)t2);
    t2 = (t0 + 6232U);
    t6 = *((char **)t2);
    t2 = (t0 + 6072U);
    t7 = *((char **)t2);
    xsi_vlogtype_concat(t3, 4, 4, 4U, t7, 1, t6, 1, t5, 1, t4, 1);
    t2 = (t0 + 24192);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 15U;
    t13 = t12;
    t14 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t14);
    t13 = (t13 & t16);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 | t12);
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 | t13);
    xsi_driver_vfirst_trans(t2, 0, 3U);
    t20 = (t0 + 22992);
    *((int *)t20) = 1;

LAB1:    return;
}

static void NetDecl_15284_12(char *t0)
{
    char t3[8];
    char t5[8];
    char t9[8];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
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
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;

LAB0:    t1 = (t0 + 15800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15284, ng0);
    t2 = (t0 + 6872U);
    t4 = *((char **)t2);
    t2 = (t0 + 6712U);
    t6 = *((char **)t2);
    t2 = ((char*)((ng1)));
    t7 = ((char*)((ng1)));
    t8 = ((char*)((ng2)));
    xsi_vlogtype_concat(t5, 4, 4, 4U, t8, 1, t7, 1, t2, 1, t6, 1);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 & t11);
    *((unsigned int *)t9) = t12;
    t13 = (t4 + 4);
    t14 = (t5 + 4);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t14);
    t18 = (t16 | t17);
    *((unsigned int *)t15) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB4;

LAB5:
LAB6:    memset(t3, 0, 8);
    t41 = (t9 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (~(t42));
    t44 = *((unsigned int *)t9);
    t45 = (t44 & t43);
    t46 = (t45 & 15U);
    if (t46 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t41) != 0)
        goto LAB9;

LAB10:    t48 = (t0 + 24256);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    memset(t52, 0, 8);
    t53 = 1U;
    t54 = t53;
    t55 = (t3 + 4);
    t56 = *((unsigned int *)t3);
    t53 = (t53 & t56);
    t57 = *((unsigned int *)t55);
    t54 = (t54 & t57);
    t58 = (t52 + 4);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t59 | t53);
    t60 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t60 | t54);
    xsi_driver_vfirst_trans_delayed(t48, 0, 0U, 50LL, 0);
    t61 = (t0 + 23008);
    *((int *)t61) = 1;

LAB1:    return;
LAB4:    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t9) = (t21 | t22);
    t23 = (t4 + 4);
    t24 = (t5 + 4);
    t25 = *((unsigned int *)t4);
    t26 = (~(t25));
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t5);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (~(t31));
    t33 = (t26 & t28);
    t34 = (t30 & t32);
    t35 = (~(t33));
    t36 = (~(t34));
    t37 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t37 & t35);
    t38 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t38 & t36);
    t39 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t39 & t35);
    t40 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t40 & t36);
    goto LAB6;

LAB7:    *((unsigned int *)t3) = 1;
    goto LAB10;

LAB9:    t47 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB10;

}

static void NetDecl_15285_13(char *t0)
{
    char t3[8];
    char t5[8];
    char t9[8];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
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
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;

LAB0:    t1 = (t0 + 16048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15285, ng0);
    t2 = (t0 + 6872U);
    t4 = *((char **)t2);
    t2 = (t0 + 6712U);
    t6 = *((char **)t2);
    t2 = ((char*)((ng2)));
    t7 = ((char*)((ng2)));
    t8 = ((char*)((ng2)));
    xsi_vlogtype_concat(t5, 4, 4, 4U, t8, 1, t7, 1, t2, 1, t6, 1);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 & t11);
    *((unsigned int *)t9) = t12;
    t13 = (t4 + 4);
    t14 = (t5 + 4);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t14);
    t18 = (t16 | t17);
    *((unsigned int *)t15) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB4;

LAB5:
LAB6:    memset(t3, 0, 8);
    t41 = (t9 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (~(t42));
    t44 = *((unsigned int *)t9);
    t45 = (t44 & t43);
    t46 = (t45 & 15U);
    if (t46 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t41) != 0)
        goto LAB9;

LAB10:    t48 = (t0 + 24320);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    memset(t52, 0, 8);
    t53 = 1U;
    t54 = t53;
    t55 = (t3 + 4);
    t56 = *((unsigned int *)t3);
    t53 = (t53 & t56);
    t57 = *((unsigned int *)t55);
    t54 = (t54 & t57);
    t58 = (t52 + 4);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t59 | t53);
    t60 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t60 | t54);
    xsi_driver_vfirst_trans_delayed(t48, 0, 0U, 50LL, 0);
    t61 = (t0 + 23024);
    *((int *)t61) = 1;

LAB1:    return;
LAB4:    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t9) = (t21 | t22);
    t23 = (t4 + 4);
    t24 = (t5 + 4);
    t25 = *((unsigned int *)t4);
    t26 = (~(t25));
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t5);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (~(t31));
    t33 = (t26 & t28);
    t34 = (t30 & t32);
    t35 = (~(t33));
    t36 = (~(t34));
    t37 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t37 & t35);
    t38 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t38 & t36);
    t39 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t39 & t35);
    t40 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t40 & t36);
    goto LAB6;

LAB7:    *((unsigned int *)t3) = 1;
    goto LAB10;

LAB9:    t47 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB10;

}

static void NetDecl_15289_14(char *t0)
{
    char t3[8];
    char t5[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
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
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;

LAB0:    t1 = (t0 + 16296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15289, ng0);
    t2 = (t0 + 7032U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng5)));
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t2);
    t8 = (t6 & t7);
    *((unsigned int *)t5) = t8;
    t9 = (t4 + 4);
    t10 = (t2 + 4);
    t11 = (t5 + 4);
    t12 = *((unsigned int *)t9);
    t13 = *((unsigned int *)t10);
    t14 = (t12 | t13);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB4;

LAB5:
LAB6:    memset(t3, 0, 8);
    t37 = (t5 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t5);
    t41 = (t40 & t39);
    t42 = (t41 & 15U);
    if (t42 != 0)
        goto LAB7;

LAB8:    if (*((unsigned int *)t37) != 0)
        goto LAB9;

LAB10:    t44 = (t0 + 24384);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memset(t48, 0, 8);
    t49 = 1U;
    t50 = t49;
    t51 = (t3 + 4);
    t52 = *((unsigned int *)t3);
    t49 = (t49 & t52);
    t53 = *((unsigned int *)t51);
    t50 = (t50 & t53);
    t54 = (t48 + 4);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t55 | t49);
    t56 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t56 | t50);
    xsi_driver_vfirst_trans_delayed(t44, 0, 0U, 50LL, 0);
    t57 = (t0 + 23040);
    *((int *)t57) = 1;

LAB1:    return;
LAB4:    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t5) = (t17 | t18);
    t19 = (t4 + 4);
    t20 = (t2 + 4);
    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (~(t23));
    t25 = *((unsigned int *)t2);
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
    t35 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t35 & t31);
    t36 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t36 & t32);
    goto LAB6;

LAB7:    *((unsigned int *)t3) = 1;
    goto LAB10;

LAB9:    t43 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB10;

}

static void NetDecl_15291_15(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 16544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15291, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 24448);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans_delayed(t3, 0, 0U, 50LL, 0);

LAB1:    return;
}

static void NetDecl_15297_16(char *t0)
{
    char t3[8];
    char t21[8];
    char t40[8];
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
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
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
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;

LAB0:    t1 = (t0 + 16792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15297, ng0);
    t2 = (t0 + 5912U);
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

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t22 = (t0 + 6552U);
    t23 = *((char **)t22);
    memset(t21, 0, 8);
    t22 = (t23 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t23);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t22) == 0)
        goto LAB10;

LAB12:    t29 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t29) = 1;

LAB13:    t30 = (t21 + 4);
    t31 = (t23 + 4);
    t32 = *((unsigned int *)t23);
    t33 = (~(t32));
    *((unsigned int *)t21) = t33;
    *((unsigned int *)t30) = 0;
    if (*((unsigned int *)t31) != 0)
        goto LAB15;

LAB14:    t38 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t38 & 1U);
    t39 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t39 & 1U);
    t41 = *((unsigned int *)t3);
    t42 = *((unsigned int *)t21);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = (t3 + 4);
    t45 = (t21 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB16;

LAB17:
LAB18:    t68 = (t0 + 24512);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    memset(t72, 0, 8);
    t73 = 1U;
    t74 = t73;
    t75 = (t40 + 4);
    t76 = *((unsigned int *)t40);
    t73 = (t73 & t76);
    t77 = *((unsigned int *)t75);
    t74 = (t74 & t77);
    t78 = (t72 + 4);
    t79 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t79 | t73);
    t80 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t80 | t74);
    xsi_driver_vfirst_trans_delayed(t68, 0, 0U, 50LL, 0);
    t81 = (t0 + 23056);
    *((int *)t81) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

LAB10:    *((unsigned int *)t21) = 1;
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t21);
    t35 = *((unsigned int *)t31);
    *((unsigned int *)t21) = (t34 | t35);
    t36 = *((unsigned int *)t30);
    t37 = *((unsigned int *)t31);
    *((unsigned int *)t30) = (t36 | t37);
    goto LAB14;

LAB16:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t3 + 4);
    t55 = (t21 + 4);
    t56 = *((unsigned int *)t54);
    t57 = (~(t56));
    t58 = *((unsigned int *)t3);
    t59 = (t58 & t57);
    t60 = *((unsigned int *)t55);
    t61 = (~(t60));
    t62 = *((unsigned int *)t21);
    t63 = (t62 & t61);
    t64 = (~(t59));
    t65 = (~(t63));
    t66 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t66 & t64);
    t67 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t67 & t65);
    goto LAB18;

}

static void Cont_15301_17(char *t0)
{
    char t3[8];
    char t21[8];
    char t22[8];
    char t41[8];
    char t43[8];
    char t68[8];
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
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
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
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t42;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    int t92;
    int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;

LAB0:    t1 = (t0 + 17040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15301, ng0);
    t2 = (t0 + 3512U);
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

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t23 = (t0 + 4312U);
    t24 = *((char **)t23);
    memset(t22, 0, 8);
    t23 = (t24 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t24);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t31 = (t22 + 4);
    t32 = *((unsigned int *)t22);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB14;

LAB15:    t37 = *((unsigned int *)t22);
    t38 = (~(t37));
    t39 = *((unsigned int *)t31);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t31) > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t22) > 0)
        goto LAB20;

LAB21:    memcpy(t21, t41, 8);

LAB22:    t69 = *((unsigned int *)t3);
    t70 = *((unsigned int *)t21);
    t71 = (t69 & t70);
    *((unsigned int *)t68) = t71;
    t72 = (t3 + 4);
    t73 = (t21 + 4);
    t74 = (t68 + 4);
    t75 = *((unsigned int *)t72);
    t76 = *((unsigned int *)t73);
    t77 = (t75 | t76);
    *((unsigned int *)t74) = t77;
    t78 = *((unsigned int *)t74);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB29;

LAB30:
LAB31:    t100 = (t0 + 24576);
    t101 = (t100 + 56U);
    t102 = *((char **)t101);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    memset(t104, 0, 8);
    t105 = 1U;
    t106 = t105;
    t107 = (t68 + 4);
    t108 = *((unsigned int *)t68);
    t105 = (t105 & t108);
    t109 = *((unsigned int *)t107);
    t106 = (t106 & t109);
    t110 = (t104 + 4);
    t111 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t111 | t105);
    t112 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t112 | t106);
    xsi_driver_vfirst_trans_delayed(t100, 0, 0, 50LL, 0);
    t113 = (t0 + 23072);
    *((int *)t113) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

LAB10:    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB12:    t30 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB13;

LAB14:    t35 = (t0 + 7192U);
    t36 = *((char **)t35);
    goto LAB15;

LAB16:    t35 = (t0 + 4152U);
    t42 = *((char **)t35);
    memset(t43, 0, 8);
    t35 = (t43 + 4);
    t44 = (t42 + 4);
    t45 = *((unsigned int *)t42);
    t46 = (t45 >> 4);
    t47 = (t46 & 1);
    *((unsigned int *)t43) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 >> 4);
    t50 = (t49 & 1);
    *((unsigned int *)t35) = t50;
    memset(t41, 0, 8);
    t51 = (t43 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t43);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB26;

LAB24:    if (*((unsigned int *)t51) == 0)
        goto LAB23;

LAB25:    t57 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t57) = 1;

LAB26:    t58 = (t41 + 4);
    t59 = (t43 + 4);
    t60 = *((unsigned int *)t43);
    t61 = (~(t60));
    *((unsigned int *)t41) = t61;
    *((unsigned int *)t58) = 0;
    if (*((unsigned int *)t59) != 0)
        goto LAB28;

LAB27:    t66 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t66 & 1U);
    t67 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t67 & 1U);
    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t21, 1, t36, 1, t41, 1);
    goto LAB22;

LAB20:    memcpy(t21, t36, 8);
    goto LAB22;

LAB23:    *((unsigned int *)t41) = 1;
    goto LAB26;

LAB28:    t62 = *((unsigned int *)t41);
    t63 = *((unsigned int *)t59);
    *((unsigned int *)t41) = (t62 | t63);
    t64 = *((unsigned int *)t58);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t58) = (t64 | t65);
    goto LAB27;

LAB29:    t80 = *((unsigned int *)t68);
    t81 = *((unsigned int *)t74);
    *((unsigned int *)t68) = (t80 | t81);
    t82 = (t3 + 4);
    t83 = (t21 + 4);
    t84 = *((unsigned int *)t3);
    t85 = (~(t84));
    t86 = *((unsigned int *)t82);
    t87 = (~(t86));
    t88 = *((unsigned int *)t21);
    t89 = (~(t88));
    t90 = *((unsigned int *)t83);
    t91 = (~(t90));
    t92 = (t85 & t87);
    t93 = (t89 & t91);
    t94 = (~(t92));
    t95 = (~(t93));
    t96 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t96 & t94);
    t97 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t97 & t95);
    t98 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t98 & t94);
    t99 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t99 & t95);
    goto LAB31;

}

static void Cont_15303_18(char *t0)
{
    char t3[8];
    char t21[8];
    char t22[8];
    char t41[8];
    char t43[8];
    char t68[8];
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
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
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
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t42;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    int t92;
    int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;

LAB0:    t1 = (t0 + 17288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15303, ng0);
    t2 = (t0 + 3512U);
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

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t23 = (t0 + 4312U);
    t24 = *((char **)t23);
    memset(t22, 0, 8);
    t23 = (t24 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t24);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t31 = (t22 + 4);
    t32 = *((unsigned int *)t22);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB14;

LAB15:    t37 = *((unsigned int *)t22);
    t38 = (~(t37));
    t39 = *((unsigned int *)t31);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t31) > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t22) > 0)
        goto LAB20;

LAB21:    memcpy(t21, t41, 8);

LAB22:    t69 = *((unsigned int *)t3);
    t70 = *((unsigned int *)t21);
    t71 = (t69 & t70);
    *((unsigned int *)t68) = t71;
    t72 = (t3 + 4);
    t73 = (t21 + 4);
    t74 = (t68 + 4);
    t75 = *((unsigned int *)t72);
    t76 = *((unsigned int *)t73);
    t77 = (t75 | t76);
    *((unsigned int *)t74) = t77;
    t78 = *((unsigned int *)t74);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB29;

LAB30:
LAB31:    t100 = (t0 + 24640);
    t101 = (t100 + 56U);
    t102 = *((char **)t101);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    memset(t104, 0, 8);
    t105 = 1U;
    t106 = t105;
    t107 = (t68 + 4);
    t108 = *((unsigned int *)t68);
    t105 = (t105 & t108);
    t109 = *((unsigned int *)t107);
    t106 = (t106 & t109);
    t110 = (t104 + 4);
    t111 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t111 | t105);
    t112 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t112 | t106);
    xsi_driver_vfirst_trans_delayed(t100, 0, 0, 50LL, 0);
    t113 = (t0 + 23088);
    *((int *)t113) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

LAB10:    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB12:    t30 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB13;

LAB14:    t35 = (t0 + 7352U);
    t36 = *((char **)t35);
    goto LAB15;

LAB16:    t35 = (t0 + 4152U);
    t42 = *((char **)t35);
    memset(t43, 0, 8);
    t35 = (t43 + 4);
    t44 = (t42 + 4);
    t45 = *((unsigned int *)t42);
    t46 = (t45 >> 3);
    t47 = (t46 & 1);
    *((unsigned int *)t43) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 >> 3);
    t50 = (t49 & 1);
    *((unsigned int *)t35) = t50;
    memset(t41, 0, 8);
    t51 = (t43 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t43);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB26;

LAB24:    if (*((unsigned int *)t51) == 0)
        goto LAB23;

LAB25:    t57 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t57) = 1;

LAB26:    t58 = (t41 + 4);
    t59 = (t43 + 4);
    t60 = *((unsigned int *)t43);
    t61 = (~(t60));
    *((unsigned int *)t41) = t61;
    *((unsigned int *)t58) = 0;
    if (*((unsigned int *)t59) != 0)
        goto LAB28;

LAB27:    t66 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t66 & 1U);
    t67 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t67 & 1U);
    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t21, 1, t36, 1, t41, 1);
    goto LAB22;

LAB20:    memcpy(t21, t36, 8);
    goto LAB22;

LAB23:    *((unsigned int *)t41) = 1;
    goto LAB26;

LAB28:    t62 = *((unsigned int *)t41);
    t63 = *((unsigned int *)t59);
    *((unsigned int *)t41) = (t62 | t63);
    t64 = *((unsigned int *)t58);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t58) = (t64 | t65);
    goto LAB27;

LAB29:    t80 = *((unsigned int *)t68);
    t81 = *((unsigned int *)t74);
    *((unsigned int *)t68) = (t80 | t81);
    t82 = (t3 + 4);
    t83 = (t21 + 4);
    t84 = *((unsigned int *)t3);
    t85 = (~(t84));
    t86 = *((unsigned int *)t82);
    t87 = (~(t86));
    t88 = *((unsigned int *)t21);
    t89 = (~(t88));
    t90 = *((unsigned int *)t83);
    t91 = (~(t90));
    t92 = (t85 & t87);
    t93 = (t89 & t91);
    t94 = (~(t92));
    t95 = (~(t93));
    t96 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t96 & t94);
    t97 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t97 & t95);
    t98 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t98 & t94);
    t99 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t99 & t95);
    goto LAB31;

}

static void Cont_15305_19(char *t0)
{
    char t3[8];
    char t21[8];
    char t22[8];
    char t41[8];
    char t43[8];
    char t68[8];
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
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
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
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t42;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    int t92;
    int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;

LAB0:    t1 = (t0 + 17536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15305, ng0);
    t2 = (t0 + 3512U);
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

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t23 = (t0 + 4312U);
    t24 = *((char **)t23);
    memset(t22, 0, 8);
    t23 = (t24 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t24);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t31 = (t22 + 4);
    t32 = *((unsigned int *)t22);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB14;

LAB15:    t37 = *((unsigned int *)t22);
    t38 = (~(t37));
    t39 = *((unsigned int *)t31);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t31) > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t22) > 0)
        goto LAB20;

LAB21:    memcpy(t21, t41, 8);

LAB22:    t69 = *((unsigned int *)t3);
    t70 = *((unsigned int *)t21);
    t71 = (t69 & t70);
    *((unsigned int *)t68) = t71;
    t72 = (t3 + 4);
    t73 = (t21 + 4);
    t74 = (t68 + 4);
    t75 = *((unsigned int *)t72);
    t76 = *((unsigned int *)t73);
    t77 = (t75 | t76);
    *((unsigned int *)t74) = t77;
    t78 = *((unsigned int *)t74);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB29;

LAB30:
LAB31:    t100 = (t0 + 24704);
    t101 = (t100 + 56U);
    t102 = *((char **)t101);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    memset(t104, 0, 8);
    t105 = 1U;
    t106 = t105;
    t107 = (t68 + 4);
    t108 = *((unsigned int *)t68);
    t105 = (t105 & t108);
    t109 = *((unsigned int *)t107);
    t106 = (t106 & t109);
    t110 = (t104 + 4);
    t111 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t111 | t105);
    t112 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t112 | t106);
    xsi_driver_vfirst_trans_delayed(t100, 0, 0, 50LL, 0);
    t113 = (t0 + 23104);
    *((int *)t113) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

LAB10:    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB12:    t30 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB13;

LAB14:    t35 = (t0 + 7512U);
    t36 = *((char **)t35);
    goto LAB15;

LAB16:    t35 = (t0 + 4152U);
    t42 = *((char **)t35);
    memset(t43, 0, 8);
    t35 = (t43 + 4);
    t44 = (t42 + 4);
    t45 = *((unsigned int *)t42);
    t46 = (t45 >> 2);
    t47 = (t46 & 1);
    *((unsigned int *)t43) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 >> 2);
    t50 = (t49 & 1);
    *((unsigned int *)t35) = t50;
    memset(t41, 0, 8);
    t51 = (t43 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t43);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB26;

LAB24:    if (*((unsigned int *)t51) == 0)
        goto LAB23;

LAB25:    t57 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t57) = 1;

LAB26:    t58 = (t41 + 4);
    t59 = (t43 + 4);
    t60 = *((unsigned int *)t43);
    t61 = (~(t60));
    *((unsigned int *)t41) = t61;
    *((unsigned int *)t58) = 0;
    if (*((unsigned int *)t59) != 0)
        goto LAB28;

LAB27:    t66 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t66 & 1U);
    t67 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t67 & 1U);
    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t21, 1, t36, 1, t41, 1);
    goto LAB22;

LAB20:    memcpy(t21, t36, 8);
    goto LAB22;

LAB23:    *((unsigned int *)t41) = 1;
    goto LAB26;

LAB28:    t62 = *((unsigned int *)t41);
    t63 = *((unsigned int *)t59);
    *((unsigned int *)t41) = (t62 | t63);
    t64 = *((unsigned int *)t58);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t58) = (t64 | t65);
    goto LAB27;

LAB29:    t80 = *((unsigned int *)t68);
    t81 = *((unsigned int *)t74);
    *((unsigned int *)t68) = (t80 | t81);
    t82 = (t3 + 4);
    t83 = (t21 + 4);
    t84 = *((unsigned int *)t3);
    t85 = (~(t84));
    t86 = *((unsigned int *)t82);
    t87 = (~(t86));
    t88 = *((unsigned int *)t21);
    t89 = (~(t88));
    t90 = *((unsigned int *)t83);
    t91 = (~(t90));
    t92 = (t85 & t87);
    t93 = (t89 & t91);
    t94 = (~(t92));
    t95 = (~(t93));
    t96 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t96 & t94);
    t97 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t97 & t95);
    t98 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t98 & t94);
    t99 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t99 & t95);
    goto LAB31;

}

static void Cont_15307_20(char *t0)
{
    char t3[8];
    char t21[8];
    char t22[8];
    char t41[8];
    char t43[8];
    char t68[8];
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
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
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
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t42;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    int t92;
    int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;

LAB0:    t1 = (t0 + 17784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15307, ng0);
    t2 = (t0 + 3512U);
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

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t23 = (t0 + 4312U);
    t24 = *((char **)t23);
    memset(t22, 0, 8);
    t23 = (t24 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t24);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t31 = (t22 + 4);
    t32 = *((unsigned int *)t22);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB14;

LAB15:    t37 = *((unsigned int *)t22);
    t38 = (~(t37));
    t39 = *((unsigned int *)t31);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t31) > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t22) > 0)
        goto LAB20;

LAB21:    memcpy(t21, t41, 8);

LAB22:    t69 = *((unsigned int *)t3);
    t70 = *((unsigned int *)t21);
    t71 = (t69 & t70);
    *((unsigned int *)t68) = t71;
    t72 = (t3 + 4);
    t73 = (t21 + 4);
    t74 = (t68 + 4);
    t75 = *((unsigned int *)t72);
    t76 = *((unsigned int *)t73);
    t77 = (t75 | t76);
    *((unsigned int *)t74) = t77;
    t78 = *((unsigned int *)t74);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB29;

LAB30:
LAB31:    t100 = (t0 + 24768);
    t101 = (t100 + 56U);
    t102 = *((char **)t101);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    memset(t104, 0, 8);
    t105 = 1U;
    t106 = t105;
    t107 = (t68 + 4);
    t108 = *((unsigned int *)t68);
    t105 = (t105 & t108);
    t109 = *((unsigned int *)t107);
    t106 = (t106 & t109);
    t110 = (t104 + 4);
    t111 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t111 | t105);
    t112 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t112 | t106);
    xsi_driver_vfirst_trans_delayed(t100, 0, 0, 50LL, 0);
    t113 = (t0 + 23120);
    *((int *)t113) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

LAB10:    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB12:    t30 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB13;

LAB14:    t35 = (t0 + 7672U);
    t36 = *((char **)t35);
    goto LAB15;

LAB16:    t35 = (t0 + 4152U);
    t42 = *((char **)t35);
    memset(t43, 0, 8);
    t35 = (t43 + 4);
    t44 = (t42 + 4);
    t45 = *((unsigned int *)t42);
    t46 = (t45 >> 1);
    t47 = (t46 & 1);
    *((unsigned int *)t43) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 >> 1);
    t50 = (t49 & 1);
    *((unsigned int *)t35) = t50;
    memset(t41, 0, 8);
    t51 = (t43 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t43);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB26;

LAB24:    if (*((unsigned int *)t51) == 0)
        goto LAB23;

LAB25:    t57 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t57) = 1;

LAB26:    t58 = (t41 + 4);
    t59 = (t43 + 4);
    t60 = *((unsigned int *)t43);
    t61 = (~(t60));
    *((unsigned int *)t41) = t61;
    *((unsigned int *)t58) = 0;
    if (*((unsigned int *)t59) != 0)
        goto LAB28;

LAB27:    t66 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t66 & 1U);
    t67 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t67 & 1U);
    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t21, 1, t36, 1, t41, 1);
    goto LAB22;

LAB20:    memcpy(t21, t36, 8);
    goto LAB22;

LAB23:    *((unsigned int *)t41) = 1;
    goto LAB26;

LAB28:    t62 = *((unsigned int *)t41);
    t63 = *((unsigned int *)t59);
    *((unsigned int *)t41) = (t62 | t63);
    t64 = *((unsigned int *)t58);
    t65 = *((unsigned int *)t59);
    *((unsigned int *)t58) = (t64 | t65);
    goto LAB27;

LAB29:    t80 = *((unsigned int *)t68);
    t81 = *((unsigned int *)t74);
    *((unsigned int *)t68) = (t80 | t81);
    t82 = (t3 + 4);
    t83 = (t21 + 4);
    t84 = *((unsigned int *)t3);
    t85 = (~(t84));
    t86 = *((unsigned int *)t82);
    t87 = (~(t86));
    t88 = *((unsigned int *)t21);
    t89 = (~(t88));
    t90 = *((unsigned int *)t83);
    t91 = (~(t90));
    t92 = (t85 & t87);
    t93 = (t89 & t91);
    t94 = (~(t92));
    t95 = (~(t93));
    t96 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t96 & t94);
    t97 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t97 & t95);
    t98 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t98 & t94);
    t99 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t99 & t95);
    goto LAB31;

}

static void Cont_15319_21(char *t0)
{
    char t3[8];
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
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 18032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15319, ng0);
    t2 = (t0 + 3512U);
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

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t21 = (t0 + 24832);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 1U;
    t27 = t26;
    t28 = (t3 + 4);
    t29 = *((unsigned int *)t3);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans_delayed(t21, 0, 0, 50LL, 0);
    t34 = (t0 + 23136);
    *((int *)t34) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

}

static void NetDecl_15347_22(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 18280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15347, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 24896);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 15U);

LAB1:    return;
}

static void NetDecl_15348_23(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 18528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15348, ng0);
    t2 = (t0 + 4472U);
    t3 = *((char **)t2);
    t2 = (t0 + 24960);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 15U);
    t16 = (t0 + 23152);
    *((int *)t16) = 1;

LAB1:    return;
}

static void NetDecl_15349_24(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 18776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15349, ng0);
    t2 = (t0 + 4632U);
    t3 = *((char **)t2);
    t2 = (t0 + 25024);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 15U);
    t16 = (t0 + 23168);
    *((int *)t16) = 1;

LAB1:    return;
}

static void NetDecl_15350_25(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 19024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15350, ng0);
    t2 = (t0 + 4792U);
    t3 = *((char **)t2);
    t2 = (t0 + 25088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 15U);
    t16 = (t0 + 23184);
    *((int *)t16) = 1;

LAB1:    return;
}

static void NetDecl_15358_26(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
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
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;

LAB0:    t1 = (t0 + 19272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15358, ng0);
    t2 = (t0 + 4952U);
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

LAB9:    t35 = *((unsigned int *)t4);
    t36 = (~(t35));
    t37 = *((unsigned int *)t12);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t40, 8);

LAB16:    t39 = (t0 + 25152);
    t41 = (t39 + 56U);
    t42 = *((char **)t41);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    memset(t44, 0, 8);
    t45 = 1U;
    t46 = t45;
    t47 = (t3 + 4);
    t48 = *((unsigned int *)t3);
    t45 = (t45 & t48);
    t49 = *((unsigned int *)t47);
    t46 = (t46 & t49);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t51 | t45);
    t52 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t52 | t46);
    xsi_driver_vfirst_trans_delayed(t39, 0, 0U, 50LL, 0);
    t53 = (t0 + 23200);
    *((int *)t53) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 5112U);
    t18 = *((char **)t17);
    memset(t16, 0, 8);
    t17 = (t18 + 4);
    t19 = *((unsigned int *)t17);
    t20 = (~(t19));
    t21 = *((unsigned int *)t18);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t17) == 0)
        goto LAB17;

LAB19:    t24 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t24) = 1;

LAB20:    t25 = (t16 + 4);
    t26 = (t18 + 4);
    t27 = *((unsigned int *)t18);
    t28 = (~(t27));
    *((unsigned int *)t16) = t28;
    *((unsigned int *)t25) = 0;
    if (*((unsigned int *)t26) != 0)
        goto LAB22;

LAB21:    t33 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t33 & 1U);
    t34 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t34 & 1U);
    goto LAB9;

LAB10:    t39 = (t0 + 3992U);
    t40 = *((char **)t39);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t16, 1, t40, 1);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t16) = 1;
    goto LAB20;

LAB22:    t29 = *((unsigned int *)t16);
    t30 = *((unsigned int *)t26);
    *((unsigned int *)t16) = (t29 | t30);
    t31 = *((unsigned int *)t25);
    t32 = *((unsigned int *)t26);
    *((unsigned int *)t25) = (t31 | t32);
    goto LAB21;

}

static void Always_15360_27(char *t0)
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

LAB0:    t1 = (t0 + 19520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15360, ng0);
    t2 = (t0 + 23216);
    *((int *)t2) = 1;
    t3 = (t0 + 19552);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(15360, ng0);

LAB5:    xsi_set_current_line(15361, ng0);
    t5 = (t0 + 8792U);
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

LAB11:    xsi_set_current_line(15363, ng0);

LAB14:    xsi_set_current_line(15364, ng0);
    t2 = (t0 + 3992U);
    t3 = *((char **)t2);
    t2 = (t0 + 9672);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t21, 0, 8);
    t12 = (t21 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 0);
    *((unsigned int *)t21) = t8;
    t9 = *((unsigned int *)t13);
    t10 = (t9 >> 0);
    *((unsigned int *)t12) = t10;
    t11 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t11 & 31U);
    t14 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t14 & 31U);
    xsi_vlogtype_concat(t4, 6, 6, 2U, t21, 5, t3, 1);
    t19 = (t0 + 9672);
    xsi_vlogvar_wait_assign_value(t19, t4, 0, 0, 6, 50LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(15361, ng0);

LAB13:    xsi_set_current_line(15362, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 9672);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 6, 50LL);
    goto LAB12;

}

static void Cont_15368_28(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
    char t42[8];
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
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;

LAB0:    t1 = (t0 + 19768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15368, ng0);
    t2 = (t0 + 4952U);
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

LAB9:    t35 = *((unsigned int *)t4);
    t36 = (~(t35));
    t37 = *((unsigned int *)t12);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t42, 8);

LAB16:    t51 = (t0 + 25216);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    memset(t55, 0, 8);
    t56 = 1U;
    t57 = t56;
    t58 = (t3 + 4);
    t59 = *((unsigned int *)t3);
    t56 = (t56 & t59);
    t60 = *((unsigned int *)t58);
    t57 = (t57 & t60);
    t61 = (t55 + 4);
    t62 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t62 | t56);
    t63 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t63 | t57);
    xsi_driver_vfirst_trans(t51, 0, 0);
    t64 = (t0 + 23232);
    *((int *)t64) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 5112U);
    t18 = *((char **)t17);
    memset(t16, 0, 8);
    t17 = (t18 + 4);
    t19 = *((unsigned int *)t17);
    t20 = (~(t19));
    t21 = *((unsigned int *)t18);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t17) == 0)
        goto LAB17;

LAB19:    t24 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t24) = 1;

LAB20:    t25 = (t16 + 4);
    t26 = (t18 + 4);
    t27 = *((unsigned int *)t18);
    t28 = (~(t27));
    *((unsigned int *)t16) = t28;
    *((unsigned int *)t25) = 0;
    if (*((unsigned int *)t26) != 0)
        goto LAB22;

LAB21:    t33 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t33 & 1U);
    t34 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t34 & 1U);
    goto LAB9;

LAB10:    t39 = (t0 + 9672);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    memset(t42, 0, 8);
    t43 = (t42 + 4);
    t44 = (t41 + 4);
    t45 = *((unsigned int *)t41);
    t46 = (t45 >> 5);
    t47 = (t46 & 1);
    *((unsigned int *)t42) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 >> 5);
    t50 = (t49 & 1);
    *((unsigned int *)t43) = t50;
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t16, 1, t42, 1);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t16) = 1;
    goto LAB20;

LAB22:    t29 = *((unsigned int *)t16);
    t30 = *((unsigned int *)t26);
    *((unsigned int *)t16) = (t29 | t30);
    t31 = *((unsigned int *)t25);
    t32 = *((unsigned int *)t26);
    *((unsigned int *)t25) = (t31 | t32);
    goto LAB21;

}

static void Always_15396_29(char *t0)
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

LAB0:    t1 = (t0 + 20016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15396, ng0);
    t2 = (t0 + 23248);
    *((int *)t2) = 1;
    t3 = (t0 + 20048);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(15396, ng0);

LAB5:    xsi_set_current_line(15397, ng0);
    t5 = (t0 + 5272U);
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

LAB11:    xsi_set_current_line(15406, ng0);

LAB14:    xsi_set_current_line(15407, ng0);
    t2 = (t0 + 3192U);
    t3 = *((char **)t2);
    t2 = (t0 + 9832);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 50LL);
    xsi_set_current_line(15408, ng0);
    t2 = (t0 + 9832);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 9992);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 2, 50LL);
    xsi_set_current_line(15409, ng0);
    t2 = (t0 + 9992);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 10152);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 2, 50LL);
    xsi_set_current_line(15410, ng0);
    t2 = (t0 + 10152);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 10312);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 2, 50LL);
    xsi_set_current_line(15411, ng0);
    t2 = (t0 + 3352U);
    t3 = *((char **)t2);
    t2 = (t0 + 10472);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 50LL);
    xsi_set_current_line(15412, ng0);
    t2 = (t0 + 10472);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 10632);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 2, 50LL);
    xsi_set_current_line(15413, ng0);
    t2 = (t0 + 10632);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 10792);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 2, 50LL);
    xsi_set_current_line(15414, ng0);
    t2 = (t0 + 10792);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 10952);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 2, 50LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(15397, ng0);

LAB13:    xsi_set_current_line(15398, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 9832);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 2, 50LL);
    xsi_set_current_line(15399, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9992);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 50LL);
    xsi_set_current_line(15400, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10152);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 50LL);
    xsi_set_current_line(15401, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10312);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 50LL);
    xsi_set_current_line(15402, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 50LL);
    xsi_set_current_line(15403, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10632);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 50LL);
    xsi_set_current_line(15404, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10792);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 50LL);
    xsi_set_current_line(15405, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 50LL);
    goto LAB12;

}

static void Always_15431_30(char *t0)
{
    char t4[8];
    char t24[8];
    char t36[8];
    char t47[8];
    char t55[8];
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
    char *t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
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
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;

LAB0:    t1 = (t0 + 20264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15431, ng0);
    t2 = (t0 + 23264);
    *((int *)t2) = 1;
    t3 = (t0 + 20296);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(15431, ng0);

LAB5:    xsi_set_current_line(15432, ng0);
    t5 = (t0 + 8632U);
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

LAB11:    xsi_set_current_line(15434, ng0);
    t2 = (t0 + 9992);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 10152);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memset(t4, 0, 8);
    t19 = (t5 + 4);
    t20 = (t13 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t13);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t19);
    t11 = *((unsigned int *)t20);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t19);
    t17 = *((unsigned int *)t20);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB15;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB17:    memset(t24, 0, 8);
    t25 = (t4 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t25) != 0)
        goto LAB20;

LAB21:    t32 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t32);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB22;

LAB23:    memcpy(t55, t24, 8);

LAB24:    t87 = (t55 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (~(t88));
    t90 = *((unsigned int *)t55);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(15437, ng0);

LAB40:    xsi_set_current_line(15438, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);

LAB38:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(15432, ng0);

LAB13:    xsi_set_current_line(15433, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 11112);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 50LL);
    goto LAB12;

LAB15:    *((unsigned int *)t4) = 1;
    goto LAB17;

LAB16:    t23 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB17;

LAB18:    *((unsigned int *)t24) = 1;
    goto LAB21;

LAB20:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB21;

LAB22:    t37 = (t0 + 11112);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    memset(t36, 0, 8);
    t40 = (t39 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (~(t41));
    t43 = *((unsigned int *)t39);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB28;

LAB26:    if (*((unsigned int *)t40) == 0)
        goto LAB25;

LAB27:    t46 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t46) = 1;

LAB28:    memset(t47, 0, 8);
    t48 = (t36 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t36);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t48) != 0)
        goto LAB31;

LAB32:    t56 = *((unsigned int *)t24);
    t57 = *((unsigned int *)t47);
    t58 = (t56 & t57);
    *((unsigned int *)t55) = t58;
    t59 = (t24 + 4);
    t60 = (t47 + 4);
    t61 = (t55 + 4);
    t62 = *((unsigned int *)t59);
    t63 = *((unsigned int *)t60);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = *((unsigned int *)t61);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB24;

LAB25:    *((unsigned int *)t36) = 1;
    goto LAB28;

LAB29:    *((unsigned int *)t47) = 1;
    goto LAB32;

LAB31:    t54 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB32;

LAB33:    t67 = *((unsigned int *)t55);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t55) = (t67 | t68);
    t69 = (t24 + 4);
    t70 = (t47 + 4);
    t71 = *((unsigned int *)t24);
    t72 = (~(t71));
    t73 = *((unsigned int *)t69);
    t74 = (~(t73));
    t75 = *((unsigned int *)t47);
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
    goto LAB35;

LAB36:    xsi_set_current_line(15435, ng0);

LAB39:    xsi_set_current_line(15436, ng0);
    t93 = ((char*)((ng2)));
    t94 = (t0 + 11112);
    xsi_vlogvar_wait_assign_value(t94, t93, 0, 0, 1, 50LL);
    goto LAB38;

}

static void Always_15442_31(char *t0)
{
    char t4[8];
    char t24[8];
    char t36[8];
    char t47[8];
    char t55[8];
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
    char *t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
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
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;

LAB0:    t1 = (t0 + 20512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15442, ng0);
    t2 = (t0 + 23280);
    *((int *)t2) = 1;
    t3 = (t0 + 20544);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(15442, ng0);

LAB5:    xsi_set_current_line(15443, ng0);
    t5 = (t0 + 8632U);
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

LAB11:    xsi_set_current_line(15445, ng0);
    t2 = (t0 + 10632);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 10792);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memset(t4, 0, 8);
    t19 = (t5 + 4);
    t20 = (t13 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t13);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t19);
    t11 = *((unsigned int *)t20);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t19);
    t17 = *((unsigned int *)t20);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB15;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB17:    memset(t24, 0, 8);
    t25 = (t4 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t25) != 0)
        goto LAB20;

LAB21:    t32 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t32);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB22;

LAB23:    memcpy(t55, t24, 8);

LAB24:    t87 = (t55 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (~(t88));
    t90 = *((unsigned int *)t55);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(15448, ng0);

LAB40:    xsi_set_current_line(15449, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);

LAB38:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(15443, ng0);

LAB13:    xsi_set_current_line(15444, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 11272);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 50LL);
    goto LAB12;

LAB15:    *((unsigned int *)t4) = 1;
    goto LAB17;

LAB16:    t23 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB17;

LAB18:    *((unsigned int *)t24) = 1;
    goto LAB21;

LAB20:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB21;

LAB22:    t37 = (t0 + 11272);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    memset(t36, 0, 8);
    t40 = (t39 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (~(t41));
    t43 = *((unsigned int *)t39);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB28;

LAB26:    if (*((unsigned int *)t40) == 0)
        goto LAB25;

LAB27:    t46 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t46) = 1;

LAB28:    memset(t47, 0, 8);
    t48 = (t36 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t36);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t48) != 0)
        goto LAB31;

LAB32:    t56 = *((unsigned int *)t24);
    t57 = *((unsigned int *)t47);
    t58 = (t56 & t57);
    *((unsigned int *)t55) = t58;
    t59 = (t24 + 4);
    t60 = (t47 + 4);
    t61 = (t55 + 4);
    t62 = *((unsigned int *)t59);
    t63 = *((unsigned int *)t60);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = *((unsigned int *)t61);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB24;

LAB25:    *((unsigned int *)t36) = 1;
    goto LAB28;

LAB29:    *((unsigned int *)t47) = 1;
    goto LAB32;

LAB31:    t54 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB32;

LAB33:    t67 = *((unsigned int *)t55);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t55) = (t67 | t68);
    t69 = (t24 + 4);
    t70 = (t47 + 4);
    t71 = *((unsigned int *)t24);
    t72 = (~(t71));
    t73 = *((unsigned int *)t69);
    t74 = (~(t73));
    t75 = *((unsigned int *)t47);
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
    goto LAB35;

LAB36:    xsi_set_current_line(15446, ng0);

LAB39:    xsi_set_current_line(15447, ng0);
    t93 = ((char*)((ng2)));
    t94 = (t0 + 11272);
    xsi_vlogvar_wait_assign_value(t94, t93, 0, 0, 1, 50LL);
    goto LAB38;

}

static void Always_15460_32(char *t0)
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
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    int t23;

LAB0:    t1 = (t0 + 20760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15460, ng0);
    t2 = (t0 + 23296);
    *((int *)t2) = 1;
    t3 = (t0 + 20792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(15461, ng0);

LAB5:    xsi_set_current_line(15462, ng0);
    t5 = (t0 + 11112);
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
        goto LAB9;

LAB7:    if (*((unsigned int *)t8) == 0)
        goto LAB6;

LAB8:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB9:    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t4);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(15464, ng0);
    t2 = (t0 + 9992);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 10312);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlogtype_concat(t4, 4, 4, 2U, t8, 2, t5, 2);

LAB14:    t14 = ((char*)((ng1)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 4, t14, 4);
    if (t23 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng2)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t23 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng3)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t23 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng4)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t23 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng7)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t23 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng6)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t23 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng8)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t23 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng9)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t23 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng10)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t23 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng11)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t23 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng12)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t23 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng13)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t23 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng14)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t23 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng15)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t23 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng5)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t23 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng16)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t23 == 1)
        goto LAB45;

LAB46:
LAB47:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(15462, ng0);

LAB13:    xsi_set_current_line(15463, ng0);
    t21 = ((char*)((ng1)));
    t22 = (t0 + 11432);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 16, 50LL);
    goto LAB12;

LAB15:    xsi_set_current_line(15465, ng0);
    t15 = ((char*)((ng1)));
    t21 = (t0 + 11432);
    xsi_vlogvar_wait_assign_value(t21, t15, 0, 0, 16, 50LL);
    goto LAB47;

LAB17:    xsi_set_current_line(15466, ng0);
    t3 = (t0 + 8152U);
    t5 = *((char **)t3);
    t3 = (t0 + 11432);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 16, 50LL);
    goto LAB47;

LAB19:    xsi_set_current_line(15467, ng0);
    t3 = (t0 + 8152U);
    t5 = *((char **)t3);
    t3 = (t0 + 11432);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 16, 50LL);
    goto LAB47;

LAB21:    xsi_set_current_line(15468, ng0);
    t3 = (t0 + 8312U);
    t5 = *((char **)t3);
    t3 = (t0 + 11432);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 16, 50LL);
    goto LAB47;

LAB23:    xsi_set_current_line(15469, ng0);
    t3 = (t0 + 8152U);
    t5 = *((char **)t3);
    t3 = (t0 + 11432);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 16, 50LL);
    goto LAB47;

LAB25:    xsi_set_current_line(15470, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 11432);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 16, 50LL);
    goto LAB47;

LAB27:    xsi_set_current_line(15471, ng0);
    t3 = (t0 + 7992U);
    t5 = *((char **)t3);
    t3 = (t0 + 11432);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 16, 50LL);
    goto LAB47;

LAB29:    xsi_set_current_line(15472, ng0);
    t3 = (t0 + 8312U);
    t5 = *((char **)t3);
    t3 = (t0 + 11432);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 16, 50LL);
    goto LAB47;

LAB31:    xsi_set_current_line(15473, ng0);
    t3 = (t0 + 8152U);
    t5 = *((char **)t3);
    t3 = (t0 + 11432);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 16, 50LL);
    goto LAB47;

LAB33:    xsi_set_current_line(15474, ng0);
    t3 = (t0 + 7992U);
    t5 = *((char **)t3);
    t3 = (t0 + 11432);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 16, 50LL);
    goto LAB47;

LAB35:    xsi_set_current_line(15475, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 11432);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 16, 50LL);
    goto LAB47;

LAB37:    xsi_set_current_line(15476, ng0);
    t3 = (t0 + 8312U);
    t5 = *((char **)t3);
    t3 = (t0 + 11432);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 16, 50LL);
    goto LAB47;

LAB39:    xsi_set_current_line(15477, ng0);
    t3 = (t0 + 8472U);
    t5 = *((char **)t3);
    t3 = (t0 + 11432);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 16, 50LL);
    goto LAB47;

LAB41:    xsi_set_current_line(15478, ng0);
    t3 = (t0 + 8472U);
    t5 = *((char **)t3);
    t3 = (t0 + 11432);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 16, 50LL);
    goto LAB47;

LAB43:    xsi_set_current_line(15479, ng0);
    t3 = (t0 + 8472U);
    t5 = *((char **)t3);
    t3 = (t0 + 11432);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 16, 50LL);
    goto LAB47;

LAB45:    xsi_set_current_line(15480, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 11432);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 16, 50LL);
    goto LAB47;

}

static void Always_15484_33(char *t0)
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
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    int t23;

LAB0:    t1 = (t0 + 21008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15484, ng0);
    t2 = (t0 + 23312);
    *((int *)t2) = 1;
    t3 = (t0 + 21040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(15487, ng0);

LAB5:    xsi_set_current_line(15488, ng0);
    t5 = (t0 + 11272);
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
        goto LAB9;

LAB7:    if (*((unsigned int *)t8) == 0)
        goto LAB6;

LAB8:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB9:    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t4);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(15490, ng0);
    t2 = (t0 + 10632);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 10952);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlogtype_concat(t4, 4, 4, 2U, t8, 2, t5, 2);

LAB14:    t14 = ((char*)((ng1)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 4, t14, 4);
    if (t23 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng2)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t23 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng3)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t23 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng4)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t23 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng7)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t23 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng6)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t23 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng8)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t23 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng9)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t23 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng10)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t23 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng11)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t23 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng12)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t23 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng13)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t23 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng14)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t23 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng15)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t23 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng5)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t23 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng16)));
    t23 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t23 == 1)
        goto LAB45;

LAB46:
LAB47:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(15488, ng0);

LAB13:    xsi_set_current_line(15489, ng0);
    t21 = ((char*)((ng1)));
    t22 = (t0 + 11592);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 16, 50LL);
    goto LAB12;

LAB15:    xsi_set_current_line(15491, ng0);
    t15 = ((char*)((ng1)));
    t21 = (t0 + 11592);
    xsi_vlogvar_wait_assign_value(t21, t15, 0, 0, 16, 50LL);
    goto LAB47;

LAB17:    xsi_set_current_line(15492, ng0);
    t3 = (t0 + 7992U);
    t5 = *((char **)t3);
    t3 = (t0 + 11592);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 16, 50LL);
    goto LAB47;

LAB19:    xsi_set_current_line(15493, ng0);
    t3 = (t0 + 7992U);
    t5 = *((char **)t3);
    t3 = (t0 + 11592);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 16, 50LL);
    goto LAB47;

LAB21:    xsi_set_current_line(15494, ng0);
    t3 = (t0 + 8312U);
    t5 = *((char **)t3);
    t3 = (t0 + 11592);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 16, 50LL);
    goto LAB47;

LAB23:    xsi_set_current_line(15495, ng0);
    t3 = (t0 + 7992U);
    t5 = *((char **)t3);
    t3 = (t0 + 11592);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 16, 50LL);
    goto LAB47;

LAB25:    xsi_set_current_line(15496, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 11592);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 16, 50LL);
    goto LAB47;

LAB27:    xsi_set_current_line(15497, ng0);
    t3 = (t0 + 7992U);
    t5 = *((char **)t3);
    t3 = (t0 + 11592);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 16, 50LL);
    goto LAB47;

LAB29:    xsi_set_current_line(15498, ng0);
    t3 = (t0 + 8312U);
    t5 = *((char **)t3);
    t3 = (t0 + 11592);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 16, 50LL);
    goto LAB47;

LAB31:    xsi_set_current_line(15499, ng0);
    t3 = (t0 + 7992U);
    t5 = *((char **)t3);
    t3 = (t0 + 11592);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 16, 50LL);
    goto LAB47;

LAB33:    xsi_set_current_line(15500, ng0);
    t3 = (t0 + 7992U);
    t5 = *((char **)t3);
    t3 = (t0 + 11592);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 16, 50LL);
    goto LAB47;

LAB35:    xsi_set_current_line(15501, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 11592);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 16, 50LL);
    goto LAB47;

LAB37:    xsi_set_current_line(15502, ng0);
    t3 = (t0 + 8312U);
    t5 = *((char **)t3);
    t3 = (t0 + 11592);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 16, 50LL);
    goto LAB47;

LAB39:    xsi_set_current_line(15503, ng0);
    t3 = (t0 + 8472U);
    t5 = *((char **)t3);
    t3 = (t0 + 11592);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 16, 50LL);
    goto LAB47;

LAB41:    xsi_set_current_line(15504, ng0);
    t3 = (t0 + 8472U);
    t5 = *((char **)t3);
    t3 = (t0 + 11592);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 16, 50LL);
    goto LAB47;

LAB43:    xsi_set_current_line(15505, ng0);
    t3 = (t0 + 8472U);
    t5 = *((char **)t3);
    t3 = (t0 + 11592);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 16, 50LL);
    goto LAB47;

LAB45:    xsi_set_current_line(15506, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 11592);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 16, 50LL);
    goto LAB47;

}

static void Cont_15515_34(char *t0)
{
    char t3[8];
    char t4[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
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
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;

LAB0:    t1 = (t0 + 21256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15515, ng0);
    t2 = (t0 + 11432);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 11592);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t11 = (t6 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB5;

LAB4:    t12 = (t9 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t6) > *((unsigned int *)t9))
        goto LAB6;

LAB7:    memset(t4, 0, 8);
    t14 = (t10 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t10);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB12:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB13;

LAB14:    t28 = *((unsigned int *)t4);
    t29 = (~(t28));
    t30 = *((unsigned int *)t21);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t21) > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t4) > 0)
        goto LAB19;

LAB20:    memcpy(t3, t34, 8);

LAB21:    t35 = (t0 + 25280);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    memset(t39, 0, 8);
    t40 = 65535U;
    t41 = t40;
    t42 = (t3 + 4);
    t43 = *((unsigned int *)t3);
    t40 = (t40 & t43);
    t44 = *((unsigned int *)t42);
    t41 = (t41 & t44);
    t45 = (t39 + 4);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t46 | t40);
    t47 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t47 | t41);
    xsi_driver_vfirst_trans_delayed(t35, 0, 15, 50LL, 0);
    t48 = (t0 + 23328);
    *((int *)t48) = 1;

LAB1:    return;
LAB5:    t13 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t10) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t4) = 1;
    goto LAB12;

LAB11:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB12;

LAB13:    t25 = (t0 + 11432);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    goto LAB14;

LAB15:    t32 = (t0 + 11592);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    goto LAB16;

LAB17:    xsi_vlog_unsigned_bit_combine(t3, 16, t27, 16, t34, 16);
    goto LAB21;

LAB19:    memcpy(t3, t27, 8);
    goto LAB21;

}

static void Always_15534_35(char *t0)
{
    char t4[8];
    char t21[8];
    char t42[8];
    char t44[8];
    char t51[8];
    char t59[8];
    char t98[8];
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
    char *t22;
    char *t23;
    char *t24;
    int t25;
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
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    unsigned int t104;
    int t105;

LAB0:    t1 = (t0 + 21504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15534, ng0);
    t2 = (t0 + 23344);
    *((int *)t2) = 1;
    t3 = (t0 + 21536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(15534, ng0);

LAB5:    xsi_set_current_line(15535, ng0);
    t5 = (t0 + 8632U);
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

LAB11:    xsi_set_current_line(15538, ng0);

LAB14:    xsi_set_current_line(15539, ng0);
    t2 = (t0 + 11912);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 0);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    t13 = (t0 + 11912);
    t19 = (t0 + 11912);
    t20 = (t19 + 72U);
    t22 = *((char **)t20);
    t23 = ((char*)((ng17)));
    xsi_vlog_generic_convert_bit_index(t21, t22, 2, t23, 32, 1);
    t24 = (t21 + 4);
    t15 = *((unsigned int *)t24);
    t25 = (!(t15));
    if (t25 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(15540, ng0);
    t2 = (t0 + 8952U);
    t3 = *((char **)t2);
    t2 = (t0 + 11752);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t12 = (t3 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB18;

LAB17:    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB18;

LAB21:    if (*((unsigned int *)t3) < *((unsigned int *)t6))
        goto LAB20;

LAB19:    *((unsigned int *)t4) = 1;

LAB20:    t20 = (t4 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(15542, ng0);
    t2 = (t0 + 11752);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 2);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 2);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 16383U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 16383U);
    t13 = ((char*)((ng18)));
    memset(t21, 0, 8);
    t19 = (t4 + 4);
    t20 = (t13 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t13);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t19);
    t26 = *((unsigned int *)t20);
    t27 = (t18 ^ t26);
    t28 = (t17 | t27);
    t29 = *((unsigned int *)t19);
    t30 = *((unsigned int *)t20);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB27;

LAB26:    if (t31 != 0)
        goto LAB28;

LAB29:    t23 = (t21 + 4);
    t34 = *((unsigned int *)t23);
    t35 = (~(t34));
    t36 = *((unsigned int *)t21);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB30;

LAB31:
LAB32:
LAB24:    xsi_set_current_line(15545, ng0);
    t2 = (t0 + 11752);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 7992U);
    t12 = *((char **)t6);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t13 = (t12 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t12);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t13);
    t18 = (t16 | t17);
    t26 = (~(t18));
    t27 = (t15 & t26);
    if (t27 != 0)
        goto LAB37;

LAB34:    if (t18 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t4) = 1;

LAB37:    memset(t21, 0, 8);
    t20 = (t4 + 4);
    t28 = *((unsigned int *)t20);
    t29 = (~(t28));
    t30 = *((unsigned int *)t4);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t20) != 0)
        goto LAB40;

LAB41:    t23 = (t21 + 4);
    t33 = *((unsigned int *)t21);
    t34 = *((unsigned int *)t23);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB42;

LAB43:    memcpy(t59, t21, 8);

LAB44:    t90 = (t59 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t59);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(15548, ng0);
    t2 = (t0 + 11752);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 7992U);
    t12 = *((char **)t6);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB68;

LAB67:    t13 = (t12 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB68;

LAB71:    if (*((unsigned int *)t5) < *((unsigned int *)t12))
        goto LAB69;

LAB70:    t20 = (t4 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB72;

LAB73:
LAB74:
LAB63:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(15535, ng0);

LAB13:    xsi_set_current_line(15536, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 11752);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 16, 50LL);
    xsi_set_current_line(15537, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 50LL);
    goto LAB12;

LAB15:    xsi_vlogvar_wait_assign_value(t13, t4, 0, *((unsigned int *)t21), 1, 50LL);
    goto LAB16;

LAB18:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB20;

LAB22:    xsi_set_current_line(15540, ng0);

LAB25:    xsi_set_current_line(15541, ng0);
    t22 = (t0 + 8952U);
    t23 = *((char **)t22);
    t22 = (t0 + 11752);
    xsi_vlogvar_wait_assign_value(t22, t23, 0, 0, 16, 50LL);
    goto LAB24;

LAB27:    *((unsigned int *)t21) = 1;
    goto LAB29;

LAB28:    t22 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(15542, ng0);

LAB33:    xsi_set_current_line(15543, ng0);
    t24 = (t0 + 11752);
    t39 = (t24 + 56U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng17)));
    memset(t42, 0, 8);
    xsi_vlog_unsigned_minus(t42, 32, t40, 16, t41, 32);
    t43 = (t0 + 11752);
    xsi_vlogvar_wait_assign_value(t43, t42, 0, 0, 16, 50LL);
    goto LAB32;

LAB36:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB37;

LAB38:    *((unsigned int *)t21) = 1;
    goto LAB41;

LAB40:    t22 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB41;

LAB42:    t24 = (t0 + 8952U);
    t39 = *((char **)t24);
    t24 = (t0 + 11752);
    t40 = (t24 + 56U);
    t41 = *((char **)t40);
    memset(t44, 0, 8);
    t43 = (t39 + 4);
    if (*((unsigned int *)t43) != 0)
        goto LAB46;

LAB45:    t45 = (t41 + 4);
    if (*((unsigned int *)t45) != 0)
        goto LAB46;

LAB49:    if (*((unsigned int *)t39) < *((unsigned int *)t41))
        goto LAB48;

LAB47:    *((unsigned int *)t44) = 1;

LAB48:    memset(t42, 0, 8);
    t47 = (t44 + 4);
    t36 = *((unsigned int *)t47);
    t37 = (~(t36));
    t38 = *((unsigned int *)t44);
    t48 = (t38 & t37);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB53;

LAB51:    if (*((unsigned int *)t47) == 0)
        goto LAB50;

LAB52:    t50 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t50) = 1;

LAB53:    memset(t51, 0, 8);
    t52 = (t42 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t42);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t52) != 0)
        goto LAB56;

LAB57:    t60 = *((unsigned int *)t21);
    t61 = *((unsigned int *)t51);
    t62 = (t60 & t61);
    *((unsigned int *)t59) = t62;
    t63 = (t21 + 4);
    t64 = (t51 + 4);
    t65 = (t59 + 4);
    t66 = *((unsigned int *)t63);
    t67 = *((unsigned int *)t64);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB58;

LAB59:
LAB60:    goto LAB44;

LAB46:    t46 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB48;

LAB50:    *((unsigned int *)t42) = 1;
    goto LAB53;

LAB54:    *((unsigned int *)t51) = 1;
    goto LAB57;

LAB56:    t58 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB57;

LAB58:    t71 = *((unsigned int *)t59);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t59) = (t71 | t72);
    t73 = (t21 + 4);
    t74 = (t51 + 4);
    t75 = *((unsigned int *)t21);
    t76 = (~(t75));
    t77 = *((unsigned int *)t73);
    t78 = (~(t77));
    t79 = *((unsigned int *)t51);
    t80 = (~(t79));
    t81 = *((unsigned int *)t74);
    t82 = (~(t81));
    t25 = (t76 & t78);
    t83 = (t80 & t82);
    t84 = (~(t25));
    t85 = (~(t83));
    t86 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t86 & t84);
    t87 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t87 & t85);
    t88 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t88 & t84);
    t89 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t89 & t85);
    goto LAB60;

LAB61:    xsi_set_current_line(15546, ng0);

LAB64:    xsi_set_current_line(15547, ng0);
    t96 = ((char*)((ng2)));
    t97 = (t0 + 11912);
    t99 = (t0 + 11912);
    t100 = (t99 + 72U);
    t101 = *((char **)t100);
    t102 = ((char*)((ng18)));
    xsi_vlog_generic_convert_bit_index(t98, t101, 2, t102, 32, 1);
    t103 = (t98 + 4);
    t104 = *((unsigned int *)t103);
    t105 = (!(t104));
    if (t105 == 1)
        goto LAB65;

LAB66:    goto LAB63;

LAB65:    xsi_vlogvar_wait_assign_value(t97, t96, 0, *((unsigned int *)t98), 1, 50LL);
    goto LAB66;

LAB68:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB70;

LAB69:    *((unsigned int *)t4) = 1;
    goto LAB70;

LAB72:    xsi_set_current_line(15548, ng0);

LAB75:    xsi_set_current_line(15549, ng0);
    t22 = ((char*)((ng1)));
    t23 = (t0 + 11912);
    t24 = (t0 + 11912);
    t39 = (t24 + 72U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng18)));
    xsi_vlog_generic_convert_bit_index(t21, t40, 2, t41, 32, 1);
    t43 = (t21 + 4);
    t14 = *((unsigned int *)t43);
    t25 = (!(t14));
    if (t25 == 1)
        goto LAB76;

LAB77:    goto LAB74;

LAB76:    xsi_vlogvar_wait_assign_value(t23, t22, 0, *((unsigned int *)t21), 1, 50LL);
    goto LAB77;

}

static void NetDecl_15580_36(char *t0)
{
    char t4[8];
    char t14[8];
    char t22[8];
    char t57[8];
    char t69[8];
    char t78[8];
    char t110[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    int t102;
    int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t125;
    char *t126;
    char *t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;

LAB0:    t1 = (t0 + 21752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15580, ng0);
    t2 = (t0 + 3192U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 3192U);
    t13 = *((char **)t12);
    memset(t14, 0, 8);
    t12 = (t14 + 4);
    t15 = (t13 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t14) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 >> 0);
    t21 = (t20 & 1);
    *((unsigned int *)t12) = t21;
    t23 = *((unsigned int *)t4);
    t24 = *((unsigned int *)t14);
    t25 = (t23 & t24);
    *((unsigned int *)t22) = t25;
    t26 = (t4 + 4);
    t27 = (t14 + 4);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t26);
    t30 = *((unsigned int *)t27);
    t31 = (t29 | t30);
    *((unsigned int *)t28) = t31;
    t32 = *((unsigned int *)t28);
    t33 = (t32 != 0);
    if (t33 == 1)
        goto LAB4;

LAB5:
LAB6:    t54 = (t0 + 9992);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    memset(t57, 0, 8);
    t58 = (t57 + 4);
    t59 = (t56 + 4);
    t60 = *((unsigned int *)t56);
    t61 = (t60 >> 1);
    t62 = (t61 & 1);
    *((unsigned int *)t57) = t62;
    t63 = *((unsigned int *)t59);
    t64 = (t63 >> 1);
    t65 = (t64 & 1);
    *((unsigned int *)t58) = t65;
    t66 = (t0 + 9992);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    memset(t69, 0, 8);
    t70 = (t69 + 4);
    t71 = (t68 + 4);
    t72 = *((unsigned int *)t68);
    t73 = (t72 >> 0);
    t74 = (t73 & 1);
    *((unsigned int *)t69) = t74;
    t75 = *((unsigned int *)t71);
    t76 = (t75 >> 0);
    t77 = (t76 & 1);
    *((unsigned int *)t70) = t77;
    t79 = *((unsigned int *)t57);
    t80 = *((unsigned int *)t69);
    t81 = (t79 & t80);
    *((unsigned int *)t78) = t81;
    t82 = (t57 + 4);
    t83 = (t69 + 4);
    t84 = (t78 + 4);
    t85 = *((unsigned int *)t82);
    t86 = *((unsigned int *)t83);
    t87 = (t85 | t86);
    *((unsigned int *)t84) = t87;
    t88 = *((unsigned int *)t84);
    t89 = (t88 != 0);
    if (t89 == 1)
        goto LAB7;

LAB8:
LAB9:    t111 = *((unsigned int *)t22);
    t112 = *((unsigned int *)t78);
    t113 = (t111 ^ t112);
    *((unsigned int *)t110) = t113;
    t114 = (t22 + 4);
    t115 = (t78 + 4);
    t116 = (t110 + 4);
    t117 = *((unsigned int *)t114);
    t118 = *((unsigned int *)t115);
    t119 = (t117 | t118);
    *((unsigned int *)t116) = t119;
    t120 = *((unsigned int *)t116);
    t121 = (t120 != 0);
    if (t121 == 1)
        goto LAB10;

LAB11:
LAB12:    t124 = (t0 + 25344);
    t125 = (t124 + 56U);
    t126 = *((char **)t125);
    t127 = (t126 + 56U);
    t128 = *((char **)t127);
    memset(t128, 0, 8);
    t129 = 1U;
    t130 = t129;
    t131 = (t110 + 4);
    t132 = *((unsigned int *)t110);
    t129 = (t129 & t132);
    t133 = *((unsigned int *)t131);
    t130 = (t130 & t133);
    t134 = (t128 + 4);
    t135 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t135 | t129);
    t136 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t136 | t130);
    xsi_driver_vfirst_trans_delayed(t124, 0, 0U, 50LL, 0);
    t137 = (t0 + 23360);
    *((int *)t137) = 1;

LAB1:    return;
LAB4:    t34 = *((unsigned int *)t22);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t22) = (t34 | t35);
    t36 = (t4 + 4);
    t37 = (t14 + 4);
    t38 = *((unsigned int *)t4);
    t39 = (~(t38));
    t40 = *((unsigned int *)t36);
    t41 = (~(t40));
    t42 = *((unsigned int *)t14);
    t43 = (~(t42));
    t44 = *((unsigned int *)t37);
    t45 = (~(t44));
    t46 = (t39 & t41);
    t47 = (t43 & t45);
    t48 = (~(t46));
    t49 = (~(t47));
    t50 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t50 & t48);
    t51 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t51 & t49);
    t52 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t52 & t48);
    t53 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t53 & t49);
    goto LAB6;

LAB7:    t90 = *((unsigned int *)t78);
    t91 = *((unsigned int *)t84);
    *((unsigned int *)t78) = (t90 | t91);
    t92 = (t57 + 4);
    t93 = (t69 + 4);
    t94 = *((unsigned int *)t57);
    t95 = (~(t94));
    t96 = *((unsigned int *)t92);
    t97 = (~(t96));
    t98 = *((unsigned int *)t69);
    t99 = (~(t98));
    t100 = *((unsigned int *)t93);
    t101 = (~(t100));
    t102 = (t95 & t97);
    t103 = (t99 & t101);
    t104 = (~(t102));
    t105 = (~(t103));
    t106 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t106 & t104);
    t107 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t107 & t105);
    t108 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t108 & t104);
    t109 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t109 & t105);
    goto LAB9;

LAB10:    t122 = *((unsigned int *)t110);
    t123 = *((unsigned int *)t116);
    *((unsigned int *)t110) = (t122 | t123);
    goto LAB12;

}

static void NetDecl_15583_37(char *t0)
{
    char t4[8];
    char t14[8];
    char t22[8];
    char t57[8];
    char t69[8];
    char t78[8];
    char t110[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    int t102;
    int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t125;
    char *t126;
    char *t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;

LAB0:    t1 = (t0 + 22000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15583, ng0);
    t2 = (t0 + 3352U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 3352U);
    t13 = *((char **)t12);
    memset(t14, 0, 8);
    t12 = (t14 + 4);
    t15 = (t13 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t14) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 >> 0);
    t21 = (t20 & 1);
    *((unsigned int *)t12) = t21;
    t23 = *((unsigned int *)t4);
    t24 = *((unsigned int *)t14);
    t25 = (t23 & t24);
    *((unsigned int *)t22) = t25;
    t26 = (t4 + 4);
    t27 = (t14 + 4);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t26);
    t30 = *((unsigned int *)t27);
    t31 = (t29 | t30);
    *((unsigned int *)t28) = t31;
    t32 = *((unsigned int *)t28);
    t33 = (t32 != 0);
    if (t33 == 1)
        goto LAB4;

LAB5:
LAB6:    t54 = (t0 + 10632);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    memset(t57, 0, 8);
    t58 = (t57 + 4);
    t59 = (t56 + 4);
    t60 = *((unsigned int *)t56);
    t61 = (t60 >> 1);
    t62 = (t61 & 1);
    *((unsigned int *)t57) = t62;
    t63 = *((unsigned int *)t59);
    t64 = (t63 >> 1);
    t65 = (t64 & 1);
    *((unsigned int *)t58) = t65;
    t66 = (t0 + 10632);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    memset(t69, 0, 8);
    t70 = (t69 + 4);
    t71 = (t68 + 4);
    t72 = *((unsigned int *)t68);
    t73 = (t72 >> 0);
    t74 = (t73 & 1);
    *((unsigned int *)t69) = t74;
    t75 = *((unsigned int *)t71);
    t76 = (t75 >> 0);
    t77 = (t76 & 1);
    *((unsigned int *)t70) = t77;
    t79 = *((unsigned int *)t57);
    t80 = *((unsigned int *)t69);
    t81 = (t79 & t80);
    *((unsigned int *)t78) = t81;
    t82 = (t57 + 4);
    t83 = (t69 + 4);
    t84 = (t78 + 4);
    t85 = *((unsigned int *)t82);
    t86 = *((unsigned int *)t83);
    t87 = (t85 | t86);
    *((unsigned int *)t84) = t87;
    t88 = *((unsigned int *)t84);
    t89 = (t88 != 0);
    if (t89 == 1)
        goto LAB7;

LAB8:
LAB9:    t111 = *((unsigned int *)t22);
    t112 = *((unsigned int *)t78);
    t113 = (t111 ^ t112);
    *((unsigned int *)t110) = t113;
    t114 = (t22 + 4);
    t115 = (t78 + 4);
    t116 = (t110 + 4);
    t117 = *((unsigned int *)t114);
    t118 = *((unsigned int *)t115);
    t119 = (t117 | t118);
    *((unsigned int *)t116) = t119;
    t120 = *((unsigned int *)t116);
    t121 = (t120 != 0);
    if (t121 == 1)
        goto LAB10;

LAB11:
LAB12:    t124 = (t0 + 25408);
    t125 = (t124 + 56U);
    t126 = *((char **)t125);
    t127 = (t126 + 56U);
    t128 = *((char **)t127);
    memset(t128, 0, 8);
    t129 = 1U;
    t130 = t129;
    t131 = (t110 + 4);
    t132 = *((unsigned int *)t110);
    t129 = (t129 & t132);
    t133 = *((unsigned int *)t131);
    t130 = (t130 & t133);
    t134 = (t128 + 4);
    t135 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t135 | t129);
    t136 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t136 | t130);
    xsi_driver_vfirst_trans_delayed(t124, 0, 0U, 50LL, 0);
    t137 = (t0 + 23376);
    *((int *)t137) = 1;

LAB1:    return;
LAB4:    t34 = *((unsigned int *)t22);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t22) = (t34 | t35);
    t36 = (t4 + 4);
    t37 = (t14 + 4);
    t38 = *((unsigned int *)t4);
    t39 = (~(t38));
    t40 = *((unsigned int *)t36);
    t41 = (~(t40));
    t42 = *((unsigned int *)t14);
    t43 = (~(t42));
    t44 = *((unsigned int *)t37);
    t45 = (~(t44));
    t46 = (t39 & t41);
    t47 = (t43 & t45);
    t48 = (~(t46));
    t49 = (~(t47));
    t50 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t50 & t48);
    t51 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t51 & t49);
    t52 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t52 & t48);
    t53 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t53 & t49);
    goto LAB6;

LAB7:    t90 = *((unsigned int *)t78);
    t91 = *((unsigned int *)t84);
    *((unsigned int *)t78) = (t90 | t91);
    t92 = (t57 + 4);
    t93 = (t69 + 4);
    t94 = *((unsigned int *)t57);
    t95 = (~(t94));
    t96 = *((unsigned int *)t92);
    t97 = (~(t96));
    t98 = *((unsigned int *)t69);
    t99 = (~(t98));
    t100 = *((unsigned int *)t93);
    t101 = (~(t100));
    t102 = (t95 & t97);
    t103 = (t99 & t101);
    t104 = (~(t102));
    t105 = (~(t103));
    t106 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t106 & t104);
    t107 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t107 & t105);
    t108 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t108 & t104);
    t109 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t109 & t105);
    goto LAB9;

LAB10:    t122 = *((unsigned int *)t110);
    t123 = *((unsigned int *)t116);
    *((unsigned int *)t110) = (t122 | t123);
    goto LAB12;

}

static void Cont_15590_38(char *t0)
{
    char t6[8];
    char t33[8];
    char *t1;
    char *t2;
    char *t3;
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
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
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
    int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;

LAB0:    t1 = (t0 + 22248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15590, ng0);
    t2 = (t0 + 8632U);
    t3 = *((char **)t2);
    t2 = (t0 + 9112U);
    t4 = *((char **)t2);
    t2 = (t0 + 9272U);
    t5 = *((char **)t2);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 | t8);
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
LAB6:    t34 = *((unsigned int *)t3);
    t35 = *((unsigned int *)t6);
    t36 = (t34 & t35);
    *((unsigned int *)t33) = t36;
    t37 = (t3 + 4);
    t38 = (t6 + 4);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t37);
    t41 = *((unsigned int *)t38);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB7;

LAB8:
LAB9:    t65 = (t0 + 25472);
    t66 = (t65 + 56U);
    t67 = *((char **)t66);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    memset(t69, 0, 8);
    t70 = 1U;
    t71 = t70;
    t72 = (t33 + 4);
    t73 = *((unsigned int *)t33);
    t70 = (t70 & t73);
    t74 = *((unsigned int *)t72);
    t71 = (t71 & t74);
    t75 = (t69 + 4);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t76 | t70);
    t77 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t77 | t71);
    xsi_driver_vfirst_trans_delayed(t65, 0, 0, 50LL, 0);
    t78 = (t0 + 23392);
    *((int *)t78) = 1;

LAB1:    return;
LAB4:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t6) = (t17 | t18);
    t19 = (t4 + 4);
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = *((unsigned int *)t20);
    t26 = (~(t25));
    t27 = *((unsigned int *)t5);
    t28 = (t27 & t26);
    t29 = (~(t24));
    t30 = (~(t28));
    t31 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t31 & t29);
    t32 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t32 & t30);
    goto LAB6;

LAB7:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t33) = (t45 | t46);
    t47 = (t3 + 4);
    t48 = (t6 + 4);
    t49 = *((unsigned int *)t3);
    t50 = (~(t49));
    t51 = *((unsigned int *)t47);
    t52 = (~(t51));
    t53 = *((unsigned int *)t6);
    t54 = (~(t53));
    t55 = *((unsigned int *)t48);
    t56 = (~(t55));
    t57 = (t50 & t52);
    t58 = (t54 & t56);
    t59 = (~(t57));
    t60 = (~(t58));
    t61 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t61 & t59);
    t62 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t62 & t60);
    t63 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t63 & t59);
    t64 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t64 & t60);
    goto LAB9;

}

static void Cont_15592_39(char *t0)
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

LAB0:    t1 = (t0 + 22496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15592, ng0);
    t2 = (t0 + 11912);
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
    t14 = (t0 + 25536);
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
    t27 = (t0 + 23408);
    *((int *)t27) = 1;

LAB1:    return;
}


extern void secureip_m_13117733616104709161_2906387174_init()
{
	static char *pe[] = {(void *)NetDecl_15239_0,(void *)NetDecl_15255_1,(void *)NetDecl_15256_2,(void *)NetDecl_15257_3,(void *)NetDecl_15258_4,(void *)NetDecl_15260_5,(void *)NetDecl_15261_6,(void *)NetDecl_15262_7,(void *)NetDecl_15263_8,(void *)NetDecl_15273_9,(void *)NetDecl_15279_10,(void *)NetDecl_15280_11,(void *)NetDecl_15284_12,(void *)NetDecl_15285_13,(void *)NetDecl_15289_14,(void *)NetDecl_15291_15,(void *)NetDecl_15297_16,(void *)Cont_15301_17,(void *)Cont_15303_18,(void *)Cont_15305_19,(void *)Cont_15307_20,(void *)Cont_15319_21,(void *)NetDecl_15347_22,(void *)NetDecl_15348_23,(void *)NetDecl_15349_24,(void *)NetDecl_15350_25,(void *)NetDecl_15358_26,(void *)Always_15360_27,(void *)Cont_15368_28,(void *)Always_15396_29,(void *)Always_15431_30,(void *)Always_15442_31,(void *)Always_15460_32,(void *)Always_15484_33,(void *)Cont_15515_34,(void *)Always_15534_35,(void *)NetDecl_15580_36,(void *)NetDecl_15583_37,(void *)Cont_15590_38,(void *)Cont_15592_39};
	xsi_register_didat("secureip_m_13117733616104709161_2906387174", "isim/aurora_Network_1_isim_beh.exe.sim/secureip/m_13117733616104709161_2906387174.didat");
	xsi_register_executes(pe);
}
