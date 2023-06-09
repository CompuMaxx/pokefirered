#include "global.h"
#include "voice_groups.h"


// key split table start note
#define START_KST1   NOTE_C2
#define START_KST2   NOTE_C2
#define START_KST3   NOTE_C2
#define START_KST4   NOTE_C1
#define START_KST5   NOTE_C2

// key split table label
#define KEYSPLITTABLE_PIANO1_PTR            KeySplitTable1 - START_KST1
#define KEYSPLITTABLE_STRING_ENSEMBLE_PTR   KeySplitTable2 - START_KST2
#define KEYSPLITTABLE_TRUMPET_PTR           KeySplitTable3 - START_KST3
#define KEYSPLITTABLE_TUBA_PTR              KeySplitTable4 - START_KST4
#define KEYSPLITTABLE_FRENCH_HORN_PTR       KeySplitTable5 - START_KST5

// for key split table purpose
#define SAMPLE_VOICE_0    0
#define SAMPLE_VOICE_1    1
#define SAMPLE_VOICE_2    2
#define SAMPLE_VOICE_3    3

// just like keySplitTable, voicegroup002 starts from BASS_DRUM_1
#define VG002_START BASS_DRUM_1

//drumkits
#define VOICE_DRUMKIT_001       voicegroup001
#define VOICE_DRUMKIT_002       voicegroup002 - VG002_START
#define VOICE_DRUMKIT_177       voicegroup177
#define VOICE_DRUMKIT_190       voicegroup190

#include "data/voicegroups/voicegroup000.h"
#include "data/voicegroups/voicegroup001.h"
#include "data/voicegroups/voicegroup002.h"
#include "data/voicegroups/voicegroup003.h" // voicegroup_piano1
#include "data/voicegroups/voicegroup004.h" // voicegroup_string_ensemble
#include "data/voicegroups/voicegroup005.h" // voicegroup_trumpet
#include "data/voicegroups/voicegroup006.h" // voicegroup_tuba
#include "data/voicegroups/voicegroup007.h" // voicegroup_french_horn
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
    [(START_KST1 - START_KST1) ... (NOTE_FS3 - START_KST1)] = SAMPLE_VOICE_0, // C2  - F#3
    [(NOTE_G3    - START_KST1) ... (NOTE_A4  - START_KST1)] = SAMPLE_VOICE_1, // G3  - A4
    [(NOTE_AS4   - START_KST1) ... (NOTE_FS6 - START_KST1)] = SAMPLE_VOICE_2, // A#4 - F#6
    [(NOTE_G6    - START_KST1) ... (NOTE_B7  - START_KST1)] = SAMPLE_VOICE_3, // G6  - B7
};

const u8 KeySplitTable2[] =
{
    [(START_KST2 - START_KST2) ... (NOTE_GS4 - START_KST2)] = SAMPLE_VOICE_0, // C2  - G#4
    [(NOTE_A4    - START_KST2) ... (NOTE_GS5 - START_KST2)] = SAMPLE_VOICE_1, // A4  - G#5
    [(NOTE_A5    - START_KST2) ... (NOTE_B7  - START_KST2)] = SAMPLE_VOICE_2, // A5  - B7
};

const u8 KeySplitTable3[] =
{
    [(START_KST3 - START_KST3) ... (NOTE_F4 - START_KST3)]  = SAMPLE_VOICE_0, // C2  - F4
    [(NOTE_FS4   - START_KST3) ... (NOTE_B5 - START_KST3)]  = SAMPLE_VOICE_1, // F#4 - B5
    [(NOTE_C6    - START_KST3) ... (NOTE_B7 - START_KST3)]  = SAMPLE_VOICE_2, // C6  - B7
};

const u8 KeySplitTable4[] =
{
    [(START_KST4 - START_KST4) ... (NOTE_F2 - START_KST4)]  = SAMPLE_VOICE_0, // C1  - F2
    [(NOTE_FS2   - START_KST4) ... (NOTE_B7 - START_KST4)]  = SAMPLE_VOICE_1, // F#2 - B7
};

const u8 KeySplitTable5[] =
{
    [(START_KST5 - START_KST5) ... (NOTE_F4 - START_KST5)]  = SAMPLE_VOICE_0, // C2  - F4
    [(NOTE_FS4   - START_KST5) ... (NOTE_B7 - START_KST5)]  = SAMPLE_VOICE_1, // F#4 - B7
};

