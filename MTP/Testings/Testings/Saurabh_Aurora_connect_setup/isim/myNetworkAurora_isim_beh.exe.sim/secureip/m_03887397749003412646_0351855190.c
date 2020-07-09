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
static unsigned int ng1[] = {8U, 7U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {0U, 0U, 0U, 0U};
static int ng5[] = {9, 0};
static int ng6[] = {0, 0};
static int ng7[] = {19, 0};
static int ng8[] = {10, 0};
static unsigned int ng9[] = {3U, 0U};
static int ng10[] = {29, 0};
static int ng11[] = {20, 0};
static unsigned int ng12[] = {2U, 0U};
static int ng13[] = {39, 0};
static int ng14[] = {30, 0};
static int ng15[] = {1, 0};
static int ng16[] = {2, 0};
static int ng17[] = {3, 0};
static int ng18[] = {5, 0};
static unsigned int ng19[] = {4U, 3U};



static void Cont_9561_0(char *t0)
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
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;

LAB0:    t1 = (t0 + 9560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9561, ng0);
    t2 = (t0 + 3448U);
    t3 = *((char **)t2);
    t2 = (t0 + 3608U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 | t7);
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
LAB6:    t32 = (t0 + 14184);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memset(t36, 0, 8);
    t37 = 1U;
    t38 = t37;
    t39 = (t5 + 4);
    t40 = *((unsigned int *)t5);
    t37 = (t37 & t40);
    t41 = *((unsigned int *)t39);
    t38 = (t38 & t41);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t43 | t37);
    t44 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t44 | t38);
    xsi_driver_vfirst_trans_delayed(t32, 0, 0, 50LL, 0);
    t45 = (t0 + 13848);
    *((int *)t45) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (~(t23));
    t29 = (~(t27));
    t30 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t30 & t28);
    t31 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t31 & t29);
    goto LAB6;

}

static void Cont_9562_1(char *t0)
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

LAB0:    t1 = (t0 + 9808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9562, ng0);
    t2 = (t0 + 4088U);
    t4 = *((char **)t2);
    t2 = (t0 + 4408U);
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
    t54 = (t0 + 14248);
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
    xsi_driver_vfirst_trans_delayed(t54, 0, 0, 50LL, 0);
    t67 = (t0 + 13864);
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

static void Cont_9563_2(char *t0)
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
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;

LAB0:    t1 = (t0 + 10056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9563, ng0);
    t2 = (t0 + 3928U);
    t3 = *((char **)t2);
    t2 = (t0 + 4088U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 | t7);
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
LAB6:    t32 = (t0 + 14312);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memset(t36, 0, 8);
    t37 = 1U;
    t38 = t37;
    t39 = (t5 + 4);
    t40 = *((unsigned int *)t5);
    t37 = (t37 & t40);
    t41 = *((unsigned int *)t39);
    t38 = (t38 & t41);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t43 | t37);
    t44 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t44 | t38);
    xsi_driver_vfirst_trans_delayed(t32, 0, 0, 50LL, 0);
    t45 = (t0 + 13880);
    *((int *)t45) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (~(t23));
    t29 = (~(t27));
    t30 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t30 & t28);
    t31 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t31 & t29);
    goto LAB6;

}

static void NetDecl_9567_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t22[8];
    char t23[8];
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
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
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
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 10304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9567, ng0);
    t2 = (t0 + 4088U);
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

LAB9:    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t22, 8);

LAB16:    t35 = (t0 + 14376);
    t42 = (t35 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t45, 0, 8);
    t46 = 1U;
    t47 = t46;
    t48 = (t3 + 4);
    t49 = *((unsigned int *)t3);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t48);
    t47 = (t47 & t50);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 | t46);
    t53 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t53 | t47);
    xsi_driver_vfirst_trans_delayed(t35, 0, 0U, 50LL, 0);
    t54 = (t0 + 13896);
    *((int *)t54) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 4248U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = (t0 + 3128U);
    t24 = *((char **)t16);
    memset(t23, 0, 8);
    t16 = (t24 + 4);
    t25 = *((unsigned int *)t16);
    t26 = (~(t25));
    t27 = *((unsigned int *)t24);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t16) != 0)
        goto LAB19;

LAB20:    t31 = (t23 + 4);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB21;

LAB22:    t37 = *((unsigned int *)t23);
    t38 = (~(t37));
    t39 = *((unsigned int *)t31);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t31) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t23) > 0)
        goto LAB27;

LAB28:    memcpy(t22, t41, 8);

LAB29:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t17, 1, t22, 1);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t23) = 1;
    goto LAB20;

LAB19:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB20;

LAB21:    t35 = (t0 + 1368U);
    t36 = *((char **)t35);
    goto LAB22;

LAB23:    t35 = (t0 + 1208U);
    t41 = *((char **)t35);
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t22, 1, t36, 1, t41, 1);
    goto LAB29;

LAB27:    memcpy(t22, t36, 8);
    goto LAB29;

}

static void NetDecl_9569_4(char *t0)
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

LAB0:    t1 = (t0 + 10552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9569, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 14440);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
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
    xsi_driver_vfirst_trans(t2, 0, 0U);
    t16 = (t0 + 13912);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_9573_5(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 10800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9573, ng0);
    t2 = (t0 + 13928);
    *((int *)t2) = 1;
    t3 = (t0 + 10832);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(9579, ng0);

LAB5:    xsi_set_current_line(9580, ng0);
    t5 = (t0 + 2808U);
    t6 = *((char **)t5);
    t5 = (t0 + 2968U);
    t7 = *((char **)t5);
    t5 = (t0 + 3128U);
    t8 = *((char **)t5);
    xsi_vlogtype_concat(t4, 4, 4, 3U, t8, 1, t7, 2, t6, 1);

LAB6:    t5 = ((char*)((ng1)));
    t9 = xsi_vlog_unsigned_case_xcompare(t4, 4, t5, 4);
    if (t9 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t9 = xsi_vlog_unsigned_case_xcompare(t4, 4, t2, 4);
    if (t9 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t9 = xsi_vlog_unsigned_case_xcompare(t4, 4, t2, 4);
    if (t9 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(9584, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 8168);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 10, 50LL);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(9581, ng0);
    t10 = (t0 + 2328U);
    t11 = *((char **)t10);
    t10 = (t0 + 8168);
    xsi_vlogvar_wait_assign_value(t10, t11, 0, 0, 10, 50LL);
    goto LAB15;

LAB9:    xsi_set_current_line(9582, ng0);
    t3 = (t0 + 1848U);
    t5 = *((char **)t3);
    t3 = (t0 + 8168);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 10, 50LL);
    goto LAB15;

LAB11:    xsi_set_current_line(9583, ng0);
    t3 = (t0 + 2008U);
    t5 = *((char **)t3);
    t3 = (t0 + 8168);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 10, 50LL);
    goto LAB15;

}

static void NetDecl_9588_6(char *t0)
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
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 11048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9588, ng0);
    t2 = (t0 + 2808U);
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

LAB9:    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t22, 8);

LAB16:    t16 = (t0 + 14504);
    t23 = (t16 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t3 + 4);
    t30 = *((unsigned int *)t3);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans_delayed(t16, 0, 0U, 50LL, 0);
    t35 = (t0 + 13944);
    *((int *)t35) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 2488U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = (t0 + 2648U);
    t22 = *((char **)t16);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t17, 1, t22, 1);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

}

static void Always_9617_7(char *t0)
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
    int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;

LAB0:    t1 = (t0 + 11296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9617, ng0);
    t2 = (t0 + 13960);
    *((int *)t2) = 1;
    t3 = (t0 + 11328);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(9620, ng0);

LAB5:    xsi_set_current_line(9621, ng0);
    t4 = (t0 + 6328U);
    t5 = *((char **)t4);
    t4 = (t0 + 6168U);
    t6 = *((char **)t4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 | t9);
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
LAB8:    t34 = (t7 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t7);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB6:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = (t5 + 4);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = *((unsigned int *)t21);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = (~(t25));
    t31 = (~(t29));
    t32 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t32 & t30);
    t33 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t33 & t31);
    goto LAB8;

LAB9:    xsi_set_current_line(9621, ng0);

LAB12:    xsi_set_current_line(9622, ng0);
    t40 = (t0 + 6648U);
    t41 = *((char **)t40);
    t40 = (t0 + 7528);
    xsi_vlogvar_wait_assign_value(t40, t41, 0, 0, 1, 50LL);
    goto LAB11;

}

static void Always_9643_8(char *t0)
{
    char t4[8];
    char t22[8];
    char t23[8];
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
    int t21;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    int t30;
    int t31;
    char *t32;
    int t33;
    int t34;
    int t35;
    unsigned int t36;
    int t37;
    int t38;

LAB0:    t1 = (t0 + 11544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9643, ng0);
    t2 = (t0 + 13976);
    *((int *)t2) = 1;
    t3 = (t0 + 11576);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(9643, ng0);

LAB5:    xsi_set_current_line(9644, ng0);
    t5 = (t0 + 5048U);
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

LAB11:    xsi_set_current_line(9646, ng0);
    t2 = (t0 + 5848U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(9644, ng0);

LAB13:    xsi_set_current_line(9645, ng0);
    t19 = ((char*)((ng4)));
    t20 = (t0 + 7688);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 40, 50LL);
    goto LAB12;

LAB14:    xsi_set_current_line(9646, ng0);

LAB17:    xsi_set_current_line(9647, ng0);
    t5 = (t0 + 5688U);
    t6 = *((char **)t5);

LAB18:    t5 = ((char*)((ng3)));
    t21 = xsi_vlog_unsigned_case_compare(t6, 2, t5, 2);
    if (t21 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng2)));
    t21 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t21 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t21 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t21 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng12)));
    t21 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t21 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB19:    xsi_set_current_line(9649, ng0);
    t12 = (t0 + 4568U);
    t13 = *((char **)t12);
    t12 = (t0 + 7688);
    t19 = (t0 + 7688);
    t20 = (t19 + 72U);
    t24 = *((char **)t20);
    t25 = ((char*)((ng5)));
    t26 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t4, t22, t23, ((int*)(t24)), 2, t25, 32, 1, t26, 32, 1);
    t27 = (t4 + 4);
    t14 = *((unsigned int *)t27);
    t28 = (!(t14));
    t29 = (t22 + 4);
    t15 = *((unsigned int *)t29);
    t30 = (!(t15));
    t31 = (t28 && t30);
    t32 = (t23 + 4);
    t16 = *((unsigned int *)t32);
    t33 = (!(t16));
    t34 = (t31 && t33);
    if (t34 == 1)
        goto LAB28;

LAB29:    goto LAB27;

LAB21:    xsi_set_current_line(9650, ng0);
    t3 = (t0 + 4568U);
    t5 = *((char **)t3);
    t3 = (t0 + 7688);
    t12 = (t0 + 7688);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng7)));
    t24 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t4, t22, t23, ((int*)(t19)), 2, t20, 32, 1, t24, 32, 1);
    t25 = (t4 + 4);
    t7 = *((unsigned int *)t25);
    t28 = (!(t7));
    t26 = (t22 + 4);
    t8 = *((unsigned int *)t26);
    t30 = (!(t8));
    t31 = (t28 && t30);
    t27 = (t23 + 4);
    t9 = *((unsigned int *)t27);
    t33 = (!(t9));
    t34 = (t31 && t33);
    if (t34 == 1)
        goto LAB30;

LAB31:    goto LAB27;

LAB23:    xsi_set_current_line(9651, ng0);
    t3 = (t0 + 4568U);
    t5 = *((char **)t3);
    t3 = (t0 + 7688);
    t12 = (t0 + 7688);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng10)));
    t24 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t4, t22, t23, ((int*)(t19)), 2, t20, 32, 1, t24, 32, 1);
    t25 = (t4 + 4);
    t7 = *((unsigned int *)t25);
    t28 = (!(t7));
    t26 = (t22 + 4);
    t8 = *((unsigned int *)t26);
    t30 = (!(t8));
    t31 = (t28 && t30);
    t27 = (t23 + 4);
    t9 = *((unsigned int *)t27);
    t33 = (!(t9));
    t34 = (t31 && t33);
    if (t34 == 1)
        goto LAB32;

LAB33:    goto LAB27;

LAB25:    xsi_set_current_line(9652, ng0);
    t3 = (t0 + 4568U);
    t5 = *((char **)t3);
    t3 = (t0 + 7688);
    t12 = (t0 + 7688);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng13)));
    t24 = ((char*)((ng14)));
    xsi_vlog_convert_partindices(t4, t22, t23, ((int*)(t19)), 2, t20, 32, 1, t24, 32, 1);
    t25 = (t4 + 4);
    t7 = *((unsigned int *)t25);
    t28 = (!(t7));
    t26 = (t22 + 4);
    t8 = *((unsigned int *)t26);
    t30 = (!(t8));
    t31 = (t28 && t30);
    t27 = (t23 + 4);
    t9 = *((unsigned int *)t27);
    t33 = (!(t9));
    t34 = (t31 && t33);
    if (t34 == 1)
        goto LAB34;

LAB35:    goto LAB27;

LAB28:    t17 = *((unsigned int *)t23);
    t35 = (t17 + 0);
    t18 = *((unsigned int *)t4);
    t36 = *((unsigned int *)t22);
    t37 = (t18 - t36);
    t38 = (t37 + 1);
    xsi_vlogvar_wait_assign_value(t12, t13, t35, *((unsigned int *)t22), t38, 50LL);
    goto LAB29;

LAB30:    t10 = *((unsigned int *)t23);
    t35 = (t10 + 0);
    t11 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t22);
    t37 = (t11 - t14);
    t38 = (t37 + 1);
    xsi_vlogvar_wait_assign_value(t3, t5, t35, *((unsigned int *)t22), t38, 50LL);
    goto LAB31;

LAB32:    t10 = *((unsigned int *)t23);
    t35 = (t10 + 0);
    t11 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t22);
    t37 = (t11 - t14);
    t38 = (t37 + 1);
    xsi_vlogvar_wait_assign_value(t3, t5, t35, *((unsigned int *)t22), t38, 50LL);
    goto LAB33;

LAB34:    t10 = *((unsigned int *)t23);
    t35 = (t10 + 0);
    t11 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t22);
    t37 = (t11 - t14);
    t38 = (t37 + 1);
    xsi_vlogvar_wait_assign_value(t3, t5, t35, *((unsigned int *)t22), t38, 50LL);
    goto LAB35;

}

static void Always_9657_9(char *t0)
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
    int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;

LAB0:    t1 = (t0 + 11792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9657, ng0);
    t2 = (t0 + 13992);
    *((int *)t2) = 1;
    t3 = (t0 + 11824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(9657, ng0);

LAB5:    xsi_set_current_line(9658, ng0);
    t5 = (t0 + 6008U);
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

LAB11:    xsi_set_current_line(9660, ng0);
    t2 = (t0 + 5848U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(9658, ng0);

LAB13:    xsi_set_current_line(9659, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 7848);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 4, 50LL);
    goto LAB12;

LAB14:    xsi_set_current_line(9660, ng0);

LAB17:    xsi_set_current_line(9661, ng0);
    t5 = (t0 + 5688U);
    t6 = *((char **)t5);

LAB18:    t5 = ((char*)((ng3)));
    t21 = xsi_vlog_unsigned_case_compare(t6, 2, t5, 2);
    if (t21 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng2)));
    t21 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t21 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t21 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t21 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng12)));
    t21 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t21 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB19:    xsi_set_current_line(9663, ng0);
    t12 = (t0 + 7528);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    t20 = (t0 + 7848);
    t22 = (t0 + 7848);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t4, t24, 2, t25, 32, 1);
    t26 = (t4 + 4);
    t14 = *((unsigned int *)t26);
    t27 = (!(t14));
    if (t27 == 1)
        goto LAB28;

LAB29:    goto LAB27;

LAB21:    xsi_set_current_line(9664, ng0);
    t3 = (t0 + 7528);
    t5 = (t3 + 56U);
    t12 = *((char **)t5);
    t13 = (t0 + 7848);
    t19 = (t0 + 7848);
    t20 = (t19 + 72U);
    t22 = *((char **)t20);
    t23 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t4, t22, 2, t23, 32, 1);
    t24 = (t4 + 4);
    t7 = *((unsigned int *)t24);
    t27 = (!(t7));
    if (t27 == 1)
        goto LAB30;

LAB31:    goto LAB27;

LAB23:    xsi_set_current_line(9665, ng0);
    t3 = (t0 + 7528);
    t5 = (t3 + 56U);
    t12 = *((char **)t5);
    t13 = (t0 + 7848);
    t19 = (t0 + 7848);
    t20 = (t19 + 72U);
    t22 = *((char **)t20);
    t23 = ((char*)((ng16)));
    xsi_vlog_generic_convert_bit_index(t4, t22, 2, t23, 32, 1);
    t24 = (t4 + 4);
    t7 = *((unsigned int *)t24);
    t27 = (!(t7));
    if (t27 == 1)
        goto LAB32;

LAB33:    goto LAB27;

LAB25:    xsi_set_current_line(9666, ng0);
    t3 = (t0 + 7528);
    t5 = (t3 + 56U);
    t12 = *((char **)t5);
    t13 = (t0 + 7848);
    t19 = (t0 + 7848);
    t20 = (t19 + 72U);
    t22 = *((char **)t20);
    t23 = ((char*)((ng17)));
    xsi_vlog_generic_convert_bit_index(t4, t22, 2, t23, 32, 1);
    t24 = (t4 + 4);
    t7 = *((unsigned int *)t24);
    t27 = (!(t7));
    if (t27 == 1)
        goto LAB34;

LAB35:    goto LAB27;

LAB28:    xsi_vlogvar_wait_assign_value(t20, t19, 0, *((unsigned int *)t4), 1, 50LL);
    goto LAB29;

LAB30:    xsi_vlogvar_wait_assign_value(t13, t12, 0, *((unsigned int *)t4), 1, 50LL);
    goto LAB31;

LAB32:    xsi_vlogvar_wait_assign_value(t13, t12, 0, *((unsigned int *)t4), 1, 50LL);
    goto LAB33;

LAB34:    xsi_vlogvar_wait_assign_value(t13, t12, 0, *((unsigned int *)t4), 1, 50LL);
    goto LAB35;

}

static void Always_9677_10(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;

LAB0:    t1 = (t0 + 12040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9677, ng0);
    t2 = (t0 + 14008);
    *((int *)t2) = 1;
    t3 = (t0 + 12072);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(9677, ng0);

LAB5:    xsi_set_current_line(9678, ng0);
    t4 = (t0 + 5368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(9680, ng0);
    t8 = (t0 + 7688);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t7, 0, 8);
    t11 = (t7 + 4);
    t12 = (t10 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 0);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 0);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 1023U);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 1023U);
    t19 = (t0 + 8328);
    xsi_vlogvar_wait_assign_value(t19, t7, 0, 0, 10, 50LL);
    goto LAB15;

LAB9:    xsi_set_current_line(9681, ng0);
    t3 = (t0 + 7688);
    t4 = (t3 + 56U);
    t8 = *((char **)t4);
    memset(t7, 0, 8);
    t9 = (t7 + 4);
    t10 = (t8 + 4);
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 10);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t10);
    t16 = (t15 >> 10);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 1023U);
    t18 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t18 & 1023U);
    t11 = (t0 + 8328);
    xsi_vlogvar_wait_assign_value(t11, t7, 0, 0, 10, 50LL);
    goto LAB15;

LAB11:    xsi_set_current_line(9682, ng0);
    t3 = (t0 + 7688);
    t4 = (t3 + 56U);
    t8 = *((char **)t4);
    memset(t7, 0, 8);
    t9 = (t7 + 4);
    t10 = (t8 + 4);
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 20);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t10);
    t16 = (t15 >> 20);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 1023U);
    t18 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t18 & 1023U);
    t11 = (t0 + 8328);
    xsi_vlogvar_wait_assign_value(t11, t7, 0, 0, 10, 50LL);
    goto LAB15;

LAB13:    xsi_set_current_line(9683, ng0);
    t3 = (t0 + 7688);
    t4 = (t3 + 56U);
    t8 = *((char **)t4);
    memset(t7, 0, 8);
    t9 = (t7 + 4);
    t10 = (t8 + 4);
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 30);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t10);
    t16 = (t15 >> 30);
    *((unsigned int *)t9) = t16;
    t11 = (t8 + 8);
    t12 = (t8 + 12);
    t17 = *((unsigned int *)t11);
    t18 = (t17 << 2);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 | t18);
    t21 = *((unsigned int *)t12);
    t22 = (t21 << 2);
    t23 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t23 | t22);
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 1023U);
    t25 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t25 & 1023U);
    t19 = (t0 + 8328);
    xsi_vlogvar_wait_assign_value(t19, t7, 0, 0, 10, 50LL);
    goto LAB15;

}

static void Always_9687_11(char *t0)
{
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 12288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9687, ng0);
    t2 = (t0 + 14024);
    *((int *)t2) = 1;
    t3 = (t0 + 12320);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(9687, ng0);

LAB5:    xsi_set_current_line(9688, ng0);
    t4 = (t0 + 5368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(9690, ng0);
    t7 = (t0 + 7848);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t11 = (t10 + 4);
    t12 = (t9 + 4);
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t11) = t18;
    t19 = (t0 + 8648);
    xsi_vlogvar_wait_assign_value(t19, t10, 0, 0, 1, 50LL);
    goto LAB15;

LAB9:    xsi_set_current_line(9691, ng0);
    t3 = (t0 + 7848);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t9 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 1);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 1);
    t18 = (t17 & 1);
    *((unsigned int *)t8) = t18;
    t11 = (t0 + 8648);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 1, 50LL);
    goto LAB15;

LAB11:    xsi_set_current_line(9692, ng0);
    t3 = (t0 + 7848);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t9 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 2);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 2);
    t18 = (t17 & 1);
    *((unsigned int *)t8) = t18;
    t11 = (t0 + 8648);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 1, 50LL);
    goto LAB15;

LAB13:    xsi_set_current_line(9693, ng0);
    t3 = (t0 + 7848);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t9 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 3);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 3);
    t18 = (t17 & 1);
    *((unsigned int *)t8) = t18;
    t11 = (t0 + 8648);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 1, 50LL);
    goto LAB15;

}

static void Always_9697_12(char *t0)
{
    char t4[8];
    char t34[8];
    char t35[8];
    char t36[8];
    char t37[8];
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
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    int t33;
    char *t38;
    char *t39;
    char *t40;

LAB0:    t1 = (t0 + 12536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9697, ng0);
    t2 = (t0 + 14040);
    *((int *)t2) = 1;
    t3 = (t0 + 12568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(9697, ng0);

LAB5:    xsi_set_current_line(9698, ng0);
    t5 = (t0 + 3608U);
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
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(9700, ng0);
    t2 = (t0 + 5528U);
    t3 = *((char **)t2);

LAB16:    t2 = ((char*)((ng3)));
    t33 = xsi_vlog_unsigned_case_zcompare(t3, 3, t2, 3);
    if (t33 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng2)));
    t33 = xsi_vlog_unsigned_case_zcompare(t3, 3, t2, 3);
    if (t33 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng12)));
    t33 = xsi_vlog_unsigned_case_zcompare(t3, 3, t2, 3);
    if (t33 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t33 = xsi_vlog_unsigned_case_zcompare(t3, 3, t2, 3);
    if (t33 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng19)));
    t33 = xsi_vlog_unsigned_case_zcompare(t3, 3, t2, 3);
    if (t33 == 1)
        goto LAB25;

LAB26:
LAB27:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(9698, ng0);

LAB15:    xsi_set_current_line(9699, ng0);
    t29 = (t0 + 8328);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t0 + 8488);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 10, 50LL);
    goto LAB14;

LAB17:    xsi_set_current_line(9701, ng0);
    t5 = ((char*)((ng18)));
    t6 = (t0 + 8328);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memset(t35, 0, 8);
    t14 = (t35 + 4);
    t23 = (t13 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (t7 >> 0);
    t9 = (t8 & 1);
    *((unsigned int *)t35) = t9;
    t10 = *((unsigned int *)t23);
    t11 = (t10 >> 0);
    t15 = (t11 & 1);
    *((unsigned int *)t14) = t15;
    xsi_vlog_mul_concat(t34, 5, 1, t5, 1U, t35, 1);
    t29 = ((char*)((ng18)));
    t30 = (t0 + 8328);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t37, 0, 8);
    t38 = (t37 + 4);
    t39 = (t32 + 4);
    t16 = *((unsigned int *)t32);
    t17 = (t16 >> 1);
    t18 = (t17 & 1);
    *((unsigned int *)t37) = t18;
    t19 = *((unsigned int *)t39);
    t20 = (t19 >> 1);
    t21 = (t20 & 1);
    *((unsigned int *)t38) = t21;
    xsi_vlog_mul_concat(t36, 5, 1, t29, 1U, t37, 1);
    xsi_vlogtype_concat(t4, 10, 10, 2U, t36, 5, t34, 5);
    t40 = (t0 + 8488);
    xsi_vlogvar_wait_assign_value(t40, t4, 0, 0, 10, 50LL);
    goto LAB27;

LAB19:    xsi_set_current_line(9702, ng0);
    t5 = ((char*)((ng18)));
    t6 = (t0 + 8328);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memset(t35, 0, 8);
    t14 = (t35 + 4);
    t23 = (t13 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (t7 >> 2);
    t9 = (t8 & 1);
    *((unsigned int *)t35) = t9;
    t10 = *((unsigned int *)t23);
    t11 = (t10 >> 2);
    t15 = (t11 & 1);
    *((unsigned int *)t14) = t15;
    xsi_vlog_mul_concat(t34, 5, 1, t5, 1U, t35, 1);
    t29 = ((char*)((ng18)));
    t30 = (t0 + 8328);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t37, 0, 8);
    t38 = (t37 + 4);
    t39 = (t32 + 4);
    t16 = *((unsigned int *)t32);
    t17 = (t16 >> 3);
    t18 = (t17 & 1);
    *((unsigned int *)t37) = t18;
    t19 = *((unsigned int *)t39);
    t20 = (t19 >> 3);
    t21 = (t20 & 1);
    *((unsigned int *)t38) = t21;
    xsi_vlog_mul_concat(t36, 5, 1, t29, 1U, t37, 1);
    xsi_vlogtype_concat(t4, 10, 10, 2U, t36, 5, t34, 5);
    t40 = (t0 + 8488);
    xsi_vlogvar_wait_assign_value(t40, t4, 0, 0, 10, 50LL);
    goto LAB27;

LAB21:    xsi_set_current_line(9703, ng0);
    t5 = ((char*)((ng18)));
    t6 = (t0 + 8328);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memset(t35, 0, 8);
    t14 = (t35 + 4);
    t23 = (t13 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (t7 >> 4);
    t9 = (t8 & 1);
    *((unsigned int *)t35) = t9;
    t10 = *((unsigned int *)t23);
    t11 = (t10 >> 4);
    t15 = (t11 & 1);
    *((unsigned int *)t14) = t15;
    xsi_vlog_mul_concat(t34, 5, 1, t5, 1U, t35, 1);
    t29 = ((char*)((ng18)));
    t30 = (t0 + 8328);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t37, 0, 8);
    t38 = (t37 + 4);
    t39 = (t32 + 4);
    t16 = *((unsigned int *)t32);
    t17 = (t16 >> 5);
    t18 = (t17 & 1);
    *((unsigned int *)t37) = t18;
    t19 = *((unsigned int *)t39);
    t20 = (t19 >> 5);
    t21 = (t20 & 1);
    *((unsigned int *)t38) = t21;
    xsi_vlog_mul_concat(t36, 5, 1, t29, 1U, t37, 1);
    xsi_vlogtype_concat(t4, 10, 10, 2U, t36, 5, t34, 5);
    t40 = (t0 + 8488);
    xsi_vlogvar_wait_assign_value(t40, t4, 0, 0, 10, 50LL);
    goto LAB27;

LAB23:    xsi_set_current_line(9704, ng0);
    t5 = ((char*)((ng18)));
    t6 = (t0 + 8328);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memset(t35, 0, 8);
    t14 = (t35 + 4);
    t23 = (t13 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (t7 >> 6);
    t9 = (t8 & 1);
    *((unsigned int *)t35) = t9;
    t10 = *((unsigned int *)t23);
    t11 = (t10 >> 6);
    t15 = (t11 & 1);
    *((unsigned int *)t14) = t15;
    xsi_vlog_mul_concat(t34, 5, 1, t5, 1U, t35, 1);
    t29 = ((char*)((ng18)));
    t30 = (t0 + 8328);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t37, 0, 8);
    t38 = (t37 + 4);
    t39 = (t32 + 4);
    t16 = *((unsigned int *)t32);
    t17 = (t16 >> 7);
    t18 = (t17 & 1);
    *((unsigned int *)t37) = t18;
    t19 = *((unsigned int *)t39);
    t20 = (t19 >> 7);
    t21 = (t20 & 1);
    *((unsigned int *)t38) = t21;
    xsi_vlog_mul_concat(t36, 5, 1, t29, 1U, t37, 1);
    xsi_vlogtype_concat(t4, 10, 10, 2U, t36, 5, t34, 5);
    t40 = (t0 + 8488);
    xsi_vlogvar_wait_assign_value(t40, t4, 0, 0, 10, 50LL);
    goto LAB27;

LAB25:    xsi_set_current_line(9705, ng0);
    t5 = ((char*)((ng18)));
    t6 = (t0 + 8328);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memset(t35, 0, 8);
    t14 = (t35 + 4);
    t23 = (t13 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (t7 >> 8);
    t9 = (t8 & 1);
    *((unsigned int *)t35) = t9;
    t10 = *((unsigned int *)t23);
    t11 = (t10 >> 8);
    t15 = (t11 & 1);
    *((unsigned int *)t14) = t15;
    xsi_vlog_mul_concat(t34, 5, 1, t5, 1U, t35, 1);
    t29 = ((char*)((ng18)));
    t30 = (t0 + 8328);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t37, 0, 8);
    t38 = (t37 + 4);
    t39 = (t32 + 4);
    t16 = *((unsigned int *)t32);
    t17 = (t16 >> 9);
    t18 = (t17 & 1);
    *((unsigned int *)t37) = t18;
    t19 = *((unsigned int *)t39);
    t20 = (t19 >> 9);
    t21 = (t20 & 1);
    *((unsigned int *)t38) = t21;
    xsi_vlog_mul_concat(t36, 5, 1, t29, 1U, t37, 1);
    xsi_vlogtype_concat(t4, 10, 10, 2U, t36, 5, t34, 5);
    t40 = (t0 + 8488);
    xsi_vlogvar_wait_assign_value(t40, t4, 0, 0, 10, 50LL);
    goto LAB27;

}

static void NetDecl_9709_13(char *t0)
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
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;

LAB0:    t1 = (t0 + 12784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9709, ng0);
    t2 = (t0 + 6488U);
    t3 = *((char **)t2);
    t2 = (t0 + 3928U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 | t7);
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
LAB6:    t32 = (t0 + 14568);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memset(t36, 0, 8);
    t37 = 1U;
    t38 = t37;
    t39 = (t5 + 4);
    t40 = *((unsigned int *)t5);
    t37 = (t37 & t40);
    t41 = *((unsigned int *)t39);
    t38 = (t38 & t41);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t43 | t37);
    t44 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t44 | t38);
    xsi_driver_vfirst_trans_delayed(t32, 0, 0U, 50LL, 0);
    t45 = (t0 + 14056);
    *((int *)t45) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t23 = (t22 & t21);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (~(t23));
    t29 = (~(t27));
    t30 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t30 & t28);
    t31 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t31 & t29);
    goto LAB6;

}

static void Always_9718_14(char *t0)
{
    char t4[8];
    char t21[8];
    char t25[8];
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
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t26;
    char *t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;

LAB0:    t1 = (t0 + 13032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9718, ng0);
    t2 = (t0 + 14072);
    *((int *)t2) = 1;
    t3 = (t0 + 13064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(9718, ng0);

LAB5:    xsi_set_current_line(9719, ng0);
    t5 = (t0 + 5208U);
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

LAB11:    xsi_set_current_line(9721, ng0);

LAB14:    xsi_set_current_line(9722, ng0);
    t2 = (t0 + 5848U);
    t3 = *((char **)t2);
    memset(t21, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t2) != 0)
        goto LAB17;

LAB18:    t6 = (t21 + 4);
    t14 = *((unsigned int *)t21);
    t15 = *((unsigned int *)t6);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB19;

LAB20:    t17 = *((unsigned int *)t21);
    t18 = (~(t17));
    t22 = *((unsigned int *)t6);
    t23 = (t18 || t22);
    if (t23 > 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t6) > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t21) > 0)
        goto LAB25;

LAB26:    memcpy(t4, t24, 8);

LAB27:    t20 = ((char*)((ng8)));
    t26 = (t0 + 3288U);
    t27 = *((char **)t26);
    xsi_vlog_mul_concat(t25, 10, 1, t20, 1U, t27, 1);
    t29 = *((unsigned int *)t4);
    t30 = *((unsigned int *)t25);
    t31 = (t29 ^ t30);
    *((unsigned int *)t28) = t31;
    t26 = (t4 + 4);
    t32 = (t25 + 4);
    t33 = (t28 + 4);
    t34 = *((unsigned int *)t26);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB28;

LAB29:
LAB30:    t41 = (t0 + 7208);
    xsi_vlogvar_wait_assign_value(t41, t28, 0, 0, 10, 50LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(9719, ng0);

LAB13:    xsi_set_current_line(9720, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 7208);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 10, 50LL);
    goto LAB12;

LAB15:    *((unsigned int *)t21) = 1;
    goto LAB18;

LAB17:    t5 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB18;

LAB19:    t12 = (t0 + 8488);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    goto LAB20;

LAB21:    t20 = (t0 + 4728U);
    t24 = *((char **)t20);
    goto LAB22;

LAB23:    xsi_vlog_unsigned_bit_combine(t4, 10, t19, 10, t24, 10);
    goto LAB27;

LAB25:    memcpy(t4, t19, 8);
    goto LAB27;

LAB28:    t39 = *((unsigned int *)t28);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t28) = (t39 | t40);
    goto LAB30;

}

static void Always_9727_15(char *t0)
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
    int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;

LAB0:    t1 = (t0 + 13280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9727, ng0);
    t2 = (t0 + 14088);
    *((int *)t2) = 1;
    t3 = (t0 + 13312);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(9727, ng0);

LAB5:    xsi_set_current_line(9728, ng0);
    t4 = (t0 + 6808U);
    t5 = *((char **)t4);
    t4 = (t0 + 4088U);
    t6 = *((char **)t4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 | t9);
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
LAB8:    t34 = (t7 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t7);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB6:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = (t5 + 4);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = *((unsigned int *)t21);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = (~(t25));
    t31 = (~(t29));
    t32 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t32 & t30);
    t33 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t33 & t31);
    goto LAB8;

LAB9:    xsi_set_current_line(9728, ng0);

LAB12:    xsi_set_current_line(9729, ng0);
    t40 = (t0 + 6648U);
    t41 = *((char **)t40);
    t40 = (t0 + 8008);
    xsi_vlogvar_wait_assign_value(t40, t41, 0, 0, 1, 50LL);
    goto LAB11;

}

static void Always_9733_16(char *t0)
{
    char t4[8];
    char t21[8];
    char t22[8];
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
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
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;

LAB0:    t1 = (t0 + 13528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9733, ng0);
    t2 = (t0 + 14104);
    *((int *)t2) = 1;
    t3 = (t0 + 13560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(9733, ng0);

LAB5:    xsi_set_current_line(9734, ng0);
    t5 = (t0 + 6008U);
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

LAB11:    xsi_set_current_line(9736, ng0);

LAB14:    xsi_set_current_line(9737, ng0);
    t2 = (t0 + 5848U);
    t3 = *((char **)t2);
    t2 = (t0 + 5208U);
    t5 = *((char **)t2);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t5);
    t9 = (t7 & t8);
    *((unsigned int *)t22) = t9;
    t2 = (t3 + 4);
    t6 = (t5 + 4);
    t12 = (t22 + 4);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t6);
    t14 = (t10 | t11);
    *((unsigned int *)t12) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB15;

LAB16:
LAB17:    memset(t21, 0, 8);
    t20 = (t22 + 4);
    t39 = *((unsigned int *)t20);
    t40 = (~(t39));
    t41 = *((unsigned int *)t22);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t20) != 0)
        goto LAB20;

LAB21:    t45 = (t21 + 4);
    t46 = *((unsigned int *)t21);
    t47 = *((unsigned int *)t45);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB22;

LAB23:    t52 = *((unsigned int *)t21);
    t53 = (~(t52));
    t54 = *((unsigned int *)t45);
    t55 = (t53 || t54);
    if (t55 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t45) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t21) > 0)
        goto LAB28;

LAB29:    memcpy(t4, t58, 8);

LAB30:    t59 = (t0 + 7368);
    xsi_vlogvar_wait_assign_value(t59, t4, 0, 0, 1, 50LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(9734, ng0);

LAB13:    xsi_set_current_line(9735, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 7368);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 50LL);
    goto LAB12;

LAB15:    t17 = *((unsigned int *)t22);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t22) = (t17 | t18);
    t13 = (t3 + 4);
    t19 = (t5 + 4);
    t23 = *((unsigned int *)t3);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (~(t25));
    t27 = *((unsigned int *)t5);
    t28 = (~(t27));
    t29 = *((unsigned int *)t19);
    t30 = (~(t29));
    t31 = (t24 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t35 & t33);
    t36 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t36 & t34);
    t37 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t37 & t33);
    t38 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t38 & t34);
    goto LAB17;

LAB18:    *((unsigned int *)t21) = 1;
    goto LAB21;

LAB20:    t44 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB21;

LAB22:    t49 = (t0 + 8648);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    goto LAB23;

LAB24:    t56 = (t0 + 8008);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t4, 1, t51, 1, t58, 1);
    goto LAB30;

LAB28:    memcpy(t4, t51, 8);
    goto LAB30;

}


extern void secureip_m_03887397749003412646_0351855190_init()
{
	static char *pe[] = {(void *)Cont_9561_0,(void *)Cont_9562_1,(void *)Cont_9563_2,(void *)NetDecl_9567_3,(void *)NetDecl_9569_4,(void *)Always_9573_5,(void *)NetDecl_9588_6,(void *)Always_9617_7,(void *)Always_9643_8,(void *)Always_9657_9,(void *)Always_9677_10,(void *)Always_9687_11,(void *)Always_9697_12,(void *)NetDecl_9709_13,(void *)Always_9718_14,(void *)Always_9727_15,(void *)Always_9733_16};
	xsi_register_didat("secureip_m_03887397749003412646_0351855190", "isim/myNetworkAurora_isim_beh.exe.sim/secureip/m_03887397749003412646_0351855190.didat");
	xsi_register_executes(pe);
}
