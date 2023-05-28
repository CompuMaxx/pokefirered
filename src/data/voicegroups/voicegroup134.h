
const union VoiceGroup voicegroup134[] =
{
    VOICEGROUP_FILLER(DRUMKIT_STANDARD,PAD_2_WARM),

    [DRUMKIT_STANDARD]  = VOICE_KEYSPLIT_ALL(VOICE_DRUMKIT_001),
    [TIMPANI]           = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_timpani, 255, 246, 0, 226),
    [STRING_ENSEMBLE_1] = VOICE_KEYSPLIT(voicegroup_string_ensemble, KEYSPLITTABLE_STRING_ENSEMBLE_PTR),
    [TRUMPET]           = VOICE_KEYSPLIT(voicegroup_trumpet, KEYSPLITTABLE_TRUMPET_PTR),
    [FRENCH_HORN]       = VOICE_KEYSPLIT(voicegroup_french_horn, KEYSPLITTABLE_FRENCH_HORN_PTR),
    [LEAD_1_SQUARE]     = VOICE_SQUARE_2_ALT(60, 0, 2, 0, 1, 7, 1),
    [LEAD_2_SAWTOOTH]   = VOICE_SQUARE_1_ALT(60, 0, 0, 2, 0, 1, 7, 1),
    [LEAD_5_CHARANG]    = VOICE_SQUARE_2_ALT(60, 0, 3, 0, 1, 7, 1),
    [LEAD_6_VOICE]      = VOICE_SQUARE_1_ALT(60, 0, 0, 3, 0, 1, 7, 1),
    [LEAD_8_BASS_LEAD]  = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_7, 0, 7, 15, 1),
    [PAD_1_NEW_AGE]     = VOICE_SQUARE_1_ALT(60, 0, 0, 2, 0, 0, 7, 1),
    [PAD_2_WARM]        = VOICE_SQUARE_1_ALT(60, 0, 0, 3, 0, 0, 7, 1)
};

