
const union VoiceGroup voicegroup159[] =
{
    VOICEGROUP_FILLER(ACOUSTIC_GRAND_PIANO,GUNSHOT),

    [ELECTRIC_PIANO_1]      = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_detuned_ep1_low, 64, 249, 0, 188),
    [ELECTRIC_PIANO_2]      = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_detuned_ep1_high, 51, 249, 0, 165),
    [ACOUSTIC_GUITAR_NYLON] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 85, 249, 25, 127),
    [STRING_ENSEMBLE_1]     = VOICE_KEYSPLIT(voicegroup_string_ensemble, KEYSPLITTABLE_STRING_ENSEMBLE_PTR),
    [LEAD_1_SQUARE]         = VOICE_SQUARE_1_ALT(60, 0, 0, 2, 0, 7, 0, 6),
    [LEAD_2_SAWTOOTH]       = VOICE_SQUARE_2_ALT(60, 0, 1, 1, 5, 1, 6),
    [LEAD_3_CALLIOPE]       = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_2, 1, 7, 0, 6),
    [LEAD_4_CHIFF]          = VOICE_SQUARE_1_ALT(60, 0, 0, 0, 1, 4, 3, 6),
    [APPLAUSE]              = VOICE_NOISE_ALT(60, 0, 0, 0, 2, 4, 0),
    [GUNSHOT]               = VOICE_NOISE_ALT(60, 0, 0, 0, 1, 0, 0)
};

