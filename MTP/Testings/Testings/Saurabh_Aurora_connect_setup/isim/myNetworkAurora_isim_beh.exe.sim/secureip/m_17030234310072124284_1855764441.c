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
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {8U, 0U};
static unsigned int ng10[] = {9U, 0U};
static unsigned int ng11[] = {10U, 0U};
static unsigned int ng12[] = {11U, 0U};
static unsigned int ng13[] = {12U, 0U};
static unsigned int ng14[] = {13U, 0U};
static unsigned int ng15[] = {14U, 0U};
static unsigned int ng16[] = {15U, 0U};
static unsigned int ng17[] = {16U, 0U};
static unsigned int ng18[] = {17U, 0U};
static unsigned int ng19[] = {18U, 0U};
static unsigned int ng20[] = {19U, 0U};
static unsigned int ng21[] = {20U, 0U};
static unsigned int ng22[] = {21U, 0U};
static unsigned int ng23[] = {22U, 0U};
static unsigned int ng24[] = {23U, 0U};
static unsigned int ng25[] = {24U, 0U};
static unsigned int ng26[] = {25U, 0U};
static unsigned int ng27[] = {26U, 0U};
static unsigned int ng28[] = {27U, 0U};
static unsigned int ng29[] = {28U, 0U};
static unsigned int ng30[] = {29U, 0U};
static unsigned int ng31[] = {30U, 0U};
static unsigned int ng32[] = {31U, 0U};
static unsigned int ng33[] = {32U, 0U};
static unsigned int ng34[] = {33U, 0U};
static unsigned int ng35[] = {34U, 0U};
static unsigned int ng36[] = {35U, 0U};
static unsigned int ng37[] = {36U, 0U};
static unsigned int ng38[] = {37U, 0U};
static unsigned int ng39[] = {38U, 0U};
static unsigned int ng40[] = {39U, 0U};
static unsigned int ng41[] = {40U, 0U};
static unsigned int ng42[] = {41U, 0U};
static unsigned int ng43[] = {42U, 0U};
static unsigned int ng44[] = {43U, 0U};
static unsigned int ng45[] = {44U, 0U};
static unsigned int ng46[] = {45U, 0U};
static unsigned int ng47[] = {46U, 0U};
static unsigned int ng48[] = {47U, 0U};
static unsigned int ng49[] = {48U, 0U};
static unsigned int ng50[] = {49U, 0U};
static unsigned int ng51[] = {50U, 0U};
static unsigned int ng52[] = {51U, 0U};
static unsigned int ng53[] = {52U, 0U};
static unsigned int ng54[] = {53U, 0U};
static unsigned int ng55[] = {54U, 0U};
static unsigned int ng56[] = {55U, 0U};
static unsigned int ng57[] = {56U, 0U};
static unsigned int ng58[] = {57U, 0U};
static unsigned int ng59[] = {58U, 0U};
static unsigned int ng60[] = {59U, 0U};
static unsigned int ng61[] = {60U, 0U};
static unsigned int ng62[] = {61U, 0U};
static unsigned int ng63[] = {62U, 0U};
static unsigned int ng64[] = {63U, 0U};
static int ng65[] = {1, 0};
static int ng66[] = {0, 0};



static void Always_12045_0(char *t0)
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

LAB0:    t1 = (t0 + 8440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12045, ng0);
    t2 = (t0 + 12480);
    *((int *)t2) = 1;
    t3 = (t0 + 8472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12045, ng0);

LAB5:    xsi_set_current_line(12046, ng0);
    t5 = (t0 + 3128U);
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

LAB11:    xsi_set_current_line(12049, ng0);

LAB14:    xsi_set_current_line(12050, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 6248);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 50LL);
    xsi_set_current_line(12051, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 6408);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 50LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(12046, ng0);

LAB13:    xsi_set_current_line(12047, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 6248);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 50LL);
    xsi_set_current_line(12048, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    goto LAB12;

}

static void Always_12080_1(char *t0)
{
    char t4[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 8688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12080, ng0);
    t2 = (t0 + 12496);
    *((int *)t2) = 1;
    t3 = (t0 + 8720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12081, ng0);

LAB5:    xsi_set_current_line(12082, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    t5 = (t0 + 6088);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    xsi_vlogtype_concat(t4, 6, 6, 2U, t8, 3, t6, 3);

LAB6:    t9 = ((char*)((ng1)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t9, 6);
    if (t10 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng10)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng11)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng12)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng13)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng14)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng15)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng16)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng17)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng18)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng19)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng20)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng21)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng22)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng23)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng24)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng25)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng26)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng27)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng28)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB61;

LAB62:    t2 = ((char*)((ng29)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB63;

LAB64:    t2 = ((char*)((ng30)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB65;

LAB66:    t2 = ((char*)((ng31)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB67;

LAB68:    t2 = ((char*)((ng32)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB69;

LAB70:    t2 = ((char*)((ng33)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB71;

LAB72:    t2 = ((char*)((ng34)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB73;

LAB74:    t2 = ((char*)((ng35)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB75;

LAB76:    t2 = ((char*)((ng36)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB77;

LAB78:    t2 = ((char*)((ng37)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB79;

LAB80:    t2 = ((char*)((ng38)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB81;

LAB82:    t2 = ((char*)((ng39)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB83;

LAB84:    t2 = ((char*)((ng40)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB85;

LAB86:    t2 = ((char*)((ng41)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB87;

LAB88:    t2 = ((char*)((ng42)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB89;

LAB90:    t2 = ((char*)((ng43)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB91;

LAB92:    t2 = ((char*)((ng44)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB93;

LAB94:    t2 = ((char*)((ng45)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB95;

LAB96:    t2 = ((char*)((ng46)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB97;

LAB98:    t2 = ((char*)((ng47)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB99;

LAB100:    t2 = ((char*)((ng48)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB101;

LAB102:    t2 = ((char*)((ng49)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB103;

LAB104:    t2 = ((char*)((ng50)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB105;

LAB106:    t2 = ((char*)((ng51)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB107;

LAB108:    t2 = ((char*)((ng52)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB109;

LAB110:    t2 = ((char*)((ng53)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB111;

LAB112:    t2 = ((char*)((ng54)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB113;

LAB114:    t2 = ((char*)((ng55)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB115;

LAB116:    t2 = ((char*)((ng56)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB117;

LAB118:    t2 = ((char*)((ng57)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB119;

LAB120:    t2 = ((char*)((ng58)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB121;

LAB122:    t2 = ((char*)((ng59)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB123;

LAB124:    t2 = ((char*)((ng60)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB125;

LAB126:    t2 = ((char*)((ng61)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB127;

LAB128:    t2 = ((char*)((ng62)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB129;

LAB130:    t2 = ((char*)((ng63)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB131;

LAB132:    t2 = ((char*)((ng64)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t10 == 1)
        goto LAB133;

LAB134:
LAB135:    goto LAB2;

LAB7:    xsi_set_current_line(12083, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 50LL);
    goto LAB135;

LAB9:    xsi_set_current_line(12084, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB11:    xsi_set_current_line(12085, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB13:    xsi_set_current_line(12086, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB15:    xsi_set_current_line(12087, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB17:    xsi_set_current_line(12088, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB19:    xsi_set_current_line(12089, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB21:    xsi_set_current_line(12090, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB23:    xsi_set_current_line(12091, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB25:    xsi_set_current_line(12092, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB27:    xsi_set_current_line(12093, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 2328U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng1)));
    xsi_vlogtype_concat(t13, 3, 3, 3U, t5, 1, t6, 1, t3, 1);
    t7 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t7, t13, 0, 0, 3, 50LL);
    goto LAB135;

LAB29:    xsi_set_current_line(12094, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB31:    xsi_set_current_line(12095, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB33:    xsi_set_current_line(12096, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB35:    xsi_set_current_line(12097, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB37:    xsi_set_current_line(12098, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB39:    xsi_set_current_line(12099, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB41:    xsi_set_current_line(12100, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 6408);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng1)));
    xsi_vlogtype_concat(t13, 3, 3, 3U, t8, 1, t7, 1, t3, 1);
    t9 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t9, t13, 0, 0, 3, 50LL);
    goto LAB135;

LAB43:    xsi_set_current_line(12101, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB45:    xsi_set_current_line(12102, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB47:    xsi_set_current_line(12103, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB49:    xsi_set_current_line(12104, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB51:    xsi_set_current_line(12105, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB53:    xsi_set_current_line(12106, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB55:    xsi_set_current_line(12107, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB57:    xsi_set_current_line(12108, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB59:    xsi_set_current_line(12109, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB61:    xsi_set_current_line(12110, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB63:    xsi_set_current_line(12111, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB65:    xsi_set_current_line(12112, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB67:    xsi_set_current_line(12113, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB69:    xsi_set_current_line(12114, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB71:    xsi_set_current_line(12115, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB73:    xsi_set_current_line(12116, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB75:    xsi_set_current_line(12117, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB77:    xsi_set_current_line(12118, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB79:    xsi_set_current_line(12119, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB81:    xsi_set_current_line(12120, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB83:    xsi_set_current_line(12121, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB85:    xsi_set_current_line(12122, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB87:    xsi_set_current_line(12123, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB89:    xsi_set_current_line(12124, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB91:    xsi_set_current_line(12125, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB93:    xsi_set_current_line(12126, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB95:    xsi_set_current_line(12127, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB97:    xsi_set_current_line(12128, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB99:    xsi_set_current_line(12129, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB101:    xsi_set_current_line(12130, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB103:    xsi_set_current_line(12131, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB105:    xsi_set_current_line(12132, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB107:    xsi_set_current_line(12133, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB109:    xsi_set_current_line(12134, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB111:    xsi_set_current_line(12135, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB113:    xsi_set_current_line(12136, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB115:    xsi_set_current_line(12137, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB117:    xsi_set_current_line(12138, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB119:    xsi_set_current_line(12139, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB121:    xsi_set_current_line(12140, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB123:    xsi_set_current_line(12141, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB125:    xsi_set_current_line(12142, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB127:    xsi_set_current_line(12143, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB129:    xsi_set_current_line(12144, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB131:    xsi_set_current_line(12145, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

LAB133:    xsi_set_current_line(12146, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 50LL);
    goto LAB135;

}

static void Always_12168_2(char *t0)
{
    char t6[8];
    char t33[8];
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;

LAB0:    t1 = (t0 + 8936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12168, ng0);
    t2 = (t0 + 12512);
    *((int *)t2) = 1;
    t3 = (t0 + 8968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12173, ng0);

LAB5:    xsi_set_current_line(12174, ng0);
    t4 = (t0 + 2488U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
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
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(12176, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(12179, ng0);
    t2 = (t0 + 6248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(12182, ng0);

LAB25:    xsi_set_current_line(12185, ng0);
    t2 = (t0 + 6568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6728);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 50LL);

LAB23:
LAB19:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(12174, ng0);

LAB13:    xsi_set_current_line(12175, ng0);
    t28 = (t0 + 6088);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t0 + 1048U);
    t32 = *((char **)t31);
    t34 = *((unsigned int *)t30);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t31 = (t30 + 4);
    t37 = (t32 + 4);
    t38 = (t33 + 4);
    t39 = *((unsigned int *)t31);
    t40 = *((unsigned int *)t37);
    t41 = (t39 | t40);
    *((unsigned int *)t38) = t41;
    t42 = *((unsigned int *)t38);
    t43 = (t42 != 0);
    if (t43 == 1)
        goto LAB14;

LAB15:
LAB16:    t60 = (t0 + 6728);
    xsi_vlogvar_wait_assign_value(t60, t33, 0, 0, 3, 50LL);
    goto LAB12;

LAB14:    t44 = *((unsigned int *)t33);
    t45 = *((unsigned int *)t38);
    *((unsigned int *)t33) = (t44 | t45);
    t46 = (t30 + 4);
    t47 = (t32 + 4);
    t48 = *((unsigned int *)t46);
    t49 = (~(t48));
    t50 = *((unsigned int *)t30);
    t51 = (t50 & t49);
    t52 = *((unsigned int *)t47);
    t53 = (~(t52));
    t54 = *((unsigned int *)t32);
    t55 = (t54 & t53);
    t56 = (~(t51));
    t57 = (~(t55));
    t58 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t58 & t56);
    t59 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t59 & t57);
    goto LAB16;

LAB17:    xsi_set_current_line(12176, ng0);

LAB20:    xsi_set_current_line(12178, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 6728);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 3, 50LL);
    goto LAB19;

LAB21:    xsi_set_current_line(12179, ng0);

LAB24:    xsi_set_current_line(12181, ng0);
    t7 = (t0 + 6088);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    t22 = (t0 + 6728);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 3, 50LL);
    goto LAB23;

}

static void Always_12193_3(char *t0)
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
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;

LAB0:    t1 = (t0 + 9184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12193, ng0);
    t2 = (t0 + 12528);
    *((int *)t2) = 1;
    t3 = (t0 + 9216);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12193, ng0);

LAB5:    xsi_set_current_line(12194, ng0);
    t5 = (t0 + 3128U);
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

LAB11:    xsi_set_current_line(12197, ng0);
    t2 = (t0 + 3608U);
    t3 = *((char **)t2);
    t2 = (t0 + 2968U);
    t5 = *((char **)t2);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t5);
    t9 = (t7 & t8);
    *((unsigned int *)t4) = t9;
    t2 = (t3 + 4);
    t6 = (t5 + 4);
    t12 = (t4 + 4);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t6);
    t14 = (t10 | t11);
    *((unsigned int *)t12) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB14;

LAB15:
LAB16:    t20 = (t4 + 4);
    t37 = *((unsigned int *)t20);
    t38 = (~(t37));
    t39 = *((unsigned int *)t4);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(12199, ng0);

LAB21:    xsi_set_current_line(12200, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 6088);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 50LL);

LAB19:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(12194, ng0);

LAB13:    xsi_set_current_line(12195, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 5928);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 3, 50LL);
    xsi_set_current_line(12196, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 50LL);
    goto LAB12;

LAB14:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t17 | t18);
    t13 = (t3 + 4);
    t19 = (t5 + 4);
    t21 = *((unsigned int *)t3);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t26 = (~(t25));
    t27 = *((unsigned int *)t19);
    t28 = (~(t27));
    t29 = (t22 & t24);
    t30 = (t26 & t28);
    t31 = (~(t29));
    t32 = (~(t30));
    t33 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t33 & t31);
    t34 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t34 & t32);
    t35 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t35 & t31);
    t36 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t36 & t32);
    goto LAB16;

LAB17:    xsi_set_current_line(12197, ng0);

LAB20:    xsi_set_current_line(12198, ng0);
    t42 = (t0 + 6728);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = (t0 + 5928);
    xsi_vlogvar_wait_assign_value(t45, t44, 0, 0, 3, 50LL);
    goto LAB19;

}

static void Always_12215_4(char *t0)
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
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 9432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12215, ng0);
    t2 = (t0 + 12544);
    *((int *)t2) = 1;
    t3 = (t0 + 9464);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12215, ng0);

LAB5:    xsi_set_current_line(12216, ng0);
    t5 = (t0 + 3288U);
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

LAB11:    xsi_set_current_line(12218, ng0);

LAB14:    xsi_set_current_line(12219, ng0);
    t2 = (t0 + 3608U);
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

LAB27:    t20 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t20, t4, 0, 0, 3, 50LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(12216, ng0);

LAB13:    xsi_set_current_line(12217, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 3, 50LL);
    goto LAB12;

LAB15:    *((unsigned int *)t21) = 1;
    goto LAB18;

LAB17:    t5 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB18;

LAB19:    t12 = (t0 + 5928);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    goto LAB20;

LAB21:    t20 = (t0 + 4088U);
    t24 = *((char **)t20);
    goto LAB22;

LAB23:    xsi_vlog_unsigned_bit_combine(t4, 3, t19, 3, t24, 3);
    goto LAB27;

LAB25:    memcpy(t4, t19, 8);
    goto LAB27;

}

static void NetDecl_12235_5(char *t0)
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

LAB0:    t1 = (t0 + 9680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12235, ng0);
    t2 = (t0 + 3768U);
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

LAB16:    t16 = (t0 + 12800);
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
    t35 = (t0 + 12560);
    *((int *)t35) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 3928U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = (t0 + 1848U);
    t22 = *((char **)t16);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t17, 1, t22, 1);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

}

static void NetDecl_12237_6(char *t0)
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

LAB0:    t1 = (t0 + 9928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12237, ng0);
    t2 = (t0 + 4568U);
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
    t21 = (t0 + 12864);
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
    t34 = (t0 + 12576);
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

static void Cont_12239_7(char *t0)
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

LAB0:    t1 = (t0 + 10176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12239, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
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
LAB6:    t32 = (t0 + 12928);
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
    t45 = (t0 + 12592);
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

static void Always_12242_8(char *t0)
{
    char t13[8];
    char t45[8];
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
    unsigned int t26;
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
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
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    unsigned int t79;
    int t80;

LAB0:    t1 = (t0 + 10424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12242, ng0);
    t2 = (t0 + 12608);
    *((int *)t2) = 1;
    t3 = (t0 + 10456);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12242, ng0);

LAB5:    xsi_set_current_line(12243, ng0);
    t4 = (t0 + 4568U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(12245, ng0);
    t2 = (t0 + 3608U);
    t3 = *((char **)t2);
    t2 = (t0 + 2968U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 & t7);
    *((unsigned int *)t13) = t8;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t11 = (t13 + 4);
    t9 = *((unsigned int *)t2);
    t10 = *((unsigned int *)t5);
    t14 = (t9 | t10);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB10;

LAB11:
LAB12:    t36 = (t13 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t13);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(12247, ng0);

LAB22:    xsi_set_current_line(12248, ng0);
    t2 = (t0 + 4248U);
    t3 = *((char **)t2);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 | t7);
    *((unsigned int *)t13) = t8;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t11 = (t13 + 4);
    t9 = *((unsigned int *)t2);
    t10 = *((unsigned int *)t5);
    t14 = (t9 | t10);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB23;

LAB24:
LAB25:    t36 = (t0 + 6888);
    t42 = (t0 + 6888);
    t43 = (t42 + 72U);
    t44 = *((char **)t43);
    t49 = ((char*)((ng66)));
    xsi_vlog_generic_convert_bit_index(t45, t44, 2, t49, 32, 1);
    t50 = (t45 + 4);
    t32 = *((unsigned int *)t50);
    t63 = (!(t32));
    if (t63 == 1)
        goto LAB26;

LAB27:
LAB15:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(12243, ng0);

LAB9:    xsi_set_current_line(12244, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 6888);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 50LL);
    goto LAB8;

LAB10:    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t17 | t18);
    t12 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    t22 = *((unsigned int *)t12);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = (t21 & t23);
    t29 = (t25 & t27);
    t30 = (~(t28));
    t31 = (~(t29));
    t32 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t32 & t30);
    t33 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t33 & t31);
    t34 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t34 & t30);
    t35 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t35 & t31);
    goto LAB12;

LAB13:    xsi_set_current_line(12245, ng0);

LAB16:    xsi_set_current_line(12246, ng0);
    t42 = (t0 + 4248U);
    t43 = *((char **)t42);
    t42 = (t0 + 1848U);
    t44 = *((char **)t42);
    t46 = *((unsigned int *)t43);
    t47 = *((unsigned int *)t44);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t42 = (t43 + 4);
    t49 = (t44 + 4);
    t50 = (t45 + 4);
    t51 = *((unsigned int *)t42);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB17;

LAB18:
LAB19:    t72 = (t0 + 6888);
    t74 = (t0 + 6888);
    t75 = (t74 + 72U);
    t76 = *((char **)t75);
    t77 = ((char*)((ng65)));
    xsi_vlog_generic_convert_bit_index(t73, t76, 2, t77, 32, 1);
    t78 = (t73 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (!(t79));
    if (t80 == 1)
        goto LAB20;

LAB21:    goto LAB15;

LAB17:    t56 = *((unsigned int *)t45);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t45) = (t56 | t57);
    t58 = (t43 + 4);
    t59 = (t44 + 4);
    t60 = *((unsigned int *)t58);
    t61 = (~(t60));
    t62 = *((unsigned int *)t43);
    t63 = (t62 & t61);
    t64 = *((unsigned int *)t59);
    t65 = (~(t64));
    t66 = *((unsigned int *)t44);
    t67 = (t66 & t65);
    t68 = (~(t63));
    t69 = (~(t67));
    t70 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t70 & t68);
    t71 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t71 & t69);
    goto LAB19;

LAB20:    xsi_vlogvar_wait_assign_value(t72, t45, 0, *((unsigned int *)t73), 1, 50LL);
    goto LAB21;

LAB23:    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t17 | t18);
    t12 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t12);
    t21 = (~(t20));
    t22 = *((unsigned int *)t3);
    t28 = (t22 & t21);
    t23 = *((unsigned int *)t19);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t29 = (t25 & t24);
    t26 = (~(t28));
    t27 = (~(t29));
    t30 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t30 & t26);
    t31 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t31 & t27);
    goto LAB25;

LAB26:    xsi_vlogvar_wait_assign_value(t36, t13, 0, *((unsigned int *)t45), 1, 50LL);
    goto LAB27;

}

static void NetDecl_12257_9(char *t0)
{
    char t5[8];
    char t16[8];
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
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;

LAB0:    t1 = (t0 + 10672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12257, ng0);
    t2 = (t0 + 6888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 1848U);
    t15 = *((char **)t14);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t15);
    t19 = (t17 | t18);
    *((unsigned int *)t16) = t19;
    t14 = (t5 + 4);
    t20 = (t15 + 4);
    t21 = (t16 + 4);
    t22 = *((unsigned int *)t14);
    t23 = *((unsigned int *)t20);
    t24 = (t22 | t23);
    *((unsigned int *)t21) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB4;

LAB5:
LAB6:    t43 = (t0 + 12992);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memset(t47, 0, 8);
    t48 = 1U;
    t49 = t48;
    t50 = (t16 + 4);
    t51 = *((unsigned int *)t16);
    t48 = (t48 & t51);
    t52 = *((unsigned int *)t50);
    t49 = (t49 & t52);
    t53 = (t47 + 4);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t54 | t48);
    t55 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t55 | t49);
    xsi_driver_vfirst_trans_delayed(t43, 0, 0U, 50LL, 0);
    t56 = (t0 + 12624);
    *((int *)t56) = 1;

LAB1:    return;
LAB4:    t27 = *((unsigned int *)t16);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t16) = (t27 | t28);
    t29 = (t5 + 4);
    t30 = (t15 + 4);
    t31 = *((unsigned int *)t29);
    t32 = (~(t31));
    t33 = *((unsigned int *)t5);
    t34 = (t33 & t32);
    t35 = *((unsigned int *)t30);
    t36 = (~(t35));
    t37 = *((unsigned int *)t15);
    t38 = (t37 & t36);
    t39 = (~(t34));
    t40 = (~(t38));
    t41 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t41 & t39);
    t42 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t42 & t40);
    goto LAB6;

}

static void Always_12267_10(char *t0)
{
    char t13[8];
    char t16[8];
    char t25[8];
    char t57[8];
    char t87[8];
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
    char *t15;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
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
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;

LAB0:    t1 = (t0 + 10920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12267, ng0);
    t2 = (t0 + 12640);
    *((int *)t2) = 1;
    t3 = (t0 + 10952);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12267, ng0);

LAB5:    xsi_set_current_line(12268, ng0);
    t4 = (t0 + 4568U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(12271, ng0);

LAB10:    xsi_set_current_line(12272, ng0);
    t2 = (t0 + 4408U);
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
    t14 = (t10 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t0 + 3608U);
    t11 = *((char **)t5);
    t5 = (t0 + 6888);
    t12 = (t5 + 56U);
    t15 = *((char **)t12);
    memset(t16, 0, 8);
    t17 = (t16 + 4);
    t18 = (t15 + 4);
    t19 = *((unsigned int *)t15);
    t20 = (t19 >> 1);
    t21 = (t20 & 1);
    *((unsigned int *)t16) = t21;
    t22 = *((unsigned int *)t18);
    t23 = (t22 >> 1);
    t24 = (t23 & 1);
    *((unsigned int *)t17) = t24;
    t26 = *((unsigned int *)t11);
    t27 = *((unsigned int *)t16);
    t28 = (t26 & t27);
    *((unsigned int *)t25) = t28;
    t29 = (t11 + 4);
    t30 = (t16 + 4);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t29);
    t33 = *((unsigned int *)t30);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB11;

LAB12:
LAB13:    t58 = *((unsigned int *)t13);
    t59 = *((unsigned int *)t25);
    t60 = (t58 | t59);
    *((unsigned int *)t57) = t60;
    t61 = (t13 + 4);
    t62 = (t25 + 4);
    t63 = (t57 + 4);
    t64 = *((unsigned int *)t61);
    t65 = *((unsigned int *)t62);
    t66 = (t64 | t65);
    *((unsigned int *)t63) = t66;
    t67 = *((unsigned int *)t63);
    t68 = (t67 != 0);
    if (t68 == 1)
        goto LAB14;

LAB15:
LAB16:    t85 = (t0 + 1848U);
    t86 = *((char **)t85);
    t88 = *((unsigned int *)t57);
    t89 = *((unsigned int *)t86);
    t90 = (t88 | t89);
    *((unsigned int *)t87) = t90;
    t85 = (t57 + 4);
    t91 = (t86 + 4);
    t92 = (t87 + 4);
    t93 = *((unsigned int *)t85);
    t94 = *((unsigned int *)t91);
    t95 = (t93 | t94);
    *((unsigned int *)t92) = t95;
    t96 = *((unsigned int *)t92);
    t97 = (t96 != 0);
    if (t97 == 1)
        goto LAB17;

LAB18:
LAB19:    t114 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t114, t87, 0, 0, 1, 50LL);
    xsi_set_current_line(12275, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB23;

LAB21:    if (*((unsigned int *)t2) == 0)
        goto LAB20;

LAB22:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB23:    t5 = (t13 + 4);
    t11 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t19 = (~(t14));
    *((unsigned int *)t13) = t19;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB25;

LAB24:    t24 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t24 & 1U);
    t26 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t26 & 1U);
    t12 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 1, 50LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(12268, ng0);

LAB9:    xsi_set_current_line(12269, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 50LL);
    xsi_set_current_line(12270, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 50LL);
    goto LAB8;

LAB11:    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t25) = (t37 | t38);
    t39 = (t11 + 4);
    t40 = (t16 + 4);
    t41 = *((unsigned int *)t11);
    t42 = (~(t41));
    t43 = *((unsigned int *)t39);
    t44 = (~(t43));
    t45 = *((unsigned int *)t16);
    t46 = (~(t45));
    t47 = *((unsigned int *)t40);
    t48 = (~(t47));
    t49 = (t42 & t44);
    t50 = (t46 & t48);
    t51 = (~(t49));
    t52 = (~(t50));
    t53 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t53 & t51);
    t54 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t54 & t52);
    t55 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t55 & t51);
    t56 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t56 & t52);
    goto LAB13;

LAB14:    t69 = *((unsigned int *)t57);
    t70 = *((unsigned int *)t63);
    *((unsigned int *)t57) = (t69 | t70);
    t71 = (t13 + 4);
    t72 = (t25 + 4);
    t73 = *((unsigned int *)t71);
    t74 = (~(t73));
    t75 = *((unsigned int *)t13);
    t76 = (t75 & t74);
    t77 = *((unsigned int *)t72);
    t78 = (~(t77));
    t79 = *((unsigned int *)t25);
    t80 = (t79 & t78);
    t81 = (~(t76));
    t82 = (~(t80));
    t83 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t83 & t81);
    t84 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t84 & t82);
    goto LAB16;

LAB17:    t98 = *((unsigned int *)t87);
    t99 = *((unsigned int *)t92);
    *((unsigned int *)t87) = (t98 | t99);
    t100 = (t57 + 4);
    t101 = (t86 + 4);
    t102 = *((unsigned int *)t100);
    t103 = (~(t102));
    t104 = *((unsigned int *)t57);
    t105 = (t104 & t103);
    t106 = *((unsigned int *)t101);
    t107 = (~(t106));
    t108 = *((unsigned int *)t86);
    t109 = (t108 & t107);
    t110 = (~(t105));
    t111 = (~(t109));
    t112 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t112 & t110);
    t113 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t113 & t111);
    goto LAB19;

LAB20:    *((unsigned int *)t13) = 1;
    goto LAB23;

LAB25:    t20 = *((unsigned int *)t13);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t20 | t21);
    t22 = *((unsigned int *)t5);
    t23 = *((unsigned int *)t11);
    *((unsigned int *)t5) = (t22 | t23);
    goto LAB24;

}

static void Always_12293_11(char *t0)
{
    char t4[8];
    char t44[8];
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
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    int t51;

LAB0:    t1 = (t0 + 11168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12293, ng0);
    t2 = (t0 + 12656);
    *((int *)t2) = 1;
    t3 = (t0 + 11200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12293, ng0);

LAB5:    xsi_set_current_line(12294, ng0);
    t5 = (t0 + 3448U);
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

LAB11:    xsi_set_current_line(12296, ng0);
    t2 = (t0 + 3608U);
    t3 = *((char **)t2);
    t2 = (t0 + 2968U);
    t5 = *((char **)t2);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t5);
    t9 = (t7 & t8);
    *((unsigned int *)t4) = t9;
    t2 = (t3 + 4);
    t6 = (t5 + 4);
    t12 = (t4 + 4);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t6);
    t14 = (t10 | t11);
    *((unsigned int *)t12) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB14;

LAB15:
LAB16:    t20 = (t4 + 4);
    t37 = *((unsigned int *)t20);
    t38 = (~(t37));
    t39 = *((unsigned int *)t4);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(12298, ng0);

LAB23:    xsi_set_current_line(12299, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 7208);
    t5 = (t0 + 7208);
    t6 = (t5 + 72U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng66)));
    xsi_vlog_generic_convert_bit_index(t4, t12, 2, t13, 32, 1);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t19);
    t29 = (!(t7));
    if (t29 == 1)
        goto LAB24;

LAB25:
LAB19:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(12294, ng0);

LAB13:    xsi_set_current_line(12295, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 7208);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 2, 50LL);
    goto LAB12;

LAB14:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t17 | t18);
    t13 = (t3 + 4);
    t19 = (t5 + 4);
    t21 = *((unsigned int *)t3);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t26 = (~(t25));
    t27 = *((unsigned int *)t19);
    t28 = (~(t27));
    t29 = (t22 & t24);
    t30 = (t26 & t28);
    t31 = (~(t29));
    t32 = (~(t30));
    t33 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t33 & t31);
    t34 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t34 & t32);
    t35 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t35 & t31);
    t36 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t36 & t32);
    goto LAB16;

LAB17:    xsi_set_current_line(12296, ng0);

LAB20:    xsi_set_current_line(12297, ng0);
    t42 = (t0 + 1368U);
    t43 = *((char **)t42);
    t42 = (t0 + 7208);
    t45 = (t0 + 7208);
    t46 = (t45 + 72U);
    t47 = *((char **)t46);
    t48 = ((char*)((ng65)));
    xsi_vlog_generic_convert_bit_index(t44, t47, 2, t48, 32, 1);
    t49 = (t44 + 4);
    t50 = *((unsigned int *)t49);
    t51 = (!(t50));
    if (t51 == 1)
        goto LAB21;

LAB22:    goto LAB19;

LAB21:    xsi_vlogvar_wait_assign_value(t42, t43, 0, *((unsigned int *)t44), 1, 50LL);
    goto LAB22;

LAB24:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t4), 1, 50LL);
    goto LAB25;

}

static void Always_12310_12(char *t0)
{
    char t4[8];
    char t21[8];
    char t25[8];
    char t57[8];
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
    unsigned int t23;
    unsigned int t24;
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
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;

LAB0:    t1 = (t0 + 11416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12310, ng0);
    t2 = (t0 + 12672);
    *((int *)t2) = 1;
    t3 = (t0 + 11448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12310, ng0);

LAB5:    xsi_set_current_line(12311, ng0);
    t5 = (t0 + 3448U);
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

LAB11:    xsi_set_current_line(12313, ng0);

LAB14:    xsi_set_current_line(12314, ng0);
    t2 = (t0 + 5048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    t6 = (t0 + 3608U);
    t12 = *((char **)t6);
    t6 = (t0 + 7208);
    t13 = (t6 + 56U);
    t19 = *((char **)t13);
    memset(t21, 0, 8);
    t20 = (t21 + 4);
    t22 = (t19 + 4);
    t15 = *((unsigned int *)t19);
    t16 = (t15 >> 1);
    t17 = (t16 & 1);
    *((unsigned int *)t21) = t17;
    t18 = *((unsigned int *)t22);
    t23 = (t18 >> 1);
    t24 = (t23 & 1);
    *((unsigned int *)t20) = t24;
    t26 = *((unsigned int *)t12);
    t27 = *((unsigned int *)t21);
    t28 = (t26 & t27);
    *((unsigned int *)t25) = t28;
    t29 = (t12 + 4);
    t30 = (t21 + 4);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t29);
    t33 = *((unsigned int *)t30);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB15;

LAB16:
LAB17:    t58 = *((unsigned int *)t4);
    t59 = *((unsigned int *)t25);
    t60 = (t58 | t59);
    *((unsigned int *)t57) = t60;
    t61 = (t4 + 4);
    t62 = (t25 + 4);
    t63 = (t57 + 4);
    t64 = *((unsigned int *)t61);
    t65 = *((unsigned int *)t62);
    t66 = (t64 | t65);
    *((unsigned int *)t63) = t66;
    t67 = *((unsigned int *)t63);
    t68 = (t67 != 0);
    if (t68 == 1)
        goto LAB18;

LAB19:
LAB20:    t85 = (t0 + 7368);
    xsi_vlogvar_wait_assign_value(t85, t57, 0, 0, 1, 50LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(12311, ng0);

LAB13:    xsi_set_current_line(12312, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 7368);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 50LL);
    goto LAB12;

LAB15:    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t25) = (t37 | t38);
    t39 = (t12 + 4);
    t40 = (t21 + 4);
    t41 = *((unsigned int *)t12);
    t42 = (~(t41));
    t43 = *((unsigned int *)t39);
    t44 = (~(t43));
    t45 = *((unsigned int *)t21);
    t46 = (~(t45));
    t47 = *((unsigned int *)t40);
    t48 = (~(t47));
    t49 = (t42 & t44);
    t50 = (t46 & t48);
    t51 = (~(t49));
    t52 = (~(t50));
    t53 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t53 & t51);
    t54 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t54 & t52);
    t55 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t55 & t51);
    t56 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t56 & t52);
    goto LAB17;

LAB18:    t69 = *((unsigned int *)t57);
    t70 = *((unsigned int *)t63);
    *((unsigned int *)t57) = (t69 | t70);
    t71 = (t4 + 4);
    t72 = (t25 + 4);
    t73 = *((unsigned int *)t71);
    t74 = (~(t73));
    t75 = *((unsigned int *)t4);
    t76 = (t75 & t74);
    t77 = *((unsigned int *)t72);
    t78 = (~(t77));
    t79 = *((unsigned int *)t25);
    t80 = (t79 & t78);
    t81 = (~(t76));
    t82 = (~(t80));
    t83 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t83 & t81);
    t84 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t84 & t82);
    goto LAB20;

}

static void Always_12318_13(char *t0)
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

LAB0:    t1 = (t0 + 11664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12318, ng0);
    t2 = (t0 + 12688);
    *((int *)t2) = 1;
    t3 = (t0 + 11696);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12318, ng0);

LAB5:    xsi_set_current_line(12319, ng0);
    t5 = (t0 + 3448U);
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

LAB11:    xsi_set_current_line(12321, ng0);

LAB14:    xsi_set_current_line(12322, ng0);
    t2 = (t0 + 7368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 7528);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 50LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(12319, ng0);

LAB13:    xsi_set_current_line(12320, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 7528);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 50LL);
    goto LAB12;

}

static void NetDecl_12335_14(char *t0)
{
    char t6[8];
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
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;

LAB0:    t1 = (t0 + 11912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12335, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 7528);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t5);
    t9 = (t7 | t8);
    *((unsigned int *)t6) = t9;
    t10 = (t3 + 4);
    t11 = (t5 + 4);
    t12 = (t6 + 4);
    t13 = *((unsigned int *)t10);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB4;

LAB5:
LAB6:    t34 = (t0 + 13056);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memset(t38, 0, 8);
    t39 = 1U;
    t40 = t39;
    t41 = (t6 + 4);
    t42 = *((unsigned int *)t6);
    t39 = (t39 & t42);
    t43 = *((unsigned int *)t41);
    t40 = (t40 & t43);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t45 | t39);
    t46 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t46 | t40);
    xsi_driver_vfirst_trans_delayed(t34, 0, 0U, 50LL, 0);
    t47 = (t0 + 12704);
    *((int *)t47) = 1;

LAB1:    return;
LAB4:    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t18 | t19);
    t20 = (t3 + 4);
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t3);
    t25 = (t24 & t23);
    t26 = *((unsigned int *)t21);
    t27 = (~(t26));
    t28 = *((unsigned int *)t5);
    t29 = (t28 & t27);
    t30 = (~(t25));
    t31 = (~(t29));
    t32 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t32 & t30);
    t33 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t33 & t31);
    goto LAB6;

}

static void Cont_12350_15(char *t0)
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
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;

LAB0:    t1 = (t0 + 12160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12350, ng0);
    t2 = (t0 + 7048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2168U);
    t6 = *((char **)t5);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t6);
    t10 = (t8 | t9);
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
LAB6:    t34 = (t0 + 13120);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memset(t38, 0, 8);
    t39 = 1U;
    t40 = t39;
    t41 = (t7 + 4);
    t42 = *((unsigned int *)t7);
    t39 = (t39 & t42);
    t43 = *((unsigned int *)t41);
    t40 = (t40 & t43);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t45 | t39);
    t46 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t46 | t40);
    xsi_driver_vfirst_trans_delayed(t34, 0, 0, 50LL, 0);
    t47 = (t0 + 12720);
    *((int *)t47) = 1;

LAB1:    return;
LAB4:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = (t4 + 4);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
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
    goto LAB6;

}


extern void secureip_m_17030234310072124284_1855764441_init()
{
	static char *pe[] = {(void *)Always_12045_0,(void *)Always_12080_1,(void *)Always_12168_2,(void *)Always_12193_3,(void *)Always_12215_4,(void *)NetDecl_12235_5,(void *)NetDecl_12237_6,(void *)Cont_12239_7,(void *)Always_12242_8,(void *)NetDecl_12257_9,(void *)Always_12267_10,(void *)Always_12293_11,(void *)Always_12310_12,(void *)Always_12318_13,(void *)NetDecl_12335_14,(void *)Cont_12350_15};
	xsi_register_didat("secureip_m_17030234310072124284_1855764441", "isim/myNetworkAurora_isim_beh.exe.sim/secureip/m_17030234310072124284_1855764441.didat");
	xsi_register_executes(pe);
}
