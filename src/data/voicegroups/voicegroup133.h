
const union VoiceGroup voicegroup133[] =
{
    VOICEGROUP_FILLER(DRUMKIT_STANDARD,GUNSHOT),

    [DRUMKIT_STANDARD]      = VOICE_KEYSPLIT_ALL(VOICE_DRUMKIT_002),
    [BRIGHT_ACOUSTIC_PIANO] = VOICE_KEYSPLIT(voicegroup_piano1, KEYSPLITTABLE_PIANO1_PTR),
    [MUSIC_BOX]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_ethnic_flavours_atarigane, 255, 0, 255, 0),
    [TUBULAR_BELLS]         = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_tubular_bell, 255, 165, 90, 216),
    [PERCUSIVE_ORGAN]       = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_organ2, 128, 146, 108, 137),
    [ACOUSTIC_GUITAR_NYLON] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 128, 204, 103, 226),
    [OVERDRIVEN_GUITAR]     = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_overdrive_guitar, 255, 0, 255, 127),
    [DISTORTION_GUITAR]     = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_high, 255, 0, 255, 127),
    [SYNTH_BASS_1]          = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_synth_bass, 255, 252, 0, 115),
    [SYNTH_BASS_2]          = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_square_wave, 255, 0, 255, 127),
    [TIMPANI]               = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_timpani, 255, 0, 193, 153),
    [STRING_ENSEMBLE_1]     = VOICE_KEYSPLIT(voicegroup_string_ensemble, KEYSPLITTABLE_STRING_ENSEMBLE_PTR),
    [TRUMPET]               = VOICE_KEYSPLIT(voicegroup_trumpet, KEYSPLITTABLE_TRUMPET_PTR),
    [FRENCH_HORN]           = VOICE_KEYSPLIT(voicegroup_french_horn, KEYSPLITTABLE_FRENCH_HORN_PTR),
    [SYNTH_BRASS_1]         = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_low, 255, 0, 255, 127),
    [WHISTLE]               = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_whistle, 255, 0, 255, 127),
    [LEAD_1_SQUARE]         = VOICE_SQUARE_1_ALT(60, 0, 0, 1, 0, 1, 9, 0),
    [LEAD_2_SAWTOOTH]       = VOICE_SQUARE_2_ALT(60, 0, 3, 0, 2, 9, 1),
    [LEAD_4_CHIFF]          = VOICE_SQUARE_2_ALT(60, 0, 2, 1, 0, 9, 1),
    [LEAD_8_BASS_LEAD]      = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_5, 0, 7, 15, 0),
    [PAD_5_BOWED]           = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_1, 0, 0, 15, 0),
    [GUITAR_FRET_NOISE]     = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_special_scream_drive, 255, 0, 255, 165),
    [APPLAUSE]              = VOICE_NOISE_ALT(60, 0, 0, 0, 2, 6, 0),
    [GUNSHOT]               = VOICE_NOISE_ALT(60, 0, 0, 0, 1, 8, 1)
};

