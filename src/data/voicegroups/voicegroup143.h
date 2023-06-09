
const union VoiceGroup voicegroup143[] =
{
    VOICEGROUP_FILLER(DRUMKIT_STANDARD,GUNSHOT),

    [DRUMKIT_STANDARD]      = VOICE_KEYSPLIT_ALL(VOICE_DRUMKIT_002),
    [BRIGHT_ACOUSTIC_PIANO] = VOICE_KEYSPLIT(voicegroup_piano1, KEYSPLITTABLE_PIANO1_PTR),
    [PERCUSIVE_ORGAN]       = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_organ2, 128, 160, 123, 165),
    [ACOUSTIC_GUITAR_NYLON] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 255, 249, 25, 0),
    [STRING_ENSEMBLE_1]     = VOICE_KEYSPLIT(voicegroup_string_ensemble, KEYSPLITTABLE_STRING_ENSEMBLE_PTR),
    [LEAD_1_SQUARE]         = VOICE_SQUARE_2_ALT(60, 0, 3, 0, 2, 3, 2),
    [LEAD_2_SAWTOOTH]       = VOICE_SQUARE_1_ALT(60, 0, 0, 2, 0, 2, 3, 1),
    [LEAD_4_CHIFF]          = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_5, 0, 7, 15, 0),
    [APPLAUSE]              = VOICE_NOISE_ALT(60, 0, 0, 0, 1, 9, 0),
    [GUNSHOT]               = VOICE_NOISE_ALT(60, 0, 0, 0, 1, 6, 1)
};

