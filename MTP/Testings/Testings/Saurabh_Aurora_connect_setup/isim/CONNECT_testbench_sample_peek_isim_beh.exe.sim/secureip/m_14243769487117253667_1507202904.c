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
static int ng2[] = {1, 0};

static void NetReassign_4821_7(char *);
static void NetReassign_4821_8(char *);


static void Initial_4820_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;

LAB0:    t1 = (t0 + 2840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(4820, ng0);

LAB4:    xsi_set_current_line(4821, ng0);
    t2 = (t0 + 7088);
    memset(t2, -1, 4);
    t3 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t3 & 1U);
    NetReassign_4821_7(t0);
    xsi_set_current_line(4821, ng0);
    t2 = (t0 + 7092);
    memset(t2, -1, 4);
    t3 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t3 & 1U);
    NetReassign_4821_8(t0);
    xsi_set_current_line(4822, ng0);
    t2 = (t0 + 2648);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(4823, ng0);
    t4 = (t0 + 1328U);
    xsi_vlogsignal_release_indexed(t4, 0, 0);
    xsi_set_current_line(4823, ng0);
    t2 = (t0 + 1168U);
    xsi_vlogsignal_release_indexed(t2, 0, 0);
    goto LAB1;

}

static void Gate_4828_1(char *t0)
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

LAB0:    t1 = (t0 + 3088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 5304);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_notGate(t7, t3);
    t8 = (t0 + 5304);
    xsi_driver_vfirst_trans(t8, 0, 0);
    t9 = (t0 + 5144);
    *((int *)t9) = 1;

LAB1:    return;
}

static void Gate_4829_2(char *t0)
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

LAB0:    t1 = (t0 + 3336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 5368);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_notGate(t7, t3);
    t8 = (t0 + 5368);
    xsi_driver_vfirst_trans(t8, 0, 0);
    t9 = (t0 + 5160);
    *((int *)t9) = 1;

LAB1:    return;
}

static void Gate_4831_3(char *t0)
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

LAB0:    t1 = (t0 + 3584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    t2 = (t0 + 5432);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1328U);
    xsi_vlog_nmosSwitch_new(t8, t9, 0, 0, t4);
    t10 = (t0 + 5432);
    t11 = (t10 + 56U);
    t12 = (t0 + 1328U);
    xsi_vlog_switch_set_trans_strength(*((char **)t11), t12, 0, 0, 0);
    t13 = (t0 + 5432);
    xsi_driver_vfirst_trans_bufif(t13, 0, 0);
    t14 = (t0 + 5176);
    *((int *)t14) = 1;

LAB1:    return;
}

static void Gate_4832_4(char *t0)
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

LAB0:    t1 = (t0 + 3832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    t2 = (t0 + 5496);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1168U);
    xsi_vlog_nmosSwitch_new(t8, t9, 0, 0, t4);
    t10 = (t0 + 5496);
    t11 = (t10 + 56U);
    t12 = (t0 + 1168U);
    xsi_vlog_switch_set_trans_strength(*((char **)t11), t12, 0, 0, 0);
    t13 = (t0 + 5496);
    xsi_driver_vfirst_trans_bufif(t13, 0, 0);
    t14 = (t0 + 5192);
    *((int *)t14) = 1;

LAB1:    return;
}

static void Gate_4833_5(char *t0)
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

LAB0:    t1 = (t0 + 4080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    t2 = (t0 + 5560);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1008U);
    xsi_vlog_nmosSwitch_new(t8, t9, 0, 0, t4);
    t10 = (t0 + 5560);
    t11 = (t10 + 56U);
    t12 = (t0 + 1008U);
    xsi_vlog_switch_set_trans_strength(*((char **)t11), t12, 0, 0, 0);
    t13 = (t0 + 5560);
    xsi_driver_vfirst_trans_bufif(t13, 0, 0);
    t14 = (t0 + 5208);
    *((int *)t14) = 1;

LAB1:    return;
}

static void Gate_4834_6(char *t0)
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

LAB0:    t1 = (t0 + 4328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    t2 = (t0 + 5624);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1488U);
    xsi_vlog_nmosSwitch_new(t8, t9, 0, 0, t4);
    t10 = (t0 + 5624);
    t11 = (t10 + 56U);
    t12 = (t0 + 1488U);
    xsi_vlog_switch_set_trans_strength(*((char **)t11), t12, 0, 0, 0);
    t13 = (t0 + 5624);
    xsi_driver_vfirst_trans_bufif(t13, 0, 0);
    t14 = (t0 + 5224);
    *((int *)t14) = 1;

LAB1:    return;
}

static void NetReassign_4821_7(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;

LAB0:    t1 = (t0 + 4576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(4821, ng0);
    t3 = 0;
    t2 = ((char*)((ng1)));
    t4 = (t0 + 7088);
    t5 = (t0 + 7088);
    memset(t6, 0, 4);
    t7 = memcmp(t5, t6, 4);
    if (t7 != 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    t8 = (t0 + 5688);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t12, 0, 8);
    t13 = 1U;
    t14 = t13;
    t15 = (t2 + 4);
    t16 = *((unsigned int *)t2);
    t13 = (t13 & t16);
    t17 = *((unsigned int *)t15);
    t14 = (t14 & t17);
    t18 = (t12 + 4);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 | t13);
    t20 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t20 | t14);
    t21 = (t0 + 4384);
    xsi_driver_vforce_trans_indexed(t8, 0, 0, t4, t21);
    t3 = 1;
    goto LAB5;

}

static void NetReassign_4821_8(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;

LAB0:    t1 = (t0 + 4824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(4821, ng0);
    t3 = 0;
    t2 = ((char*)((ng2)));
    t4 = (t0 + 7092);
    t5 = (t0 + 7092);
    memset(t6, 0, 4);
    t7 = memcmp(t5, t6, 4);
    if (t7 != 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    t8 = (t0 + 5752);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t12, 0, 8);
    t13 = 1U;
    t14 = t13;
    t15 = (t2 + 4);
    t16 = *((unsigned int *)t2);
    t13 = (t13 & t16);
    t17 = *((unsigned int *)t15);
    t14 = (t14 & t17);
    t18 = (t12 + 4);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 | t13);
    t20 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t20 | t14);
    t21 = (t0 + 4632);
    xsi_driver_vforce_trans_indexed(t8, 0, 0, t4, t21);
    t3 = 1;
    goto LAB5;

}


extern void secureip_m_14243769487117253667_1507202904_init()
{
	static char *pe[] = {(void *)Initial_4820_0,(void *)Gate_4828_1,(void *)Gate_4829_2,(void *)Gate_4831_3,(void *)Gate_4832_4,(void *)Gate_4833_5,(void *)Gate_4834_6,(void *)NetReassign_4821_7,(void *)NetReassign_4821_8};
	xsi_register_didat("secureip_m_14243769487117253667_1507202904", "isim/CONNECT_testbench_sample_peek_isim_beh.exe.sim/secureip/m_14243769487117253667_1507202904.didat");
	xsi_register_executes(pe);
}
