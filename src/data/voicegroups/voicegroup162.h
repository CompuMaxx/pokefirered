
const union VoiceGroup voicegroup162[] =
{
    VOICEGROUP_FILLER(DRUMKIT_STANDARD,PAD_5_BOWED),

    [DRUMKIT_STANDARD]      = VOICE_KEYSPLIT_ALL(VOICE_DRUMKIT_002),
    [ELECTRIC_PIANO_1]      = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_detuned_ep1_high, 64, 188, 108, 244),
    [TUBULAR_BELLS]         = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_tubular_bell, 255, 165, 90, 216),
    [PERCUSIVE_ORGAN]       = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_organ2, 64, 195, 92, 235),
    [ACOUSTIC_GUITAR_NYLON] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 128, 249, 25, 127),
    [ELECTRIC_BASS_FINGER]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_fingered_bass, 64, 204, 113, 235),
    [STRING_ENSEMBLE_1]     = VOICE_KEYSPLIT(voicegroup_string_ensemble, KEYSPLITTABLE_STRING_ENSEMBLE_PTR),
    [LEAD_1_SQUARE]         = VOICE_SQUARE_1_ALT(60, 0, 0, 1, 0, 0, 6, 0),
    [LEAD_2_SAWTOOTH]       = VOICE_SQUARE_2_ALT(60, 0, 1, 0, 0, 6, 0),
    [PAD_5_BOWED]           = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_5, 0, 7, 15, 0)
};

