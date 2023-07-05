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
static const char *ng0 = "D:/Study/AUT/Term6/AZ Logical/Homework/BCD_Adder_Subtractor/TB_BCD.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );


static void work_a_2032801144_2372691052_p_0(char *t0)
{
    char t16[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    char *t10;
    char *t11;
    int t12;
    int t13;
    int t14;
    unsigned char t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    int64 t24;

LAB0:    t1 = (t0 + 2832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 5446);
    *((int *)t2) = 9;
    t3 = (t0 + 5450);
    *((int *)t3) = 0;
    t4 = 9;
    t5 = 0;

LAB4:    if (t4 >= t5)
        goto LAB5;

LAB7:    xsi_set_current_line(62, ng0);

LAB27:    *((char **)t1) = &&LAB28;

LAB1:    return;
LAB5:    xsi_set_current_line(51, ng0);
    t6 = (t0 + 5454);
    *((int *)t6) = 0;
    t7 = (t0 + 5458);
    *((int *)t7) = 9;
    t8 = 0;
    t9 = 9;

LAB8:    if (t8 <= t9)
        goto LAB9;

LAB11:
LAB6:    t2 = (t0 + 5446);
    t4 = *((int *)t2);
    t3 = (t0 + 5450);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB7;

LAB24:    t8 = (t4 + -1);
    t4 = t8;
    t6 = (t0 + 5446);
    *((int *)t6) = t4;
    goto LAB4;

LAB9:    xsi_set_current_line(52, ng0);
    t10 = (t0 + 5446);
    t11 = (t0 + 5454);
    t12 = *((int *)t10);
    t13 = *((int *)t11);
    t14 = (t12 - t13);
    t15 = (t14 > 0);
    if (t15 != 0)
        goto LAB12;

LAB14:
LAB13:
LAB10:    t2 = (t0 + 5454);
    t8 = *((int *)t2);
    t3 = (t0 + 5458);
    t9 = *((int *)t3);
    if (t8 == t9)
        goto LAB11;

LAB23:    t12 = (t8 + 1);
    t8 = t12;
    t6 = (t0 + 5454);
    *((int *)t6) = t8;
    goto LAB8;

LAB12:    xsi_set_current_line(53, ng0);
    t17 = (t0 + 5446);
    t18 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t16, *((int *)t17), 4);
    t19 = (t0 + 3216);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t18, 4U);
    xsi_driver_first_trans_fast(t19);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 5454);
    t3 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t16, *((int *)t2), 4);
    t6 = (t0 + 3280);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t17 = *((char **)t11);
    memcpy(t17, t3, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3344);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(56, ng0);
    t24 = (9.9999999999999995E-008 * 1LL);
    t2 = (t0 + 2640);
    xsi_process_wait(t2, t24);

LAB17:    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB15:    xsi_set_current_line(57, ng0);
    t24 = (1 * 1000LL);
    t2 = (t0 + 2640);
    xsi_process_wait(t2, t24);

LAB21:    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB16:    goto LAB15;

LAB18:    goto LAB16;

LAB19:    goto LAB13;

LAB20:    goto LAB19;

LAB22:    goto LAB20;

LAB25:    goto LAB2;

LAB26:    goto LAB25;

LAB28:    goto LAB26;

}


extern void work_a_2032801144_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2032801144_2372691052_p_0};
	xsi_register_didat("work_a_2032801144_2372691052", "isim/TB_BCD_isim_beh.exe.sim/work/a_2032801144_2372691052.didat");
	xsi_register_executes(pe);
}
