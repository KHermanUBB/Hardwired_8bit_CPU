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
extern char *STD_TEXTIO;
static const char *ng1 = "ramfile";
extern char *STD_STANDARD;
static const char *ng3 = "/home/icarosix/Clases/Arqui/cores/Hardwired_8bit_CPU/ise/BRAM_Init.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

char *ieee_p_2592010699_sub_3293060193_503743352(char *, char *, char *, char *, unsigned char );
char *ieee_p_2592010699_sub_393209765_503743352(char *, char *, char *, char *);
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


char *work_a_2320099342_3212880686_sub_198603756_3057020925(char *t1, char *t2, char *t3)
{
    char t4[184];
    char t5[16];
    char t17[32];
    char t26[2048];
    char t35[8];
    char t45[16];
    char *t0;
    char *t6;
    char *t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    unsigned char t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned char t43;
    unsigned int t44;
    int t46;
    unsigned int t47;

LAB0:    t6 = ((STD_TEXTIO) + 1996);
    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 1U);
    t9 = (t4 + 4U);
    t10 = xsi_create_file_variable_in_buffer(0, ng1, t6, t2, t8, 1);
    *((char **)t9) = t10;
    t11 = (t4 + 8U);
    t12 = ((STD_TEXTIO) + 1908);
    t13 = (t11 + 32U);
    *((char **)t13) = t12;
    t14 = (t11 + 24U);
    *((char **)t14) = 0;
    t15 = (t11 + 36U);
    *((int *)t15) = 1;
    t16 = (t11 + 28U);
    *((char **)t16) = 0;
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 255;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t20 = (255 - 0);
    t21 = (t20 * 1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t17 + 16U);
    t22 = (t19 + 0U);
    *((int *)t22) = 7;
    t22 = (t19 + 4U);
    *((int *)t22) = 0;
    t22 = (t19 + 8U);
    *((int *)t22) = -1;
    t23 = (0 - 7);
    t21 = (t23 * -1);
    t21 = (t21 + 1);
    t22 = (t19 + 12U);
    *((unsigned int *)t22) = t21;
    t22 = (t4 + 48U);
    t24 = (t1 + 2260);
    t25 = (t22 + 52U);
    *((char **)t25) = t24;
    t27 = (t22 + 36U);
    *((char **)t27) = t26;
    xsi_type_set_default_value(t24, t26, 0);
    t28 = (t22 + 40U);
    t29 = (t24 + 44U);
    t30 = *((char **)t29);
    *((char **)t28) = t30;
    t31 = (t22 + 48U);
    *((unsigned int *)t31) = 2048U;
    t32 = (t4 + 116U);
    t33 = ((STD_STANDARD) + 240);
    t34 = (t32 + 52U);
    *((char **)t34) = t33;
    t36 = (t32 + 36U);
    *((char **)t36) = t35;
    xsi_type_set_default_value(t33, t35, 0);
    t37 = (t32 + 48U);
    *((unsigned int *)t37) = 4U;
    t38 = (t5 + 4U);
    t39 = (t2 != 0);
    if (t39 == 1)
        goto LAB3;

LAB2:    t40 = (t5 + 8U);
    *((char **)t40) = t3;
    t41 = (t32 + 36U);
    t42 = *((char **)t41);
    t41 = (t42 + 0);
    *((int *)t41) = 0;

LAB4:    t6 = (t4 + 4U);
    t7 = *((char **)t6);
    t39 = std_textio_endfile(t7);
    t43 = (!(t39));
    if (t43 != 0)
        goto LAB5;

LAB7:    t6 = (t22 + 36U);
    t7 = *((char **)t6);
    t39 = (2048U != 2048U);
    if (t39 == 1)
        goto LAB8;

LAB9:    t0 = xsi_get_transient_memory(2048U);
    memcpy(t0, t7, 2048U);

LAB1:    xsi_access_variable_delete(t11);
    t6 = (t4 + 4U);
    t7 = *((char **)t6);
    xsi_delete_file_variable(t7);
    return t0;
LAB3:    *((char **)t38) = t2;
    goto LAB2;

LAB5:    t9 = (t4 + 4U);
    t10 = *((char **)t9);
    std_textio_readline(STD_TEXTIO, (char *)0, t10, t11);
    t6 = (t22 + 36U);
    t7 = *((char **)t6);
    t6 = (t32 + 36U);
    t9 = *((char **)t6);
    t20 = *((int *)t9);
    t23 = (t20 - 0);
    t8 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 255, 1, t20);
    t21 = (8U * t8);
    t44 = (0 + t21);
    t6 = (t7 + t44);
    t10 = (t45 + 0U);
    t12 = (t10 + 0U);
    *((int *)t12) = 7;
    t12 = (t10 + 4U);
    *((int *)t12) = 0;
    t12 = (t10 + 8U);
    *((int *)t12) = -1;
    t46 = (0 - 7);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t12 = (t10 + 12U);
    *((unsigned int *)t12) = t47;
    std_textio_read4(STD_TEXTIO, (char *)0, t11, t6, t45);
    t6 = (t32 + 36U);
    t7 = *((char **)t6);
    t20 = *((int *)t7);
    t23 = (t20 + 1);
    t6 = (t32 + 36U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = t23;
    goto LAB4;

LAB6:;
LAB8:    xsi_size_not_matching(2048U, 2048U, 0);
    goto LAB9;

LAB10:;
}

static void work_a_2320099342_3212880686_p_0(char *t0)
{
    char t11[16];
    char t29[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    int t30;

LAB0:    xsi_set_current_line(49, ng3);
    t2 = (t0 + 568U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 1964);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(50, ng3);
    t4 = (t0 + 684U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(53, ng3);
    t2 = (t0 + 1052U);
    t4 = *((char **)t2);
    t2 = (t0 + 776U);
    t5 = *((char **)t2);
    t2 = (t0 + 3864U);
    t19 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t5, t2);
    t20 = (t19 - 0);
    t15 = (t20 * 1);
    xsi_vhdl_check_range_of_index(0, 255, 1, t19);
    t21 = (8U * t15);
    t22 = (0 + t21);
    t8 = (t4 + t22);
    t12 = (t29 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 7;
    t13 = (t12 + 4U);
    *((int *)t13) = 0;
    t13 = (t12 + 8U);
    *((int *)t13) = -1;
    t30 = (0 - 7);
    t23 = (t30 * -1);
    t23 = (t23 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t23;
    t13 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t11, t8, t29);
    t14 = (t11 + 12U);
    t23 = *((unsigned int *)t14);
    t23 = (t23 * 1U);
    t1 = (8U != t23);
    if (t1 == 1)
        goto LAB13;

LAB14:    t17 = (t0 + 2044);
    t18 = (t17 + 32U);
    t24 = *((char **)t18);
    t25 = (t24 + 32U);
    t26 = *((char **)t25);
    memcpy(t26, t13, 8U);
    xsi_driver_first_trans_fast_port(t17);
    goto LAB3;

LAB5:    t4 = (t0 + 592U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(51, ng3);
    t4 = (t0 + 868U);
    t12 = *((char **)t4);
    t4 = (t0 + 3880U);
    t13 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t11, t12, t4, (unsigned char)0);
    t14 = (t11 + 12U);
    t15 = *((unsigned int *)t14);
    t15 = (t15 * 1U);
    t16 = (8U != t15);
    if (t16 == 1)
        goto LAB11;

LAB12:    t17 = (t0 + 776U);
    t18 = *((char **)t17);
    t17 = (t0 + 3864U);
    t19 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t18, t17);
    t20 = (t19 - 0);
    t21 = (t20 * 1);
    t22 = (8U * t21);
    t23 = (0U + t22);
    t24 = (t0 + 2008);
    t25 = (t24 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 32U);
    t28 = *((char **)t27);
    memcpy(t28, t13, 8U);
    xsi_driver_first_trans_delta(t24, t23, 8U, 0LL);
    goto LAB9;

LAB11:    xsi_size_not_matching(8U, t15, 0);
    goto LAB12;

LAB13:    xsi_size_not_matching(8U, t23, 0);
    goto LAB14;

}


extern void work_a_2320099342_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2320099342_3212880686_p_0};
	static char *se[] = {(void *)work_a_2320099342_3212880686_sub_198603756_3057020925};
	xsi_register_didat("work_a_2320099342_3212880686", "isim/tb_cpu_isim_beh.exe.sim/work/a_2320099342_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
