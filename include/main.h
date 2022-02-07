#pragma once

#ifdef __cplusplus

#else

#ifdef _WIN64
 
#include <stdio.h>

#elif _WIN32

#error win32 is not tested, comment on this if you feel brave

#elif __linux__

#error Linux is not tested, comment on this if you feel brave

#endif

#endif