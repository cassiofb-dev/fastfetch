#pragma once

// This file will be included in "fastfetch.h", do NOT put unnecessary things here

#include "common/option.h"
#include "common/percent.h"

typedef struct FFBatteryOptions
{
    FFModuleBaseInfo moduleInfo;
    FFModuleArgs moduleArgs;

    bool temp;
    FFPercentConfig percent;

    #ifdef _WIN32
        bool useSetupApi;
    #endif
} FFBatteryOptions;
