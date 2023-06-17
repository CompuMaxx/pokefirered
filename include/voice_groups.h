#ifndef GUARD_VOICE_GROUPS_H
#define GUARD_VOICE_GROUPS_H

#include "constants/general_midi.h"
#include "gba/m4a_internal.h"

// key split table start note
#define KEYSPLITTABLE_PIANO1_START              NOTE_C2
#define KEYSPLITTABLE_STRING_ENSEMBLE_START     NOTE_C2
#define KEYSPLITTABLE_TRUMPET_START             NOTE_C2
#define KEYSPLITTABLE_TUBA_START                NOTE_C1
#define KEYSPLITTABLE_FRENCH_HORN_START         NOTE_C2

#define KEYSPLIT_RANGE(start_note,end_note,instrument_start_note) \
    (start_note - KEYSPLITTABLE_##instrument_start_note##_START) ... (end_note - KEYSPLITTABLE_##instrument_start_note##_START)

// key split table label
#define KEYSPLITTABLE_PIANO1_PTR            KeySplitTable1 - KEYSPLITTABLE_PIANO1_START
#define KEYSPLITTABLE_STRING_ENSEMBLE_PTR   KeySplitTable2 - KEYSPLITTABLE_STRING_ENSEMBLE_START
#define KEYSPLITTABLE_TRUMPET_PTR           KeySplitTable3 - KEYSPLITTABLE_TRUMPET_START
#define KEYSPLITTABLE_TUBA_PTR              KeySplitTable4 - KEYSPLITTABLE_TUBA_START
#define KEYSPLITTABLE_FRENCH_HORN_PTR       KeySplitTable5 - KEYSPLITTABLE_FRENCH_HORN_START

// for key split table purpose
#define SAMPLE_VOICE_0    0
#define SAMPLE_VOICE_1    1
#define SAMPLE_VOICE_2    2
#define SAMPLE_VOICE_3    3

// just like keySplitTable, voicegroup002 starts from BASS_DRUM_1
#define DRUMKIT_002_START_NOTE  BASS_DRUM_1

//drumkits
#define VOICE_DRUMKIT_001       voicegroup001
#define VOICE_DRUMKIT_002       voicegroup002 - DRUMKIT_002_START_NOTE
#define VOICE_DRUMKIT_177       voicegroup177
#define VOICE_DRUMKIT_190       voicegroup190


#define VOICE_DIRECTSOUND(base_midi_key,pan,sample_data_pointer,_attack,_decay,_sustain,_release)   \
    {.toneData =                                                                                    \
        {                                                                                           \
            .type = 0,                                                                              \
            .key = base_midi_key,                                                                   \
            .pan_sweep = (pan)?(0x80|pan):0,                                                        \
            .wav = (struct WaveData*)&sample_data_pointer,                                          \
            .attack = _attack,                                                                      \
            .decay = _decay,                                                                        \
            .sustain = _sustain,                                                                    \
            .release = _release                                                                     \
        }                                                                                           \
    }

#define VOICE_DIRECTSOUND_NO_RESAMPLE(base_midi_key,pan,sample_data_pointer,_attack,_decay,_sustain,_release)\
    {.toneData =                                                                                             \
        {                                                                                                    \
            .type = 8,                                                                                       \
            .key = base_midi_key,                                                                            \
            .pan_sweep = (pan)?(0x80|pan):0,                                                                 \
            .wav = (struct WaveData*)&sample_data_pointer,                                                   \
            .attack = _attack,                                                                               \
            .decay = _decay,                                                                                 \
            .sustain = _sustain,                                                                             \
            .release = _release                                                                              \
        }                                                                                                    \
    }

#define VOICE_DIRECTSOUND_ALT(base_midi_key,pan,sample_data_pointer,_attack,_decay,_sustain,_release)   \
    {.toneData =                                                                                        \
        {                                                                                               \
            .type = 16,                                                                                 \
            .key = base_midi_key,                                                                       \
            .pan_sweep = (pan)?(0x80|pan):0,                                                            \
            .wav = (struct WaveData*)&sample_data_pointer,                                              \
            .attack = _attack,                                                                          \
            .decay = _decay,                                                                            \
            .sustain = _sustain,                                                                        \
            .release = _release                                                                         \
        }                                                                                               \
    }


#define VOICE_SQUARE_1(base_midi_key,_pan,_sweep,_duty_cycle,_attack,_decay,_sustain,_release)  \
    {.square =                                                                                  \
        {                                                                                       \
            .type = 1,                                                                          \
            .key = base_midi_key,                                                               \
            .pan = (_pan)?(0x80|_pan):0,                                                        \
            .sweep = _sweep,                                                                    \
            .duty_cycle = (_duty_cycle & 3),                                                    \
            .attack = (_attack & 7),                                                            \
            .decay = (_decay & 7),                                                              \
            .sustain = (_sustain & 15),                                                         \
            .release = (_release & 7)                                                           \
        }                                                                                       \
    }

#define VOICE_SQUARE_1_ALT(base_midi_key,_pan,_sweep,_duty_cycle,_attack,_decay,_sustain,_release)  \
    {.square =                                                                                      \
        {                                                                                           \
            .type = 9,                                                                              \
            .key = base_midi_key,                                                                   \
            .pan = (_pan)?(0x80|_pan):0,                                                            \
            .sweep = _sweep,                                                                        \
            .duty_cycle = (_duty_cycle & 3),                                                        \
            .attack = (_attack & 7),                                                                \
            .decay = (_decay & 7),                                                                  \
            .sustain = (_sustain & 15),                                                             \
            .release = (_release & 7)                                                               \
        }                                                                                           \
    }

#define VOICE_SQUARE_2(base_midi_key,_pan,_duty_cycle,_attack,_decay,_sustain,_release) \
    {.square =                                                                          \
        {                                                                               \
            .type = 2,                                                                  \
            .key = base_midi_key,                                                       \
            .pan = (_pan)?(0x80|_pan):0,                                                \
            .duty_cycle = (_duty_cycle & 3),                                            \
            .attack = (_attack & 7),                                                    \
            .decay = (_decay & 7),                                                      \
            .sustain = (_sustain & 15),                                                 \
            .release = (_release & 7)                                                   \
        }                                                                               \
    }

#define VOICE_SQUARE_2_ALT(base_midi_key,_pan,_duty_cycle,_attack,_decay,_sustain,_release) \
    {.square =                                                                              \
        {                                                                                   \
            .type = 10,                                                                     \
            .key = base_midi_key,                                                           \
            .pan = (_pan)?(0x80|_pan):0,                                                    \
            .duty_cycle = (_duty_cycle & 3),                                                \
            .attack = (_attack & 7),                                                        \
            .decay = (_decay & 7),                                                          \
            .sustain = (_sustain & 15),                                                     \
            .release = (_release & 7)                                                       \
        }                                                                                   \
    }


#define VOICE_PROGRAMMABLE_WAVE(base_midi_key,_pan,wave_samples_pointer,_attack,_decay,_sustain,_release)   \
    {.programmable =                                                                                        \
        {                                                                                                   \
            .type = 3,                                                                                      \
            .key = base_midi_key,                                                                           \
            .pan = (_pan)?(0x80|_pan):0,                                                                    \
            .wav = (struct WaveData*)&wave_samples_pointer,                                                 \
            .attack = (_attack & 7),                                                                        \
            .decay = (_decay & 7),                                                                          \
            .sustain = (_sustain & 15),                                                                     \
            .release = (_release & 7)                                                                       \
        }                                                                                                   \
    }

#define VOICE_PROGRAMMABLE_WAVE_ALT(base_midi_key,_pan,wave_samples_pointer,_attack,_decay,_sustain,_release)\
    {.programmable =                                                                                         \
        {                                                                                                    \
            .type = 11,                                                                                      \
            .key = base_midi_key,                                                                            \
            .pan = (_pan)?(0x80|_pan):0,                                                                     \
            .wav = (struct WaveData*)&wave_samples_pointer,                                                  \
            .attack = (_attack & 7),                                                                         \
            .decay = (_decay & 7),                                                                           \
            .sustain = (_sustain & 15),                                                                      \
            .release = (_release & 7)                                                                        \
        }                                                                                                    \
    }



#define VOICE_NOISE(base_midi_key,_pan,_period,_attack,_decay,_sustain,_release)    \
    {.noise =                                                                       \
        {                                                                           \
            .type = 4,                                                              \
            .key = base_midi_key,                                                   \
            .pan = (_pan)?(0x80|_pan):0,                                            \
            .period = (_period & 1),                                                \
            .attack = (_attack & 7),                                                \
            .decay = (_decay & 7),                                                  \
            .sustain = (_sustain & 15),                                             \
            .release = (_release & 7)                                               \
        }                                                                           \
    }

#define VOICE_NOISE_ALT(base_midi_key,_pan,_period,_attack,_decay,_sustain,_release)\
    {.noise =                                                                       \
        {                                                                           \
            .type = 12,                                                             \
            .key = base_midi_key,                                                   \
            .pan = (_pan)?(0x80|_pan):0,                                            \
            .period = (_period & 1),                                                \
            .attack = (_attack & 7),                                                \
            .decay = (_decay & 7),                                                  \
            .sustain = (_sustain & 15),                                             \
            .release = (_release & 7)                                               \
        }                                                                           \
    }


#define VOICE_KEYSPLIT(voice_group_pointer, keysplit_table_pointer) \
    {.keySplit =                                                    \
        {                                                           \
            .type = 64,                                             \
            .voiceGroup = voice_group_pointer,                      \
            .keysplit_table_ptr = keysplit_table_pointer            \
        }                                                           \
    }

#define VOICE_KEYSPLIT_ALL(voice_group_pointer) \
    {.keySplit =                                \
        {                                       \
            .type = 128,                        \
            .voiceGroup = voice_group_pointer,  \
        }                                       \
    }


#define CRY(sample)                         \
    {                                       \
        .type = 32,                         \
        .key = NOTE_C4,                     \
        .wav = (struct WaveData*)&sample,   \
        .attack = 255,                      \
        .decay = 0,                         \
        .sustain = 255,                     \
        .release = 0                        \
    }

#define CRY_REVERSE(sample)                 \
    {                                       \
        .type = 48,                         \
        .key = NOTE_C4,                     \
        .wav = (struct WaveData*)&sample,   \
        .attack = 255,                      \
        .decay = 0,                         \
        .sustain = 255,                     \
        .release = 0                        \
    }

#define DEFAULT_VOICE   VOICE_SQUARE_1(NOTE_C4, 0, 0, 2, 0, 0, 15, 0)

//need arm-none-eabi-gcc to work:
//Voicegroups should be populated with a default voice when no voice is defined for a note/instrument.
#define VOICEGROUP_FILLER(start,end) [start ... end] = DEFAULT_VOICE


extern const u8 KeySplitTable1[];
extern const u8 KeySplitTable2[];
extern const u8 KeySplitTable3[];
extern const u8 KeySplitTable4[];
extern const u8 KeySplitTable5[];

extern const union VoiceGroup voicegroup000[];
extern const union VoiceGroup voicegroup001[];
extern const union VoiceGroup voicegroup002[];
extern const union VoiceGroup voicegroup_piano1[];
extern const union VoiceGroup voicegroup_string_ensemble[];
extern const union VoiceGroup voicegroup_trumpet[];
extern const union VoiceGroup voicegroup_tuba[];
extern const union VoiceGroup voicegroup_french_horn[];
extern const union VoiceGroup voicegroup008[];
extern const union VoiceGroup voicegroup009[];
extern const union VoiceGroup voicegroup010[];
extern const union VoiceGroup voicegroup011[];
extern const union VoiceGroup voicegroup012[];
extern const union VoiceGroup voicegroup127[];
extern const union VoiceGroup voicegroup128[];
extern const union VoiceGroup voicegroup129[];
extern const union VoiceGroup voicegroup130[];
extern const union VoiceGroup voicegroup131[];
extern const union VoiceGroup voicegroup132[];
extern const union VoiceGroup voicegroup133[];
extern const union VoiceGroup voicegroup134[];
extern const union VoiceGroup voicegroup135[];
extern const union VoiceGroup voicegroup136[];
extern const union VoiceGroup voicegroup137[];
extern const union VoiceGroup voicegroup138[];
extern const union VoiceGroup voicegroup139[];
extern const union VoiceGroup voicegroup140[];
extern const union VoiceGroup voicegroup141[];
extern const union VoiceGroup voicegroup142[];
extern const union VoiceGroup voicegroup143[];
extern const union VoiceGroup voicegroup144[];
extern const union VoiceGroup voicegroup145[];
extern const union VoiceGroup voicegroup146[];
extern const union VoiceGroup voicegroup147[];
extern const union VoiceGroup voicegroup148[];
extern const union VoiceGroup voicegroup149[];
extern const union VoiceGroup voicegroup150[];
extern const union VoiceGroup voicegroup151[];
extern const union VoiceGroup voicegroup152[];
extern const union VoiceGroup voicegroup153[];
extern const union VoiceGroup voicegroup154[];
extern const union VoiceGroup voicegroup155[];
extern const union VoiceGroup voicegroup156[];
extern const union VoiceGroup voicegroup157[];
extern const union VoiceGroup voicegroup158[];
extern const union VoiceGroup voicegroup159[];
extern const union VoiceGroup voicegroup160[];
extern const union VoiceGroup voicegroup161[];
extern const union VoiceGroup voicegroup162[];
extern const union VoiceGroup voicegroup163[];
extern const union VoiceGroup voicegroup164[];
extern const union VoiceGroup voicegroup165[];
extern const union VoiceGroup voicegroup166[];
extern const union VoiceGroup voicegroup167[];
extern const union VoiceGroup voicegroup168[];
extern const union VoiceGroup voicegroup169[];
extern const union VoiceGroup voicegroup170[];
extern const union VoiceGroup voicegroup171[];
extern const union VoiceGroup voicegroup172[];
extern const union VoiceGroup voicegroup173[];
extern const union VoiceGroup voicegroup174[];
extern const union VoiceGroup voicegroup175[];
extern const union VoiceGroup voicegroup176[];
extern const union VoiceGroup voicegroup177[];
extern const union VoiceGroup voicegroup178[];
extern const union VoiceGroup voicegroup179[];
extern const union VoiceGroup voicegroup180[];
extern const union VoiceGroup voicegroup181[];
extern const union VoiceGroup voicegroup182[];
extern const union VoiceGroup voicegroup183[];
extern const union VoiceGroup voicegroup184[];
extern const union VoiceGroup voicegroup185[];
extern const union VoiceGroup voicegroup186[];
extern const union VoiceGroup voicegroup187[];
extern const union VoiceGroup voicegroup188[];
extern const union VoiceGroup voicegroup189[];
extern const union VoiceGroup voicegroup190[];


#endif // GUARD_VOICE_GROUPS_H
