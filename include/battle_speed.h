#include "global.h"
#ifndef GUARD_BATTLE_SPEED_H
#define GUARD_BATTLE_SPEED_H

// Battle speed modes
#define BATTLE_SPEED_NORMAL     0
#define BATTLE_SPEED_X2         1
#define BATTLE_SPEED_X4         2
#define BATTLE_SPEED_X8         3
#define BATTLE_SPEED_X16        4

// Extra iterations per frame for each speed
#define BATTLE_SPEED_ITER_NORMAL    0   // 1x speed (no extra iterations)
#define BATTLE_SPEED_ITER_X2        1   // 2x speed (1 extra iteration)  
#define BATTLE_SPEED_ITER_X4        3   // 4x speed (3 extra iterations)
#define BATTLE_SPEED_ITER_X8        7   // 8x speed (7 extra iterations)
#define BATTLE_SPEED_ITER_X16       15  // 16x speed (15 extra iterations)

// Public functions
u8 GetBattleSpeedIterations(void);
void ToggleBattleSpeed(void);

#endif // GUARD_BATTLE_SPEED_H