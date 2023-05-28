
const union VoiceGroup voicegroup149[] =
{
    VOICEGROUP_FILLER(DRUMKIT_STANDARD,PAD_5_BOWED),

    [DRUMKIT_STANDARD]      = VOICE_KEYSPLIT_ALL(VOICE_DRUMKIT_190),
    [BRIGHT_ACOUSTIC_PIANO] = VOICE_KEYSPLIT(voicegroup_piano1, KEYSPLITTABLE_PIANO1_PTR),
    [ELECTRIC_GRAND_PIANO]  = VOICE_SQUARE_1_ALT(60, 0, 0, 2, 0, 0, 12, 0),
    [GLOCKENSPIEL]          = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_glockenspiel, 255, 165, 51, 242),
    [XYLOPHONE]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_xylophone, 255, 235, 0, 204),
    [TUBULAR_BELLS]         = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_tubular_bell, 255, 165, 90, 216),
    [ORCHESTRAL_HARP]       = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_harp, 255, 246, 0, 235),
    [TIMPANI]               = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_timpani, 255, 165, 154, 153),
    [STRING_ENSEMBLE_1]     = VOICE_KEYSPLIT(voicegroup_string_ensemble, KEYSPLITTABLE_STRING_ENSEMBLE_PTR),
    [TRUMPET]               = VOICE_KEYSPLIT(voicegroup_trumpet, KEYSPLITTABLE_TRUMPET_PTR),
    [TUBA]                  = VOICE_KEYSPLIT(voicegroup_tuba, KEYSPLITTABLE_TUBA_PTR),
    [FRENCH_HORN]           = VOICE_KEYSPLIT(voicegroup_french_horn, KEYSPLITTABLE_FRENCH_HORN_PTR),
    [OBOE]                  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sd90_classical_oboe, 43, 188, 103, 165),
    [ENGLISH_HORN]          = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_unused_sd90_oboe, 43, 165, 103, 165),
    [FLUTE]                 = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_flute, 255, 127, 231, 127),
    [LEAD_1_SQUARE]         = VOICE_SQUARE_1_ALT(60, 0, 0, 1, 1, 2, 3, 1),
    [LEAD_2_SAWTOOTH]       = VOICE_SQUARE_2_ALT(60, 0, 1, 0, 2, 4, 2),
    [LEAD_3_CALLIOPE]       = VOICE_SQUARE_1_ALT(60, 0, 0, 1, 0, 2, 6, 1),
    [LEAD_5_CHARANG]        = VOICE_SQUARE_1_ALT(60, 0, 0, 0, 0, 2, 3, 1),
    [LEAD_8_BASS_LEAD]      = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_5, 0, 7, 15, 0),
    [PAD_5_BOWED]           = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_1, 0, 7, 15, 0)
};

