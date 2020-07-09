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
static const char *ng0 = "/root/Desktop/MTP/Testings/modifying_yatish_setup_i2/aurora_8b10b_v5_3/src/aurora_8b10b_v5_3_err_detect.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 11U};
static unsigned int ng8[] = {8U, 3U};
static unsigned int ng9[] = {0U, 7U};
static unsigned int ng10[] = {8U, 4U};
static unsigned int ng11[] = {9U, 4U};
static unsigned int ng12[] = {10U, 4U};
static unsigned int ng13[] = {11U, 4U};
static unsigned int ng14[] = {16U, 0U};
static unsigned int ng15[] = {20U, 0U};
static unsigned int ng16[] = {24U, 0U};
static unsigned int ng17[] = {28U, 0U};
static unsigned int ng18[] = {17U, 0U};
static unsigned int ng19[] = {21U, 0U};
static unsigned int ng20[] = {25U, 0U};
static unsigned int ng21[] = {29U, 0U};
static unsigned int ng22[] = {18U, 0U};
static unsigned int ng23[] = {22U, 0U};
static unsigned int ng24[] = {26U, 0U};
static unsigned int ng25[] = {30U, 0U};
static unsigned int ng26[] = {19U, 12U};
static unsigned int ng27[] = {32U, 12U};
static unsigned int ng28[] = {33U, 12U};
static unsigned int ng29[] = {34U, 12U};
static unsigned int ng30[] = {35U, 12U};
static unsigned int ng31[] = {48U, 12U};
static unsigned int ng32[] = {49U, 12U};
static unsigned int ng33[] = {50U, 12U};
static unsigned int ng34[] = {51U, 12U};
static unsigned int ng35[] = {19U, 0U};
static unsigned int ng36[] = {23U, 0U};
static unsigned int ng37[] = {27U, 0U};
static unsigned int ng38[] = {50U, 13U};



static void Always_138_0(char *t0)
{
    char t13[8];
    char t23[8];
    char t31[8];
    char t60[8];
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    int t67;

LAB0:    t1 = (t0 + 4600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 6408);
    *((int *)t2) = 1;
    t3 = (t0 + 4632);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(139, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(145, ng0);

LAB19:    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3208);
    t4 = (t0 + 3208);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t14 = (t13 + 4);
    t6 = *((unsigned int *)t14);
    t50 = (!(t6));
    if (t50 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3208);
    t4 = (t0 + 3208);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t14 = (t13 + 4);
    t6 = *((unsigned int *)t14);
    t50 = (!(t6));
    if (t50 == 1)
        goto LAB22;

LAB23:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(140, ng0);

LAB8:    xsi_set_current_line(141, ng0);
    t11 = (t0 + 1528U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t14 = (t12 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 1);
    t17 = (t16 & 1);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 >> 1);
    t20 = (t19 & 1);
    *((unsigned int *)t11) = t20;
    t21 = (t0 + 1688U);
    t22 = *((char **)t21);
    memset(t23, 0, 8);
    t21 = (t23 + 4);
    t24 = (t22 + 4);
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 1);
    t27 = (t26 & 1);
    *((unsigned int *)t23) = t27;
    t28 = *((unsigned int *)t24);
    t29 = (t28 >> 1);
    t30 = (t29 & 1);
    *((unsigned int *)t21) = t30;
    t32 = *((unsigned int *)t13);
    t33 = *((unsigned int *)t23);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = (t13 + 4);
    t36 = (t23 + 4);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t35);
    t39 = *((unsigned int *)t36);
    t40 = (t38 | t39);
    *((unsigned int *)t37) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 != 0);
    if (t42 == 1)
        goto LAB9;

LAB10:
LAB11:    t59 = (t0 + 3208);
    t61 = (t0 + 3208);
    t62 = (t61 + 72U);
    t63 = *((char **)t62);
    t64 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t60, t63, 2, t64, 32, 1);
    t65 = (t60 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (!(t66));
    if (t67 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    t15 = (t10 & 1);
    *((unsigned int *)t2) = t15;
    t5 = (t0 + 1688U);
    t11 = *((char **)t5);
    memset(t23, 0, 8);
    t5 = (t23 + 4);
    t12 = (t11 + 4);
    t16 = *((unsigned int *)t11);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t23) = t18;
    t19 = *((unsigned int *)t12);
    t20 = (t19 >> 0);
    t25 = (t20 & 1);
    *((unsigned int *)t5) = t25;
    t26 = *((unsigned int *)t13);
    t27 = *((unsigned int *)t23);
    t28 = (t26 | t27);
    *((unsigned int *)t31) = t28;
    t14 = (t13 + 4);
    t21 = (t23 + 4);
    t22 = (t31 + 4);
    t29 = *((unsigned int *)t14);
    t30 = *((unsigned int *)t21);
    t32 = (t29 | t30);
    *((unsigned int *)t22) = t32;
    t33 = *((unsigned int *)t22);
    t34 = (t33 != 0);
    if (t34 == 1)
        goto LAB14;

LAB15:
LAB16:    t36 = (t0 + 3208);
    t37 = (t0 + 3208);
    t45 = (t37 + 72U);
    t46 = *((char **)t45);
    t59 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t60, t46, 2, t59, 32, 1);
    t61 = (t60 + 4);
    t53 = *((unsigned int *)t61);
    t67 = (!(t53));
    if (t67 == 1)
        goto LAB17;

LAB18:    goto LAB7;

LAB9:    t43 = *((unsigned int *)t31);
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t31) = (t43 | t44);
    t45 = (t13 + 4);
    t46 = (t23 + 4);
    t47 = *((unsigned int *)t45);
    t48 = (~(t47));
    t49 = *((unsigned int *)t13);
    t50 = (t49 & t48);
    t51 = *((unsigned int *)t46);
    t52 = (~(t51));
    t53 = *((unsigned int *)t23);
    t54 = (t53 & t52);
    t55 = (~(t50));
    t56 = (~(t54));
    t57 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t57 & t55);
    t58 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t58 & t56);
    goto LAB11;

LAB12:    xsi_vlogvar_wait_assign_value(t59, t31, 0, *((unsigned int *)t60), 1, 1000LL);
    goto LAB13;

LAB14:    t38 = *((unsigned int *)t31);
    t39 = *((unsigned int *)t22);
    *((unsigned int *)t31) = (t38 | t39);
    t24 = (t13 + 4);
    t35 = (t23 + 4);
    t40 = *((unsigned int *)t24);
    t41 = (~(t40));
    t42 = *((unsigned int *)t13);
    t50 = (t42 & t41);
    t43 = *((unsigned int *)t35);
    t44 = (~(t43));
    t47 = *((unsigned int *)t23);
    t54 = (t47 & t44);
    t48 = (~(t50));
    t49 = (~(t54));
    t51 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t51 & t48);
    t52 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t52 & t49);
    goto LAB16;

LAB17:    xsi_vlogvar_wait_assign_value(t36, t31, 0, *((unsigned int *)t60), 1, 1000LL);
    goto LAB18;

LAB20:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t13), 1, 1000LL);
    goto LAB21;

LAB22:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t13), 1, 1000LL);
    goto LAB23;

}

static void Always_151_1(char *t0)
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

LAB0:    t1 = (t0 + 4848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 6424);
    *((int *)t2) = 1;
    t3 = (t0 + 4880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(152, ng0);

LAB5:    xsi_set_current_line(153, ng0);
    t5 = (t0 + 3208);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 3U);
    if (t13 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t8) != 0)
        goto LAB8;

LAB9:    t15 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t15, t4, 0, 0, 1, 1000LL);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 1000LL);
    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB8:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB9;

}

static void Always_161_2(char *t0)
{
    char t14[8];
    char t43[8];
    char t73[8];
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
    char *t41;
    char *t42;
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
    char *t71;
    char *t72;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;

LAB0:    t1 = (t0 + 5096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 6440);
    *((int *)t2) = 1;
    t3 = (t0 + 5128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(162, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(169, ng0);

LAB18:    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 1000LL);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 1000LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(163, ng0);

LAB8:    xsi_set_current_line(164, ng0);
    t11 = (t0 + 1368U);
    t12 = *((char **)t11);
    t11 = (t0 + 1848U);
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
        goto LAB9;

LAB10:
LAB11:    t41 = (t0 + 2008U);
    t42 = *((char **)t41);
    t44 = *((unsigned int *)t14);
    t45 = *((unsigned int *)t42);
    t46 = (t44 | t45);
    *((unsigned int *)t43) = t46;
    t41 = (t14 + 4);
    t47 = (t42 + 4);
    t48 = (t43 + 4);
    t49 = *((unsigned int *)t41);
    t50 = *((unsigned int *)t47);
    t51 = (t49 | t50);
    *((unsigned int *)t48) = t51;
    t52 = *((unsigned int *)t48);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB12;

LAB13:
LAB14:    t70 = (t0 + 3048);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    t74 = *((unsigned int *)t43);
    t75 = *((unsigned int *)t72);
    t76 = (t74 | t75);
    *((unsigned int *)t73) = t76;
    t77 = (t43 + 4);
    t78 = (t72 + 4);
    t79 = (t73 + 4);
    t80 = *((unsigned int *)t77);
    t81 = *((unsigned int *)t78);
    t82 = (t80 | t81);
    *((unsigned int *)t79) = t82;
    t83 = *((unsigned int *)t79);
    t84 = (t83 != 0);
    if (t84 == 1)
        goto LAB15;

LAB16:
LAB17:    t101 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t101, t73, 0, 0, 1, 1000LL);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 1000LL);
    goto LAB7;

LAB9:    t25 = *((unsigned int *)t14);
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
    goto LAB11;

LAB12:    t54 = *((unsigned int *)t43);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t43) = (t54 | t55);
    t56 = (t14 + 4);
    t57 = (t42 + 4);
    t58 = *((unsigned int *)t56);
    t59 = (~(t58));
    t60 = *((unsigned int *)t14);
    t61 = (t60 & t59);
    t62 = *((unsigned int *)t57);
    t63 = (~(t62));
    t64 = *((unsigned int *)t42);
    t65 = (t64 & t63);
    t66 = (~(t61));
    t67 = (~(t65));
    t68 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t68 & t66);
    t69 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t69 & t67);
    goto LAB14;

LAB15:    t85 = *((unsigned int *)t73);
    t86 = *((unsigned int *)t79);
    *((unsigned int *)t73) = (t85 | t86);
    t87 = (t43 + 4);
    t88 = (t72 + 4);
    t89 = *((unsigned int *)t87);
    t90 = (~(t89));
    t91 = *((unsigned int *)t43);
    t92 = (t91 & t90);
    t93 = *((unsigned int *)t88);
    t94 = (~(t93));
    t95 = *((unsigned int *)t72);
    t96 = (t95 & t94);
    t97 = (~(t92));
    t98 = (~(t96));
    t99 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t99 & t97);
    t100 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t100 & t98);
    goto LAB17;

}

static void Cont_177_3(char *t0)
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

LAB0:    t1 = (t0 + 5344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(177, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6584);
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
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 6456);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_187_4(char *t0)
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

LAB0:    t1 = (t0 + 5592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(187, ng0);
    t2 = (t0 + 6472);
    *((int *)t2) = 1;
    t3 = (t0 + 5624);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(188, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t5) == 0)
        goto LAB5;

LAB7:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(190, ng0);

LAB12:    xsi_set_current_line(191, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3208);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    xsi_vlogtype_concat(t4, 4, 4, 2U, t13, 2, t5, 2);

LAB13:    t19 = ((char*)((ng3)));
    t21 = xsi_vlog_unsigned_case_zcompare(t4, 4, t19, 4);
    if (t21 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng5)));
    t21 = xsi_vlog_unsigned_case_zcompare(t4, 4, t2, 4);
    if (t21 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng4)));
    t21 = xsi_vlog_unsigned_case_zcompare(t4, 4, t2, 4);
    if (t21 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng6)));
    t21 = xsi_vlog_unsigned_case_zcompare(t4, 4, t2, 4);
    if (t21 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng7)));
    t21 = xsi_vlog_unsigned_case_zcompare(t4, 4, t2, 4);
    if (t21 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng8)));
    t21 = xsi_vlog_unsigned_case_zcompare(t4, 4, t2, 4);
    if (t21 == 1)
        goto LAB24;

LAB25:
LAB27:
LAB26:    xsi_set_current_line(198, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 2, 1000LL);

LAB28:
LAB11:    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(188, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 2, 1000LL);
    goto LAB11;

LAB14:    xsi_set_current_line(192, ng0);
    t20 = ((char*)((ng4)));
    t22 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t22, t20, 0, 0, 2, 1000LL);
    goto LAB28;

LAB16:    xsi_set_current_line(193, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 1000LL);
    goto LAB28;

LAB18:    xsi_set_current_line(194, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 1000LL);
    goto LAB28;

LAB20:    xsi_set_current_line(195, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 1000LL);
    goto LAB28;

LAB22:    xsi_set_current_line(196, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 1000LL);
    goto LAB28;

LAB24:    xsi_set_current_line(197, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 1000LL);
    goto LAB28;

}

static void Always_210_5(char *t0)
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
    char *t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 5840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(210, ng0);
    t2 = (t0 + 6488);
    *((int *)t2) = 1;
    t3 = (t0 + 5872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(211, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t5) == 0)
        goto LAB5;

LAB7:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(213, ng0);

LAB12:    xsi_set_current_line(214, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3368);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t19 = (t0 + 3208);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    xsi_vlogtype_concat(t4, 6, 6, 3U, t21, 2, t13, 2, t5, 2);

LAB13:    t22 = ((char*)((ng9)));
    t23 = xsi_vlog_unsigned_case_zcompare(t4, 6, t22, 6);
    if (t23 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng10)));
    t23 = xsi_vlog_unsigned_case_zcompare(t4, 6, t2, 6);
    if (t23 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng11)));
    t23 = xsi_vlog_unsigned_case_zcompare(t4, 6, t2, 6);
    if (t23 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng12)));
    t23 = xsi_vlog_unsigned_case_zcompare(t4, 6, t2, 6);
    if (t23 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng13)));
    t23 = xsi_vlog_unsigned_case_zcompare(t4, 6, t2, 6);
    if (t23 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng14)));
    t23 = xsi_vlog_unsigned_case_zcompare(t4, 6, t2, 6);
    if (t23 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng15)));
    t23 = xsi_vlog_unsigned_case_zcompare(t4, 6, t2, 6);
    if (t23 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng16)));
    t23 = xsi_vlog_unsigned_case_zcompare(t4, 6, t2, 6);
    if (t23 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng17)));
    t23 = xsi_vlog_unsigned_case_zcompare(t4, 6, t2, 6);
    if (t23 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng18)));
    t23 = xsi_vlog_unsigned_case_zcompare(t4, 6, t2, 6);
    if (t23 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng19)));
    t23 = xsi_vlog_unsigned_case_zcompare(t4, 6, t2, 6);
    if (t23 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng20)));
    t23 = xsi_vlog_unsigned_case_zcompare(t4, 6, t2, 6);
    if (t23 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng21)));
    t23 = xsi_vlog_unsigned_case_zcompare(t4, 6, t2, 6);
    if (t23 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng22)));
    t23 = xsi_vlog_unsigned_case_zcompare(t4, 6, t2, 6);
    if (t23 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng23)));
    t23 = xsi_vlog_unsigned_case_zcompare(t4, 6, t2, 6);
    if (t23 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng24)));
    t23 = xsi_vlog_unsigned_case_zcompare(t4, 6, t2, 6);
    if (t23 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng25)));
    t23 = xsi_vlog_unsigned_case_zcompare(t4, 6, t2, 6);
    if (t23 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng26)));
    t23 = xsi_vlog_unsigned_case_zcompare(t4, 6, t2, 6);
    if (t23 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng27)));
    t23 = xsi_vlog_unsigned_case_zcompare(t4, 6, t2, 6);
    if (t23 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng28)));
    t23 = xsi_vlog_unsigned_case_zcompare(t4, 6, t2, 6);
    if (t23 == 1)
        goto LAB52;

LAB53:    t2 = ((char*)((ng29)));
    t23 = xsi_vlog_unsigned_case_zcompare(t4, 6, t2, 6);
    if (t23 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng30)));
    t23 = xsi_vlog_unsigned_case_zcompare(t4, 6, t2, 6);
    if (t23 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng31)));
    t23 = xsi_vlog_unsigned_case_zcompare(t4, 6, t2, 6);
    if (t23 == 1)
        goto LAB58;

LAB59:    t2 = ((char*)((ng32)));
    t23 = xsi_vlog_unsigned_case_zcompare(t4, 6, t2, 6);
    if (t23 == 1)
        goto LAB60;

LAB61:    t2 = ((char*)((ng33)));
    t23 = xsi_vlog_unsigned_case_zcompare(t4, 6, t2, 6);
    if (t23 == 1)
        goto LAB62;

LAB63:    t2 = ((char*)((ng34)));
    t23 = xsi_vlog_unsigned_case_zcompare(t4, 6, t2, 6);
    if (t23 == 1)
        goto LAB64;

LAB65:
LAB66:
LAB11:    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(211, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 2, 1000LL);
    goto LAB11;

LAB14:    xsi_set_current_line(216, ng0);
    t24 = (t0 + 2888);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 2, 1000LL);
    goto LAB66;

LAB16:    xsi_set_current_line(217, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 1000LL);
    goto LAB66;

LAB18:    xsi_set_current_line(218, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 1000LL);
    goto LAB66;

LAB20:    xsi_set_current_line(219, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 1000LL);
    goto LAB66;

LAB22:    xsi_set_current_line(220, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 1000LL);
    goto LAB66;

LAB24:    xsi_set_current_line(222, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 1000LL);
    goto LAB66;

LAB26:    xsi_set_current_line(223, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 1000LL);
    goto LAB66;

LAB28:    xsi_set_current_line(224, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 1000LL);
    goto LAB66;

LAB30:    xsi_set_current_line(225, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 1000LL);
    goto LAB66;

LAB32:    xsi_set_current_line(227, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 1000LL);
    goto LAB66;

LAB34:    xsi_set_current_line(228, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 1000LL);
    goto LAB66;

LAB36:    xsi_set_current_line(229, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 1000LL);
    goto LAB66;

LAB38:    xsi_set_current_line(230, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 1000LL);
    goto LAB66;

LAB40:    xsi_set_current_line(232, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 1000LL);
    goto LAB66;

LAB42:    xsi_set_current_line(233, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 1000LL);
    goto LAB66;

LAB44:    xsi_set_current_line(234, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 1000LL);
    goto LAB66;

LAB46:    xsi_set_current_line(235, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 1000LL);
    goto LAB66;

LAB48:    xsi_set_current_line(237, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 1000LL);
    goto LAB66;

LAB50:    xsi_set_current_line(239, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 1000LL);
    goto LAB66;

LAB52:    xsi_set_current_line(240, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 1000LL);
    goto LAB66;

LAB54:    xsi_set_current_line(241, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 1000LL);
    goto LAB66;

LAB56:    xsi_set_current_line(242, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 1000LL);
    goto LAB66;

LAB58:    xsi_set_current_line(244, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 1000LL);
    goto LAB66;

LAB60:    xsi_set_current_line(245, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 1000LL);
    goto LAB66;

LAB62:    xsi_set_current_line(246, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 1000LL);
    goto LAB66;

LAB64:    xsi_set_current_line(247, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 1000LL);
    goto LAB66;

}

static void Always_252_6(char *t0)
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
    char *t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;

LAB0:    t1 = (t0 + 6088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(252, ng0);
    t2 = (t0 + 6504);
    *((int *)t2) = 1;
    t3 = (t0 + 6120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(253, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t5) == 0)
        goto LAB5;

LAB7:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(255, ng0);

LAB12:    xsi_set_current_line(256, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3368);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    t19 = (t0 + 3208);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    xsi_vlogtype_concat(t4, 6, 6, 3U, t21, 2, t13, 2, t5, 2);

LAB13:    t22 = ((char*)((ng35)));
    t23 = xsi_vlog_unsigned_case_zcompare(t4, 6, t22, 6);
    if (t23 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng36)));
    t23 = xsi_vlog_unsigned_case_zcompare(t4, 6, t2, 6);
    if (t23 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng37)));
    t23 = xsi_vlog_unsigned_case_zcompare(t4, 6, t2, 6);
    if (t23 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng30)));
    t23 = xsi_vlog_unsigned_case_zcompare(t4, 6, t2, 6);
    if (t23 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng38)));
    t23 = xsi_vlog_unsigned_case_zcompare(t4, 6, t2, 6);
    if (t23 == 1)
        goto LAB22;

LAB23:
LAB25:
LAB24:    xsi_set_current_line(262, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 1000LL);

LAB26:
LAB11:    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(253, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 1000LL);
    goto LAB11;

LAB14:    xsi_set_current_line(257, ng0);
    t24 = ((char*)((ng5)));
    t25 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t25, t24, 0, 0, 1, 1000LL);
    goto LAB26;

LAB16:    xsi_set_current_line(258, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 1000LL);
    goto LAB26;

LAB18:    xsi_set_current_line(259, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 1000LL);
    goto LAB26;

LAB20:    xsi_set_current_line(260, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 1000LL);
    goto LAB26;

LAB22:    xsi_set_current_line(261, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 1000LL);
    goto LAB26;

}


extern void work_m_10511989846067861766_3820178719_init()
{
	static char *pe[] = {(void *)Always_138_0,(void *)Always_151_1,(void *)Always_161_2,(void *)Cont_177_3,(void *)Always_187_4,(void *)Always_210_5,(void *)Always_252_6};
	xsi_register_didat("work_m_10511989846067861766_3820178719", "isim/CONNECT_testbench_sample_peek_isim_beh.exe.sim/work/m_10511989846067861766_3820178719.didat");
	xsi_register_executes(pe);
}
