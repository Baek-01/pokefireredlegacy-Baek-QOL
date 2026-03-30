#include "global.h"
#include "battle_speed.h"

u8 GetBattleSpeedIterations(void)
{
   
   u8 speed = gSaveBlock2Ptr->optionsBattleSpeed;

    switch (speed)
    {
    case BATTLE_SPEED_X2:
        return BATTLE_SPEED_ITER_X2;
    case BATTLE_SPEED_X4:
        return BATTLE_SPEED_ITER_X4;
    case BATTLE_SPEED_X8:
        return BATTLE_SPEED_ITER_X8;
    case BATTLE_SPEED_X16:
        return BATTLE_SPEED_ITER_X16;
    case BATTLE_SPEED_NORMAL:
    default:
        return BATTLE_SPEED_ITER_NORMAL;
    } 
   
}