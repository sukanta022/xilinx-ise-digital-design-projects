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
static const char *ng0 = "/home/ise/ALU_8bit/ALU_1bit.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};



static void Always_10_0(char *t0)
{
    char t8[8];
    char t40[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
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
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t42;

LAB0:    t1 = (t0 + 3000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(10, ng0);
    t2 = (t0 + 3320);
    *((int *)t2) = 1;
    t3 = (t0 + 3032);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(10, ng0);

LAB5:    xsi_set_current_line(12, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(13, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(15, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:    xsi_set_current_line(51, ng0);

LAB49:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(17, ng0);

LAB22:    xsi_set_current_line(19, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 & t10);
    *((unsigned int *)t8) = t11;
    t4 = (t5 + 4);
    t12 = (t7 + 4);
    t13 = (t8 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t12);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB23;

LAB24:
LAB25:    t39 = (t0 + 1928);
    xsi_vlogvar_assign_value(t39, t8, 0, 0, 1);
    xsi_set_current_line(20, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB21;

LAB9:    xsi_set_current_line(23, ng0);

LAB26:    xsi_set_current_line(25, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 | t10);
    *((unsigned int *)t8) = t11;
    t4 = (t5 + 4);
    t12 = (t7 + 4);
    t13 = (t8 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t12);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB27;

LAB28:
LAB29:    t39 = (t0 + 1928);
    xsi_vlogvar_assign_value(t39, t8, 0, 0, 1);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB21;

LAB11:    xsi_set_current_line(29, ng0);

LAB30:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    *((unsigned int *)t8) = t11;
    t4 = (t5 + 4);
    t12 = (t7 + 4);
    t13 = (t8 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t12);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB31;

LAB32:
LAB33:    t21 = (t0 + 1928);
    xsi_vlogvar_assign_value(t21, t8, 0, 0, 1);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB21;

LAB13:    xsi_set_current_line(35, ng0);

LAB34:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    memset(t8, 0, 8);
    t4 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t14 = (t11 & t10);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB38;

LAB36:    if (*((unsigned int *)t4) == 0)
        goto LAB35;

LAB37:    t7 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t7) = 1;

LAB38:    t12 = (t8 + 4);
    t13 = (t5 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    *((unsigned int *)t8) = t17;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t13) != 0)
        goto LAB40;

LAB39:    t24 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t24 & 1U);
    t25 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t25 & 1U);
    t21 = (t0 + 1928);
    xsi_vlogvar_assign_value(t21, t8, 0, 0, 1);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB21;

LAB15:    xsi_set_current_line(41, ng0);

LAB41:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 2, t5, 1, t7, 1);
    t4 = (t0 + 1368U);
    t12 = *((char **)t4);
    memset(t40, 0, 8);
    xsi_vlog_unsigned_add(t40, 2, t8, 2, t12, 1);
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t40, 0, 0, 1);
    t13 = (t0 + 2088);
    xsi_vlogvar_assign_value(t13, t40, 1, 0, 1);
    goto LAB21;

LAB17:    xsi_set_current_line(46, ng0);

LAB42:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    t4 = (t7 + 4);
    t9 = *((unsigned int *)t4);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t14 = (t11 & t10);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB46;

LAB44:    if (*((unsigned int *)t4) == 0)
        goto LAB43;

LAB45:    t12 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t12) = 1;

LAB46:    t13 = (t8 + 4);
    t21 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (~(t16));
    *((unsigned int *)t8) = t17;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t21) != 0)
        goto LAB48;

LAB47:    t24 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t24 & 3U);
    t25 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t25 & 3U);
    memset(t40, 0, 8);
    xsi_vlog_unsigned_add(t40, 2, t5, 1, t8, 2);
    t22 = (t0 + 1368U);
    t39 = *((char **)t22);
    memset(t41, 0, 8);
    xsi_vlog_unsigned_add(t41, 2, t40, 2, t39, 1);
    t22 = (t0 + 1928);
    xsi_vlogvar_assign_value(t22, t41, 0, 0, 1);
    t42 = (t0 + 2088);
    xsi_vlogvar_assign_value(t42, t41, 1, 0, 1);
    goto LAB21;

LAB23:    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t8) = (t19 | t20);
    t21 = (t5 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t5);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t7);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (~(t29));
    t31 = (t24 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t35 & t33);
    t36 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t36 & t34);
    t37 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t37 & t33);
    t38 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t38 & t34);
    goto LAB25;

LAB27:    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t8) = (t19 | t20);
    t21 = (t5 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t31 = (t25 & t24);
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t32 = (t28 & t27);
    t29 = (~(t31));
    t30 = (~(t32));
    t33 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t33 & t29);
    t34 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t34 & t30);
    goto LAB29;

LAB31:    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t8) = (t19 | t20);
    goto LAB33;

LAB35:    *((unsigned int *)t8) = 1;
    goto LAB38;

LAB40:    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t8) = (t18 | t19);
    t20 = *((unsigned int *)t12);
    t23 = *((unsigned int *)t13);
    *((unsigned int *)t12) = (t20 | t23);
    goto LAB39;

LAB43:    *((unsigned int *)t8) = 1;
    goto LAB46;

LAB48:    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t21);
    *((unsigned int *)t8) = (t18 | t19);
    t20 = *((unsigned int *)t13);
    t23 = *((unsigned int *)t21);
    *((unsigned int *)t13) = (t20 | t23);
    goto LAB47;

}


extern void work_m_08205030099184931404_3018515156_init()
{
	static char *pe[] = {(void *)Always_10_0};
	xsi_register_didat("work_m_08205030099184931404_3018515156", "isim/ALU_8bit_tb_isim_beh.exe.sim/work/m_08205030099184931404_3018515156.didat");
	xsi_register_executes(pe);
}
