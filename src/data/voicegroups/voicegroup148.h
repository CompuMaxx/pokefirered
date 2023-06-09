
const union VoiceGroup voicegroup148[] =
{
    VOICEGROUP_FILLER(DRUMKIT_STANDARD,GUNSHOT),

    [DRUMKIT_STANDARD]  = VOICE_KEYSPLIT_ALL(VOICE_DRUMKIT_002),
    [XYLOPHONE]         = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_square_wave, 255, 226, 0, 127),
    [TUBULAR_BELLS]     = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_tubular_bell, 255, 165, 90, 216),
    [SYNTH_BASS_2]      = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_square_wave, 255, 0, 255, 127),
    [STRING_ENSEMBLE_1] = VOICE_KEYSPLIT(voicegroup_string_ensemble, KEYSPLITTABLE_STRING_ENSEMBLE_PTR),
    [TUBA]              = VOICE_KEYSPLIT(voicegroup_tuba, KEYSPLITTABLE_TUBA_PTR),
    [LEAD_1_SQUARE]     = VOICE_SQUARE_1_ALT(60, 0, 0, 2, 0, 0, 12, 0),
    [LEAD_2_SAWTOOTH]   = VOICE_SQUARE_2_ALT(60, 0, 2, 0, 0, 12, 0),
    [LEAD_8_BASS_LEAD]  = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_5, 0, 7, 15, 0),
    [APPLAUSE]          = VOICE_NOISE_ALT(60, 0, 0, 0, 3, 5, 2),
    [GUNSHOT]           = VOICE_NOISE_ALT(60, 0, 0, 0, 1, 6, 5)
};

