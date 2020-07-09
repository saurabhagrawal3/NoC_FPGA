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
static int ng1[] = {0, 0, 0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {7U, 7U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {31U, 0U};
static unsigned int ng6[] = {255U, 0U};
static int ng7[] = {0, 0};
static int ng8[] = {2, 0};
static int ng9[] = {100, 0};
static int ng10[] = {1, 0};
static int ng11[] = {4, 0};
static int ng12[] = {5, 0};
static int ng13[] = {1, 0, 0, 0};



static int sp_clear_scount(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1736);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(29548, ng0);

LAB5:    xsi_set_current_line(29549, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 6720);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 64);
    xsi_set_current_line(29550, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 6880);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static int sp_kill_pll(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2168);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(29691, ng0);

LAB5:    xsi_set_current_line(29696, ng0);
    t5 = ((char*)((ng2)));
    t6 = (t1 + 6880);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(29697, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 5600);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(29699, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 5920);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(29700, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 6720);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 64);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
}

static void Initial_29523_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(29523, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 6880);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Initial_29524_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(29524, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 5760);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);

LAB1:    return;
}

static void Cont_29536_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t23[8];
    char t24[8];
    char t37[8];
    char t39[8];
    char t40[8];
    char t65[8];
    char t67[8];
    char t68[8];
    char *t1;
    char *t2;
    char *t5;
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
    char *t38;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t66;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;

LAB0:    t1 = (t0 + 9408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29536, ng0);
    t2 = (t0 + 7040);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
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

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t14);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t23, 8);

LAB16:    t89 = (t0 + 12760);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    t92 = (t91 + 56U);
    t93 = *((char **)t92);
    memset(t93, 0, 8);
    t94 = 2047U;
    t95 = t94;
    t96 = (t3 + 4);
    t97 = *((unsigned int *)t3);
    t94 = (t94 & t97);
    t98 = *((unsigned int *)t96);
    t95 = (t95 & t98);
    t99 = (t93 + 4);
    t100 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t100 | t94);
    t101 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t101 | t95);
    xsi_driver_vfirst_trans(t89, 0, 10);
    t102 = (t0 + 12456);
    *((int *)t102) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = ((char*)((ng4)));
    goto LAB9;

LAB10:    t25 = (t0 + 4400U);
    t26 = *((char **)t25);
    memset(t24, 0, 8);
    t25 = (t26 + 4);
    t27 = *((unsigned int *)t25);
    t28 = (~(t27));
    t29 = *((unsigned int *)t26);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t25) != 0)
        goto LAB19;

LAB20:    t33 = (t24 + 4);
    t34 = *((unsigned int *)t24);
    t35 = *((unsigned int *)t33);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB21;

LAB22:    t61 = *((unsigned int *)t24);
    t62 = (~(t61));
    t63 = *((unsigned int *)t33);
    t64 = (t62 || t63);
    if (t64 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t33) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t24) > 0)
        goto LAB27;

LAB28:    memcpy(t23, t65, 8);

LAB29:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 11, t18, 11, t23, 11);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t24) = 1;
    goto LAB20;

LAB19:    t32 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB20;

LAB21:    t38 = ((char*)((ng5)));
    t41 = (t0 + 4560U);
    t42 = *((char **)t41);
    memset(t40, 0, 8);
    t41 = (t40 + 4);
    t43 = (t42 + 4);
    t44 = *((unsigned int *)t42);
    t45 = (t44 >> 0);
    *((unsigned int *)t40) = t45;
    t46 = *((unsigned int *)t43);
    t47 = (t46 >> 0);
    *((unsigned int *)t41) = t47;
    t48 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t48 & 3U);
    t49 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t49 & 3U);
    memset(t39, 0, 8);
    t50 = (t39 + 4);
    t51 = (t40 + 4);
    t52 = *((unsigned int *)t40);
    t53 = (~(t52));
    *((unsigned int *)t39) = t53;
    *((unsigned int *)t50) = 0;
    if (*((unsigned int *)t51) != 0)
        goto LAB31;

LAB30:    t58 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t58 & 3U);
    t59 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t59 & 3U);
    t60 = ((char*)((ng2)));
    xsi_vlogtype_concat(t37, 11, 11, 3U, t60, 4, t39, 2, t38, 5);
    goto LAB22;

LAB23:    t66 = ((char*)((ng6)));
    t69 = (t0 + 4560U);
    t70 = *((char **)t69);
    memset(t68, 0, 8);
    t69 = (t68 + 4);
    t71 = (t70 + 4);
    t72 = *((unsigned int *)t70);
    t73 = (t72 >> 0);
    *((unsigned int *)t68) = t73;
    t74 = *((unsigned int *)t71);
    t75 = (t74 >> 0);
    *((unsigned int *)t69) = t75;
    t76 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t76 & 3U);
    t77 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t77 & 3U);
    memset(t67, 0, 8);
    t78 = (t67 + 4);
    t79 = (t68 + 4);
    t80 = *((unsigned int *)t68);
    t81 = (~(t80));
    *((unsigned int *)t67) = t81;
    *((unsigned int *)t78) = 0;
    if (*((unsigned int *)t79) != 0)
        goto LAB33;

LAB32:    t86 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t86 & 3U);
    t87 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t87 & 3U);
    t88 = ((char*)((ng2)));
    xsi_vlogtype_concat(t65, 11, 11, 3U, t88, 1, t67, 2, t66, 8);
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t23, 11, t37, 11, t65, 11);
    goto LAB29;

LAB27:    memcpy(t23, t37, 8);
    goto LAB29;

LAB31:    t54 = *((unsigned int *)t39);
    t55 = *((unsigned int *)t51);
    *((unsigned int *)t39) = (t54 | t55);
    t56 = *((unsigned int *)t50);
    t57 = *((unsigned int *)t51);
    *((unsigned int *)t50) = (t56 | t57);
    goto LAB30;

LAB33:    t82 = *((unsigned int *)t67);
    t83 = *((unsigned int *)t79);
    *((unsigned int *)t67) = (t82 | t83);
    t84 = *((unsigned int *)t78);
    t85 = *((unsigned int *)t79);
    *((unsigned int *)t78) = (t84 | t85);
    goto LAB32;

}

static void Cont_29540_3(char *t0)
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
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;

LAB0:    t1 = (t0 + 9656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29540, ng0);
    t2 = (t0 + 6880);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4240U);
    t6 = *((char **)t5);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t6);
    t10 = (t8 & t9);
    *((unsigned int *)t7) = t10;
    t5 = (t4 + 4);
    t11 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB4;

LAB5:
LAB6:    t38 = (t0 + 12824);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memset(t42, 0, 8);
    t43 = 1U;
    t44 = t43;
    t45 = (t7 + 4);
    t46 = *((unsigned int *)t7);
    t43 = (t43 & t46);
    t47 = *((unsigned int *)t45);
    t44 = (t44 & t47);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t49 | t43);
    t50 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t50 | t44);
    xsi_driver_vfirst_trans_delayed(t38, 0, 0, 50LL, 0);
    t51 = (t0 + 12472);
    *((int *)t51) = 1;

LAB1:    return;
LAB4:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = (t4 + 4);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t4);
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
    goto LAB6;

}

static void Always_29558_4(char *t0)
{
    char t20[8];
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
    unsigned int t21;
    unsigned int t22;
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
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;

LAB0:    t1 = (t0 + 9904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29558, ng0);
    t2 = (t0 + 12488);
    *((int *)t2) = 1;
    t3 = (t0 + 9936);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29558, ng0);

LAB5:    xsi_set_current_line(29559, ng0);
    t4 = (t0 + 9712);
    t5 = (t0 + 1736);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);

LAB8:    t7 = (t0 + 9808);
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

LAB6:    t8 = (t0 + 1736);
    xsi_vlog_subprogram_popinvocation(t8);

LAB7:    t16 = (t0 + 9808);
    t17 = *((char **)t16);
    t16 = (t0 + 1736);
    t18 = (t0 + 9712);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(29560, ng0);
    t2 = (t0 + 3440U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t20, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t21 = *((unsigned int *)t3);
    t22 = *((unsigned int *)t2);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t4);
    t25 = *((unsigned int *)t5);
    t26 = (t24 ^ t25);
    t27 = (t23 | t26);
    t28 = *((unsigned int *)t4);
    t29 = *((unsigned int *)t5);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t27 & t31);
    if (t32 != 0)
        goto LAB15;

LAB12:    if (t30 != 0)
        goto LAB14;

LAB13:    *((unsigned int *)t20) = 1;

LAB15:    t7 = (t20 + 4);
    t33 = *((unsigned int *)t7);
    t34 = (~(t33));
    t35 = *((unsigned int *)t20);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(29561, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3440U);
    t4 = *((char **)t3);
    memset(t20, 0, 8);
    xsi_vlog_unsigned_multiply(t20, 32, t2, 32, t4, 6);
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t20, 0, 0, 32);

LAB18:    goto LAB2;

LAB9:;
LAB11:    t7 = (t0 + 9904U);
    *((char **)t7) = &&LAB8;
    goto LAB1;

LAB14:    t6 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB15;

LAB16:    xsi_set_current_line(29560, ng0);
    t8 = ((char*)((ng8)));
    t9 = (t0 + 5440);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB18;

}

static void Always_29564_5(char *t0)
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

LAB0:    t1 = (t0 + 10152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29564, ng0);
    t2 = (t0 + 12504);
    *((int *)t2) = 1;
    t3 = (t0 + 10184);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29564, ng0);

LAB5:    xsi_set_current_line(29565, ng0);
    t4 = (t0 + 9960);
    t5 = (t0 + 1736);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);

LAB8:    t7 = (t0 + 10056);
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

LAB6:    t8 = (t0 + 1736);
    xsi_vlog_subprogram_popinvocation(t8);

LAB7:    t16 = (t0 + 10056);
    t17 = *((char **)t16);
    t16 = (t0 + 1736);
    t18 = (t0 + 9960);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    goto LAB2;

LAB9:;
LAB11:    t7 = (t0 + 10152U);
    *((char **)t7) = &&LAB8;
    goto LAB1;

}

static void Always_29574_6(char *t0)
{
    char t12[16];
    char t14[8];
    char t22[8];
    char t31[8];
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
    char *t13;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    char *t23;
    char *t24;
    double t25;
    double t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    int t33;
    char *t34;
    char *t35;

LAB0:    t1 = (t0 + 10400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29574, ng0);
    t2 = (t0 + 12520);
    *((int *)t2) = 1;
    t3 = (t0 + 10432);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29574, ng0);

LAB5:    t4 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 10208);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(29579, ng0);
    t6 = (t0 + 6560);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 5440);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    xsi_vlog_unsigned_divide(t12, 64, t8, 64, t11, 32);
    t13 = (t0 + 7200);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 32);
    xsi_set_current_line(29580, ng0);
    t2 = (t0 + 7200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t14, 0, 8);
    xsi_vlog_signed_greatereq(t14, 32, t4, 32, t5, 32);
    t6 = (t14 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    t17 = *((unsigned int *)t14);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB8;

LAB9:
LAB10:    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 10208);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB8:    xsi_set_current_line(29580, ng0);

LAB11:    xsi_set_current_line(29581, ng0);
    t7 = (t0 + 6560);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 5440);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    xsi_vlog_unsigned_mod(t12, 64, t9, 64, t13, 32);
    t20 = (t0 + 7360);
    xsi_vlogvar_assign_value(t20, t12, 0, 0, 32);
    xsi_set_current_line(29582, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 7520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(29583, ng0);
    t2 = (t0 + 5760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t14 + 4);
    t6 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 0);
    *((unsigned int *)t14) = t16;
    t17 = *((unsigned int *)t6);
    t18 = (t17 >> 0);
    *((unsigned int *)t5) = t18;
    t19 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t19 & 7U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 7U);
    t7 = ((char*)((ng4)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_minus(t22, 3, t14, 3, t7, 3);
    t8 = (t0 + 5760);
    xsi_vlogvar_assign_value(t8, t22, 0, 0, 3);
    xsi_set_current_line(29584, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 5920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(29585, ng0);
    xsi_set_current_line(29585, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 7680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB12:    t2 = (t0 + 7680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5440);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t14, 0, 8);
    xsi_vlog_signed_less(t14, 32, t4, 32, t7, 32);
    t8 = (t14 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (~(t15));
    t17 = *((unsigned int *)t14);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(29598, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 7200);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t14, 0, 8);
    xsi_vlog_signed_multiply(t14, 32, t2, 32, t5, 32);
    t6 = ((char*)((ng12)));
    memset(t22, 0, 8);
    xsi_vlog_signed_divide(t22, 32, t14, 32, t6, 32);
    t25 = xsi_vlog_convert_to_real(t22, 32, 1);
    t26 = (t25 < 0.0000000000000000);
    if (t26 == 1)
        goto LAB29;

LAB30:    t25 = (t25 + 0.50000000000000000);
    t25 = ((int64)(t25));

LAB31:    t25 = (t25 * 1.0000000000000000);
    t7 = (t0 + 10208);
    xsi_process_wait(t7, t25);
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB13:    xsi_set_current_line(29585, ng0);

LAB15:    xsi_set_current_line(29586, ng0);
    t9 = (t0 + 7520);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t13 = (t0 + 7360);
    t20 = (t13 + 56U);
    t23 = *((char **)t20);
    memset(t22, 0, 8);
    xsi_vlog_signed_add(t22, 32, t11, 32, t23, 32);
    t24 = (t0 + 7520);
    xsi_vlogvar_assign_value(t24, t22, 0, 0, 32);
    xsi_set_current_line(29587, ng0);
    t2 = (t0 + 7520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5440);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t14, 0, 8);
    xsi_vlog_signed_greatereq(t14, 32, t4, 32, t7, 32);
    t8 = (t14 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (~(t15));
    t17 = *((unsigned int *)t14);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(29589, ng0);

LAB24:    xsi_set_current_line(29590, ng0);
    t2 = (t0 + 7200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t25 = xsi_vlog_convert_to_real(t4, 32, 1);
    t26 = (t25 < 0.0000000000000000);
    if (t26 == 1)
        goto LAB25;

LAB26:    t25 = (t25 + 0.50000000000000000);
    t25 = ((int64)(t25));

LAB27:    t25 = (t25 * 1.0000000000000000);
    t5 = (t0 + 10208);
    xsi_process_wait(t5, t25);
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB16:    xsi_set_current_line(29587, ng0);

LAB19:    xsi_set_current_line(29588, ng0);
    t9 = (t0 + 7200);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t13 = ((char*)((ng10)));
    memset(t22, 0, 8);
    xsi_vlog_signed_add(t22, 32, t11, 32, t13, 32);
    t25 = xsi_vlog_convert_to_real(t22, 32, 1);
    t26 = (t25 < 0.0000000000000000);
    if (t26 == 1)
        goto LAB20;

LAB21:    t25 = (t25 + 0.50000000000000000);
    t25 = ((int64)(t25));

LAB22:    t25 = (t25 * 1.0000000000000000);
    t20 = (t0 + 10208);
    xsi_process_wait(t20, t25);
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB18:    xsi_set_current_line(29592, ng0);
    t2 = (t0 + 5760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t14 + 4);
    t6 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 0);
    *((unsigned int *)t14) = t16;
    t17 = *((unsigned int *)t6);
    t18 = (t17 >> 0);
    *((unsigned int *)t5) = t18;
    t19 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t19 & 7U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 7U);
    t7 = ((char*)((ng4)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_minus(t22, 3, t14, 3, t7, 3);
    t8 = (t0 + 5760);
    xsi_vlogvar_assign_value(t8, t22, 0, 0, 3);
    xsi_set_current_line(29585, ng0);
    t2 = (t0 + 7680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t4, 32, t5, 32);
    t6 = (t0 + 7680);
    xsi_vlogvar_assign_value(t6, t14, 0, 0, 32);
    goto LAB12;

LAB20:    t25 = 0.0000000000000000;
    goto LAB22;

LAB23:    xsi_set_current_line(29588, ng0);
    t23 = (t0 + 7520);
    t24 = (t23 + 56U);
    t27 = *((char **)t24);
    t28 = (t0 + 5440);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t31, 0, 8);
    xsi_vlog_signed_minus(t31, 32, t27, 32, t30, 32);
    t32 = (t0 + 7520);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 32);
    goto LAB18;

LAB25:    t25 = 0.0000000000000000;
    goto LAB27;

LAB28:    goto LAB18;

LAB29:    t25 = 0.0000000000000000;
    goto LAB31;

LAB32:    xsi_set_current_line(29598, ng0);
    t8 = ((char*)((ng7)));
    t9 = (t0 + 5920);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 1);
    xsi_set_current_line(29599, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 7200);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t14, 0, 8);
    xsi_vlog_signed_multiply(t14, 32, t2, 32, t5, 32);
    t6 = ((char*)((ng12)));
    memset(t22, 0, 8);
    xsi_vlog_signed_divide(t22, 32, t14, 32, t6, 32);
    t25 = xsi_vlog_convert_to_real(t22, 32, 1);
    t26 = (t25 < 0.0000000000000000);
    if (t26 == 1)
        goto LAB33;

LAB34:    t25 = (t25 + 0.50000000000000000);
    t25 = ((int64)(t25));

LAB35:    t25 = (t25 * 1.0000000000000000);
    t7 = (t0 + 10208);
    xsi_process_wait(t7, t25);
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB33:    t25 = 0.0000000000000000;
    goto LAB35;

LAB36:    xsi_set_current_line(29602, ng0);
    t8 = (t0 + 10208);
    t9 = (t0 + 1736);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t9, t10);

LAB39:    t11 = (t0 + 10304);
    t13 = *((char **)t11);
    t20 = (t13 + 80U);
    t23 = *((char **)t20);
    t24 = (t23 + 272U);
    t27 = *((char **)t24);
    t28 = (t27 + 0U);
    t29 = *((char **)t28);
    t33 = ((int  (*)(char *, char *))t29)(t0, t13);

LAB41:    if (t33 != 0)
        goto LAB42;

LAB37:    t13 = (t0 + 1736);
    xsi_vlog_subprogram_popinvocation(t13);

LAB38:    t30 = (t0 + 10304);
    t32 = *((char **)t30);
    t30 = (t0 + 1736);
    t34 = (t0 + 10208);
    t35 = 0;
    xsi_delete_subprogram_invocation(t30, t32, t0, t34, t35);
    goto LAB10;

LAB40:;
LAB42:    t11 = (t0 + 10400U);
    *((char **)t11) = &&LAB39;
    goto LAB1;

}

static void Always_29615_7(char *t0)
{
    char t18[16];
    char t19[16];
    char t20[8];
    char t39[8];
    char t68[8];
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
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t21;
    unsigned int t22;
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
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    int t91;
    int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;

LAB0:    t1 = (t0 + 10648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29615, ng0);
    t2 = (t0 + 12536);
    *((int *)t2) = 1;
    t3 = (t0 + 10680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29615, ng0);

LAB5:    t4 = (t0 + 576);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 10456);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(29617, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t0 + 6880);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(29618, ng0);
    t2 = (t0 + 10456);
    t3 = (t0 + 1736);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB10:    t5 = (t0 + 10552);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB12:    if (t13 != 0)
        goto LAB13;

LAB8:    t6 = (t0 + 1736);
    xsi_vlog_subprogram_popinvocation(t6);

LAB9:    t14 = (t0 + 10552);
    t15 = *((char **)t14);
    t14 = (t0 + 1736);
    t16 = (t0 + 10456);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);
    xsi_set_current_line(29619, ng0);
    t2 = (t0 + 12552);
    *((int *)t2) = 1;
    t3 = (t0 + 10680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB6:    t3 = (t0 + 10456);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB11:;
LAB13:    t5 = (t0 + 10648U);
    *((char **)t5) = &&LAB10;
    goto LAB1;

LAB14:    xsi_set_current_line(29619, ng0);
    t4 = xsi_vlog_time(t18, 1.0000000000000000, 1.0000000000000000);
    t5 = (t0 + 7840);
    xsi_vlogvar_assign_value(t5, t18, 0, 0, 64);
    xsi_set_current_line(29620, ng0);

LAB15:    xsi_set_current_line(29620, ng0);
    t2 = (t0 + 12568);
    *((int *)t2) = 1;
    t3 = (t0 + 10680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(29620, ng0);

LAB17:    xsi_set_current_line(29621, ng0);
    t4 = xsi_vlog_time(t18, 1.0000000000000000, 1.0000000000000000);
    t5 = (t0 + 7840);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_unsigned_minus(t19, 64, t18, 64, t7, 64);
    t8 = (t0 + 6560);
    xsi_vlogvar_assign_value(t8, t19, 0, 0, 64);
    xsi_set_current_line(29622, ng0);
    t2 = xsi_vlog_time(t18, 1.0000000000000000, 1.0000000000000000);
    t3 = (t0 + 7840);
    xsi_vlogvar_assign_value(t3, t18, 0, 0, 64);
    xsi_set_current_line(29623, ng0);
    t2 = (t0 + 5920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t20, 0, 8);
    t5 = (t4 + 4);
    t21 = *((unsigned int *)t5);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB21;

LAB19:    if (*((unsigned int *)t5) == 0)
        goto LAB18;

LAB20:    t6 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t6) = 1;

LAB21:    t7 = (t20 + 4);
    t26 = *((unsigned int *)t7);
    t27 = (~(t26));
    t28 = *((unsigned int *)t20);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(29626, ng0);

LAB41:    xsi_set_current_line(29627, ng0);
    t2 = (t0 + 10456);
    t3 = (t0 + 1736);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB44:    t5 = (t0 + 10552);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB46:    if (t13 != 0)
        goto LAB47;

LAB42:    t6 = (t0 + 1736);
    xsi_vlog_subprogram_popinvocation(t6);

LAB43:    t14 = (t0 + 10552);
    t15 = *((char **)t14);
    t14 = (t0 + 1736);
    t16 = (t0 + 10456);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);

LAB24:    xsi_set_current_line(29629, ng0);
    t2 = (t0 + 280);
    t3 = (t0 + 10456);
    t13 = xsi_vlog_namedbase_disable(t2, t3);
    if (t13 == 1)
        goto LAB1;

LAB48:    xsi_set_current_line(29630, ng0);
    t2 = (t0 + 10456);
    xsi_process_wait(t2, 0LL);
    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB18:    *((unsigned int *)t20) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(29623, ng0);

LAB25:    xsi_set_current_line(29624, ng0);
    t8 = (t0 + 6720);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng13)));
    xsi_vlog_unsigned_add(t18, 64, t10, 64, t11, 32);
    t12 = (t0 + 6720);
    xsi_vlogvar_assign_value(t12, t18, 0, 0, 64);
    xsi_set_current_line(29625, ng0);
    t2 = (t0 + 6720);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5040U);
    t6 = *((char **)t5);
    xsi_vlog_unsigned_greater(t18, 64, t4, 64, t6, 11);
    t5 = (t18 + 4);
    t21 = *((unsigned int *)t5);
    t22 = (~(t21));
    t23 = *((unsigned int *)t18);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB26;

LAB27:
LAB28:    goto LAB24;

LAB26:    xsi_set_current_line(29625, ng0);
    t7 = ((char*)((ng4)));
    t8 = (t0 + 4720U);
    t9 = *((char **)t8);
    memset(t20, 0, 8);
    t8 = (t9 + 4);
    t26 = *((unsigned int *)t8);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB32;

LAB30:    if (*((unsigned int *)t8) == 0)
        goto LAB29;

LAB31:    t10 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t10) = 1;

LAB32:    t11 = (t20 + 4);
    t12 = (t9 + 4);
    t31 = *((unsigned int *)t9);
    t32 = (~(t31));
    *((unsigned int *)t20) = t32;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB34;

LAB33:    t37 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t37 & 1U);
    t38 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t38 & 1U);
    t40 = *((unsigned int *)t7);
    t41 = *((unsigned int *)t20);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t14 = (t7 + 4);
    t15 = (t20 + 4);
    t16 = (t39 + 4);
    t43 = *((unsigned int *)t14);
    t44 = *((unsigned int *)t15);
    t45 = (t43 | t44);
    *((unsigned int *)t16) = t45;
    t46 = *((unsigned int *)t16);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB35;

LAB36:
LAB37:    t66 = (t0 + 4880U);
    t67 = *((char **)t66);
    t69 = *((unsigned int *)t39);
    t70 = *((unsigned int *)t67);
    t71 = (t69 & t70);
    *((unsigned int *)t68) = t71;
    t66 = (t39 + 4);
    t72 = (t67 + 4);
    t73 = (t68 + 4);
    t74 = *((unsigned int *)t66);
    t75 = *((unsigned int *)t72);
    t76 = (t74 | t75);
    *((unsigned int *)t73) = t76;
    t77 = *((unsigned int *)t73);
    t78 = (t77 != 0);
    if (t78 == 1)
        goto LAB38;

LAB39:
LAB40:    t99 = (t0 + 6880);
    xsi_vlogvar_assign_value(t99, t68, 0, 0, 1);
    goto LAB28;

LAB29:    *((unsigned int *)t20) = 1;
    goto LAB32;

LAB34:    t33 = *((unsigned int *)t20);
    t34 = *((unsigned int *)t12);
    *((unsigned int *)t20) = (t33 | t34);
    t35 = *((unsigned int *)t11);
    t36 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t35 | t36);
    goto LAB33;

LAB35:    t48 = *((unsigned int *)t39);
    t49 = *((unsigned int *)t16);
    *((unsigned int *)t39) = (t48 | t49);
    t17 = (t7 + 4);
    t50 = (t20 + 4);
    t51 = *((unsigned int *)t7);
    t52 = (~(t51));
    t53 = *((unsigned int *)t17);
    t54 = (~(t53));
    t55 = *((unsigned int *)t20);
    t56 = (~(t55));
    t57 = *((unsigned int *)t50);
    t58 = (~(t57));
    t13 = (t52 & t54);
    t59 = (t56 & t58);
    t60 = (~(t13));
    t61 = (~(t59));
    t62 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t62 & t60);
    t63 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t63 & t61);
    t64 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t64 & t60);
    t65 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t65 & t61);
    goto LAB37;

LAB38:    t79 = *((unsigned int *)t68);
    t80 = *((unsigned int *)t73);
    *((unsigned int *)t68) = (t79 | t80);
    t81 = (t39 + 4);
    t82 = (t67 + 4);
    t83 = *((unsigned int *)t39);
    t84 = (~(t83));
    t85 = *((unsigned int *)t81);
    t86 = (~(t85));
    t87 = *((unsigned int *)t67);
    t88 = (~(t87));
    t89 = *((unsigned int *)t82);
    t90 = (~(t89));
    t91 = (t84 & t86);
    t92 = (t88 & t90);
    t93 = (~(t91));
    t94 = (~(t92));
    t95 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t95 & t93);
    t96 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t96 & t94);
    t97 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t97 & t93);
    t98 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t98 & t94);
    goto LAB40;

LAB45:;
LAB47:    t5 = (t0 + 10648U);
    *((char **)t5) = &&LAB44;
    goto LAB1;

LAB49:    xsi_set_current_line(29632, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6080);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(29633, ng0);
    t2 = (t0 + 10456);
    xsi_process_wait(t2, 1LL);
    *((char **)t1) = &&LAB50;
    goto LAB1;

LAB50:    xsi_set_current_line(29633, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 6080);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB15;

LAB51:    t2 = (t0 + 576);
    xsi_vlog_namedbase_popprocess(t2);
    goto LAB6;

}

static void Always_29642_8(char *t0)
{
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
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
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;

LAB0:    t1 = (t0 + 10896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29642, ng0);
    t2 = (t0 + 12584);
    *((int *)t2) = 1;
    t3 = (t0 + 10928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29642, ng0);

LAB5:    t4 = (t0 + 872);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 10704);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(29644, ng0);
    t6 = ((char*)((ng2)));
    t7 = (t0 + 5600);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(29645, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 8000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(29647, ng0);

LAB8:    xsi_set_current_line(29647, ng0);
    t2 = (t0 + 12600);
    *((int *)t2) = 1;
    t3 = (t0 + 10928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB6:    t3 = (t0 + 10704);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB9:    xsi_set_current_line(29647, ng0);

LAB10:    xsi_set_current_line(29652, ng0);
    t4 = (t0 + 10704);
    xsi_process_wait(t4, 1LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(29653, ng0);
    t5 = (t0 + 8000);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 3600U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB13;

LAB12:    t11 = (t9 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB13;

LAB16:    if (*((unsigned int *)t7) < *((unsigned int *)t9))
        goto LAB15;

LAB14:    *((unsigned int *)t10) = 1;

LAB15:    t13 = (t10 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t10);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(29657, ng0);
    t2 = (t0 + 8000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t4, 32, t5, 32);
    t6 = (t0 + 8000);
    xsi_vlogvar_assign_value(t6, t10, 0, 0, 32);

LAB19:    goto LAB8;

LAB13:    t12 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB15;

LAB17:    xsi_set_current_line(29653, ng0);

LAB20:    xsi_set_current_line(29654, ng0);
    t19 = ((char*)((ng10)));
    t20 = (t0 + 8000);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 32);
    xsi_set_current_line(29655, ng0);
    t2 = (t0 + 5600);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t5 = (t4 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB24;

LAB22:    if (*((unsigned int *)t5) == 0)
        goto LAB21;

LAB23:    t6 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t6) = 1;

LAB24:    t7 = (t10 + 4);
    t8 = (t4 + 4);
    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    *((unsigned int *)t10) = t22;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB26;

LAB25:    t27 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t27 & 1U);
    t28 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t28 & 1U);
    t9 = (t0 + 5600);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 1);
    goto LAB19;

LAB21:    *((unsigned int *)t10) = 1;
    goto LAB24;

LAB26:    t23 = *((unsigned int *)t10);
    t24 = *((unsigned int *)t8);
    *((unsigned int *)t10) = (t23 | t24);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t25 | t26);
    goto LAB25;

LAB27:    t2 = (t0 + 872);
    xsi_vlog_namedbase_popprocess(t2);
    goto LAB6;

}

static void Cont_29678_9(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t24[8];
    char t68[8];
    char t69[8];
    char t72[8];
    char t94[8];
    char t107[8];
    char t108[8];
    char t111[8];
    char t133[8];
    char t149[8];
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
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t70;
    char *t71;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    char *t93;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t109;
    char *t110;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    char *t132;
    char *t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t147;
    char *t148;
    char *t150;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    char *t159;
    char *t160;
    char *t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    char *t171;

LAB0:    t1 = (t0 + 11144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29678, ng0);
    t2 = (t0 + 4720U);
    t5 = *((char **)t2);
    t2 = (t0 + 4880U);
    t7 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t7 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;

LAB7:    t14 = (t6 + 4);
    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (~(t16));
    *((unsigned int *)t6) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB9;

LAB8:    t22 = *((unsigned int *)t6);
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
        goto LAB10;

LAB11:
LAB12:    memset(t4, 0, 8);
    t52 = (t24 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t24);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t52) != 0)
        goto LAB15;

LAB16:    t59 = (t4 + 4);
    t60 = *((unsigned int *)t4);
    t61 = *((unsigned int *)t59);
    t62 = (t60 || t61);
    if (t62 > 0)
        goto LAB17;

LAB18:    t64 = *((unsigned int *)t4);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t59) > 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t4) > 0)
        goto LAB23;

LAB24:    memcpy(t3, t68, 8);

LAB25:    t158 = (t0 + 12888);
    t159 = (t158 + 56U);
    t160 = *((char **)t159);
    t161 = (t160 + 56U);
    t162 = *((char **)t161);
    memset(t162, 0, 8);
    t163 = 1U;
    t164 = t163;
    t165 = (t3 + 4);
    t166 = *((unsigned int *)t3);
    t163 = (t163 & t166);
    t167 = *((unsigned int *)t165);
    t164 = (t164 & t167);
    t168 = (t162 + 4);
    t169 = *((unsigned int *)t162);
    *((unsigned int *)t162) = (t169 | t163);
    t170 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t170 | t164);
    xsi_driver_vfirst_trans(t158, 0, 0);
    t171 = (t0 + 12616);
    *((int *)t171) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB9:    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t6) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB8;

LAB10:    t36 = *((unsigned int *)t24);
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
    goto LAB12;

LAB13:    *((unsigned int *)t4) = 1;
    goto LAB16;

LAB15:    t58 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB16;

LAB17:    t63 = ((char*)((ng2)));
    goto LAB18;

LAB19:    t70 = (t0 + 3760U);
    t71 = *((char **)t70);
    memset(t72, 0, 8);
    t70 = (t72 + 4);
    t73 = (t71 + 4);
    t74 = *((unsigned int *)t71);
    t75 = (t74 >> 1);
    t76 = (t75 & 1);
    *((unsigned int *)t72) = t76;
    t77 = *((unsigned int *)t73);
    t78 = (t77 >> 1);
    t79 = (t78 & 1);
    *((unsigned int *)t70) = t79;
    memset(t69, 0, 8);
    t80 = (t72 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (~(t81));
    t83 = *((unsigned int *)t72);
    t84 = (t83 & t82);
    t85 = (t84 & 1U);
    if (t85 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t80) != 0)
        goto LAB28;

LAB29:    t87 = (t69 + 4);
    t88 = *((unsigned int *)t69);
    t89 = *((unsigned int *)t87);
    t90 = (t88 || t89);
    if (t90 > 0)
        goto LAB30;

LAB31:    t103 = *((unsigned int *)t69);
    t104 = (~(t103));
    t105 = *((unsigned int *)t87);
    t106 = (t104 || t105);
    if (t106 > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t87) > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t69) > 0)
        goto LAB36;

LAB37:    memcpy(t68, t107, 8);

LAB38:    goto LAB20;

LAB21:    xsi_vlog_unsigned_bit_combine(t3, 1, t63, 1, t68, 1);
    goto LAB25;

LAB23:    memcpy(t3, t63, 8);
    goto LAB25;

LAB26:    *((unsigned int *)t69) = 1;
    goto LAB29;

LAB28:    t86 = (t69 + 4);
    *((unsigned int *)t69) = 1;
    *((unsigned int *)t86) = 1;
    goto LAB29;

LAB30:    t91 = (t0 + 5760);
    t92 = (t91 + 56U);
    t93 = *((char **)t92);
    memset(t94, 0, 8);
    t95 = (t94 + 4);
    t96 = (t93 + 4);
    t97 = *((unsigned int *)t93);
    t98 = (t97 >> 2);
    t99 = (t98 & 1);
    *((unsigned int *)t94) = t99;
    t100 = *((unsigned int *)t96);
    t101 = (t100 >> 2);
    t102 = (t101 & 1);
    *((unsigned int *)t95) = t102;
    goto LAB31;

LAB32:    t109 = (t0 + 3760U);
    t110 = *((char **)t109);
    memset(t111, 0, 8);
    t109 = (t111 + 4);
    t112 = (t110 + 4);
    t113 = *((unsigned int *)t110);
    t114 = (t113 >> 0);
    t115 = (t114 & 1);
    *((unsigned int *)t111) = t115;
    t116 = *((unsigned int *)t112);
    t117 = (t116 >> 0);
    t118 = (t117 & 1);
    *((unsigned int *)t109) = t118;
    memset(t108, 0, 8);
    t119 = (t111 + 4);
    t120 = *((unsigned int *)t119);
    t121 = (~(t120));
    t122 = *((unsigned int *)t111);
    t123 = (t122 & t121);
    t124 = (t123 & 1U);
    if (t124 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t119) != 0)
        goto LAB41;

LAB42:    t126 = (t108 + 4);
    t127 = *((unsigned int *)t108);
    t128 = *((unsigned int *)t126);
    t129 = (t127 || t128);
    if (t129 > 0)
        goto LAB43;

LAB44:    t142 = *((unsigned int *)t108);
    t143 = (~(t142));
    t144 = *((unsigned int *)t126);
    t145 = (t143 || t144);
    if (t145 > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t126) > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t108) > 0)
        goto LAB49;

LAB50:    memcpy(t107, t149, 8);

LAB51:    goto LAB33;

LAB34:    xsi_vlog_unsigned_bit_combine(t68, 1, t94, 1, t107, 1);
    goto LAB38;

LAB36:    memcpy(t68, t94, 8);
    goto LAB38;

LAB39:    *((unsigned int *)t108) = 1;
    goto LAB42;

LAB41:    t125 = (t108 + 4);
    *((unsigned int *)t108) = 1;
    *((unsigned int *)t125) = 1;
    goto LAB42;

LAB43:    t130 = (t0 + 5760);
    t131 = (t130 + 56U);
    t132 = *((char **)t131);
    memset(t133, 0, 8);
    t134 = (t133 + 4);
    t135 = (t132 + 4);
    t136 = *((unsigned int *)t132);
    t137 = (t136 >> 1);
    t138 = (t137 & 1);
    *((unsigned int *)t133) = t138;
    t139 = *((unsigned int *)t135);
    t140 = (t139 >> 1);
    t141 = (t140 & 1);
    *((unsigned int *)t134) = t141;
    goto LAB44;

LAB45:    t146 = (t0 + 5760);
    t147 = (t146 + 56U);
    t148 = *((char **)t147);
    memset(t149, 0, 8);
    t150 = (t149 + 4);
    t151 = (t148 + 4);
    t152 = *((unsigned int *)t148);
    t153 = (t152 >> 0);
    t154 = (t153 & 1);
    *((unsigned int *)t149) = t154;
    t155 = *((unsigned int *)t151);
    t156 = (t155 >> 0);
    t157 = (t156 & 1);
    *((unsigned int *)t150) = t157;
    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t107, 1, t133, 1, t149, 1);
    goto LAB51;

LAB49:    memcpy(t107, t133, 8);
    goto LAB51;

}

static void Cont_29680_10(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t24[8];
    char t68[8];
    char t69[8];
    char t72[8];
    char t94[8];
    char t107[8];
    char t108[8];
    char t111[8];
    char t133[8];
    char t149[8];
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
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t70;
    char *t71;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    char *t93;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t109;
    char *t110;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    char *t132;
    char *t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t147;
    char *t148;
    char *t150;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    char *t159;
    char *t160;
    char *t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    char *t171;

LAB0:    t1 = (t0 + 11392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29680, ng0);
    t2 = (t0 + 4720U);
    t5 = *((char **)t2);
    t2 = (t0 + 4880U);
    t7 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t7 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;

LAB7:    t14 = (t6 + 4);
    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (~(t16));
    *((unsigned int *)t6) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB9;

LAB8:    t22 = *((unsigned int *)t6);
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
        goto LAB10;

LAB11:
LAB12:    memset(t4, 0, 8);
    t52 = (t24 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t24);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t52) != 0)
        goto LAB15;

LAB16:    t59 = (t4 + 4);
    t60 = *((unsigned int *)t4);
    t61 = *((unsigned int *)t59);
    t62 = (t60 || t61);
    if (t62 > 0)
        goto LAB17;

LAB18:    t64 = *((unsigned int *)t4);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t59) > 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t4) > 0)
        goto LAB23;

LAB24:    memcpy(t3, t68, 8);

LAB25:    t158 = (t0 + 12952);
    t159 = (t158 + 56U);
    t160 = *((char **)t159);
    t161 = (t160 + 56U);
    t162 = *((char **)t161);
    memset(t162, 0, 8);
    t163 = 1U;
    t164 = t163;
    t165 = (t3 + 4);
    t166 = *((unsigned int *)t3);
    t163 = (t163 & t166);
    t167 = *((unsigned int *)t165);
    t164 = (t164 & t167);
    t168 = (t162 + 4);
    t169 = *((unsigned int *)t162);
    *((unsigned int *)t162) = (t169 | t163);
    t170 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t170 | t164);
    xsi_driver_vfirst_trans(t158, 0, 0);
    t171 = (t0 + 12632);
    *((int *)t171) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB9:    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t6) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB8;

LAB10:    t36 = *((unsigned int *)t24);
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
    goto LAB12;

LAB13:    *((unsigned int *)t4) = 1;
    goto LAB16;

LAB15:    t58 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB16;

LAB17:    t63 = ((char*)((ng2)));
    goto LAB18;

LAB19:    t70 = (t0 + 3920U);
    t71 = *((char **)t70);
    memset(t72, 0, 8);
    t70 = (t72 + 4);
    t73 = (t71 + 4);
    t74 = *((unsigned int *)t71);
    t75 = (t74 >> 1);
    t76 = (t75 & 1);
    *((unsigned int *)t72) = t76;
    t77 = *((unsigned int *)t73);
    t78 = (t77 >> 1);
    t79 = (t78 & 1);
    *((unsigned int *)t70) = t79;
    memset(t69, 0, 8);
    t80 = (t72 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (~(t81));
    t83 = *((unsigned int *)t72);
    t84 = (t83 & t82);
    t85 = (t84 & 1U);
    if (t85 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t80) != 0)
        goto LAB28;

LAB29:    t87 = (t69 + 4);
    t88 = *((unsigned int *)t69);
    t89 = *((unsigned int *)t87);
    t90 = (t88 || t89);
    if (t90 > 0)
        goto LAB30;

LAB31:    t103 = *((unsigned int *)t69);
    t104 = (~(t103));
    t105 = *((unsigned int *)t87);
    t106 = (t104 || t105);
    if (t106 > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t87) > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t69) > 0)
        goto LAB36;

LAB37:    memcpy(t68, t107, 8);

LAB38:    goto LAB20;

LAB21:    xsi_vlog_unsigned_bit_combine(t3, 1, t63, 1, t68, 1);
    goto LAB25;

LAB23:    memcpy(t3, t63, 8);
    goto LAB25;

LAB26:    *((unsigned int *)t69) = 1;
    goto LAB29;

LAB28:    t86 = (t69 + 4);
    *((unsigned int *)t69) = 1;
    *((unsigned int *)t86) = 1;
    goto LAB29;

LAB30:    t91 = (t0 + 5760);
    t92 = (t91 + 56U);
    t93 = *((char **)t92);
    memset(t94, 0, 8);
    t95 = (t94 + 4);
    t96 = (t93 + 4);
    t97 = *((unsigned int *)t93);
    t98 = (t97 >> 2);
    t99 = (t98 & 1);
    *((unsigned int *)t94) = t99;
    t100 = *((unsigned int *)t96);
    t101 = (t100 >> 2);
    t102 = (t101 & 1);
    *((unsigned int *)t95) = t102;
    goto LAB31;

LAB32:    t109 = (t0 + 3920U);
    t110 = *((char **)t109);
    memset(t111, 0, 8);
    t109 = (t111 + 4);
    t112 = (t110 + 4);
    t113 = *((unsigned int *)t110);
    t114 = (t113 >> 0);
    t115 = (t114 & 1);
    *((unsigned int *)t111) = t115;
    t116 = *((unsigned int *)t112);
    t117 = (t116 >> 0);
    t118 = (t117 & 1);
    *((unsigned int *)t109) = t118;
    memset(t108, 0, 8);
    t119 = (t111 + 4);
    t120 = *((unsigned int *)t119);
    t121 = (~(t120));
    t122 = *((unsigned int *)t111);
    t123 = (t122 & t121);
    t124 = (t123 & 1U);
    if (t124 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t119) != 0)
        goto LAB41;

LAB42:    t126 = (t108 + 4);
    t127 = *((unsigned int *)t108);
    t128 = *((unsigned int *)t126);
    t129 = (t127 || t128);
    if (t129 > 0)
        goto LAB43;

LAB44:    t142 = *((unsigned int *)t108);
    t143 = (~(t142));
    t144 = *((unsigned int *)t126);
    t145 = (t143 || t144);
    if (t145 > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t126) > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t108) > 0)
        goto LAB49;

LAB50:    memcpy(t107, t149, 8);

LAB51:    goto LAB33;

LAB34:    xsi_vlog_unsigned_bit_combine(t68, 1, t94, 1, t107, 1);
    goto LAB38;

LAB36:    memcpy(t68, t94, 8);
    goto LAB38;

LAB39:    *((unsigned int *)t108) = 1;
    goto LAB42;

LAB41:    t125 = (t108 + 4);
    *((unsigned int *)t108) = 1;
    *((unsigned int *)t125) = 1;
    goto LAB42;

LAB43:    t130 = (t0 + 5760);
    t131 = (t130 + 56U);
    t132 = *((char **)t131);
    memset(t133, 0, 8);
    t134 = (t133 + 4);
    t135 = (t132 + 4);
    t136 = *((unsigned int *)t132);
    t137 = (t136 >> 1);
    t138 = (t137 & 1);
    *((unsigned int *)t133) = t138;
    t139 = *((unsigned int *)t135);
    t140 = (t139 >> 1);
    t141 = (t140 & 1);
    *((unsigned int *)t134) = t141;
    goto LAB44;

LAB45:    t146 = (t0 + 5760);
    t147 = (t146 + 56U);
    t148 = *((char **)t147);
    memset(t149, 0, 8);
    t150 = (t149 + 4);
    t151 = (t148 + 4);
    t152 = *((unsigned int *)t148);
    t153 = (t152 >> 0);
    t154 = (t153 & 1);
    *((unsigned int *)t149) = t154;
    t155 = *((unsigned int *)t151);
    t156 = (t155 >> 0);
    t157 = (t156 & 1);
    *((unsigned int *)t150) = t157;
    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t107, 1, t133, 1, t149, 1);
    goto LAB51;

LAB49:    memcpy(t107, t133, 8);
    goto LAB51;

}

static void Cont_29682_11(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t24[8];
    char t68[8];
    char t69[8];
    char t72[8];
    char t94[8];
    char t107[8];
    char t108[8];
    char t111[8];
    char t133[8];
    char t149[8];
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
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t70;
    char *t71;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    char *t93;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t109;
    char *t110;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    char *t132;
    char *t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t147;
    char *t148;
    char *t150;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    char *t159;
    char *t160;
    char *t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    char *t171;

LAB0:    t1 = (t0 + 11640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29682, ng0);
    t2 = (t0 + 4720U);
    t5 = *((char **)t2);
    t2 = (t0 + 4880U);
    t7 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t7 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;

LAB7:    t14 = (t6 + 4);
    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (~(t16));
    *((unsigned int *)t6) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB9;

LAB8:    t22 = *((unsigned int *)t6);
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
        goto LAB10;

LAB11:
LAB12:    memset(t4, 0, 8);
    t52 = (t24 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t24);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t52) != 0)
        goto LAB15;

LAB16:    t59 = (t4 + 4);
    t60 = *((unsigned int *)t4);
    t61 = *((unsigned int *)t59);
    t62 = (t60 || t61);
    if (t62 > 0)
        goto LAB17;

LAB18:    t64 = *((unsigned int *)t4);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t59) > 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t4) > 0)
        goto LAB23;

LAB24:    memcpy(t3, t68, 8);

LAB25:    t158 = (t0 + 13016);
    t159 = (t158 + 56U);
    t160 = *((char **)t159);
    t161 = (t160 + 56U);
    t162 = *((char **)t161);
    memset(t162, 0, 8);
    t163 = 1U;
    t164 = t163;
    t165 = (t3 + 4);
    t166 = *((unsigned int *)t3);
    t163 = (t163 & t166);
    t167 = *((unsigned int *)t165);
    t164 = (t164 & t167);
    t168 = (t162 + 4);
    t169 = *((unsigned int *)t162);
    *((unsigned int *)t162) = (t169 | t163);
    t170 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t170 | t164);
    xsi_driver_vfirst_trans(t158, 1, 1);
    t171 = (t0 + 12648);
    *((int *)t171) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t6) = 1;
    goto LAB7;

LAB9:    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t6) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB8;

LAB10:    t36 = *((unsigned int *)t24);
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
    goto LAB12;

LAB13:    *((unsigned int *)t4) = 1;
    goto LAB16;

LAB15:    t58 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB16;

LAB17:    t63 = ((char*)((ng2)));
    goto LAB18;

LAB19:    t70 = (t0 + 4080U);
    t71 = *((char **)t70);
    memset(t72, 0, 8);
    t70 = (t72 + 4);
    t73 = (t71 + 4);
    t74 = *((unsigned int *)t71);
    t75 = (t74 >> 1);
    t76 = (t75 & 1);
    *((unsigned int *)t72) = t76;
    t77 = *((unsigned int *)t73);
    t78 = (t77 >> 1);
    t79 = (t78 & 1);
    *((unsigned int *)t70) = t79;
    memset(t69, 0, 8);
    t80 = (t72 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (~(t81));
    t83 = *((unsigned int *)t72);
    t84 = (t83 & t82);
    t85 = (t84 & 1U);
    if (t85 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t80) != 0)
        goto LAB28;

LAB29:    t87 = (t69 + 4);
    t88 = *((unsigned int *)t69);
    t89 = *((unsigned int *)t87);
    t90 = (t88 || t89);
    if (t90 > 0)
        goto LAB30;

LAB31:    t103 = *((unsigned int *)t69);
    t104 = (~(t103));
    t105 = *((unsigned int *)t87);
    t106 = (t104 || t105);
    if (t106 > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t87) > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t69) > 0)
        goto LAB36;

LAB37:    memcpy(t68, t107, 8);

LAB38:    goto LAB20;

LAB21:    xsi_vlog_unsigned_bit_combine(t3, 1, t63, 1, t68, 1);
    goto LAB25;

LAB23:    memcpy(t3, t63, 8);
    goto LAB25;

LAB26:    *((unsigned int *)t69) = 1;
    goto LAB29;

LAB28:    t86 = (t69 + 4);
    *((unsigned int *)t69) = 1;
    *((unsigned int *)t86) = 1;
    goto LAB29;

LAB30:    t91 = (t0 + 5760);
    t92 = (t91 + 56U);
    t93 = *((char **)t92);
    memset(t94, 0, 8);
    t95 = (t94 + 4);
    t96 = (t93 + 4);
    t97 = *((unsigned int *)t93);
    t98 = (t97 >> 2);
    t99 = (t98 & 1);
    *((unsigned int *)t94) = t99;
    t100 = *((unsigned int *)t96);
    t101 = (t100 >> 2);
    t102 = (t101 & 1);
    *((unsigned int *)t95) = t102;
    goto LAB31;

LAB32:    t109 = (t0 + 4080U);
    t110 = *((char **)t109);
    memset(t111, 0, 8);
    t109 = (t111 + 4);
    t112 = (t110 + 4);
    t113 = *((unsigned int *)t110);
    t114 = (t113 >> 0);
    t115 = (t114 & 1);
    *((unsigned int *)t111) = t115;
    t116 = *((unsigned int *)t112);
    t117 = (t116 >> 0);
    t118 = (t117 & 1);
    *((unsigned int *)t109) = t118;
    memset(t108, 0, 8);
    t119 = (t111 + 4);
    t120 = *((unsigned int *)t119);
    t121 = (~(t120));
    t122 = *((unsigned int *)t111);
    t123 = (t122 & t121);
    t124 = (t123 & 1U);
    if (t124 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t119) != 0)
        goto LAB41;

LAB42:    t126 = (t108 + 4);
    t127 = *((unsigned int *)t108);
    t128 = *((unsigned int *)t126);
    t129 = (t127 || t128);
    if (t129 > 0)
        goto LAB43;

LAB44:    t142 = *((unsigned int *)t108);
    t143 = (~(t142));
    t144 = *((unsigned int *)t126);
    t145 = (t143 || t144);
    if (t145 > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t126) > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t108) > 0)
        goto LAB49;

LAB50:    memcpy(t107, t149, 8);

LAB51:    goto LAB33;

LAB34:    xsi_vlog_unsigned_bit_combine(t68, 1, t94, 1, t107, 1);
    goto LAB38;

LAB36:    memcpy(t68, t94, 8);
    goto LAB38;

LAB39:    *((unsigned int *)t108) = 1;
    goto LAB42;

LAB41:    t125 = (t108 + 4);
    *((unsigned int *)t108) = 1;
    *((unsigned int *)t125) = 1;
    goto LAB42;

LAB43:    t130 = (t0 + 5760);
    t131 = (t130 + 56U);
    t132 = *((char **)t131);
    memset(t133, 0, 8);
    t134 = (t133 + 4);
    t135 = (t132 + 4);
    t136 = *((unsigned int *)t132);
    t137 = (t136 >> 1);
    t138 = (t137 & 1);
    *((unsigned int *)t133) = t138;
    t139 = *((unsigned int *)t135);
    t140 = (t139 >> 1);
    t141 = (t140 & 1);
    *((unsigned int *)t134) = t141;
    goto LAB44;

LAB45:    t146 = (t0 + 5760);
    t147 = (t146 + 56U);
    t148 = *((char **)t147);
    memset(t149, 0, 8);
    t150 = (t149 + 4);
    t151 = (t148 + 4);
    t152 = *((unsigned int *)t148);
    t153 = (t152 >> 0);
    t154 = (t153 & 1);
    *((unsigned int *)t149) = t154;
    t155 = *((unsigned int *)t151);
    t156 = (t155 >> 0);
    t157 = (t156 & 1);
    *((unsigned int *)t150) = t157;
    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t107, 1, t133, 1, t149, 1);
    goto LAB51;

LAB49:    memcpy(t107, t133, 8);
    goto LAB51;

}

static void Always_29704_12(char *t0)
{
    char t20[8];
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
    unsigned int t21;
    unsigned int t22;
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
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;

LAB0:    t1 = (t0 + 11888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29704, ng0);
    t2 = (t0 + 12664);
    *((int *)t2) = 1;
    t3 = (t0 + 11920);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29704, ng0);

LAB5:    xsi_set_current_line(29705, ng0);
    t4 = (t0 + 11696);
    t5 = (t0 + 2168);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);

LAB8:    t7 = (t0 + 11792);
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

LAB6:    t8 = (t0 + 2168);
    xsi_vlog_subprogram_popinvocation(t8);

LAB7:    t16 = (t0 + 11792);
    t17 = *((char **)t16);
    t16 = (t0 + 2168);
    t18 = (t0 + 11696);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(29707, ng0);
    t2 = (t0 + 4880U);
    t3 = *((char **)t2);
    memset(t20, 0, 8);
    t2 = (t3 + 4);
    t21 = *((unsigned int *)t2);
    t22 = (~(t21));
    t23 = *((unsigned int *)t3);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB15;

LAB13:    if (*((unsigned int *)t2) == 0)
        goto LAB12;

LAB14:    t4 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t4) = 1;

LAB15:    t5 = (t20 + 4);
    t6 = (t3 + 4);
    t26 = *((unsigned int *)t3);
    t27 = (~(t26));
    *((unsigned int *)t20) = t27;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB17;

LAB16:    t32 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t32 & 1U);
    t33 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t33 & 1U);
    t7 = (t20 + 4);
    t34 = *((unsigned int *)t7);
    t35 = (~(t34));
    t36 = *((unsigned int *)t20);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(29708, ng0);
    t2 = (t0 + 4720U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t21 = *((unsigned int *)t2);
    t22 = (~(t21));
    t23 = *((unsigned int *)t3);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB21;

LAB22:
LAB23:
LAB20:    goto LAB2;

LAB9:;
LAB11:    t7 = (t0 + 11888U);
    *((char **)t7) = &&LAB8;
    goto LAB1;

LAB12:    *((unsigned int *)t20) = 1;
    goto LAB15;

LAB17:    t28 = *((unsigned int *)t20);
    t29 = *((unsigned int *)t6);
    *((unsigned int *)t20) = (t28 | t29);
    t30 = *((unsigned int *)t5);
    t31 = *((unsigned int *)t6);
    *((unsigned int *)t5) = (t30 | t31);
    goto LAB16;

LAB18:    xsi_set_current_line(29707, ng0);
    t8 = ((char*)((ng2)));
    t9 = (t0 + 5760);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 3);
    goto LAB20;

LAB21:    xsi_set_current_line(29708, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 5760);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    goto LAB23;

}

static void Always_29711_13(char *t0)
{
    char t6[8];
    char t14[8];
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
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
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    int t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;

LAB0:    t1 = (t0 + 12136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29711, ng0);
    t2 = (t0 + 12680);
    *((int *)t2) = 1;
    t3 = (t0 + 12168);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29711, ng0);

LAB5:    xsi_set_current_line(29712, ng0);
    t4 = (t0 + 4880U);
    t5 = *((char **)t4);
    t4 = (t0 + 4720U);
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

LAB9:    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t6);
    t17 = (t15 & t16);
    *((unsigned int *)t14) = t17;
    t18 = (t5 + 4);
    t19 = (t6 + 4);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t18);
    t22 = *((unsigned int *)t19);
    t23 = (t21 | t22);
    *((unsigned int *)t20) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB10;

LAB11:
LAB12:    t46 = (t14 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t14);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB10:    t26 = *((unsigned int *)t14);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t14) = (t26 | t27);
    t28 = (t5 + 4);
    t29 = (t6 + 4);
    t30 = *((unsigned int *)t5);
    t31 = (~(t30));
    t32 = *((unsigned int *)t28);
    t33 = (~(t32));
    t34 = *((unsigned int *)t6);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (~(t36));
    t38 = (t31 & t33);
    t39 = (t35 & t37);
    t40 = (~(t38));
    t41 = (~(t39));
    t42 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t42 & t40);
    t43 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t43 & t41);
    t44 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t44 & t40);
    t45 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t45 & t41);
    goto LAB12;

LAB13:    xsi_set_current_line(29712, ng0);

LAB16:    xsi_set_current_line(29713, ng0);
    t52 = (t0 + 11944);
    t53 = (t0 + 2168);
    t54 = xsi_create_subprogram_invocation(t52, 0, t0, t53, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t53, t54);

LAB19:    t55 = (t0 + 12040);
    t56 = *((char **)t55);
    t57 = (t56 + 80U);
    t58 = *((char **)t57);
    t59 = (t58 + 272U);
    t60 = *((char **)t59);
    t61 = (t60 + 0U);
    t62 = *((char **)t61);
    t63 = ((int  (*)(char *, char *))t62)(t0, t56);

LAB21:    if (t63 != 0)
        goto LAB22;

LAB17:    t56 = (t0 + 2168);
    xsi_vlog_subprogram_popinvocation(t56);

LAB18:    t64 = (t0 + 12040);
    t65 = *((char **)t64);
    t64 = (t0 + 2168);
    t66 = (t0 + 11944);
    t67 = 0;
    xsi_delete_subprogram_invocation(t64, t65, t0, t66, t67);
    xsi_set_current_line(29714, ng0);
    t2 = (t0 + 11944);
    xsi_process_wait(t2, 1LL);
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB20:;
LAB22:    t55 = (t0 + 12136U);
    *((char **)t55) = &&LAB19;
    goto LAB1;

LAB23:    xsi_set_current_line(29717, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 6240);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(29718, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6400);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(29719, ng0);
    t2 = (t0 + 11944);
    xsi_process_wait(t2, 1LL);
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB24:    xsi_set_current_line(29719, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 6240);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(29720, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6400);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB15;

}


extern void secureip_m_17436000927932967331_3908113159_init()
{
	static char *pe[] = {(void *)Initial_29523_0,(void *)Initial_29524_1,(void *)Cont_29536_2,(void *)Cont_29540_3,(void *)Always_29558_4,(void *)Always_29564_5,(void *)Always_29574_6,(void *)Always_29615_7,(void *)Always_29642_8,(void *)Cont_29678_9,(void *)Cont_29680_10,(void *)Cont_29682_11,(void *)Always_29704_12,(void *)Always_29711_13};
	static char *se[] = {(void *)sp_clear_scount,(void *)sp_kill_pll};
	xsi_register_didat("secureip_m_17436000927932967331_3908113159", "isim/aurora_Network_1_isim_beh.exe.sim/secureip/m_17436000927932967331_3908113159.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
