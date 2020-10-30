#ifndef LEVELS_H_INCLUDED
#define LEVELS_H_INCLUDED

#include "defs.h"

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//
#define LEVEL_1 " 1: -tm 1:1:0.9:0/1:1:0.9 -tm 3:10:0.95:0/2:10:0.96 -tm 5:200:0.98:0/4:50:0.95 "
#define LEVEL_2 " 2: -tm 1:1:0.705:0/1:1:0.92 -tm 2:10:0.88:0/1:1:0.95 -tm 3:20:0.94:0/2:10:0.95 -tm 4:100:0.95:0/2:10:0.94 -tm 5:200:0.96:0/3:20:0.945 -tm 6:1000:0.955:0/5:20:0.935 -tm 7:1500:0.955:0/6:50:0.945 "
#define LEVEL_3 " 3: -tm 1:1:0.76:0/1:1:0.88 -tm 2:10:0.83:0/1:1:0.86 -tm 3:20:0.83:0/2:1:0.87 -tm 4:50:0.88:0/2:10:0.89 -tm 5:200:0.94:0/3:20:0.89 -tm 6:300:0.91:0/5:20:0.88 -tm 7:500:0.91:0/6:60:0.87 -tm 8:500:0.92:0/7:15:0.89 -tm 10:1500:0.92:0/9:80:0.9 "
#define LEVEL_4 " 4: -tm 1:1:0.75:0/1:1:0.93 -tm 2:10:0.87:0/1:1:0.94 -tm 3:20:0.94:0/2:10:0.95 -tm 4:50:0.95:0/2:20:0.95 -tm 5:200:0.97:0/3:20:0.95 -tm 6:400:0.97:0/5:20:0.93 -tm 7:1000:0.94:0/6:50:0.93 "
#define LEVEL_5 " 5: -tm 1:1:0.75:0/1:1:0.86 -tm 2:10:0.79:0/1:1:0.9 -tm 3:20:0.86:0/2:10:0.9 -tm 4:50:0.91:0/2:20:0.91 -tm 5:200:0.96:0/3:20:0.92 -tm 6:400:0.92:0/5:20:0.91 -tm 7:500:0.93:0/6:30:0.9 -tm 8:1000:0.92:0/7:50:0.93 -tm 11:1500:0.93:0/10:200:0.92 "
#define LEVEL_6 " 6: -tm 1:1:0.75:0/1:1:0.86 -tm 2:10:0.79:0/1:1:0.9 -tm 3:20:0.86:0/2:10:0.9 -tm 4:50:0.91:0/2:20:0.91 -tm 5:200:0.96:0/3:20:0.92 -tm 6:400:0.92:0/5:20:0.91 -tm 7:500:0.93:0/6:30:0.9 -tm 8:1000:0.92:0/7:50:0.93 -tm 11:1500:0.93:0/10:200:0.92 -tm 12:1500:0.94:0/11:200:0.93 "
#define LEVEL_7 " 7: -tm 1:1:0.76:0/1:1:0.88 -tm 2:10:0.83:0/1:1:0.86 -tm 3:20:0.83:0/2:1:0.87 -tm 4:50:0.88:0/2:10:0.89 -tm 5:200:0.94:0/3:20:0.89 -tm 6:300:0.91:0/5:20:0.88 -tm 7:500:0.91:0/6:60:0.87 -tm 8:500:0.92:0/7:15:0.89 -tm 10:1500:0.92:0/9:80:0.9 -tm 13:1500:0.96:0/12:30:0.92 -tm 15:2000:0.94:0/14:250:0.92 "

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

char    *GetLevels  (uint8_t);
void    PrintLevels (void);

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

#endif

