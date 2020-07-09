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
static const char *ng0 = "/root/Desktop/MTP/Testings/yatish_connect_setup/mult/LUT.v";
static int ng1[] = {1684108385, 0, 1597125422, 0, 1936942436, 0, 1919902565, 0, 1886545264, 0, 1635017007, 0, 1597255524, 0, 1668575090, 0, 1734305377, 0, 1818519918, 0, 878667375, 0, 791752754, 0, 1768711539, 0, 1701076838, 0, 1667593075, 0, 1701868143, 0, 892301426, 0, 1835808304, 0, 1667593007, 0, 1701996129, 0, 1632202356, 0, 795242599, 0, 1414091592, 0, 774854977, 0, 774778670, 0, 3026479, 0};
static int ng2[] = {0, 0};
static int ng3[] = {2, 0};
static int ng4[] = {1, 0};



static void Initial_25_0(char *t0)
{
    char t7[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    xsi_set_current_line(26, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2496);
    t3 = ((char*)((ng2)));
    t4 = ((char*)((ng3)));
    t5 = (t0 + 744);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_power(t7, 32, t4, 32, t6, 32, 1);
    t5 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_minus(t8, 32, t7, 32, t5, 32);
    xsi_vlogfile_readmemb(t1, 824, t2, 1, *((unsigned int *)t3), 1, *((unsigned int *)t8));

LAB1:    return;
}

static void Always_29_1(char *t0)
{
    char t7[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t22;
    int t23;
    unsigned int t24;
    int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    int t30;

LAB0:    t1 = (t0 + 3656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3976);
    *((int *)t2) = 1;
    t3 = (t0 + 3688);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 2496);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 2496);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 2496);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 1776U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t7, 4, t6, t10, t13, 2, 1, t15, 14, 2);
    t14 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t14, t7, 0, 0, 4, 0LL);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1616U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t16 = *((unsigned int *)t2);
    t17 = (~(t16));
    t18 = *((unsigned int *)t3);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1936U);
    t5 = *((char **)t4);
    t4 = (t0 + 2496);
    t6 = (t0 + 2496);
    t8 = (t6 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2496);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 1776U);
    t14 = *((char **)t13);
    xsi_vlog_generic_convert_array_indices(t7, t21, t9, t12, 2, 1, t14, 14, 2);
    t13 = (t7 + 4);
    t22 = *((unsigned int *)t13);
    t23 = (!(t22));
    t15 = (t21 + 4);
    t24 = *((unsigned int *)t15);
    t25 = (!(t24));
    t26 = (t23 && t25);
    if (t26 == 1)
        goto LAB9;

LAB10:    goto LAB8;

LAB9:    t27 = *((unsigned int *)t7);
    t28 = *((unsigned int *)t21);
    t29 = (t27 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, *((unsigned int *)t21), t30, 0LL);
    goto LAB10;

}


extern void work_m_00351690080400966265_3002364550_init()
{
	static char *pe[] = {(void *)Initial_25_0,(void *)Always_29_1};
	xsi_register_didat("work_m_00351690080400966265_3002364550", "isim/mult_top_isim_beh.exe.sim/work/m_00351690080400966265_3002364550.didat");
	xsi_register_executes(pe);
}
