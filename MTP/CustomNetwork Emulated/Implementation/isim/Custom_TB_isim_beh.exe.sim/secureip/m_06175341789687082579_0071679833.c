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
static unsigned int ng1[] = {16383U, 16383U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {0, 0};
static int ng5[] = {64, 0};
static int ng6[] = {1, 0};



static void Always_3261_0(char *t0)
{
    char t6[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    unsigned int t19;
    int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    int t24;
    int t25;
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
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;

LAB0:    t1 = (t0 + 4736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(3261, ng0);
    t2 = (t0 + 5800);
    *((int *)t2) = 1;
    t3 = (t0 + 4768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(3261, ng0);

LAB5:    xsi_set_current_line(3262, ng0);
    t4 = (t0 + 1824U);
    t5 = *((char **)t4);
    t4 = (t0 + 3024);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 6);
    xsi_set_current_line(3263, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    t2 = (t0 + 3184);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 14);
    xsi_set_current_line(3265, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3344);
    t4 = (t0 + 3344);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 3344);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 3024);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 2, 1, t14, 6, 2);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t7 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(3267, ng0);
    t2 = (t0 + 4544);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB6:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t7), t25);
    goto LAB7;

LAB8:    xsi_set_current_line(3268, ng0);
    t3 = (t0 + 3184);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t8 = (t0 + 3344);
    t9 = (t0 + 3344);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t0 + 3344);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = (t0 + 3024);
    t18 = (t15 + 56U);
    t26 = *((char **)t18);
    xsi_vlog_generic_convert_array_indices(t6, t7, t11, t14, 2, 1, t26, 6, 2);
    t27 = (t6 + 4);
    t16 = *((unsigned int *)t27);
    t17 = (!(t16));
    t28 = (t7 + 4);
    t19 = *((unsigned int *)t28);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(3270, ng0);
    t2 = (t0 + 3024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2864);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    memset(t6, 0, 8);
    t10 = (t4 + 4);
    t11 = (t9 + 4);
    t16 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t9);
    t22 = (t16 ^ t19);
    t23 = *((unsigned int *)t10);
    t29 = *((unsigned int *)t11);
    t30 = (t23 ^ t29);
    t31 = (t22 | t30);
    t32 = *((unsigned int *)t10);
    t33 = *((unsigned int *)t11);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB14;

LAB11:    if (t34 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t6) = 1;

LAB14:    t13 = (t6 + 4);
    t37 = *((unsigned int *)t13);
    t38 = (~(t37));
    t39 = *((unsigned int *)t6);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB15;

LAB16:
LAB17:    goto LAB2;

LAB9:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t8, t5, 0, *((unsigned int *)t7), t25);
    goto LAB10;

LAB13:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(3270, ng0);

LAB18:    xsi_set_current_line(3271, ng0);
    t14 = ((char*)((ng2)));
    t15 = (t0 + 3664);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 1);
    goto LAB17;

}

static void Always_3278_1(char *t0)
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

LAB0:    t1 = (t0 + 4984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(3278, ng0);
    t2 = (t0 + 5816);
    *((int *)t2) = 1;
    t3 = (t0 + 5016);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(3278, ng0);

LAB5:    xsi_set_current_line(3279, ng0);
    t5 = (t0 + 1504U);
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

LAB11:    xsi_set_current_line(3281, ng0);
    t2 = (t0 + 1344U);
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

LAB10:    xsi_set_current_line(3279, ng0);

LAB13:    xsi_set_current_line(3280, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 3504);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 14, 50LL);
    goto LAB12;

LAB14:    xsi_set_current_line(3281, ng0);

LAB17:    xsi_set_current_line(3282, ng0);
    t5 = (t0 + 3184);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 3504);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 14, 50LL);
    goto LAB16;

}

static void Always_3288_2(char *t0)
{
    char t4[8];
    char t21[8];
    char t22[8];
    char t41[8];
    char t42[8];
    char t65[8];
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
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;

LAB0:    t1 = (t0 + 5232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(3288, ng0);
    t2 = (t0 + 5832);
    *((int *)t2) = 1;
    t3 = (t0 + 5264);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(3288, ng0);

LAB5:    xsi_set_current_line(3289, ng0);
    t5 = (t0 + 1504U);
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

LAB11:    xsi_set_current_line(3294, ng0);

LAB14:    xsi_set_current_line(3295, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    t2 = (t0 + 2864);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 6);
    xsi_set_current_line(3296, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    t2 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 6, 50LL);
    xsi_set_current_line(3297, ng0);
    t2 = (t0 + 2144U);
    t3 = *((char **)t2);
    memset(t22, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t2) == 0)
        goto LAB15;

LAB17:    t5 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t5) = 1;

LAB18:    t6 = (t22 + 4);
    t12 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    *((unsigned int *)t22) = t15;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB20;

LAB19:    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 & 1U);
    t25 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t25 & 1U);
    memset(t21, 0, 8);
    t13 = (t22 + 4);
    t26 = *((unsigned int *)t13);
    t27 = (~(t26));
    t28 = *((unsigned int *)t22);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t13) != 0)
        goto LAB23;

LAB24:    t20 = (t21 + 4);
    t31 = *((unsigned int *)t21);
    t32 = *((unsigned int *)t20);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB25;

LAB26:    t37 = *((unsigned int *)t21);
    t38 = (~(t37));
    t39 = *((unsigned int *)t20);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t20) > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t21) > 0)
        goto LAB31;

LAB32:    memcpy(t4, t41, 8);

LAB33:    t75 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t75, t4, 0, 0, 14, 50LL);
    xsi_set_current_line(3304, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(3289, ng0);

LAB13:    xsi_set_current_line(3290, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 2864);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 6);
    xsi_set_current_line(3291, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2704);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 50LL);
    xsi_set_current_line(3292, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 14, 50LL);
    xsi_set_current_line(3293, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB12;

LAB15:    *((unsigned int *)t22) = 1;
    goto LAB18;

LAB20:    t16 = *((unsigned int *)t22);
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t22) = (t16 | t17);
    t18 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t18 | t23);
    goto LAB19;

LAB21:    *((unsigned int *)t21) = 1;
    goto LAB24;

LAB23:    t19 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB24;

LAB25:    t34 = (t0 + 3504);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    goto LAB26;

LAB27:    t43 = (t0 + 3664);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t42, 0, 8);
    t46 = (t45 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t45);
    t50 = (t49 & t48);
    t51 = (t50 & 1U);
    if (t51 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t46) != 0)
        goto LAB36;

LAB37:    t53 = (t42 + 4);
    t54 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t53);
    t56 = (t54 || t55);
    if (t56 > 0)
        goto LAB38;

LAB39:    t58 = *((unsigned int *)t42);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (t59 || t60);
    if (t61 > 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t53) > 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t42) > 0)
        goto LAB44;

LAB45:    memcpy(t41, t65, 8);

LAB46:    goto LAB28;

LAB29:    xsi_vlog_unsigned_bit_combine(t4, 14, t36, 14, t41, 14);
    goto LAB33;

LAB31:    memcpy(t4, t36, 8);
    goto LAB33;

LAB34:    *((unsigned int *)t42) = 1;
    goto LAB37;

LAB36:    t52 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB37;

LAB38:    t57 = ((char*)((ng1)));
    goto LAB39;

LAB40:    t62 = (t0 + 3344);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    t66 = (t0 + 3344);
    t67 = (t66 + 72U);
    t68 = *((char **)t67);
    t69 = (t0 + 3344);
    t70 = (t69 + 64U);
    t71 = *((char **)t70);
    t72 = (t0 + 2704);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    xsi_vlog_generic_get_array_select_value(t65, 14, t64, t68, t71, 2, 1, t74, 6, 2);
    goto LAB41;

LAB42:    xsi_vlog_unsigned_bit_combine(t41, 14, t57, 14, t65, 14);
    goto LAB46;

LAB44:    memcpy(t41, t57, 8);
    goto LAB46;

}

static void Initial_3314_3(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(3314, ng0);

LAB2:    xsi_set_current_line(3315, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 3664);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(3316, ng0);
    xsi_set_current_line(3316, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 3824);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 3824);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng5)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:    xsi_set_current_line(3319, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2704);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 6);
    xsi_set_current_line(3320, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2864);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 6);
    xsi_set_current_line(3321, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 3024);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 6);
    xsi_set_current_line(3322, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 3184);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 14);

LAB1:    return;
LAB4:    xsi_set_current_line(3316, ng0);

LAB6:    xsi_set_current_line(3317, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 3344);
    t16 = (t0 + 3344);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 3344);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 3824);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(3316, ng0);
    t1 = (t0 + 3824);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng6)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 3824);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB8;

}


extern void secureip_m_06175341789687082579_0071679833_init()
{
	static char *pe[] = {(void *)Always_3261_0,(void *)Always_3278_1,(void *)Always_3288_2,(void *)Initial_3314_3};
	xsi_register_didat("secureip_m_06175341789687082579_0071679833", "isim/Custom_TB_isim_beh.exe.sim/secureip/m_06175341789687082579_0071679833.didat");
	xsi_register_executes(pe);
}
