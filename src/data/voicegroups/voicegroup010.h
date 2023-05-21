
const union VoiceGroup voicegroup010[] =
{
    VOICEGROUP_FILLER(DRUMKIT_STANDARD,PAD_3_POLYSYNTH),

    [DRUMKIT_STANDARD]      = VOICE_KEYSPLIT_ALL(VOICE_DRUMKIT_001),
    [BRIGHT_ACOUSTIC_PIANO] = VOICE_KEYSPLIT(voicegroup_piano1, KEYSPLITTABLE_PIANO1_PTR),
    [ELECTRIC_PIANO_1]      = VOICE_SQUARE_2(60, 0, 2, 0, 2, 6, 1),
    [ELECTRIC_PIANO_2]      = VOICE_SQUARE_1(60, 0, 0, 2, 0, 2, 6, 1),
    [HARPSICHORD]           = VOICE_SQUARE_2(60, 0, 3, 0, 2, 4, 1),
    [CLAVINET]              = VOICE_SQUARE_1(60, 0, 0, 3, 0, 2, 4, 1),
    [ELECTRIC_BASS_FINGER]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_fingered_bass, 255, 253, 0, 149),
    [PIZZICATO_STRINGS]     = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_pizzicato_strings, 255, 216, 0, 165),
    [TIMPANI]               = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_timpani, 255, 246, 0, 226),
    [STRING_ENSEMBLE_1]     = VOICE_KEYSPLIT(voicegroup_string_ensemble, KEYSPLITTABLE_STRING_ENSEMBLE_PTR),
    [TRUMPET]               = VOICE_KEYSPLIT(voicegroup_trumpet, KEYSPLITTABLE_TRUMPET_PTR),
    [FRENCH_HORN]           = VOICE_KEYSPLIT(voicegroup_french_horn, KEYSPLITTABLE_FRENCH_HORN_PTR),
    [LEAD_1_SQUARE]         = VOICE_SQUARE_2(60, 0, 2, 0, 1, 7, 1),
    [LEAD_2_SAWTOOTH]       = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_3, 0, 7, 15, 2),
    [LEAD_3_CALLIOPE]       = VOICE_SQUARE_1(60, 0, 0, 2, 0, 1, 7, 1),
    [LEAD_4_CHIFF]          = VOICE_SQUARE_1(60, 0, 0, 2, 0, 0, 7, 1),
    [LEAD_5_CHARANG]        = VOICE_SQUARE_2(60, 0, 3, 0, 1, 7, 1),
    [LEAD_6_VOICE]          = VOICE_SQUARE_1(60, 0, 0, 3, 0, 1, 7, 1),
    [LEAD_7_FIFTHS]         = VOICE_SQUARE_1(60, 0, 0, 3, 0, 0, 7, 1),
    [PAD_3_POLYSYNTH]       = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_7, 0, 7, 15, 2)
};

