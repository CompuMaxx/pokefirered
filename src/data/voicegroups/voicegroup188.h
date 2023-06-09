
const union VoiceGroup voicegroup188[] =
{
    VOICEGROUP_FILLER(DRUMKIT_STANDARD,GUNSHOT),

    [DRUMKIT_STANDARD]      = VOICE_KEYSPLIT_ALL(VOICE_DRUMKIT_002),
    [BRIGHT_ACOUSTIC_PIANO] = VOICE_KEYSPLIT(voicegroup_piano1, KEYSPLITTABLE_PIANO1_PTR),
    [ELECTRIC_PIANO_1]      = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_detuned_ep1_low, 255, 188, 128, 226),
    [ELECTRIC_PIANO_2]      = VOICE_DIRECTSOUND(60, 65, DirectSoundWaveData_sd90_classical_detuned_ep1_high, 128, 204, 77, 246),
    [TUBULAR_BELLS]         = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_tubular_bell, 255, 165, 90, 216),
    [PERCUSIVE_ORGAN]       = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_organ2, 51, 0, 203, 127),
    [ACOUSTIC_GUITAR_NYLON] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 128, 249, 25, 127),
    [ACOUSTIC_GUITAR_STEEL] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 64, 216, 51, 224),
    [FRETLESS_BASS]         = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 253, 0, 188),
    [STRING_ENSEMBLE_1]     = VOICE_KEYSPLIT(voicegroup_string_ensemble, KEYSPLITTABLE_STRING_ENSEMBLE_PTR),
    [FLUTE]                 = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_flute, 255, 127, 231, 127),
    [LEAD_1_SQUARE]         = VOICE_SQUARE_1_ALT(60, 0, 0, 1, 0, 2, 6, 1),
    [LEAD_2_SAWTOOTH]       = VOICE_SQUARE_2_ALT(60, 0, 3, 0, 3, 3, 2),
    [PAD_5_BOWED]           = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_1, 0, 7, 15, 2),
    [APPLAUSE]              = VOICE_NOISE_ALT(60, 0, 0, 0, 2, 7, 0),
    [GUNSHOT]               = VOICE_NOISE_ALT(60, 0, 0, 0, 1, 9, 1)
};

