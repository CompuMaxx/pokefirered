#include "global.h"
#include "voice_groups.h"


/**
 * old @note:
 * Due to the way mks4agb (Nintendo's tool) works, key split table labels can
 * appear before the actual start of the key split table data. If you look at
 * the first keysplit table (KeySplitTable1), you'll notice it's offset backwards
 * by 36 bytes. This is because the key split tables don't map instruments
 * for the entire note range (0-127)--they only map subsets, and the upper
 * and lower ranges aren't necessarily 0 or 127.
 * 
 * For example if a key split table maps an note range of 10-20, then the key
 * split table label will be offset 10 bytes before the actual key split data
 * begins. Therefore, the notes naturally map to the key split table without
 * any extra offset calculation.
*/

/**
 * ACIMUT: 2023/04/11
 * @note:
 * In real life, most instruments have a slightly different sound depending
 * on the range of notes in which they are being played.
 * 
 * To simulate this phenomenon and give more realism to the sound source,
 * different sound samples of the same instrument are used at different
 * frequencies corresponding to different ranges of notes.
 * 
 * In this case, we use the KeySplitTable to distinguish which sound samples
 * are played in a certain range of notes. This one can handle note ranges
 * from C-1 - 8.176Hz (0) to G9 - 12543.850Hz (127); it being useless to have
 * more than 128 sound samples for a KeySplitTable. However, by using
 * VOICE_KEYSPLIT_ALL each note (from C-1 to G9 or 0 to 127) can represent
 * the instrument map in General MIDI.
 * 
 * The KeySplitTable does not necessarily start from zero (C-1 at 8.176Hz),
 * it can start from the significant note of the range of notes to be
 * represented, as long as the use of notes below the initial one was to be omitted.
 * 
 * For FRLG and RSE, the KeySplitTables start from C2 (36), except KeySplitTable4
 * which starts from C1 (24) because the range of notes of the TUBA is lower.
 * 
*/

// key split table start note
#define START_KST1   NOTE_C2
#define START_KST2   NOTE_C2
#define START_KST3   NOTE_C2
#define START_KST4   NOTE_C1
#define START_KST5   NOTE_C2

// key split table label
#define KEYSPLITTABLE_PIANO1_PTR            KeySplitTable1 - NOTE_C2
#define KEYSPLITTABLE_STRING_ENSEMBLE_PTR   KeySplitTable2 - NOTE_C2
#define KEYSPLITTABLE_TRUMPET_PTR           KeySplitTable3 - NOTE_C2
#define KEYSPLITTABLE_TUBA_PTR              KeySplitTable4 - NOTE_C1
#define KEYSPLITTABLE_FRENCH_HORN_PTR       KeySplitTable5 - NOTE_C2

// for key split table purpose
#define SAMPLE_VOICE_0    0
#define SAMPLE_VOICE_1    1
#define SAMPLE_VOICE_2    2
#define SAMPLE_VOICE_3    3

// just like keySplitTable, voicegroup0002 starts from BASS_DRUM_1
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

