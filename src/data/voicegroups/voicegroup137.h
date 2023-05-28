
const union VoiceGroup voicegroup137[] =
{
    VOICEGROUP_FILLER(DRUMKIT_STANDARD,GUNSHOT),

    [DRUMKIT_STANDARD]  = VOICE_KEYSPLIT_ALL(VOICE_DRUMKIT_002),
    [ELECTRIC_PIANO_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_detuned_ep1_low, 255, 165, 180, 165),
    [ELECTRIC_PIANO_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_detuned_ep1_high, 255, 137, 154, 165),
    [GLOCKENSPIEL]      = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_glockenspiel, 255, 204, 51, 242),
    [TUBULAR_BELLS]     = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_tubular_bell, 255, 165, 90, 216),
    [ORCHESTRAL_HARP]   = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_harp, 255, 242, 0, 242),
    [TIMPANI]           = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_timpani, 255, 0, 193, 153),
    [STRING_ENSEMBLE_1] = VOICE_KEYSPLIT(voicegroup_string_ensemble, KEYSPLITTABLE_STRING_ENSEMBLE_PTR),
    [TRUMPET]           = VOICE_KEYSPLIT(voicegroup_trumpet, KEYSPLITTABLE_TRUMPET_PTR),
    [TUBA]              = VOICE_KEYSPLIT(voicegroup_tuba, KEYSPLITTABLE_TUBA_PTR),
    [FRENCH_HORN]       = VOICE_KEYSPLIT(voicegroup_french_horn, KEYSPLITTABLE_FRENCH_HORN_PTR),
    [LEAD_1_SQUARE]     = VOICE_SQUARE_1_ALT(60, 0, 0, 1, 1, 2, 3, 1),
    [LEAD_2_SAWTOOTH]   = VOICE_SQUARE_2_ALT(60, 0, 1, 1, 2, 3, 1),
    [LEAD_8_BASS_LEAD]  = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_5, 0, 2, 4, 1),
    [PAD_1_NEW_AGE]     = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_6, 0, 2, 4, 1),
    [HELICOPTER]        = VOICE_NOISE_ALT(60, 0, 0, 0, 0, 15, 0),
    [APPLAUSE]          = VOICE_NOISE_ALT(60, 0, 0, 0, 2, 4, 0),
    [GUNSHOT]           = VOICE_NOISE_ALT(60, 0, 0, 0, 1, 0, 1)
};

