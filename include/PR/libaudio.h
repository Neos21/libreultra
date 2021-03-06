#ifndef _ULTRA64_LIBAUDIO_H_
#define _ULTRA64_LIBAUDIO_H_

#include "abi.h"

typedef struct
{
    s32 order;
    s32 npredictors;
    s16 book[1]; // variable size, 8-byte aligned
} ALADPCMBook;

typedef struct
{
    u8 *offset;
    s32 len;
} ALSeqData;

typedef struct
{
    s16 revision;
    s16 seqCount;
    ALSeqData seqArray[1];
} ALSeqFile;

typedef struct
{
    u32 start;
    u32 end;
    u32 count;
    ADPCM_STATE state;
} ALADPCMloop;

void alSeqFileNew(ALSeqFile *f, u8 *base);

#endif
