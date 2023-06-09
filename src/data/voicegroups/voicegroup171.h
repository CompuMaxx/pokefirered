
const union VoiceGroup voicegroup171[] =
{
    VOICEGROUP_FILLER(DRUMKIT_STANDARD,PAD_3_POLYSYNTH),

    [DRUMKIT_STANDARD]      = VOICE_KEYSPLIT_ALL(VOICE_DRUMKIT_001),
    [PIZZICATO_STRINGS]     = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_pizzicato_strings, 255, 216, 0, 165),
    [TIMPANI]               = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_timpani, 255, 246, 0, 226),
    [STRING_ENSEMBLE_1]     = VOICE_KEYSPLIT(voicegroup_string_ensemble, KEYSPLITTABLE_STRING_ENSEMBLE_PTR),
    [TRUMPET]               = VOICE_KEYSPLIT(voicegroup_trumpet, KEYSPLITTABLE_TRUMPET_PTR),
    [FRENCH_HORN]           = VOICE_KEYSPLIT(voicegroup_french_horn, KEYSPLITTABLE_FRENCH_HORN_PTR),
    [FLUTE]                 = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_flute, 255, 127, 231, 127),
    [LEAD_1_SQUARE]         = VOICE_SQUARE_2_ALT(60, 0, 2, 0, 1, 7, 0),
    [LEAD_2_SAWTOOTH]       = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_6, 0, 7, 15, 1),
    [LEAD_3_CALLIOPE]       = VOICE_SQUARE_1_ALT(60, 0, 0, 2, 0, 1, 7, 0),
    [LEAD_4_CHIFF]          = VOICE_SQUARE_2_ALT(60, 0, 2, 0, 2, 0, 0),
    [LEAD_5_CHARANG]        = VOICE_SQUARE_2_ALT(60, 0, 3, 0, 1, 7, 0),
    [LEAD_6_VOICE]          = VOICE_SQUARE_1_ALT(60, 0, 0, 3, 0, 1, 7, 0),
    [LEAD_7_FIFTHS]         = VOICE_SQUARE_1_ALT(60, 0, 0, 2, 0, 2, 0, 0),
    [LEAD_8_BASS_LEAD]      = VOICE_SQUARE_1_ALT(60, 0, 0, 3, 0, 0, 7, 0),
    [PAD_2_WARM]            = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_6, 0, 7, 15, 0),
    [PAD_3_POLYSYNTH]       = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_7, 0, 7, 15, 1)
};

