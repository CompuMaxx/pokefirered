
const union VoiceGroup voicegroup185[] =
{
    VOICEGROUP_FILLER(DRUMKIT_STANDARD,GUNSHOT),

    [DRUMKIT_STANDARD]     = VOICE_KEYSPLIT_ALL(VOICE_DRUMKIT_002),
    [TUBULAR_BELLS]        = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_tubular_bell, 255, 165, 90, 216),
    [OVERDRIVEN_GUITAR]    = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_overdrive_guitar, 128, 0, 255, 214),
    [DISTORTION_GUITAR]    = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_high, 128, 0, 255, 206),
    [GUITAR_HARMONICS]     = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_special_scream_drive, 255, 0, 255, 165),
    [ELECTRIC_BASS_FINGER] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_fingered_bass, 255, 253, 0, 149),
    [FRETLESS_BASS]        = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_fretless_bass, 255, 253, 0, 188),
    [SYNTH_BASS_1]         = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_synth_bass, 255, 252, 0, 115),
    [PIZZICATO_STRINGS]    = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_pizzicato_strings, 255, 216, 0, 165),
    [TIMPANI]              = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_timpani, 255, 246, 0, 226),
    [STRING_ENSEMBLE_1]    = VOICE_KEYSPLIT(voicegroup_string_ensemble, KEYSPLITTABLE_STRING_ENSEMBLE_PTR),
    [VOICE_OOHS]           = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_classical_choir_voice_ahhs, 85, 0, 154, 165),
    [TRUMPET]              = VOICE_KEYSPLIT(voicegroup_trumpet, KEYSPLITTABLE_TRUMPET_PTR),
    [FRENCH_HORN]          = VOICE_KEYSPLIT(voicegroup_french_horn, KEYSPLITTABLE_FRENCH_HORN_PTR),
    [SYNTH_BRASS_1]        = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_low, 255, 0, 255, 209),
    [WHISTLE]              = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_whistle, 255, 0, 255, 127),
    [LEAD_1_SQUARE]        = VOICE_SQUARE_2_ALT(60, 0, 2, 0, 0, 15, 0),
    [LEAD_2_SAWTOOTH]      = VOICE_SQUARE_1_ALT(60, 0, 0, 2, 0, 0, 15, 0),
    [LEAD_5_CHARANG]       = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_11, 0, 7, 15, 0),
    [LEAD_6_VOICE]         = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_10, 0, 7, 15, 0),
    [LEAD_8_BASS_LEAD]     = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_5, 0, 7, 15, 0),
    [APPLAUSE]             = VOICE_NOISE_ALT(60, 0, 0, 0, 2, 6, 0),
    [GUNSHOT]              = VOICE_NOISE_ALT(60, 0, 0, 0, 1, 6, 1)
};

