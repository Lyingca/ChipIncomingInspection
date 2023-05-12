//
// Created by 陈骏骏 on 2023/5/10.
//
#include "encoder.h"
#include "tim.h"

//记录脉冲数
uint16_t Pulse_Number;

uint16_t Read_Pulse_Value()
{
    //读取脉冲数
    Pulse_Number = __HAL_TIM_GET_COUNTER(&htim3);
    //读取之后 编码计数--清零--
    __HAL_TIM_SET_COUNTER(&htim3,0);
    return Pulse_Number;
}

/**
 * 编码器计数器清零
 */
void Encoder_Counter_Clear()
{
    //编码计数--清零--
    __HAL_TIM_SET_COUNTER(&htim3,0);
}
