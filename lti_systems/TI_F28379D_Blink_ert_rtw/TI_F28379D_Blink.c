/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TI_F28379D_Blink.c
 *
 * Code generated for Simulink model 'TI_F28379D_Blink'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Fri Sep 12 10:47:47 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TI_F28379D_Blink.h"
#include <string.h>

/* Block states (default storage) */
DW_TI_F28379D_Blink_T TI_F28379D_Blink_DW;

/* Real-time model */
static RT_MODEL_TI_F28379D_Blink_T TI_F28379D_Blink_M_;
RT_MODEL_TI_F28379D_Blink_T *const TI_F28379D_Blink_M = &TI_F28379D_Blink_M_;

/* Model step function */
void TI_F28379D_Blink_step(void)
{
  /* S-Function (c280xgpio_do): '<Root>/Digital Output' incorporates:
   *  Constant: '<Root>/Constant'
   */
  {
    GpioDataRegs.GPBTOGGLE.bit.GPIO34 = (uint16_T)((0.5) != 0);
  }
}

/* Model initialize function */
void TI_F28379D_Blink_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(TI_F28379D_Blink_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&TI_F28379D_Blink_DW, 0,
                sizeof(DW_TI_F28379D_Blink_T));

  /* Start for S-Function (c280xgpio_do): '<Root>/Digital Output' */
  EALLOW;
  GpioCtrlRegs.GPBMUX1.all &= 0xFFFFFFCFU;
  GpioCtrlRegs.GPBDIR.all |= 0x4U;
  EDIS;
}

/* Model terminate function */
void TI_F28379D_Blink_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
