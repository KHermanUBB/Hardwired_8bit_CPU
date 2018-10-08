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
static const char *ng0 = "/home/icarosix/Clases/Arqui/cores/Hardwired_8bit_CPU/ise/mux.vhd";



static void work_a_0290344353_1566020785_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(18, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 3458);
    t4 = xsi_mem_cmp(t1, t2, 2U);
    if (t4 == 1)
        goto LAB3;

LAB7:    t5 = (t0 + 3460);
    t7 = xsi_mem_cmp(t5, t2, 2U);
    if (t7 == 1)
        goto LAB4;

LAB8:    t8 = (t0 + 3462);
    t10 = xsi_mem_cmp(t8, t2, 2U);
    if (t10 == 1)
        goto LAB5;

LAB9:
LAB6:    xsi_set_current_line(22, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t1 = (t0 + 1924);
    t3 = (t1 + 32U);
    t5 = *((char **)t3);
    t6 = (t5 + 32U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t1 = (t0 + 1880);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(19, ng0);
    t11 = (t0 + 592U);
    t12 = *((char **)t11);
    t11 = (t0 + 1924);
    t13 = (t11 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    memcpy(t16, t12, 8U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB2;

LAB4:    xsi_set_current_line(20, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t1 = (t0 + 1924);
    t3 = (t1 + 32U);
    t5 = *((char **)t3);
    t6 = (t5 + 32U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(21, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t1 = (t0 + 1924);
    t3 = (t1 + 32U);
    t5 = *((char **)t3);
    t6 = (t5 + 32U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB10:;
}


extern void work_a_0290344353_1566020785_init()
{
	static char *pe[] = {(void *)work_a_0290344353_1566020785_p_0};
	xsi_register_didat("work_a_0290344353_1566020785", "isim/cpu_isim_beh.exe.sim/work/a_0290344353_1566020785.didat");
	xsi_register_executes(pe);
}
