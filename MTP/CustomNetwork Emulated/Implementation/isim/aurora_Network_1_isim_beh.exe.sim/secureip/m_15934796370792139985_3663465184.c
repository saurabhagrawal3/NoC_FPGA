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
static unsigned int ng2[] = {11U, 0U};
static unsigned int ng3[] = {1U, 0U};



static void Always_4527_0(char *t0)
{
    char t4[8];
    char t21[8];
    char t30[8];
    char t70[8];
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
    char *t68;
    char *t69;
    char *t71;
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

LAB0:    t1 = (t0 + 3640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(4527, ng0);
    t2 = (t0 + 3960);
    *((int *)t2) = 1;
    t3 = (t0 + 3672);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(4527, ng0);

LAB5:    xsi_set_current_line(4528, ng0);
    t5 = (t0 + 1848U);
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

LAB11:    xsi_set_current_line(4533, ng0);

LAB14:    xsi_set_current_line(4534, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 16, 50LL);
    xsi_set_current_line(4535, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 50LL);
    xsi_set_current_line(4536, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 15U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 15U);
    t12 = ((char*)((ng2)));
    memset(t21, 0, 8);
    t13 = (t4 + 4);
    t19 = (t12 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t12);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t13);
    t22 = *((unsigned int *)t19);
    t23 = (t18 ^ t22);
    t24 = (t17 | t23);
    t25 = *((unsigned int *)t13);
    t26 = *((unsigned int *)t19);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB18;

LAB15:    if (t27 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t21) = 1;

LAB18:    t31 = *((unsigned int *)t3);
    t32 = *((unsigned int *)t21);
    t33 = (t31 & t32);
    *((unsigned int *)t30) = t33;
    t34 = (t3 + 4);
    t35 = (t21 + 4);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t34);
    t38 = *((unsigned int *)t35);
    t39 = (t37 | t38);
    *((unsigned int *)t36) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB19;

LAB20:
LAB21:    t62 = (t30 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t30);
    t66 = (t65 & t64);
    t67 = (t66 != 0);
    if (t67 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(4539, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 3);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 3);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t4);
    t17 = (t15 & t16);
    *((unsigned int *)t21) = t17;
    t12 = (t3 + 4);
    t13 = (t4 + 4);
    t19 = (t21 + 4);
    t18 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t18 | t22);
    *((unsigned int *)t19) = t23;
    t24 = *((unsigned int *)t19);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB39;

LAB40:
LAB41:    t35 = (t0 + 1048U);
    t36 = *((char **)t35);
    memset(t30, 0, 8);
    t35 = (t30 + 4);
    t44 = (t36 + 4);
    t48 = *((unsigned int *)t36);
    t49 = (t48 >> 2);
    t50 = (t49 & 1);
    *((unsigned int *)t30) = t50;
    t51 = *((unsigned int *)t44);
    t52 = (t51 >> 2);
    t53 = (t52 & 1);
    *((unsigned int *)t35) = t53;
    t56 = *((unsigned int *)t21);
    t57 = *((unsigned int *)t30);
    t58 = (t56 & t57);
    *((unsigned int *)t70) = t58;
    t45 = (t21 + 4);
    t62 = (t30 + 4);
    t68 = (t70 + 4);
    t59 = *((unsigned int *)t45);
    t60 = *((unsigned int *)t62);
    t61 = (t59 | t60);
    *((unsigned int *)t68) = t61;
    t63 = *((unsigned int *)t68);
    t64 = (t63 != 0);
    if (t64 == 1)
        goto LAB42;

LAB43:
LAB44:    t87 = (t70 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (~(t88));
    t90 = *((unsigned int *)t70);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(4542, ng0);

LAB49:    xsi_set_current_line(4543, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    xsi_set_current_line(4544, ng0);
    t2 = (t0 + 2728);
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
        goto LAB53;

LAB51:    if (*((unsigned int *)t6) == 0)
        goto LAB50;

LAB52:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB53:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB54;

LAB55:
LAB56:
LAB47:
LAB24:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(4528, ng0);

LAB13:    xsi_set_current_line(4529, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 16, 50LL);
    xsi_set_current_line(4530, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 50LL);
    xsi_set_current_line(4531, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    xsi_set_current_line(4532, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    goto LAB12;

LAB17:    t20 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB18;

LAB19:    t42 = *((unsigned int *)t30);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t30) = (t42 | t43);
    t44 = (t3 + 4);
    t45 = (t21 + 4);
    t46 = *((unsigned int *)t3);
    t47 = (~(t46));
    t48 = *((unsigned int *)t44);
    t49 = (~(t48));
    t50 = *((unsigned int *)t21);
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
    goto LAB21;

LAB22:    xsi_set_current_line(4536, ng0);

LAB25:    xsi_set_current_line(4537, ng0);
    t68 = ((char*)((ng3)));
    t69 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t69, t68, 0, 0, 1, 50LL);
    xsi_set_current_line(4538, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t30, 0, 8);
    t2 = (t30 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 4);
    t9 = (t8 & 1);
    *((unsigned int *)t30) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 4);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    memset(t21, 0, 8);
    t6 = (t30 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    t17 = *((unsigned int *)t30);
    t18 = (t17 & t16);
    t22 = (t18 & 1U);
    if (t22 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t6) != 0)
        goto LAB28;

LAB29:    t13 = (t21 + 4);
    t23 = *((unsigned int *)t21);
    t24 = *((unsigned int *)t13);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB30;

LAB31:    t26 = *((unsigned int *)t21);
    t27 = (~(t26));
    t28 = *((unsigned int *)t13);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t13) > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t21) > 0)
        goto LAB36;

LAB37:    memcpy(t4, t34, 8);

LAB38:    t19 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t19, t4, 0, 0, 16, 50LL);
    goto LAB24;

LAB26:    *((unsigned int *)t21) = 1;
    goto LAB29;

LAB28:    t12 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB29;

LAB30:    t19 = (t0 + 1688U);
    t20 = *((char **)t19);
    goto LAB31;

LAB32:    t19 = (t0 + 1528U);
    t34 = *((char **)t19);
    goto LAB33;

LAB34:    xsi_vlog_unsigned_bit_combine(t4, 16, t20, 16, t34, 16);
    goto LAB38;

LAB36:    memcpy(t4, t20, 8);
    goto LAB38;

LAB39:    t26 = *((unsigned int *)t21);
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t21) = (t26 | t27);
    t20 = (t3 + 4);
    t34 = (t4 + 4);
    t28 = *((unsigned int *)t3);
    t29 = (~(t28));
    t31 = *((unsigned int *)t20);
    t32 = (~(t31));
    t33 = *((unsigned int *)t4);
    t37 = (~(t33));
    t38 = *((unsigned int *)t34);
    t39 = (~(t38));
    t54 = (t29 & t32);
    t55 = (t37 & t39);
    t40 = (~(t54));
    t41 = (~(t55));
    t42 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t42 & t40);
    t43 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t43 & t41);
    t46 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t46 & t40);
    t47 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t47 & t41);
    goto LAB41;

LAB42:    t65 = *((unsigned int *)t70);
    t66 = *((unsigned int *)t68);
    *((unsigned int *)t70) = (t65 | t66);
    t69 = (t21 + 4);
    t71 = (t30 + 4);
    t67 = *((unsigned int *)t21);
    t72 = (~(t67));
    t73 = *((unsigned int *)t69);
    t74 = (~(t73));
    t75 = *((unsigned int *)t30);
    t76 = (~(t75));
    t77 = *((unsigned int *)t71);
    t78 = (~(t77));
    t79 = (t72 & t74);
    t80 = (t76 & t78);
    t81 = (~(t79));
    t82 = (~(t80));
    t83 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t83 & t81);
    t84 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t84 & t82);
    t85 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t85 & t81);
    t86 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t86 & t82);
    goto LAB44;

LAB45:    xsi_set_current_line(4539, ng0);

LAB48:    xsi_set_current_line(4540, ng0);
    t93 = ((char*)((ng3)));
    t94 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t94, t93, 0, 0, 1, 50LL);
    xsi_set_current_line(4541, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 50LL);
    goto LAB47;

LAB50:    *((unsigned int *)t4) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(4544, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 16, 50LL);
    goto LAB56;

}


extern void secureip_m_15934796370792139985_3663465184_init()
{
	static char *pe[] = {(void *)Always_4527_0};
	xsi_register_didat("secureip_m_15934796370792139985_3663465184", "isim/aurora_Network_1_isim_beh.exe.sim/secureip/m_15934796370792139985_3663465184.didat");
	xsi_register_executes(pe);
}
