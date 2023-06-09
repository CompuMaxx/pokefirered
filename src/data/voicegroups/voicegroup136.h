
const union VoiceGroup voicegroup136[] =
{
    VOICEGROUP_FILLER(DRUMKIT_STANDARD,GUNSHOT),

    [DRUMKIT_STANDARD]      = VOICE_KEYSPLIT_ALL(VOICE_DRUMKIT_002),
    [BRIGHT_ACOUSTIC_PIANO] = VOICE_KEYSPLIT(voicegroup_piano1, KEYSPLITTABLE_PIANO1_PTR),
    [OVERDRIVEN_GUITAR]     = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_overdrive_guitar, 255, 0, 255, 127),
    [DISTORTION_GUITAR]     = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_high, 255, 0, 255, 127),
    [SYNTH_BASS_1]          = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_synth_bass, 255, 252, 0, 115),
    [STRING_ENSEMBLE_1]     = VOICE_KEYSPLIT(voicegroup_string_ensemble, KEYSPLITTABLE_STRING_ENSEMBLE_PTR),
    [SYNTH_BRASS_1]         = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_low, 255, 0, 255, 127),
    [LEAD_1_SQUARE]         = VOICE_SQUARE_2_ALT(60, 0, 0, 0, 5, 0, 0),
    [LEAD_2_SAWTOOTH]       = VOICE_SQUARE_1_ALT(60, 0, 0, 0, 0, 5, 0, 0),
    [LEAD_3_CALLIOPE]       = VOICE_SQUARE_1_ALT(60, 0, 0, 2, 2, 4, 10, 0),
    [LEAD_4_CHIFF]          = VOICE_SQUARE_2_ALT(60, 0, 0, 0, 5, 0, 0),
    [LEAD_5_CHARANG]        = VOICE_SQUARE_1_ALT(60, 0, 0, 1, 0, 5, 0, 0),
    [LEAD_6_VOICE]          = VOICE_SQUARE_2_ALT(60, 0, 3, 2, 4, 10, 0),
    [LEAD_7_FIFTHS]         = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_5, 1, 5, 0, 3),
    [LEAD_8_BASS_LEAD]      = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_6, 1, 5, 0, 3),
    [PAD_1_NEW_AGE]         = VOICE_SQUARE_2_ALT(60, 0, 1, 0, 1, 10, 2),
    [PAD_2_WARM]            = VOICE_SQUARE_1_ALT(60, 0, 0, 1, 0, 1, 10, 0),
    [HELICOPTER]            = VOICE_NOISE_ALT(60, 0, 0, 0, 0, 15, 0),
    [APPLAUSE]              = VOICE_NOISE_ALT(60, 0, 0, 0, 2, 4, 0),
    [GUNSHOT]               = VOICE_NOISE_ALT(60, 0, 0, 0, 1, 0, 0)
};

