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
static const char *ng0 = "/home/student1/pveluri/Desktop/COE 758/Project1/Project1/SDRAMController.vhd";
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);


static void work_a_2344570625_3212880686_p_0(char *t0)
{
    char t36[16];
    char t39[16];
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    int t8;
    char *t9;
    char *t10;
    unsigned char t11;
    char *t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    unsigned char t30;
    unsigned char t31;
    unsigned char t32;
    unsigned char t33;
    unsigned char t34;
    unsigned char t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 8528);
    *((int *)t1) = 0;
    t2 = (t0 + 8532);
    *((int *)t2) = 7;
    t3 = 0;
    t4 = 7;

LAB2:    if (t3 <= t4)
        goto LAB3;

LAB5:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 992U);
    t29 = xsi_signal_has_event(t1);
    if (t29 == 1)
        goto LAB17;

LAB18:    t11 = (unsigned char)0;

LAB19:    if (t11 != 0)
        goto LAB14;

LAB16:
LAB15:    t1 = (t0 + 3624);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(57, ng0);
    t5 = (t0 + 8536);
    *((int *)t5) = 0;
    t6 = (t0 + 8540);
    *((int *)t6) = 31;
    t7 = 0;
    t8 = 31;

LAB6:    if (t7 <= t8)
        goto LAB7;

LAB9:
LAB4:    t1 = (t0 + 8528);
    t3 = *((int *)t1);
    t2 = (t0 + 8532);
    t4 = *((int *)t2);
    if (t3 == t4)
        goto LAB5;

LAB13:    t7 = (t3 + 1);
    t3 = t7;
    t5 = (t0 + 8528);
    *((int *)t5) = t3;
    goto LAB2;

LAB7:    xsi_set_current_line(58, ng0);
    t9 = (t0 + 8544);
    t11 = (8U != 8U);
    if (t11 == 1)
        goto LAB10;

LAB11:    t12 = (t0 + 8528);
    t13 = *((int *)t12);
    t14 = (t13 - 7);
    t15 = (t14 * -1);
    t16 = (t15 * 32U);
    t17 = (t0 + 8536);
    t18 = *((int *)t17);
    t19 = (t18 - 31);
    t20 = (t19 * -1);
    t21 = (t16 + t20);
    t22 = (8U * t21);
    t23 = (0U + t22);
    t24 = (t0 + 3704);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t9, 8U);
    xsi_driver_first_trans_delta(t24, t23, 8U, 0LL);

LAB8:    t1 = (t0 + 8536);
    t7 = *((int *)t1);
    t2 = (t0 + 8540);
    t8 = *((int *)t2);
    if (t7 == t8)
        goto LAB9;

LAB12:    t13 = (t7 + 1);
    t7 = t13;
    t5 = (t0 + 8536);
    *((int *)t5) = t7;
    goto LAB6;

LAB10:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB11;

LAB14:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t32 = *((unsigned char *)t6);
    t33 = (t32 == (unsigned char)3);
    if (t33 != 0)
        goto LAB20;

LAB22:
LAB21:    goto LAB15;

LAB17:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t30 = *((unsigned char *)t5);
    t31 = (t30 == (unsigned char)3);
    t11 = t31;
    goto LAB19;

LAB20:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1352U);
    t9 = *((char **)t2);
    t34 = *((unsigned char *)t9);
    t35 = (t34 == (unsigned char)3);
    if (t35 != 0)
        goto LAB23;

LAB25:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 1192U);
    t5 = *((char **)t1);
    t15 = (15 - 7);
    t16 = (t15 * 1U);
    t20 = (0 + t16);
    t1 = (t5 + t20);
    t6 = (t36 + 0U);
    t9 = (t6 + 0U);
    *((int *)t9) = 7;
    t9 = (t6 + 4U);
    *((int *)t9) = 5;
    t9 = (t6 + 8U);
    *((int *)t9) = -1;
    t3 = (5 - 7);
    t21 = (t3 * -1);
    t21 = (t21 + 1);
    t9 = (t6 + 12U);
    *((unsigned int *)t9) = t21;
    t4 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t1, t36);
    t7 = (t4 - 7);
    t21 = (t7 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, t4);
    t22 = (t21 * 32U);
    t9 = (t0 + 1192U);
    t10 = *((char **)t9);
    t23 = (15 - 4);
    t37 = (t23 * 1U);
    t38 = (0 + t37);
    t9 = (t10 + t38);
    t12 = (t39 + 0U);
    t17 = (t12 + 0U);
    *((int *)t17) = 4;
    t17 = (t12 + 4U);
    *((int *)t17) = 0;
    t17 = (t12 + 8U);
    *((int *)t17) = -1;
    t8 = (0 - 4);
    t40 = (t8 * -1);
    t40 = (t40 + 1);
    t17 = (t12 + 12U);
    *((unsigned int *)t17) = t40;
    t13 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t9, t39);
    t14 = (t13 - 31);
    t40 = (t14 * -1);
    xsi_vhdl_check_range_of_index(31, 0, -1, t13);
    t41 = (t22 + t40);
    t42 = (8U * t41);
    t43 = (0 + t42);
    t17 = (t2 + t43);
    t24 = (t0 + 3768);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t17, 8U);
    xsi_driver_first_trans_fast_port(t24);

LAB24:    goto LAB21;

LAB23:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1672U);
    t10 = *((char **)t2);
    t2 = (t0 + 1192U);
    t12 = *((char **)t2);
    t15 = (15 - 7);
    t16 = (t15 * 1U);
    t20 = (0 + t16);
    t2 = (t12 + t20);
    t17 = (t36 + 0U);
    t24 = (t17 + 0U);
    *((int *)t24) = 7;
    t24 = (t17 + 4U);
    *((int *)t24) = 5;
    t24 = (t17 + 8U);
    *((int *)t24) = -1;
    t3 = (5 - 7);
    t21 = (t3 * -1);
    t21 = (t21 + 1);
    t24 = (t17 + 12U);
    *((unsigned int *)t24) = t21;
    t4 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t2, t36);
    t7 = (t4 - 7);
    t21 = (t7 * -1);
    t22 = (t21 * 32U);
    t24 = (t0 + 1192U);
    t25 = *((char **)t24);
    t23 = (15 - 4);
    t37 = (t23 * 1U);
    t38 = (0 + t37);
    t24 = (t25 + t38);
    t26 = (t39 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = 4;
    t27 = (t26 + 4U);
    *((int *)t27) = 0;
    t27 = (t26 + 8U);
    *((int *)t27) = -1;
    t8 = (0 - 4);
    t40 = (t8 * -1);
    t40 = (t40 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t40;
    t13 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t24, t39);
    t14 = (t13 - 31);
    t40 = (t14 * -1);
    t41 = (t22 + t40);
    t42 = (8U * t41);
    t43 = (0U + t42);
    t27 = (t0 + 3704);
    t28 = (t27 + 56U);
    t44 = *((char **)t28);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memcpy(t46, t10, 8U);
    xsi_driver_first_trans_delta(t27, t43, 8U, 0LL);
    goto LAB24;

}


extern void work_a_2344570625_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2344570625_3212880686_p_0};
	xsi_register_didat("work_a_2344570625_3212880686", "isim/SDRAMController_isim_beh.exe.sim/work/a_2344570625_3212880686.didat");
	xsi_register_executes(pe);
}
