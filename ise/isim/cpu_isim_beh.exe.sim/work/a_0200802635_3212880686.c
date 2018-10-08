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
static const char *ng0 = "/home/icarosix/Clases/Arqui/cores/Hardwired_8bit_CPU/ise/demux.vhd";



static void work_a_0200802635_3212880686_p_0(char *t0)
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
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(20, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 3491);
    t4 = xsi_mem_cmp(t1, t2, 2U);
    if (t4 == 1)
        goto LAB3;

LAB7:    t5 = (t0 + 3493);
    t7 = xsi_mem_cmp(t5, t2, 2U);
    if (t7 == 1)
        goto LAB4;

LAB8:    t8 = (t0 + 3495);
    t10 = xsi_mem_cmp(t8, t2, 2U);
    if (t10 == 1)
        goto LAB5;

LAB9:
LAB6:    xsi_set_current_line(24, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t13 = *((unsigned char *)t2);
    t1 = (t0 + 2032);
    t3 = (t1 + 32U);
    t5 = *((char **)t3);
    t6 = (t5 + 32U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = t13;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(24, ng0);
    t1 = (t0 + 1924);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t5 = (t3 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(24, ng0);
    t1 = (t0 + 1960);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t5 = (t3 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(24, ng0);
    t1 = (t0 + 1996);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t5 = (t3 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t1 = (t0 + 1880);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(21, ng0);
    t11 = (t0 + 1052U);
    t12 = *((char **)t11);
    t13 = *((unsigned char *)t12);
    t11 = (t0 + 1924);
    t14 = (t11 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t13;
    xsi_driver_first_trans_fast_port(t11);
    xsi_set_current_line(21, ng0);
    t1 = (t0 + 1960);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t5 = (t3 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(21, ng0);
    t1 = (t0 + 1996);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t5 = (t3 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(21, ng0);
    t1 = (t0 + 2032);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t5 = (t3 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB4:    xsi_set_current_line(22, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t13 = *((unsigned char *)t2);
    t1 = (t0 + 1960);
    t3 = (t1 + 32U);
    t5 = *((char **)t3);
    t6 = (t5 + 32U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = t13;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(22, ng0);
    t1 = (t0 + 1924);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t5 = (t3 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(22, ng0);
    t1 = (t0 + 1996);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t5 = (t3 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(22, ng0);
    t1 = (t0 + 2032);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t5 = (t3 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(23, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t13 = *((unsigned char *)t2);
    t1 = (t0 + 1996);
    t3 = (t1 + 32U);
    t5 = *((char **)t3);
    t6 = (t5 + 32U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = t13;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(23, ng0);
    t1 = (t0 + 1924);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t5 = (t3 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(23, ng0);
    t1 = (t0 + 1960);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t5 = (t3 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(23, ng0);
    t1 = (t0 + 2032);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t5 = (t3 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB10:;
}


extern void work_a_0200802635_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0200802635_3212880686_p_0};
	xsi_register_didat("work_a_0200802635_3212880686", "isim/cpu_isim_beh.exe.sim/work/a_0200802635_3212880686.didat");
	xsi_register_executes(pe);
}
