#pragma once

#include "fastfetch.h"

#define FF_CPU_TEMP_UNSET (0/0.0)

typedef struct FFCPUResult
{
    FFstrbuf name;
    FFstrbuf vendor;

    uint16_t coresPhysical;
    uint16_t coresLogical;
    uint16_t coresOnline;

    double frequencyMin; // GHz
    double frequencyMax; // GHz

    double temperature;
} FFCPUResult;

const char* ffDetectCPU(const FFCPUOptions* options, FFCPUResult* cpu);
