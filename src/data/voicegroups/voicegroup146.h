
const union VoiceGroup voicegroup146[] =
{
    VOICEGROUP_FILLER(DRUMKIT_STANDARD,GUNSHOT),

    [DRUMKIT_STANDARD]      = VOICE_KEYSPLIT_ALL(VOICE_DRUMKIT_002),
    [BRIGHT_ACOUSTIC_PIANO] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_steinway_b_piano, 255, 165, 103, 235),
    [XYLOPHONE]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_xylophone, 255, 235, 0, 204),
    [ACOUSTIC_GUITAR_NYLON] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 85, 249, 25, 226),
    [STRING_ENSEMBLE_1]     = VOICE_KEYSPLIT(voicegroup_string_ensemble, KEYSPLITTABLE_STRING_ENSEMBLE_PTR),
    [WHISTLE]               = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_whistle, 43, 76, 103, 216),
    [LEAD_1_SQUARE]         = VOICE_SQUARE_2_ALT(60, 0, 2, 0, 2, 4, 4),
    [LEAD_2_SAWTOOTH]       = VOICE_SQUARE_1_ALT(60, 0, 0, 2, 0, 0, 15, 0),
    [LEAD_4_CHIFF]          = VOICE_SQUARE_2_ALT(60, 0, 2, 0, 0, 15, 0),
    [PAD_5_BOWED]           = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_1, 0, 7, 15, 0),
    [APPLAUSE]              = VOICE_NOISE_ALT(60, 0, 0, 0, 1, 9, 0),
    [GUNSHOT]               = VOICE_NOISE_ALT(60, 0, 0, 0, 1, 6, 2)
};

