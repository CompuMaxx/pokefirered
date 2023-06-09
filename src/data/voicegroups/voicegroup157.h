
const union VoiceGroup voicegroup157[] =
{
    VOICEGROUP_FILLER(DRUMKIT_STANDARD,GUNSHOT),

    [DRUMKIT_STANDARD]      = VOICE_KEYSPLIT_ALL(VOICE_DRUMKIT_002),
    [BRIGHT_ACOUSTIC_PIANO] = VOICE_KEYSPLIT(voicegroup_piano1, KEYSPLITTABLE_PIANO1_PTR),
    [ELECTRIC_PIANO_1]      = VOICE_SQUARE_2_ALT(60, 0, 3, 0, 2, 6, 5),
    [PERCUSIVE_ORGAN]       = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_organ2, 128, 146, 190, 115),
    [ACCORDION]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_accordion, 255, 0, 255, 165),
    [ACOUSTIC_GUITAR_NYLON] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 255, 165, 128, 204),
    [OVERDRIVEN_GUITAR]     = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_overdrive_guitar, 255, 0, 255, 127),
    [DISTORTION_GUITAR]     = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_high, 255, 0, 255, 127),
    [ELECTRIC_BASS_FINGER]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_fingered_bass, 255, 253, 0, 149),
    [SLAP_BASS_1]           = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_unused_sc88pro_unison_slap, 255, 165, 180, 216),
    [SYNTH_BASS_1]          = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_synth_bass, 255, 252, 0, 115),
    [STRING_ENSEMBLE_1]     = VOICE_KEYSPLIT(voicegroup_string_ensemble, KEYSPLITTABLE_STRING_ENSEMBLE_PTR),
    [TRUMPET]               = VOICE_KEYSPLIT(voicegroup_trumpet, KEYSPLITTABLE_TRUMPET_PTR),
    [FRENCH_HORN]           = VOICE_KEYSPLIT(voicegroup_french_horn, KEYSPLITTABLE_FRENCH_HORN_PTR),
    [SYNTH_BRASS_1]         = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_low, 255, 0, 255, 127),
    [LEAD_1_SQUARE]         = VOICE_SQUARE_1_ALT(60, 0, 0, 1, 0, 2, 7, 2),
    [LEAD_2_SAWTOOTH]       = VOICE_SQUARE_2_ALT(60, 0, 3, 0, 3, 3, 0),
    [LEAD_3_CALLIOPE]       = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_7, 0, 3, 6, 5),
    [LEAD_4_CHIFF]          = VOICE_SQUARE_1_ALT(60, 0, 0, 0, 0, 2, 7, 2),
    [LEAD_5_CHARANG]        = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_1, 0, 7, 15, 0),
    [LEAD_8_BASS_LEAD]      = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_6, 0, 7, 15, 0),
    [PAD_5_BOWED]           = VOICE_SQUARE_2_ALT(60, 0, 2, 0, 2, 6, 3),
    [APPLAUSE]              = VOICE_NOISE_ALT(60, 0, 0, 0, 2, 6, 0),
    [GUNSHOT]               = VOICE_NOISE_ALT(60, 0, 0, 0, 1, 6, 1)
};

