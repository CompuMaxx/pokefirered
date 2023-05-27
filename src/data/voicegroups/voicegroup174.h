
const union VoiceGroup voicegroup174[] =
{
    VOICEGROUP_FILLER(DRUMKIT_STANDARD,GUNSHOT),

    [DRUMKIT_STANDARD]      = VOICE_KEYSPLIT_ALL(VOICE_DRUMKIT_002),
    [BRIGHT_ACOUSTIC_PIANO] = VOICE_KEYSPLIT(voicegroup_piano1, KEYSPLITTABLE_PIANO1_PTR),
    [ELECTRIC_PIANO_2]      = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_detuned_ep1_low, 255, 249, 0, 165),
    [PERCUSIVE_ORGAN]       = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_organ2, 255, 0, 255, 127),
    [ACCORDION]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_accordion, 255, 0, 255, 165),
    [OVERDRIVEN_GUITAR]     = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_overdrive_guitar, 128, 0, 255, 214),
    [DISTORTION_GUITAR]     = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_high, 128, 0, 255, 206),
    [SYNTH_BASS_1]          = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_synth_bass, 255, 252, 0, 165),
    [STRING_ENSEMBLE_1]     = VOICE_KEYSPLIT(voicegroup_string_ensemble, KEYSPLITTABLE_STRING_ENSEMBLE_PTR),
    [TRUMPET]               = VOICE_KEYSPLIT(voicegroup_trumpet, KEYSPLITTABLE_TRUMPET_PTR),
    [FRENCH_HORN]           = VOICE_KEYSPLIT(voicegroup_french_horn, KEYSPLITTABLE_FRENCH_HORN_PTR),
    [SYNTH_BRASS_1]         = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_distortion_guitar_low, 255, 0, 255, 209),
    [LEAD_1_SQUARE]         = VOICE_SQUARE_1_ALT(60, 0, 0, 3, 0, 2, 3, 4),
    [LEAD_2_SAWTOOTH]       = VOICE_SQUARE_2_ALT(60, 0, 3, 0, 2, 3, 4),
    [LEAD_3_CALLIOPE]       = VOICE_SQUARE_1_ALT(60, 0, 0, 3, 0, 2, 3, 4),
    [PAD_5_BOWED]           = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_2, 0, 7, 15, 0),
    [GUITAR_FRET_NOISE]     = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_special_scream_drive, 255, 0, 255, 165),
    [APPLAUSE]              = VOICE_NOISE_ALT(60, 0, 0, 0, 2, 6, 0),
    [GUNSHOT]               = VOICE_NOISE_ALT(60, 0, 0, 0, 1, 3, 1),
};

// why ? maybe an unused voicegroup
static const union VoiceGroup unused_voicegroup_174[] =
{
    VOICEGROUP_FILLER(DRUMKIT_STANDARD,ELECTRIC_GUITAR_MUTED),

    [DRUMKIT_STANDARD]      = VOICE_KEYSPLIT_ALL(VOICE_DRUMKIT_177),
    [BRIGHT_ACOUSTIC_PIANO] = VOICE_SQUARE_1_ALT(60, 0, 0, 2, 0, 2, 9, 1),
    [ELECTRIC_GRAND_PIANO]  = VOICE_SQUARE_2_ALT(60, 0, 2, 0, 2, 9, 1),
    [HONKY_TONK_PIANO]      = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_5, 0, 7, 15, 0),
    [ACOUSTIC_GUITAR_NYLON] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 255, 165, 154, 127),
    [DRUMKIT_TR_808]        = VOICE_KEYSPLIT_ALL(VOICE_DRUMKIT_002),
    [ELECTRIC_GUITAR_JAZZ]  = VOICE_SQUARE_1_ALT(60, 0, 0, 2, 0, 2, 3, 1),
    [ELECTRIC_GUITAR_CLEAN] = VOICE_SQUARE_2_ALT(60, 0, 2, 0, 2, 3, 1),
    [ELECTRIC_GUITAR_MUTED] = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_5, 0, 7, 15, 0)
};

