
const union VoiceGroup voicegroup008[] =
{
    VOICEGROUP_FILLER(DRUMKIT_STANDARD,FX_6_GOBLINS),

    [DRUMKIT_STANDARD]      = VOICE_KEYSPLIT_ALL(VOICE_DRUMKIT_001),
    [BRIGHT_ACOUSTIC_PIANO] = VOICE_KEYSPLIT(voicegroup_piano1, KEYSPLITTABLE_PIANO1_PTR),
    [ELECTRIC_GRAND_PIANO]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_trinity_30303_mega_bass, 255, 178, 180, 165),
    [GLOCKENSPIEL]          = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_glockenspiel, 255, 165, 51, 235),
    [XYLOPHONE]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_xylophone, 255, 235, 0, 204),
    [ORCHESTRAL_HARP]       = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_harp, 255, 242, 0, 204),
    [TIMPANI]               = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_timpani, 255, 246, 0, 226),
    [STRING_ENSEMBLE_1]     = VOICE_KEYSPLIT(voicegroup_string_ensemble, KEYSPLITTABLE_STRING_ENSEMBLE_PTR),
    [TRUMPET]               = VOICE_KEYSPLIT(voicegroup_trumpet, KEYSPLITTABLE_TRUMPET_PTR),
    [TUBA]                  = VOICE_KEYSPLIT(voicegroup_tuba, KEYSPLITTABLE_TUBA_PTR),
    [FRENCH_HORN]           = VOICE_KEYSPLIT(voicegroup_french_horn, KEYSPLITTABLE_FRENCH_HORN_PTR),
    [FLUTE]                 = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_sc88pro_flute, 255, 127, 231, 127),
    [LEAD_1_SQUARE]         = VOICE_SQUARE_2_ALT(60, 0, 2, 0, 1, 7, 1),
    [LEAD_2_SAWTOOTH]       = VOICE_SQUARE_1_ALT(60, 0, 0, 2, 0, 1, 7, 1),
    [LEAD_3_CALLIOPE]       = VOICE_SQUARE_2_ALT(60, 0, 3, 0, 1, 7, 1),
    [LEAD_4_CHIFF]          = VOICE_SQUARE_1_ALT(60, 0, 0, 3, 0, 1, 7, 1),
    [LEAD_5_CHARANG]        = VOICE_SQUARE_2_ALT(60, 0, 2, 0, 1, 4, 1),
    [LEAD_6_VOICE]          = VOICE_SQUARE_1_ALT(60, 0, 0, 2, 0, 1, 4, 1),
    [LEAD_8_BASS_LEAD]      = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_6, 0, 7, 15, 2),
    [PAD_1_NEW_AGE]         = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_7, 0, 7, 15, 2),
    [PAD_3_POLYSYNTH]       = VOICE_SQUARE_2(60, 0, 2, 0, 1, 4, 1),
    [PAD_4_CHOIR]           = VOICE_SQUARE_1(60, 0, 0, 2, 0, 1, 4, 1),
    [FX_5_BRIGHTNESS]       = VOICE_SQUARE_1_ALT(60, 0, 29, 2, 0, 2, 0, 0),
    [FX_6_GOBLINS]          = VOICE_SQUARE_1_ALT(60, 0, 22, 2, 0, 2, 0, 0)
};

