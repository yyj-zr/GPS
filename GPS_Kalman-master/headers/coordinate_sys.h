#ifndef _COORDINATE_SYS_H
#define _COORDINATE_SYS_H
#include <math.h>
#include "stdio.h"
#include <stdlib.h>
typedef struct {
    double lng;
    double lat;
} Location;

extern Location transformFromWGSToGCJ(Location wgLoc);
extern Location transformFromGCJToWGS(Location gcLoc);
extern Location bd_encrypt(Location gcLoc);
extern Location bd_decrypt(Location bdLoc);
extern Location WGS84tobaidu(double longti,double lati);
#endif
