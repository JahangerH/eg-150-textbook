/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: TI_F28379D_Blink.h
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

#ifndef TI_F28379D_Blink_h_
#define TI_F28379D_Blink_h_
#ifndef TI_F28379D_Blink_COMMON_INCLUDES_
#define TI_F28379D_Blink_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "c2000BoardSupport.h"
#include "MW_f2837xD_includes.h"
#endif                                 /* TI_F28379D_Blink_COMMON_INCLUDES_ */

#include <stddef.h>
#include "TI_F28379D_Blink_types.h"
#include <string.h>
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  int32_T DigitalOutput_FRAC_LEN;      /* '<Root>/Digital Output' */
} DW_TI_F28379D_Blink_T;

/* Real-time Model Data Structure */
struct tag_RTM_TI_F28379D_Blink_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_TI_F28379D_Blink_T TI_F28379D_Blink_DW;

/* Model entry point functions */
extern void TI_F28379D_Blink_initialize(void);
extern void TI_F28379D_Blink_step(void);
extern void TI_F28379D_Blink_terminate(void);

/* Real-time Model object */
extern RT_MODEL_TI_F28379D_Blink_T *const TI_F28379D_Blink_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'TI_F28379D_Blink'
 */
#endif                                 /* TI_F28379D_Blink_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
