
const union VoiceGroup voicegroup182[] =
{
    VOICEGROUP_FILLER(DRUMKIT_STANDARD,LEAD_8_BASS_LEAD),

    [DRUMKIT_STANDARD]  = VOICE_KEYSPLIT_ALL(VOICE_DRUMKIT_002),
    [TIMPANI]           = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_timpani, 255, 0, 193, 76),
    [STRING_ENSEMBLE_1] = VOICE_KEYSPLIT(voicegroup_string_ensemble, KEYSPLITTABLE_STRING_ENSEMBLE_PTR),
    [TRUMPET]           = VOICE_KEYSPLIT(voicegroup_trumpet, KEYSPLITTABLE_TRUMPET_PTR),
    [TUBA]              = VOICE_KEYSPLIT(voicegroup_tuba, KEYSPLITTABLE_TUBA_PTR),
    [FRENCH_HORN]       = VOICE_KEYSPLIT(voicegroup_french_horn, KEYSPLITTABLE_FRENCH_HORN_PTR),
    [LEAD_1_SQUARE]     = VOICE_SQUARE_1_ALT(60, 0, 0, 1, 1, 2, 3, 1),
    [LEAD_2_SAWTOOTH]   = VOICE_SQUARE_2_ALT(60, 0, 1, 0, 2, 6, 2),
    [LEAD_5_CHARANG]    = VOICE_SQUARE_1_ALT(60, 0, 0, 0, 0, 2, 3, 1),
    [LEAD_8_BASS_LEAD]  = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_5, 0, 7, 15, 0)
};

