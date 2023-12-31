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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Study/AUT/Term6/AZ Logical/Homework/BCD_Adder_Subtractor/fourbit_adder_TB.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );


static void work_a_2091547061_2372691052_p_0(char *t0)
{
    char t10[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    int64 t18;
    int t19;

LAB0:    t1 = (t0 + 2832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 5534);
    *((int *)t2) = 0;
    t3 = (t0 + 5538);
    *((int *)t3) = 16;
    t4 = 0;
    t5 = 16;

LAB4:    if (t4 <= t5)
        goto LAB5;

LAB7:    xsi_set_current_line(60, ng0);

LAB24:    *((char **)t1) = &&LAB25;

LAB1:    return;
LAB5:    xsi_set_current_line(51, ng0);
    t6 = (t0 + 5542);
    *((int *)t6) = 0;
    t7 = (t0 + 5546);
    *((int *)t7) = 16;
    t8 = 0;
    t9 = 16;

LAB8:    if (t8 <= t9)
        goto LAB9;

LAB11:
LAB6:    t2 = (t0 + 5534);
    t4 = *((int *)t2);
    t3 = (t0 + 5538);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB7;

LAB21:    t8 = (t4 + 1);
    t4 = t8;
    t6 = (t0 + 5534);
    *((int *)t6) = t4;
    goto LAB4;

LAB9:    xsi_set_current_line(52, ng0);
    t11 = (t0 + 5534);
    t12 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t10, *((int *)t11), 4);
    t13 = (t0 + 3216);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t12, 4U);
    xsi_driver_first_trans_fast(t13);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 5542);
    t3 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t10, *((int *)t2), 4);
    t6 = (t0 + 3280);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t3, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(55, ng0);
    t18 = (9.9999999999999995E-008 * 1LL);
    t2 = (t0 + 2640);
    xsi_process_wait(t2, t18);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB10:    t2 = (t0 + 5542);
    t8 = *((int *)t2);
    t3 = (t0 + 5546);
    t9 = *((int *)t3);
    if (t8 == t9)
        goto LAB11;

LAB20:    t19 = (t8 + 1);
    t8 = t19;
    t6 = (t0 + 5542);
    *((int *)t6) = t8;
    goto LAB8;

LAB12:    xsi_set_current_line(56, ng0);
    t18 = (100 * 1000LL);
    t2 = (t0 + 2640);
    xsi_process_wait(t2, t18);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    goto LAB10;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB22:    goto LAB2;

LAB23:    goto LAB22;

LAB25:    goto LAB23;

}


extern void work_a_2091547061_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2091547061_2372691052_p_0};
	xsi_register_didat("work_a_2091547061_2372691052", "isim/fourbit_adder_TB_isim_beh.exe.sim/work/a_2091547061_2372691052.didat");
	xsi_register_executes(pe);
}
