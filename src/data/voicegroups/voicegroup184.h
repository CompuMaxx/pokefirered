
const union VoiceGroup voicegroup184[] =
{
    VOICEGROUP_FILLER(ACOUSTIC_GRAND_PIANO,LEAD_6_VOICE),

    [HONKY_TONK_PIANO]  = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_5, 0, 7, 15, 0),
    [TUBULAR_BELLS]     = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_tubular_bell, 255, 165, 90, 216),
    [GUITAR_HARMONICS]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_special_scream_drive, 255, 0, 255, 165),
    [SYNTH_BASS_1]      = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_synth_bass, 255, 252, 0, 115),
    [LEAD_1_SQUARE]     = VOICE_SQUARE_2_ALT(60, 0, 3, 0, 0, 15, 0),
    [LEAD_2_SAWTOOTH]   = VOICE_SQUARE_1_ALT(60, 0, 0, 2, 0, 0, 15, 0),
    [LEAD_6_VOICE]      = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_classical_choir_voice_ahhs, 255, 0, 255, 0)
};

