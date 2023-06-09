
const union VoiceGroup voicegroup154[] =
{
    VOICEGROUP_FILLER(DRUMKIT_STANDARD,PAD_5_BOWED),

    [DRUMKIT_STANDARD]  = VOICE_KEYSPLIT_ALL(VOICE_DRUMKIT_002),
    [ELECTRIC_PIANO_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_detuned_ep1_low, 255, 249, 0, 165),
    [TUBULAR_BELLS]     = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_tubular_bell, 255, 165, 97, 236),
    [TIMPANI]           = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_timpani, 255, 127, 154, 235),
    [STRING_ENSEMBLE_1] = VOICE_KEYSPLIT(voicegroup_string_ensemble, KEYSPLITTABLE_STRING_ENSEMBLE_PTR),
    [TRUMPET]           = VOICE_KEYSPLIT(voicegroup_trumpet, KEYSPLITTABLE_TRUMPET_PTR),
    [TUBA]              = VOICE_KEYSPLIT(voicegroup_tuba, KEYSPLITTABLE_TUBA_PTR),
    [FRENCH_HORN]       = VOICE_KEYSPLIT(voicegroup_french_horn, KEYSPLITTABLE_FRENCH_HORN_PTR),
    [LEAD_1_SQUARE]     = VOICE_SQUARE_1_ALT(60, 0, 0, 1, 0, 0, 10, 0),
    [LEAD_2_SAWTOOTH]   = VOICE_SQUARE_2_ALT(60, 0, 1, 0, 0, 10, 0),
    [LEAD_8_BASS_LEAD]  = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_4, 0, 0, 12, 0),
    [PAD_5_BOWED]       = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_6, 0, 0, 12, 0)
};

