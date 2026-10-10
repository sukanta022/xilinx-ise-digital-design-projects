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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/Mini_8bit_CPU/alu.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {5U, 0U};
static int ng6[] = {1, 0};



static void Always_16_0(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;

LAB0:    t1 = (t0 + 3496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 3816);
    *((int *)t2) = 1;
    t3 = (t0 + 3528);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(16, ng0);

LAB5:    xsi_set_current_line(17, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1864U);
    t3 = *((char **)t2);
    t2 = (t0 + 2584);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(18, ng0);
    t7 = (t0 + 2024U);
    t8 = *((char **)t7);
    t7 = (t0 + 2584);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 8);
    goto LAB19;

LAB9:    xsi_set_current_line(19, ng0);
    t3 = (t0 + 1864U);
    t4 = *((char **)t3);
    t3 = (t0 + 2024U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 8, t4, 8, t7, 8);
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 8);
    goto LAB19;

LAB11:    xsi_set_current_line(20, ng0);
    t3 = (t0 + 1864U);
    t4 = *((char **)t3);
    t3 = (t0 + 2024U);
    t7 = *((char **)t3);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t7);
    t12 = (t10 ^ t11);
    *((unsigned int *)t9) = t12;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t13 = (t9 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB20;

LAB21:
LAB22:    t21 = (t0 + 2584);
    xsi_vlogvar_assign_value(t21, t9, 0, 0, 8);
    goto LAB19;

LAB13:    xsi_set_current_line(21, ng0);
    t3 = (t0 + 1864U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (~(t10));
    *((unsigned int *)t9) = t11;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB24;

LAB23:    t17 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t17 & 255U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 255U);
    t8 = (t0 + 2584);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 8);
    goto LAB19;

LAB15:    xsi_set_current_line(22, ng0);
    t3 = (t0 + 1864U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_lshift(t9, 8, t4, 8, t3, 32);
    t7 = (t0 + 2584);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 8);
    goto LAB19;

LAB20:    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t9) = (t19 | t20);
    goto LAB22;

LAB24:    t12 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t9) = (t12 | t14);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t15 | t16);
    goto LAB23;

}


extern void work_m_09371352317212335633_2725559894_init()
{
	static char *pe[] = {(void *)Always_16_0};
	xsi_register_didat("work_m_09371352317212335633_2725559894", "isim/cpu_tb_isim_beh.exe.sim/work/m_09371352317212335633_2725559894.didat");
	xsi_register_executes(pe);
}
