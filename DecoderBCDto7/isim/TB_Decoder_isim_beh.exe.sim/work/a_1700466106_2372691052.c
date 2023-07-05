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
static const char *ng0 = "D:/Study/AUT/Term6/AZ Logical/Homework1and2/DecoderBCDto7/TB_Decoder.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );


static void work_a_1700466106_2372691052_p_0(char *t0)
{
    char t6[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    int64 t17;

LAB0:    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 7115);
    *((int *)t2) = 0;
    t3 = (t0 + 7119);
    *((int *)t3) = 9;
    t4 = 0;
    t5 = 9;

LAB4:    if (t4 <= t5)
        goto LAB5;

LAB7:    xsi_set_current_line(79, ng0);

LAB19:    *((char **)t1) = &&LAB20;

LAB1:    return;
LAB5:    xsi_set_current_line(71, ng0);
    t7 = (t0 + 7115);
    t8 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t6, *((int *)t7), 4);
    t9 = (t0 + 2928U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    t11 = (t6 + 12U);
    t12 = *((unsigned int *)t11);
    t12 = (t12 * 1U);
    memcpy(t9, t8, t12);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2928U);
    t3 = *((char **)t2);
    t13 = (3 - 3);
    t12 = (t13 * -1);
    t14 = (1U * t12);
    t15 = (0 + t14);
    t2 = (t3 + t15);
    t16 = *((unsigned char *)t2);
    t7 = (t0 + 4296);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t16;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2928U);
    t3 = *((char **)t2);
    t13 = (2 - 3);
    t12 = (t13 * -1);
    t14 = (1U * t12);
    t15 = (0 + t14);
    t2 = (t3 + t15);
    t16 = *((unsigned char *)t2);
    t7 = (t0 + 4360);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t16;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2928U);
    t3 = *((char **)t2);
    t13 = (1 - 3);
    t12 = (t13 * -1);
    t14 = (1U * t12);
    t15 = (0 + t14);
    t2 = (t3 + t15);
    t16 = *((unsigned char *)t2);
    t7 = (t0 + 4424);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t16;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2928U);
    t3 = *((char **)t2);
    t13 = (0 - 3);
    t12 = (t13 * -1);
    t14 = (1U * t12);
    t15 = (0 + t14);
    t2 = (t3 + t15);
    t16 = *((unsigned char *)t2);
    t7 = (t0 + 4488);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t16;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(76, ng0);
    t17 = (9.9999999999999995E-008 * 1LL);
    t2 = (t0 + 3720);
    xsi_process_wait(t2, t17);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:    t2 = (t0 + 7115);
    t4 = *((int *)t2);
    t3 = (t0 + 7119);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB7;

LAB16:    t13 = (t4 + 1);
    t4 = t13;
    t7 = (t0 + 7115);
    *((int *)t7) = t4;
    goto LAB4;

LAB8:    xsi_set_current_line(77, ng0);
    t17 = (100 * 1000LL);
    t2 = (t0 + 3720);
    xsi_process_wait(t2, t17);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    goto LAB6;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB17:    xsi_set_current_line(81, ng0);

LAB23:    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB18:    goto LAB17;

LAB20:    goto LAB18;

LAB21:    goto LAB2;

LAB22:    goto LAB21;

LAB24:    goto LAB22;

}


extern void work_a_1700466106_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1700466106_2372691052_p_0};
	xsi_register_didat("work_a_1700466106_2372691052", "isim/TB_Decoder_isim_beh.exe.sim/work/a_1700466106_2372691052.didat");
	xsi_register_executes(pe);
}
