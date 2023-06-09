
const union VoiceGroup voicegroup145[] =
{
    VOICEGROUP_FILLER(DRUMKIT_STANDARD,GUNSHOT),

    [DRUMKIT_STANDARD]      = VOICE_KEYSPLIT_ALL(VOICE_DRUMKIT_002),
    [BRIGHT_ACOUSTIC_PIANO] = VOICE_KEYSPLIT(voicegroup_piano1, KEYSPLITTABLE_PIANO1_PTR),
    [ELECTRIC_PIANO_1]      = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_detuned_ep1_low, 255, 188, 128, 226),
    [ELECTRIC_PIANO_2]      = VOICE_DIRECTSOUND(60, 65, DirectSoundWaveData_sd90_classical_detuned_ep1_high, 255, 204, 77, 246),
    [PERCUSIVE_ORGAN]       = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_organ2, 255, 76, 133, 137),
    [ACCORDION]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_accordion, 64, 188, 108, 165),
    [ACOUSTIC_GUITAR_NYLON] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_nylon_str_guitar, 255, 249, 25, 127),
    [ORCHESTRAL_HARP]       = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_harp, 255, 246, 0, 235),
    [STRING_ENSEMBLE_1]     = VOICE_KEYSPLIT(voicegroup_string_ensemble, KEYSPLITTABLE_STRING_ENSEMBLE_PTR),
    [TRUMPET]               = VOICE_KEYSPLIT(voicegroup_trumpet, KEYSPLITTABLE_TRUMPET_PTR),
    [FLUTE]                 = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_flute, 255, 127, 231, 127),
    [LEAD_1_SQUARE]         = VOICE_SQUARE_1_ALT(60, 0, 0, 0, 0, 2, 5, 2),
    [LEAD_2_SAWTOOTH]       = VOICE_SQUARE_2_ALT(60, 0, 3, 0, 0, 9, 0),
    [LEAD_3_CALLIOPE]       = VOICE_SQUARE_2_ALT(60, 0, 0, 0, 2, 6, 5),
    [PAD_5_BOWED]           = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_1, 0, 0, 12, 0),
    [APPLAUSE]              = VOICE_NOISE_ALT(60, 0, 0, 0, 2, 6, 0),
    [GUNSHOT]               = VOICE_NOISE_ALT(60, 0, 0, 0, 1, 6, 0)
};

