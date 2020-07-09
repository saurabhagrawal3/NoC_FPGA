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



static void Always_14176_0(char *t0)
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

LAB0:    t1 = (t0 + 3800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14176, ng0);
    t2 = (t0 + 4368);
    *((int *)t2) = 1;
    t3 = (t0 + 3832);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(14176, ng0);

LAB5:    xsi_set_current_line(14177, ng0);
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

LAB11:    xsi_set_current_line(14179, ng0);

LAB14:    xsi_set_current_line(14180, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 50LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(14177, ng0);

LAB13:    xsi_set_current_line(14178, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 2, 50LL);
    goto LAB12;

}

static void Always_14191_1(char *t0)
{
    char t4[8];
    char t21[8];
    char t22[8];
    char t26[8];
    char t69[8];
    char t84[8];
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
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
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
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
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
    char *t67;
    char *t68;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
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
    char *t93;

LAB0:    t1 = (t0 + 4048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14191, ng0);
    t2 = (t0 + 4384);
    *((int *)t2) = 1;
    t3 = (t0 + 4080);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(14191, ng0);

LAB5:    xsi_set_current_line(14192, ng0);
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

LAB11:    xsi_set_current_line(14194, ng0);

LAB14:    xsi_set_current_line(14195, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t5 = *((char **)t2);
    memset(t22, 0, 8);
    t2 = (t5 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t2) == 0)
        goto LAB15;

LAB17:    t6 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t6) = 1;

LAB18:    t12 = (t22 + 4);
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    *((unsigned int *)t22) = t15;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t13) != 0)
        goto LAB20;

LAB19:    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 & 1U);
    t25 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t25 & 1U);
    t27 = *((unsigned int *)t3);
    t28 = *((unsigned int *)t22);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t19 = (t3 + 4);
    t20 = (t22 + 4);
    t30 = (t26 + 4);
    t31 = *((unsigned int *)t19);
    t32 = *((unsigned int *)t20);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB21;

LAB22:
LAB23:    memset(t21, 0, 8);
    t56 = (t26 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t26);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t56) != 0)
        goto LAB26;

LAB27:    t63 = (t21 + 4);
    t64 = *((unsigned int *)t21);
    t65 = *((unsigned int *)t63);
    t66 = (t64 || t65);
    if (t66 > 0)
        goto LAB28;

LAB29:    t77 = *((unsigned int *)t21);
    t78 = (~(t77));
    t79 = *((unsigned int *)t63);
    t80 = (t78 || t79);
    if (t80 > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t63) > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t21) > 0)
        goto LAB34;

LAB35:    memcpy(t4, t84, 8);

LAB36:    t93 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t93, t4, 0, 0, 1, 50LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(14192, ng0);

LAB13:    xsi_set_current_line(14193, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 50LL);
    goto LAB12;

LAB15:    *((unsigned int *)t22) = 1;
    goto LAB18;

LAB20:    t16 = *((unsigned int *)t22);
    t17 = *((unsigned int *)t13);
    *((unsigned int *)t22) = (t16 | t17);
    t18 = *((unsigned int *)t12);
    t23 = *((unsigned int *)t13);
    *((unsigned int *)t12) = (t18 | t23);
    goto LAB19;

LAB21:    t36 = *((unsigned int *)t26);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t26) = (t36 | t37);
    t38 = (t3 + 4);
    t39 = (t22 + 4);
    t40 = *((unsigned int *)t3);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (~(t42));
    t44 = *((unsigned int *)t22);
    t45 = (~(t44));
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = (t41 & t43);
    t49 = (t45 & t47);
    t50 = (~(t48));
    t51 = (~(t49));
    t52 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t52 & t50);
    t53 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t53 & t51);
    t54 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t54 & t50);
    t55 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t55 & t51);
    goto LAB23;

LAB24:    *((unsigned int *)t21) = 1;
    goto LAB27;

LAB26:    t62 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB27;

LAB28:    t67 = (t0 + 2328U);
    t68 = *((char **)t67);
    memset(t69, 0, 8);
    t67 = (t69 + 4);
    t70 = (t68 + 4);
    t71 = *((unsigned int *)t68);
    t72 = (t71 >> 0);
    t73 = (t72 & 1);
    *((unsigned int *)t69) = t73;
    t74 = *((unsigned int *)t70);
    t75 = (t74 >> 0);
    t76 = (t75 & 1);
    *((unsigned int *)t67) = t76;
    goto LAB29;

LAB30:    t81 = (t0 + 2888);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    memset(t84, 0, 8);
    t85 = (t84 + 4);
    t86 = (t83 + 4);
    t87 = *((unsigned int *)t83);
    t88 = (t87 >> 0);
    t89 = (t88 & 1);
    *((unsigned int *)t84) = t89;
    t90 = *((unsigned int *)t86);
    t91 = (t90 >> 0);
    t92 = (t91 & 1);
    *((unsigned int *)t85) = t92;
    goto LAB31;

LAB32:    xsi_vlog_unsigned_bit_combine(t4, 1, t69, 1, t84, 1);
    goto LAB36;

LAB34:    memcpy(t4, t69, 8);
    goto LAB36;

}


extern void secureip_m_15216603680410938587_1261702793_init()
{
	static char *pe[] = {(void *)Always_14176_0,(void *)Always_14191_1};
	xsi_register_didat("secureip_m_15216603680410938587_1261702793", "isim/aurora_Network_1_isim_beh.exe.sim/secureip/m_15216603680410938587_1261702793.didat");
	xsi_register_executes(pe);
}
