#include "global.h"
#include "voice_groups.h"
#include "direct_sound_data.h"
#include "programmable_wave_data.h"


#include "data/voicegroups/voicegroup000.h"
#include "data/voicegroups/voicegroup001.h"
#include "data/voicegroups/voicegroup002.h"
#include "data/voicegroups/voicegroup003.h"
#include "data/voicegroups/voicegroup004.h"
#include "data/voicegroups/voicegroup005.h"
#include "data/voicegroups/voicegroup006.h"
#include "data/voicegroups/voicegroup007.h"
#include "data/voicegroups/voicegroup008.h"
#include "data/voicegroups/voicegroup009.h"
#include "data/voicegroups/voicegroup010.h"
#include "data/voicegroups/voicegroup011.h"
#include "data/voicegroups/voicegroup012.h"

#include "data/voicegroups/voicegroup127.h"
#include "data/voicegroups/voicegroup128.h"

#include "data/cry_tables.h"

#include "data/voicegroups/voicegroup129.h"
#include "data/voicegroups/voicegroup130.h"
#include "data/voicegroups/voicegroup131.h"
#include "data/voicegroups/voicegroup132.h"
#include "data/voicegroups/voicegroup133.h"
#include "data/voicegroups/voicegroup134.h"
#include "data/voicegroups/voicegroup135.h"
#include "data/voicegroups/voicegroup136.h"
#include "data/voicegroups/voicegroup137.h"
#include "data/voicegroups/voicegroup138.h"
#include "data/voicegroups/voicegroup139.h"
#include "data/voicegroups/voicegroup140.h"
#include "data/voicegroups/voicegroup141.h"
#include "data/voicegroups/voicegroup142.h"
#include "data/voicegroups/voicegroup143.h"
#include "data/voicegroups/voicegroup144.h"
#include "data/voicegroups/voicegroup145.h"
#include "data/voicegroups/voicegroup146.h"
#include "data/voicegroups/voicegroup147.h"
#include "data/voicegroups/voicegroup148.h"
#include "data/voicegroups/voicegroup149.h"
#include "data/voicegroups/voicegroup150.h"
#include "data/voicegroups/voicegroup151.h"
#include "data/voicegroups/voicegroup152.h"
#include "data/voicegroups/voicegroup153.h"
#include "data/voicegroups/voicegroup154.h"
#include "data/voicegroups/voicegroup155.h"
#include "data/voicegroups/voicegroup156.h"
#include "data/voicegroups/voicegroup157.h"
#include "data/voicegroups/voicegroup158.h"
#include "data/voicegroups/voicegroup159.h"
#include "data/voicegroups/voicegroup160.h"
#include "data/voicegroups/voicegroup161.h"
#include "data/voicegroups/voicegroup162.h"
#include "data/voicegroups/voicegroup163.h"
#include "data/voicegroups/voicegroup164.h"
#include "data/voicegroups/voicegroup165.h"
#include "data/voicegroups/voicegroup166.h"
#include "data/voicegroups/voicegroup167.h"
#include "data/voicegroups/voicegroup168.h"
#include "data/voicegroups/voicegroup169.h"
#include "data/voicegroups/voicegroup170.h"
#include "data/voicegroups/voicegroup171.h"
#include "data/voicegroups/voicegroup172.h"
#include "data/voicegroups/voicegroup173.h"
#include "data/voicegroups/voicegroup174.h"
#include "data/voicegroups/voicegroup175.h"
#include "data/voicegroups/voicegroup176.h"
#include "data/voicegroups/voicegroup177.h"
#include "data/voicegroups/voicegroup178.h"
#include "data/voicegroups/voicegroup179.h"
#include "data/voicegroups/voicegroup180.h"
#include "data/voicegroups/voicegroup181.h"
#include "data/voicegroups/voicegroup182.h"
#include "data/voicegroups/voicegroup183.h"
#include "data/voicegroups/voicegroup184.h"
#include "data/voicegroups/voicegroup185.h"
#include "data/voicegroups/voicegroup186.h"
#include "data/voicegroups/voicegroup187.h"
#include "data/voicegroups/voicegroup188.h"
#include "data/voicegroups/voicegroup189.h"
#include "data/voicegroups/voicegroup190.h"


const u8 KeySplitTable1[] =
{
    [KEYSPLIT_RANGE(NOTE_C2,  NOTE_FS3, PIANO1)] = SAMPLE_VOICE_0, // C2  - F#3
    [KEYSPLIT_RANGE(NOTE_G3,  NOTE_A4,  PIANO1)] = SAMPLE_VOICE_1, // G3  - A4
    [KEYSPLIT_RANGE(NOTE_AS4, NOTE_FS6, PIANO1)] = SAMPLE_VOICE_2, // A#4 - F#6
    [KEYSPLIT_RANGE(NOTE_G6,  NOTE_B7,  PIANO1)] = SAMPLE_VOICE_3, // G6  - B7
};

const u8 KeySplitTable2[] =
{
    [KEYSPLIT_RANGE(NOTE_C2, NOTE_GS4, STRING_ENSEMBLE)] = SAMPLE_VOICE_0, // C2  - G#4
    [KEYSPLIT_RANGE(NOTE_A4, NOTE_GS5, STRING_ENSEMBLE)] = SAMPLE_VOICE_1, // A4  - G#5
    [KEYSPLIT_RANGE(NOTE_A5, NOTE_B7,  STRING_ENSEMBLE)] = SAMPLE_VOICE_2, // A5  - B7
};

const u8 KeySplitTable3[] =
{
    [KEYSPLIT_RANGE(NOTE_C2,  NOTE_F4, TRUMPET)] = SAMPLE_VOICE_0, // C2  - F4
    [KEYSPLIT_RANGE(NOTE_FS4, NOTE_B5, TRUMPET)] = SAMPLE_VOICE_1, // F#4 - B5
    [KEYSPLIT_RANGE(NOTE_C6,  NOTE_B7, TRUMPET)] = SAMPLE_VOICE_2, // C6  - B7
};

const u8 KeySplitTable4[] =
{
    [KEYSPLIT_RANGE(NOTE_C1,  NOTE_F2, TUBA)] = SAMPLE_VOICE_0, // C1  - F2
    [KEYSPLIT_RANGE(NOTE_FS2, NOTE_B7, TUBA)] = SAMPLE_VOICE_1, // F#2 - B7
};

const u8 KeySplitTable5[] =
{
    [KEYSPLIT_RANGE(NOTE_C2,  NOTE_F4, FRENCH_HORN)] = SAMPLE_VOICE_0, // C2  - F4
    [KEYSPLIT_RANGE(NOTE_FS4, NOTE_B7, FRENCH_HORN)] = SAMPLE_VOICE_1, // F#4 - B7
};
