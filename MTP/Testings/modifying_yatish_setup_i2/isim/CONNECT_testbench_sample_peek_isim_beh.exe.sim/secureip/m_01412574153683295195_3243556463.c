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
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {4294967295U, 0U, 15U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {7U, 0U};
static int ng7[] = {9, 0};
static int ng8[] = {32, 0};
static int ng9[] = {10, 0};



static void NetDecl_3881_0(char *t0)
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

LAB0:    t1 = (t0 + 5600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(3881, ng0);
    t2 = (t0 + 3888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8376);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t4, 0, 33);
    xsi_driver_vfirst_trans(t5, 0, 32U);
    t10 = (t0 + 8152);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_3887_1(char *t0)
{
    char t4[8];
    char t5[8];
    char t23[8];
    char t24[8];
    char t39[8];
    char t46[8];
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
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t47;

LAB0:    t1 = (t0 + 5848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(3887, ng0);
    t2 = (t0 + 8168);
    *((int *)t2) = 1;
    t3 = (t0 + 5880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(3887, ng0);

LAB5:    xsi_set_current_line(3888, ng0);
    t6 = (t0 + 2208U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t6) != 0)
        goto LAB8;

LAB9:    t14 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB10;

LAB11:    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    t21 = *((unsigned int *)t14);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t14) > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t5) > 0)
        goto LAB16;

LAB17:    memcpy(t4, t23, 8);

LAB18:    t47 = (t0 + 4208);
    xsi_vlogvar_wait_assign_value(t47, t4, 0, 0, 10, 0LL);
    goto LAB2;

LAB6:    *((unsigned int *)t5) = 1;
    goto LAB9;

LAB8:    t13 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB9;

LAB10:    t18 = ((char*)((ng1)));
    goto LAB11;

LAB12:    t25 = (t0 + 2048U);
    t26 = *((char **)t25);
    memset(t24, 0, 8);
    t25 = (t26 + 4);
    t27 = *((unsigned int *)t25);
    t28 = (~(t27));
    t29 = *((unsigned int *)t26);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t25) != 0)
        goto LAB21;

LAB22:    t33 = (t24 + 4);
    t34 = *((unsigned int *)t24);
    t35 = *((unsigned int *)t33);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB23;

LAB24:    t40 = *((unsigned int *)t24);
    t41 = (~(t40));
    t42 = *((unsigned int *)t33);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t33) > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t24) > 0)
        goto LAB29;

LAB30:    memcpy(t23, t46, 8);

LAB31:    goto LAB13;

LAB14:    xsi_vlog_unsigned_bit_combine(t4, 32, t18, 32, t23, 32);
    goto LAB18;

LAB16:    memcpy(t4, t18, 8);
    goto LAB18;

LAB19:    *((unsigned int *)t24) = 1;
    goto LAB22;

LAB21:    t32 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB22;

LAB23:    t37 = (t0 + 1888U);
    t38 = *((char **)t37);
    memcpy(t39, t38, 8);
    goto LAB24;

LAB25:    t37 = (t0 + 4208);
    t44 = (t37 + 56U);
    t45 = *((char **)t44);
    memcpy(t46, t45, 8);
    goto LAB26;

LAB27:    xsi_vlog_unsigned_bit_combine(t23, 32, t39, 32, t46, 32);
    goto LAB31;

LAB29:    memcpy(t23, t39, 8);
    goto LAB31;

}

static void NetDecl_3892_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t21[8];
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
    char *t19;
    char *t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
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
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;

LAB0:    t1 = (t0 + 6096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(3874, ng0);
    t2 = (t0 + 2048U);
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

LAB9:    t34 = *((unsigned int *)t4);
    t35 = (~(t34));
    t36 = *((unsigned int *)t12);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t38, 8);

LAB16:    t39 = (t0 + 8440);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memset(t43, 0, 8);
    t44 = 1023U;
    t45 = t44;
    t46 = (t3 + 4);
    t47 = *((unsigned int *)t3);
    t44 = (t44 & t47);
    t48 = *((unsigned int *)t46);
    t45 = (t45 & t48);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t50 | t44);
    t51 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t51 | t45);
    xsi_driver_vfirst_trans(t39, 0, 9U);
    t52 = (t0 + 8184);
    *((int *)t52) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 4208);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 2688U);
    t20 = *((char **)t19);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t20);
    t24 = (t22 ^ t23);
    *((unsigned int *)t21) = t24;
    t19 = (t18 + 4);
    t25 = (t20 + 4);
    t26 = (t21 + 4);
    t27 = *((unsigned int *)t19);
    t28 = *((unsigned int *)t25);
    t29 = (t27 | t28);
    *((unsigned int *)t26) = t29;
    t30 = *((unsigned int *)t26);
    t31 = (t30 != 0);
    if (t31 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB9;

LAB10:    t38 = ((char*)((ng2)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 10, t21, 10, t38, 10);
    goto LAB16;

LAB14:    memcpy(t3, t21, 8);
    goto LAB16;

LAB17:    t32 = *((unsigned int *)t21);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t21) = (t32 | t33);
    goto LAB19;

}

static void NetDecl_3893_3(char *t0)
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
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 6344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(3893, ng0);
    t2 = (t0 + 1728U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1023U);
    if (t9 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t11 = (t0 + 8504);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t15, 0, 8);
    t16 = 1U;
    t17 = t16;
    t18 = (t3 + 4);
    t19 = *((unsigned int *)t3);
    t16 = (t16 & t19);
    t20 = *((unsigned int *)t18);
    t17 = (t17 & t20);
    t21 = (t15 + 4);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 | t16);
    t23 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t23 | t17);
    xsi_driver_vfirst_trans(t11, 0, 0U);
    t24 = (t0 + 8200);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB7;

}

static void Always_3901_4(char *t0)
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

LAB0:    t1 = (t0 + 6592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(3901, ng0);
    t2 = (t0 + 8216);
    *((int *)t2) = 1;
    t3 = (t0 + 6624);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(3902, ng0);

LAB5:    xsi_set_current_line(3903, ng0);
    t4 = (t0 + 2208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(3907, ng0);
    t2 = (t0 + 4688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(3904, ng0);

LAB9:    xsi_set_current_line(3905, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 3568);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(3908, ng0);

LAB13:    xsi_set_current_line(3909, ng0);
    t11 = (t0 + 2848U);
    t12 = *((char **)t11);
    t11 = (t0 + 3568);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 1, 0LL);
    goto LAB12;

}

static void Always_3917_5(char *t0)
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 6840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(3917, ng0);
    t2 = (t0 + 8232);
    *((int *)t2) = 1;
    t3 = (t0 + 6872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(3918, ng0);

LAB5:    xsi_set_current_line(3919, ng0);
    t4 = (t0 + 2208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(3925, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t2) == 0)
        goto LAB10;

LAB12:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB13:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(3932, ng0);

LAB18:    xsi_set_current_line(3933, ng0);
    t2 = (t0 + 4528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4688);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(3934, ng0);
    t2 = (t0 + 4368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4528);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(3935, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB16:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(3920, ng0);

LAB9:    xsi_set_current_line(3921, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 4688);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(3922, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(3923, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(3926, ng0);

LAB17:    xsi_set_current_line(3927, ng0);
    t11 = (t0 + 4688);
    t12 = (t11 + 56U);
    t19 = *((char **)t12);
    t20 = (t0 + 4688);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 0LL);
    xsi_set_current_line(3928, ng0);
    t2 = (t0 + 4528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4528);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(3929, ng0);
    t2 = (t0 + 4368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4368);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB16;

}

static void NetDecl_3941_6(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 7088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(3941, ng0);
    t2 = (t0 + 4048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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

LAB7:    t22 = (t0 + 8568);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t6 + 4);
    t30 = *((unsigned int *)t6);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0U);
    t35 = (t0 + 8248);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void NetDecl_3941_7(char *t0)
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

LAB0:    t1 = (t0 + 7336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(3941, ng0);
    t2 = (t0 + 3008U);
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
    t21 = (t0 + 8632);
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
    xsi_driver_vfirst_trans(t21, 0, 0U);
    t34 = (t0 + 8264);
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

static void Always_3942_8(char *t0)
{
    char t13[8];
    char t14[8];
    char t35[8];
    char t42[8];
    char t50[8];
    char t79[8];
    char t86[8];
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
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    int t80;
    int t81;
    int t82;
    int t83;
    int t84;
    int t85;
    char *t87;

LAB0:    t1 = (t0 + 7584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(3942, ng0);
    t2 = (t0 + 8280);
    *((int *)t2) = 1;
    t3 = (t0 + 7616);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(3942, ng0);

LAB5:    xsi_set_current_line(3943, ng0);
    t4 = (t0 + 2208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(3948, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t2);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(3943, ng0);

LAB9:    xsi_set_current_line(3944, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 4048);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(3945, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(3947, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 33, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(3948, ng0);

LAB13:    xsi_set_current_line(3952, ng0);
    t4 = (t0 + 3568);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    memset(t14, 0, 8);
    t12 = (t11 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (~(t15));
    t17 = *((unsigned int *)t11);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t12) != 0)
        goto LAB16;

LAB17:    t21 = (t14 + 4);
    t22 = *((unsigned int *)t14);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB18;

LAB19:    t26 = *((unsigned int *)t14);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t21) > 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t14) > 0)
        goto LAB24;

LAB25:    memcpy(t13, t35, 8);

LAB26:    t33 = (t0 + 4048);
    xsi_vlogvar_wait_assign_value(t33, t13, 0, 0, 3, 0LL);
    xsi_set_current_line(3953, ng0);
    t2 = (t0 + 3008U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t2) != 0)
        goto LAB29;

LAB30:    t5 = (t14 + 4);
    t15 = *((unsigned int *)t14);
    t16 = *((unsigned int *)t5);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB31;

LAB32:    t18 = *((unsigned int *)t14);
    t19 = (~(t18));
    t22 = *((unsigned int *)t5);
    t23 = (t19 || t22);
    if (t23 > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t5) > 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t14) > 0)
        goto LAB37;

LAB38:    memcpy(t13, t50, 8);

LAB39:    t78 = (t0 + 3728);
    xsi_vlogvar_wait_assign_value(t78, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(3954, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t2) != 0)
        goto LAB56;

LAB57:    t5 = (t14 + 4);
    t15 = *((unsigned int *)t14);
    t16 = *((unsigned int *)t5);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB58;

LAB59:    t18 = *((unsigned int *)t14);
    t19 = (~(t18));
    t22 = *((unsigned int *)t5);
    t23 = (t19 || t22);
    if (t23 > 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t5) > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t14) > 0)
        goto LAB64;

LAB65:    memcpy(t13, t35, 8);

LAB66:    t31 = (t0 + 3888);
    t32 = (t0 + 3888);
    t33 = (t32 + 72U);
    t34 = *((char **)t33);
    t40 = ((char*)((ng7)));
    t41 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t42, t50, t79, ((int*)(t34)), 2, t40, 32, 1, t41, 32, 1);
    t43 = (t42 + 4);
    t37 = *((unsigned int *)t43);
    t69 = (!(t37));
    t49 = (t50 + 4);
    t38 = *((unsigned int *)t49);
    t73 = (!(t38));
    t80 = (t69 && t73);
    t54 = (t79 + 4);
    t39 = *((unsigned int *)t54);
    t81 = (!(t39));
    t82 = (t80 && t81);
    if (t82 == 1)
        goto LAB67;

LAB68:    xsi_set_current_line(3955, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t2) != 0)
        goto LAB71;

LAB72:    t5 = (t14 + 4);
    t15 = *((unsigned int *)t14);
    t16 = *((unsigned int *)t5);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB73;

LAB74:    t27 = *((unsigned int *)t14);
    t28 = (~(t27));
    t29 = *((unsigned int *)t5);
    t36 = (t28 || t29);
    if (t36 > 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t5) > 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t14) > 0)
        goto LAB79;

LAB80:    memcpy(t13, t42, 8);

LAB81:    t43 = (t0 + 3888);
    t49 = (t0 + 3888);
    t54 = (t49 + 72U);
    t55 = *((char **)t54);
    t56 = ((char*)((ng8)));
    t64 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t50, t79, t86, ((int*)(t55)), 2, t56, 32, 1, t64, 32, 1);
    t65 = (t50 + 4);
    t58 = *((unsigned int *)t65);
    t69 = (!(t58));
    t78 = (t79 + 4);
    t59 = *((unsigned int *)t78);
    t73 = (!(t59));
    t80 = (t69 && t73);
    t87 = (t86 + 4);
    t60 = *((unsigned int *)t87);
    t81 = (!(t60));
    t82 = (t80 && t81);
    if (t82 == 1)
        goto LAB82;

LAB83:    goto LAB12;

LAB14:    *((unsigned int *)t14) = 1;
    goto LAB17;

LAB16:    t20 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB17;

LAB18:    t25 = ((char*)((ng6)));
    goto LAB19;

LAB20:    t30 = (t0 + 4048);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t0 + 3168U);
    t34 = *((char **)t33);
    memset(t35, 0, 8);
    xsi_vlog_unsigned_minus(t35, 3, t32, 3, t34, 1);
    goto LAB21;

LAB22:    xsi_vlog_unsigned_bit_combine(t13, 3, t25, 3, t35, 3);
    goto LAB26;

LAB24:    memcpy(t13, t25, 8);
    goto LAB26;

LAB27:    *((unsigned int *)t14) = 1;
    goto LAB30;

LAB29:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB30;

LAB31:    t11 = (t0 + 3568);
    t12 = (t11 + 56U);
    t20 = *((char **)t12);
    goto LAB32;

LAB33:    t21 = (t0 + 3728);
    t25 = (t21 + 56U);
    t30 = *((char **)t25);
    memset(t35, 0, 8);
    t31 = (t30 + 4);
    t24 = *((unsigned int *)t31);
    t26 = (~(t24));
    t27 = *((unsigned int *)t30);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t31) != 0)
        goto LAB42;

LAB43:    t33 = (t35 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (!(t36));
    t38 = *((unsigned int *)t33);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB44;

LAB45:    memcpy(t50, t35, 8);

LAB46:    goto LAB34;

LAB35:    xsi_vlog_unsigned_bit_combine(t13, 1, t20, 1, t50, 1);
    goto LAB39;

LAB37:    memcpy(t13, t20, 8);
    goto LAB39;

LAB40:    *((unsigned int *)t35) = 1;
    goto LAB43;

LAB42:    t32 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB43;

LAB44:    t34 = (t0 + 3568);
    t40 = (t34 + 56U);
    t41 = *((char **)t40);
    memset(t42, 0, 8);
    t43 = (t41 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (~(t44));
    t46 = *((unsigned int *)t41);
    t47 = (t46 & t45);
    t48 = (t47 & 1U);
    if (t48 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t43) != 0)
        goto LAB49;

LAB50:    t51 = *((unsigned int *)t35);
    t52 = *((unsigned int *)t42);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = (t35 + 4);
    t55 = (t42 + 4);
    t56 = (t50 + 4);
    t57 = *((unsigned int *)t54);
    t58 = *((unsigned int *)t55);
    t59 = (t57 | t58);
    *((unsigned int *)t56) = t59;
    t60 = *((unsigned int *)t56);
    t61 = (t60 != 0);
    if (t61 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB46;

LAB47:    *((unsigned int *)t42) = 1;
    goto LAB50;

LAB49:    t49 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB50;

LAB51:    t62 = *((unsigned int *)t50);
    t63 = *((unsigned int *)t56);
    *((unsigned int *)t50) = (t62 | t63);
    t64 = (t35 + 4);
    t65 = (t42 + 4);
    t66 = *((unsigned int *)t64);
    t67 = (~(t66));
    t68 = *((unsigned int *)t35);
    t69 = (t68 & t67);
    t70 = *((unsigned int *)t65);
    t71 = (~(t70));
    t72 = *((unsigned int *)t42);
    t73 = (t72 & t71);
    t74 = (~(t69));
    t75 = (~(t73));
    t76 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t76 & t74);
    t77 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t77 & t75);
    goto LAB53;

LAB54:    *((unsigned int *)t14) = 1;
    goto LAB57;

LAB56:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB57;

LAB58:    t11 = (t0 + 1888U);
    t12 = *((char **)t11);
    goto LAB59;

LAB60:    t11 = (t0 + 3888);
    t20 = (t11 + 56U);
    t21 = *((char **)t20);
    memset(t35, 0, 8);
    t25 = (t35 + 4);
    t30 = (t21 + 4);
    t24 = *((unsigned int *)t21);
    t26 = (t24 >> 0);
    *((unsigned int *)t35) = t26;
    t27 = *((unsigned int *)t30);
    t28 = (t27 >> 0);
    *((unsigned int *)t25) = t28;
    t29 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t29 & 1023U);
    t36 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t36 & 1023U);
    goto LAB61;

LAB62:    xsi_vlog_unsigned_bit_combine(t13, 10, t12, 10, t35, 10);
    goto LAB66;

LAB64:    memcpy(t13, t12, 8);
    goto LAB66;

LAB67:    t44 = *((unsigned int *)t79);
    t83 = (t44 + 0);
    t45 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t50);
    t84 = (t45 - t46);
    t85 = (t84 + 1);
    xsi_vlogvar_wait_assign_value(t31, t13, t83, *((unsigned int *)t50), t85, 0LL);
    goto LAB68;

LAB69:    *((unsigned int *)t14) = 1;
    goto LAB72;

LAB71:    t4 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB72;

LAB73:    t11 = (t0 + 3888);
    t12 = (t11 + 56U);
    t20 = *((char **)t12);
    memset(t35, 0, 8);
    t21 = (t35 + 4);
    t25 = (t20 + 4);
    t18 = *((unsigned int *)t20);
    t19 = (t18 >> 0);
    *((unsigned int *)t35) = t19;
    t22 = *((unsigned int *)t25);
    t23 = (t22 >> 0);
    *((unsigned int *)t21) = t23;
    t24 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t24 & 8388607U);
    t26 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t26 & 8388607U);
    goto LAB74;

LAB75:    t30 = (t0 + 3888);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t42, 0, 8);
    t33 = (t42 + 4);
    t34 = (t32 + 4);
    t37 = *((unsigned int *)t32);
    t38 = (t37 >> 10);
    *((unsigned int *)t42) = t38;
    t39 = *((unsigned int *)t34);
    t44 = (t39 >> 10);
    *((unsigned int *)t33) = t44;
    t40 = (t32 + 8);
    t41 = (t32 + 12);
    t45 = *((unsigned int *)t40);
    t46 = (t45 << 22);
    t47 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t47 | t46);
    t48 = *((unsigned int *)t41);
    t51 = (t48 << 22);
    t52 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t52 | t51);
    t53 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t53 & 8388607U);
    t57 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t57 & 8388607U);
    goto LAB76;

LAB77:    xsi_vlog_unsigned_bit_combine(t13, 23, t35, 23, t42, 23);
    goto LAB81;

LAB79:    memcpy(t13, t35, 8);
    goto LAB81;

LAB82:    t61 = *((unsigned int *)t86);
    t83 = (t61 + 0);
    t62 = *((unsigned int *)t50);
    t63 = *((unsigned int *)t79);
    t84 = (t62 - t63);
    t85 = (t84 + 1);
    xsi_vlogvar_wait_assign_value(t43, t13, t83, *((unsigned int *)t79), t85, 0LL);
    goto LAB83;

}

static void Cont_3970_9(char *t0)
{
    char t3[8];
    char t20[8];
    char t30[8];
    char t45[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
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
    unsigned int t19;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
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
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;

LAB0:    t1 = (t0 + 7832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(3970, ng0);
    t2 = (t0 + 2528U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 23);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 23);
    *((unsigned int *)t2) = t9;
    t10 = (t4 + 8);
    t11 = (t4 + 12);
    t12 = *((unsigned int *)t10);
    t13 = (t12 << 9);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 | t13);
    t15 = *((unsigned int *)t11);
    t16 = (t15 << 9);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 | t16);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 1023U);
    t19 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t19 & 1023U);
    t21 = (t0 + 2528U);
    t22 = *((char **)t21);
    memset(t20, 0, 8);
    t21 = (t20 + 4);
    t23 = (t22 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (t24 >> 18);
    *((unsigned int *)t20) = t25;
    t26 = *((unsigned int *)t23);
    t27 = (t26 >> 18);
    *((unsigned int *)t21) = t27;
    t28 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t28 & 1023U);
    t29 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t29 & 1023U);
    t31 = *((unsigned int *)t3);
    t32 = *((unsigned int *)t20);
    t33 = (t31 ^ t32);
    *((unsigned int *)t30) = t33;
    t34 = (t3 + 4);
    t35 = (t20 + 4);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t34);
    t38 = *((unsigned int *)t35);
    t39 = (t37 | t38);
    *((unsigned int *)t36) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB4;

LAB5:
LAB6:    t44 = ((char*)((ng2)));
    t46 = *((unsigned int *)t30);
    t47 = *((unsigned int *)t44);
    t48 = (t46 ^ t47);
    *((unsigned int *)t45) = t48;
    t49 = (t30 + 4);
    t50 = (t44 + 4);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    *((unsigned int *)t51) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB7;

LAB8:
LAB9:    t59 = (t0 + 8696);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    memset(t63, 0, 8);
    t64 = 1023U;
    t65 = t64;
    t66 = (t45 + 4);
    t67 = *((unsigned int *)t45);
    t64 = (t64 & t67);
    t68 = *((unsigned int *)t66);
    t65 = (t65 & t68);
    t69 = (t63 + 4);
    t70 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t70 | t64);
    t71 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t71 | t65);
    xsi_driver_vfirst_trans(t59, 0, 9);
    t72 = (t0 + 8296);
    *((int *)t72) = 1;

LAB1:    return;
LAB4:    t42 = *((unsigned int *)t30);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t30) = (t42 | t43);
    goto LAB6;

LAB7:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t45) = (t57 | t58);
    goto LAB9;

}


extern void secureip_m_01412574153683295195_3243556463_init()
{
	static char *pe[] = {(void *)NetDecl_3881_0,(void *)Always_3887_1,(void *)NetDecl_3892_2,(void *)NetDecl_3893_3,(void *)Always_3901_4,(void *)Always_3917_5,(void *)NetDecl_3941_6,(void *)NetDecl_3941_7,(void *)Always_3942_8,(void *)Cont_3970_9};
	xsi_register_didat("secureip_m_01412574153683295195_3243556463", "isim/CONNECT_testbench_sample_peek_isim_beh.exe.sim/secureip/m_01412574153683295195_3243556463.didat");
	xsi_register_executes(pe);
}
