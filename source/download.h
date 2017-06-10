#pragma once

#include "basic.h"

#define DL_ERROR_STATUSCODE -1
#define DL_ERROR_WRITEFILE -2
#define DL_ERROR_ALLOC -3
#define DL_ERROR_CONFIG -4

Result setupContext(httpcContext * context, const char * url, u32 * size);
Result downloadToFile(const char * url, const char * filepath);
Result downloadFromRelease(const char * url, const char * element, const char * filepath);
